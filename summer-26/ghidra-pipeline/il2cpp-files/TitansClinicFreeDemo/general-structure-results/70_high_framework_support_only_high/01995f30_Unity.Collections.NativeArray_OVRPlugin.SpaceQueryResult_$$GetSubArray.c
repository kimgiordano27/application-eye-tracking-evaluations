/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 01995f30
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_014890e8(*(undefined8 *)(param_2 + 0x10),param_3,param_4,0,param_6,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xd0) + 0x20) +
                                  0xc0) + 0x150));
  return iVar1 != -1;
}


