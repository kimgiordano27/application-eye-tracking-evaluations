/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 06460d58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation
               (long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong in_x9;
  long unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 unaff_w24;
  size_t unaff_x25;
  undefined8 unaff_x26;
  long lVar6;
  long unaff_x28;
  long unaff_x29;
  
  pcVar5 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x10);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_03ac4090(param_1);
  }
  lVar2 = (*pcVar5)(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10));
  if (lVar2 == 0) {
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    *(undefined8 *)(lVar2 + 0x10) = unaff_x26;
    *(undefined4 *)(lVar2 + 0x18) = unaff_w24;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x21,unaff_x22,unaff_x25);
    lVar6 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    uVar4 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x20);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    pcVar5 = *(code **)(lVar6 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
    (*pcVar5)(uVar4,lVar6,lVar2,unaff_x29 + -0x10,unaff_x21);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    FUN_03515348(lVar2,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80));
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


