/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0116f8ac
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceDiscoveryResult>
               (undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  long in_x9;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(in_x9 + 0x24);
  do {
    uVar1 = puVar3[-1];
    puVar3[-1] = *param_1;
    *param_1 = uVar1;
    bVar2 = puVar3 < param_1 + -1;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + -1;
  } while (bVar2);
  return;
}


