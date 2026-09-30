/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$.ctor
ENTRY_POINT: 031f1e2c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MetaXRFeature___ctor
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,ulong param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  
  if (DAT_03ff4398 == (code *)0x0) {
    in_stack_00000030 = "AudioPluginOculusSpatializer";
    in_stack_00000038 = 0x1c;
    in_stack_00000040 = "ovrAudio_AudioGeometryUploadMeshArrays";
    in_stack_00000048 = 0x26;
    uStack0000000000000058 = 0x58;
    in_stack_00000050 = DAT_00b92058;
    uStack000000000000005c = 0;
    param_6 = param_6 & 0xffffffff;
    DAT_03ff4398 = (code *)thunk_FUN_01afad98(&stack0x00000030);
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x20;
  }
  lVar2 = 0;
  if (param_7 != 0) {
    lVar2 = param_7 + 0x20;
  }
  (*DAT_03ff4398)(param_1,lVar1,param_3,param_4,param_5,param_6,lVar2,param_8);
  return;
}


