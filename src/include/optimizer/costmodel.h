//
// Created by 2 on 2023/4/4.
//

#ifndef POSTGRES_LQL_COSTMODEL_H
#define POSTGRES_LQL_COSTMODEL_H

void simple_cost_model_cost_seqscan(Path *path, PlannerInfo *root, RelOptInfo *baserel, ParamPathInfo *param_info, double parallel_divisor);
void simple_cost_model_cost_index(IndexPath *path, PlannerInfo *root, double loop_count, bool partial_path, double parallel_divisor);

#endif //POSTGRES_LQL_COSTMODEL_H
