/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 033ae544
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = StringLiteral_4737;
  if ((DAT_044a68de & 1) == 0) {
    FUN_01d7d918(StringLiteral_4737);
    DAT_044a68de = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_0339de98(param_1,param_2,param_3,param_4,0);
  if (uVar2 < 0x10000) {
    return;
  }
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar3 = thunk_FUN_01de27b8();
  uVar4 = thunk_FUN_01dd295c(StringLiteral_4781);
  FUN_03390704(uVar3,uVar4,0);
  uVar4 = thunk_FUN_01dd295c(StringLiteral_8533);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,uVar4);
}


