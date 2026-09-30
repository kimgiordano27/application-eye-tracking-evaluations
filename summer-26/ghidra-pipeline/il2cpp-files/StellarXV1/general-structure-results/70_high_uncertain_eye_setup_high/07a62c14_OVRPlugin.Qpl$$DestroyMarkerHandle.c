/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 07a62c14
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRPlugin_Qpl__DestroyMarkerHandle(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint in_w9;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_09285bb0;
  if (in_w9 <= unaff_w19) {
OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  lVar2 = *(long *)(param_1 + (long)(int)unaff_w19 * 8 + 0x20);
  if (lVar2 == 0) {
LAB_07a62cd8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar3 = thunk_FUN_089dc5b4(lVar2,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar2);
  }
  uVar4 = FUN_089cc398(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = (ulong)unaff_w19;
    do {
      uVar4 = uVar4 - 1;
      unaff_w19 = unaff_w19 - 1;
      if ((int)unaff_w19 < 0) goto LAB_07a62c64;
      lVar2 = *unaff_x20;
      if (lVar2 == 0) goto LAB_07a62cd8;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19)
      goto OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle;
      uVar6 = *(undefined8 *)(lVar2 + (uVar4 & 0xffffffff) * 8 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar5 = FUN_089cc398(uVar6,uVar3,0);
    } while ((uVar5 & 1) == 0);
  }
  else {
LAB_07a62c64:
    unaff_w19 = 0xffffffff;
  }
  return unaff_w19;
}


