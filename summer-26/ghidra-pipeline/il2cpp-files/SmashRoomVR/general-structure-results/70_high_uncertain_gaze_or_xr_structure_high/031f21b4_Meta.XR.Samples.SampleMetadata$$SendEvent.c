/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 031f21b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Meta_XR_Samples_SampleMetadata__SendEvent(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x66f;
  uStack0000000000000008 = 0x1c;
  pcStack0000000000000010 = "ovrAudio_AudioGeometryWriteMeshFile";
  uStack0000000000000018 = 0x23;
  uStack0000000000000028 = 0x10;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  uVar2 = thunk_FUN_01afad98();
  *(undefined8 *)(unaff_x21 + 0x3b8) = uVar2;
  uVar2 = thunk_FUN_01afb0b8();
  uVar1 = (**(code **)(unaff_x21 + 0x3b8))();
  thunk_FUN_01afb0ac(uVar2);
  return uVar1;
}


