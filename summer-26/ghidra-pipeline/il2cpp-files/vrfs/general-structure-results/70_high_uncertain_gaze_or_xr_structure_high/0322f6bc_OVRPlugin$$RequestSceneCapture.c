/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 0322f6bc
PROGRAM: vrfs-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x22 + 0xff7) = 1;
  uVar1 = FUN_04882688(*unaff_x23,0);
  **(undefined4 **)(*unaff_x19 + 0xb8) = uVar1;
  uVar1 = FUN_04882688(*unaff_x21,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 4) = uVar1;
  uVar1 = FUN_04882688(*unaff_x20,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 8) = uVar1;
  uVar2 = FUN_0322dd0c();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_01656ef8(puVar3,uVar2);
  return;
}


