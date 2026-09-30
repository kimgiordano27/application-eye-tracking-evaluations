/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$SetStateMachine
ENTRY_POINT: 079e95c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__SetStateMachine(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    FUN_07a05648();
    return;
  }
  uVar1 = *(int *)(unaff_x20 + 0x38) - *(int *)(unaff_x20 + 0x34);
  FUN_079e8270();
  uVar2 = *(int *)(unaff_x20 + 0x38) - *(int *)(unaff_x20 + 0x34);
  if ((int)uVar2 <= (int)uVar1) {
    uVar1 = uVar2;
  }
  *(uint *)(unaff_x20 + 0x34) =
       (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + *(int *)(unaff_x20 + 0x34);
  if (0 < (int)uVar1) {
    if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x079e9644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x398))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return;
}


