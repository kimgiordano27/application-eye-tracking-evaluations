/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 031f1e34
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_3;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_3
*/


void Meta_XR_MetaXRFoveationFeature__OnSessionCreate
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,ulong param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  pcVar3 = *(code **)(param_1 + 0x398);
  if (pcVar3 == (code *)0x0) {
    in_stack_00000030 = "AudioPluginOculusSpatializer";
    in_stack_00000038 = 0x1c;
    in_stack_00000040 = "ovrAudio_AudioGeometryUploadMeshArrays";
    in_stack_00000048 = 0x26;
    uStack0000000000000058 = 0x58;
    in_stack_00000050 = DAT_00b92058;
    uStack000000000000005c = 0;
    param_7 = param_7 & 0xffffffff;
    pcVar3 = (code *)thunk_FUN_01afad98(&stack0x00000030);
    DAT_03ff4398 = pcVar3;
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_3 + 0x20;
  }
  lVar2 = 0;
  if (param_8 != 0) {
    lVar2 = param_8 + 0x20;
  }
  (*pcVar3)(param_2,lVar1,param_4,param_5,param_6,param_7,lVar2,param_9);
  return;
}


