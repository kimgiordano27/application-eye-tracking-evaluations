/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 05316ba4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = UnityEngine_Rendering_Universal_DecalCreateDrawCallSystem_TypeInfo;
  puVar1 = UnityEngine_Rendering_Universal_DecalCachedChunk_TypeInfo;
  if ((DAT_06bbb202 & 1) == 0) {
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalCreateDrawCallSystem_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalCachedChunk_TypeInfo);
    DAT_06bbb202 = 1;
  }
  FUN_037d9c1c(param_1,*(undefined8 *)puVar1);
  uVar3 = thunk_FUN_02f45174(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  return;
}


