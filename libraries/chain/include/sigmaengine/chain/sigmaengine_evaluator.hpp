#pragma once

#include <sigmaengine/protocol/sigmaengine_operations.hpp>

#include <sigmaengine/chain/evaluator.hpp>

namespace sigmaengine{ namespace chain {

using namespace sigmaengine::protocol;

DEFINE_EVALUATOR( account_create )
DEFINE_EVALUATOR( account_update )
DEFINE_EVALUATOR( transfer )
DEFINE_EVALUATOR( bobserver_update )
DEFINE_EVALUATOR( custom )
DEFINE_EVALUATOR( custom_json )
DEFINE_EVALUATOR( custom_json_dapp )
DEFINE_EVALUATOR( custom_binary )
DEFINE_EVALUATOR( request_account_recovery )
DEFINE_EVALUATOR( recover_account )
DEFINE_EVALUATOR( change_recovery_account )
DEFINE_EVALUATOR( decline_voting_rights )
DEFINE_EVALUATOR( reset_account )
DEFINE_EVALUATOR( set_reset_account )
DEFINE_EVALUATOR( update_bproducer )
DEFINE_EVALUATOR( except_bobserver )
DEFINE_EVALUATOR( account_auth )
DEFINE_EVALUATOR( print )
DEFINE_EVALUATOR( burn )
DEFINE_EVALUATOR( transfer_savings )
DEFINE_EVALUATOR( cancel_transfer_savings )
DEFINE_EVALUATOR( conclusion_transfer_savings )
DEFINE_EVALUATOR( staking_fund )
DEFINE_EVALUATOR( conclusion_staking )
DEFINE_EVALUATOR( transfer_fund )
DEFINE_EVALUATOR( set_fund_interest )
DEFINE_EVALUATOR( return_staking_fund )
DEFINE_EVALUATOR( vote_transaction_fee )
DEFINE_EVALUATOR( set_mining_account )
DEFINE_EVALUATOR( transfer_mining_reward )
DEFINE_EVALUATOR( set_blacklist_account )
DEFINE_EVALUATOR( mining )
DEFINE_EVALUATOR( set_swap_account )
DEFINE_EVALUATOR( swap )
DEFINE_EVALUATOR( root_burn )
} } // sigmaengine::chain
