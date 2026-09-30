/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnPanelActiveStateChanged
ENTRY_POINT: 052c2a3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnPanelActiveStateChanged(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  
  FUN_02f07e70(PTR_DAT_06d09120);
  *(undefined1 *)(unaff_x24 + 0x69) = 1;
  uVar1 = DAT_013f6250;
  *(undefined4 *)(unaff_x19 + 0x28) = 0x3c03126f;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  uVar1 = FUN_02f07f14(*unaff_x23,5);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  thunk_FUN_02f411dc();
  uVar1 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_0407a9d4(uVar1,*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x70),uVar1);
  uVar1 = FUN_02f07f14(*unaff_x21,5);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  thunk_FUN_02f411dc();
  thunk_FUN_066c5d40();
  return;
}


