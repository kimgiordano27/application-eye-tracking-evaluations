/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04413044
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,long param_2)

{
  bool bVar1;
  uint in_w9;
  undefined4 in_register_0000404c;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04413034 with catch @ 04413044
                        */
  if (*(byte *)(param_1 + 0x130) < in_w9) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*(long *)(param_1 + 200) + CONCAT44(in_register_0000404c,in_w9) * 8 + -8) ==
            param_2;
  }
  return bVar1;
}


