/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 055929a0
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


/* WARNING: Removing unreachable block (ram,0x05592ab0) */

void Newtonsoft_Json_JsonConvert__SerializeXNode(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  if (unaff_w23 == 1) {
    puVar1 = (undefined8 *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited(param_1);
    uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d3ec98);
    uVar3 = thunk_FUN_02f1f520(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_069384f8,0);
    }
    __cxa_end_catch();
    lVar6 = 0;
  }
  else {
    if (unaff_w23 != 1) {
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_02eb9f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fafaac(param_1);
    }
    plVar5 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited(param_1);
    lVar6 = *plVar5;
    __cxa_end_catch();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02eb9f78();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70(lVar6);
  }
  return;
}


