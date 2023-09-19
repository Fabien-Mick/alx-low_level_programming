#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * check_arguments - Check if the number of arguments is correct
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 */
void check_arguments(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
}

/**
 * open_files - Open source and destination files
 * @argv: An array containing the command-line arguments
 * @fd_from: A pointer to the file descriptor for the source file
 * @fd_to: A pointer to the file descriptor for the destination file
 */
void open_files(char *argv[], int *fd_from, int *fd_to)
{
	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*fd_from);
		exit(99);
	}
}

/**
 * copy_files - Copy content from source to destination
 * @fd_from: The file descriptor for the source file
 * @fd_to: The file descriptor for the destination file
 */
void copy_files(int fd_from, int fd_to)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	do {
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file\n");
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}

	} while (bytes_read == 1024);
}

/**
 * main - Entry point, copies content of one file to another
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, exit with appropriate error codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_arguments(argc, argv);
	open_files(argv, &fd_from, &fd_to);
	copy_files(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
