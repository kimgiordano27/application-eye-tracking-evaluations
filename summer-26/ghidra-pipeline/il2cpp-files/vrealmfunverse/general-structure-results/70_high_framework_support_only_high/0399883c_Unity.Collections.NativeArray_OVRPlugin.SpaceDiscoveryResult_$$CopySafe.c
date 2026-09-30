/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 0399883c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  bool in_CY;
  long unaff_x21;
  
  if (!in_CY) {
                    /* catch() { ... } // from try @ 039987b4 with catch @ 03998840
                       catch() { ... } // from try @ 03998830 with catch @ 03998840 */
                    /* try { // try from 03998844 to 03a98847 has its CatchHandler @ 03998850 */
                    /* try { // try from 03998848 to 03a98853 has its CatchHandler @ 039986f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03998844 with catch @ 03998850
                        */
    return *(undefined4 *)(param_1 + unaff_x21 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


