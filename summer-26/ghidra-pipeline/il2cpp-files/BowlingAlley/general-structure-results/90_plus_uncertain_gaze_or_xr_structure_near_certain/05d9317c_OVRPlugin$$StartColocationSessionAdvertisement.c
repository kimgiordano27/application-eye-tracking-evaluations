/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 05d9317c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__StartColocationSessionAdvertisement(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x21;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_UnityInitWrapperWindows";
  uStack0000000000000018 = 0x1b;
  uStack0000000000000028 = 0x10;
  uStack0000000000000020 = DAT_0139dc48;
  uStack000000000000002c = 0;
  uVar2 = Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality();
  *(undefined8 *)(unaff_x21 + 0x970) = uVar2;
  uVar2 = thunk_FUN_032a5c7c();
  iVar1 = (**(code **)(unaff_x21 + 0x970))();
  thunk_FUN_032a5c70(uVar2);
  return iVar1 != 0;
}


