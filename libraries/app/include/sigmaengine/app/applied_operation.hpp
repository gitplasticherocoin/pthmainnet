#pragma once

#include <sigmaengine/protocol/operations.hpp>
#include <sigmaengine/chain/sigmaengine_object_types.hpp>

namespace sigmaengine { namespace app {

struct applied_operation
{
   applied_operation();
   applied_operation( const sigmaengine::chain::operation_object& op_obj );

   sigmaengine::chain::operation_id_type                      op_id;
   
   sigmaengine::protocol::transaction_id_type trx_id;
   uint32_t                               block = 0;
   uint32_t                               trx_in_block = 0;
   uint16_t                               op_in_trx = 0;
   uint64_t                               virtual_op = 0;
   fc::time_point_sec                     timestamp;
   sigmaengine::protocol::operation           op;
};

} }

FC_REFLECT( sigmaengine::app::applied_operation,
   (op_id)
   (trx_id)
   (block)
   (trx_in_block)
   (op_in_trx)
   (virtual_op)
   (timestamp)
   (op)
)
