/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraCount
ENTRY_POINT: 0569cf90
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraCount(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0x882) = in_w8;
  lVar5 = *unaff_x21;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar4 + 0xb8);
  LeanTween__value();
  uVar3 = _UNK_010fe418;
  uVar2 = _DAT_010fe410;
  uVar1 = DAT_010fc180;
  *(undefined4 *)(unaff_x19 + 0x3c) = 0x40800000;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  FUN_0442bac0();
  return;
}


