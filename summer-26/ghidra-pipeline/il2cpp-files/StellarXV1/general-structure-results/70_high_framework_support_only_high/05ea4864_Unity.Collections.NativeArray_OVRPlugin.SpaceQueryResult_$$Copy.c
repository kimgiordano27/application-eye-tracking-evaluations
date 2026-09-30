/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05ea4864
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  long unaff_x20;
  long unaff_x25;
  long unaff_x29;
  
  FUN_040775b0();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
                    /* try { // try from 05ea4898 to 05fa48a7 has its CatchHandler @ 05ea48a8 */
                    /* catch() { ... } // from try @ 05ea47f8 with catch @ 05ea48a8
                       catch() { ... } // from try @ 05ea4824 with catch @ 05ea48a8
                       catch() { ... } // from try @ 05ea4898 with catch @ 05ea48a8 */
                    /* try { // try from 05ea48ac to 05fa48af has its CatchHandler @ 05ea48b8 */
  FUN_03b300b8();
                    /* try { // try from 05ea48b0 to 05fa48bb has its CatchHandler @ 05ea4714 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ea48ac with catch @ 05ea48b8
                        */
                    /* catch() { ... } // from try @ 05ea494c with catch @ 05ea48bc
                       catch() { ... } // from try @ 05ea498c with catch @ 05ea48bc
                       catch() { ... } // from try @ 05ea49c4 with catch @ 05ea48bc
                       catch() { ... } // from try @ 05ea49f0 with catch @ 05ea48bc
                       catch() { ... } // from try @ 05ea4a64 with catch @ 05ea48bc */
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


