/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 01995a28
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x19;
  
  lVar1 = FUN_0122e748(param_2);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_0124bcfc();
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01995948 with catch @ 01995a54
                       try { // try from 01995a54 to 01a95a77 has its CatchHandler @ 01995914 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01995964 with catch @ 01995a60
                        */
    FUN_019958e4();
    return;
  }
                    /* try { // try from 01995a78 to 01a95a8f has its CatchHandler @ 01995b64 */
                    /* WARNING: Subroutine does not return */
  FUN_01230f60();
}


