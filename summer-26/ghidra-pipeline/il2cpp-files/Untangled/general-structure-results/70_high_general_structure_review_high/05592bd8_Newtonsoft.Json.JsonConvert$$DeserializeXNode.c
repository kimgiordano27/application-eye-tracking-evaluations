/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 05592bd8
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05592c38) */

void Newtonsoft_Json_JsonConvert__DeserializeXNode(undefined8 param_1)

{
  long *plVar1;
  int unaff_w20;
  long lVar2;
  int unaff_w22;
  undefined8 in_stack_00000008;
  
  __cxa_end_catch();
  if (unaff_w20 != unaff_w22) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_02eb9f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fafaac(param_1);
  }
  plVar1 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02eb9f78();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70(lVar2);
  }
  return;
}


