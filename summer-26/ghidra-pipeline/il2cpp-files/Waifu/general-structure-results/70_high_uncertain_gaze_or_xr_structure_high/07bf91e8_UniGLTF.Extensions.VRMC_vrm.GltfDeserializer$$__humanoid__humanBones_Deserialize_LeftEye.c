/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_vrm.GltfDeserializer$$__humanoid__humanBones_Deserialize_LeftEye
ENTRY_POINT: 07bf91e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_2;telemetry_or_network_hits_4;functionality_possible_biometrics_hits_2
*/


void UniGLTF_Extensions_VRMC_vrm_GltfDeserializer____humanoid__humanBones_Deserialize_LeftEye
               (long param_1,uint param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    return;
  }
  if (((param_2 & 1) != 0) && (lVar1 = *(long *)(param_1 + 0x178), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  FUN_07bf7d44(param_1,param_2 & 1);
  return;
}


