/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 02b7573c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 unaff_x21;
  
                    /* try { // try from 02b7573c to 02c75793 has its CatchHandler @ 02b7573c
                       catch() { ... } // from try @ 02b7573c with catch @ 02b7573c
                       catch() { ... } // from try @ 02b75860 with catch @ 02b7573c
                       catch() { ... } // from try @ 02b758e8 with catch @ 02b7573c
                       catch() { ... } // from try @ 02b7592c with catch @ 02b7573c
                       catch() { ... } // from try @ 02b7595c with catch @ 02b7573c
                       catch() { ... } // from try @ 02b759dc with catch @ 02b7573c */
  FUN_0305d0cc(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xd0));
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  thunk_FUN_01e10808();
  return *(undefined8 *)(unaff_x19 + 0x38);
}


