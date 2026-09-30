/*
FUNCTION_NAME: OVRPlugin.OVRP_1_59_0$$.cctor
ENTRY_POINT: 033f492c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033f4a0c) */
/* WARNING: Removing unreachable block (ram,0x033f4a04) */

void OVRPlugin_OVRP_1_59_0___cctor(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_033f436c(param_1,0x80000000,0x80000000);
  iVar1 = FUN_033f44e0(param_1);
  if (0 < iVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_01da0934();
    in_stack_00000008._4_1_ = '\0';
    FUN_033f4894(uVar2,(long)&stack0x00000008 + 4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_01da0934();
    OVRPlugin_OVRP_1_62_0___cctor(uVar5);
    if (in_stack_00000008._4_1_ != '\0') {
      FUN_01dccd6c(uVar2);
    }
  }
  lVar3 = *(long *)(param_1 + 0x18);
  thunk_FUN_01da0934();
  if ((lVar3 != 0) && ((param_2 & 1) == 0)) {
    in_stack_00000008._4_1_ = '\0';
    FUN_033f4894(lVar3,(long)&stack0x00000008 + 4);
    lVar4 = *(long *)(param_1 + 0x18);
    thunk_FUN_01da0934();
    if (lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      thunk_FUN_01da0934();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033f48b4(lVar4);
    }
    if (in_stack_00000008._4_1_ != '\0') {
      FUN_01dccd6c(lVar3);
    }
  }
  return;
}


