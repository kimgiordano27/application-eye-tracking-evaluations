/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 07a46ae8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_s8;
  
  FUN_07a5d534(*(undefined8 *)(unaff_x19 + 0x40));
  uVar1 = *(undefined4 *)(unaff_x21 + 3);
  uVar3 = unaff_x21[2];
  uVar5 = unaff_x21[1];
  uVar4 = *unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x48) = unaff_s8;
  *(undefined4 *)(unaff_x19 + 100) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x5c) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x54) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x4c) = uVar4;
  bVar2 = FUN_07a46bd8();
  *(byte *)(unaff_x19 + 0x10) = bVar2 & 1;
  FUN_07a46e78();
  FUN_07a46f54();
  FUN_07a46f54();
  FUN_07a46f54();
  FUN_07a46f54();
  return;
}


