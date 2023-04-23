#include "shell.h"

/**
  * signal_handler - It handles the signal
  * @sig_id: Identifier of signal to handle
  * Return: Nothing
  */

void signal_handler(int sig_id)
{
	if (sig_id == SIGINT)
		write(STDOUT_FILENO, "\n($) ", 5);
}
