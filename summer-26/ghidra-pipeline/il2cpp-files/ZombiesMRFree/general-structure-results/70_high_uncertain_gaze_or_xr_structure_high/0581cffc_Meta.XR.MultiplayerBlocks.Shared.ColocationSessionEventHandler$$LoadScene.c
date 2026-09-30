/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$LoadScene
ENTRY_POINT: 0581cffc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__LoadScene
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = param_1;
  uVar1 = FUN_05b01824(param_2,&stack0x0000000c,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10));
  return uVar1 & 1;
}


