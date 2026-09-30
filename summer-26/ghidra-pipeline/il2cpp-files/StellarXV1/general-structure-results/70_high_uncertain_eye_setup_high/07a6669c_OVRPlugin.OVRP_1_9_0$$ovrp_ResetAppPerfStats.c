/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_ResetAppPerfStats
ENTRY_POINT: 07a6669c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_9_0__ovrp_ResetAppPerfStats(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x24;
  long unaff_x25;
  
  *(undefined1 *)(unaff_x25 + 0x5bf) = 1;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_098955e3 == '\0') {
    FUN_04077588(PTR_DAT_092f0d40);
    DAT_098955e3 = '\x01';
  }
  lVar2 = *unaff_x24;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *unaff_x24;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar1 = OVRPlugin_OVRP_1_8_0__ovrp_Update2();
    if (iVar1 != 0) {
      return 0xfffff767;
    }
    lVar2 = *unaff_x24;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_07a65b54();
  return uVar3;
}


