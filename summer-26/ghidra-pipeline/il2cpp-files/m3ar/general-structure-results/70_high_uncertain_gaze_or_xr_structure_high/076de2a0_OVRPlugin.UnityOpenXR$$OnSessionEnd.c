/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 076de2a0
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin_UnityOpenXR__OnSessionEnd
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_4 + 0x30) == '\0') {
    if (DAT_09539e16 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539e16 = '\x01';
    }
    fVar3 = *(float *)(*(long *)(*(long *)PTR_DAT_08f65568 + 0xb8) + 0x18);
  }
  else {
    if (DAT_09539c09 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c09 = '\x01';
    }
    puVar1 = PTR_DAT_08f65568;
    lVar2 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar3 = *(float *)(lVar2 + 0x40);
    fVar5 = *(float *)(lVar2 + 0x44);
    FUN_076de6b0(*(undefined4 *)(lVar2 + 0x3c),fVar3,fVar5,param_1,param_2,param_3,param_4);
    if (DAT_09539c08 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c08 = '\x01';
    }
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar4 = *(float *)(lVar2 + 0x4c);
    fVar6 = *(float *)(lVar2 + 0x50);
    FUN_076de6b0(*(undefined4 *)(lVar2 + 0x48),fVar4,fVar6,param_1,param_2,param_3,param_4);
    fVar3 = fVar5 * fVar4 - fVar3 * fVar6;
  }
  return fVar3;
}


