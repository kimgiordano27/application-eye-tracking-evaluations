/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilSupported
ENTRY_POINT: 07ca83a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilSupported(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_09f1e538;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_07ca8450:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar2 = thunk_FUN_0953ac24(*(long *)(param_1 + 0x20),0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar4);
  }
  uVar3 = FUN_0952c404(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    do {
      unaff_w19 = unaff_w19 - 1;
      if ((int)unaff_w19 < 0) goto LAB_07ca83ec;
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_07ca8450;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar5 = *(undefined8 *)(lVar4 + (ulong)unaff_w19 * 8 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar3 = FUN_0952c404(uVar5,uVar2,0);
    } while ((uVar3 & 1) == 0);
  }
  else {
LAB_07ca83ec:
    unaff_w19 = 0xffffffff;
  }
  return unaff_w19;
}


