/*
 * transaction_queue.h
 *
 * This file is released under the terms of the Artistic License.  Please see
 * the file LICENSE, included in this package, for details.
 *
 * Copyright (C) 2002 Mark Wong & Open Source Development Lab, Inc.
 *
 * 5 august 2002
 */

#ifndef _TRANSACTION_QUEUE_H_
#define _TRANSACTION_QUEUE_H_

#include "transaction_data.h"

struct transaction_queue_node_t
{
	int id;
	int termworker_id;
	int term_id;
	struct client_transaction_t client_data;
	struct transaction_queue_node_t *next;
};

struct transaction_queue_node_t *dequeue_transaction();
int enqueue_transaction(struct transaction_queue_node_t *node);
int init_transaction_queue();
int signal_transaction_queue();

#endif /* _TRANSACTION_QUEUE_H_ */
