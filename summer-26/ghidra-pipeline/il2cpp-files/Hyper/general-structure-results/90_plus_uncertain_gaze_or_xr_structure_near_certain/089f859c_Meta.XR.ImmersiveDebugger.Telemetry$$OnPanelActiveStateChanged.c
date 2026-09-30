/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnPanelActiveStateChanged
ENTRY_POINT: 089f859c
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnPanelActiveStateChanged(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined4 uVar3;
  
  while ((uVar1 = FUN_088e7824(), uVar1 != 0 && ((uVar1 & 7) != 4))) {
    if (uVar1 == 0xd) {
      uVar3 = FUN_088e80a8();
      *(undefined4 *)(unaff_x20 + 0x18) = uVar3;
    }
    else if (uVar1 == 0x10) {
      uVar3 = FUN_088e76b0();
      *(undefined4 *)(unaff_x20 + 0x1c) = uVar3;
    }
    else if (uVar1 == 0x1d) {
      uVar3 = FUN_088e80a8();
      *(undefined4 *)(unaff_x20 + 0x20) = uVar3;
    }
    else {
      uVar2 = FUN_088ed628(*(undefined8 *)(unaff_x20 + 0x10));
      *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
      thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar2);
    }
  }
  return;
}


