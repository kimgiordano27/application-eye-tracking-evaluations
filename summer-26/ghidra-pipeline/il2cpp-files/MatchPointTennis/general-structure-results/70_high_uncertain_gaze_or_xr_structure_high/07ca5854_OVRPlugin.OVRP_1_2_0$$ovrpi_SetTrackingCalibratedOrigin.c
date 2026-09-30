/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 07ca5854
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 07ca54ec with catch @ 07ca5854 */
                    /* catch() { ... } // from try @ 07ca52d4 with catch @ 07ca5858 */
  thunk_FUN_044adef4(*(undefined8 *)(param_1 + 0x500));
                    /* catch() { ... } // from try @ 07ca5720 with catch @ 07ca585c */
  uVar1 = thunk_FUN_0448520c();
                    /* catch() { ... } // from try @ 07ca571c with catch @ 07ca5860 */
                    /* catch() { ... } // from try @ 07ca5718 with catch @ 07ca5864 */
                    /* catch() { ... } // from try @ 07ca5714 with catch @ 07ca5868 */
                    /* catch() { ... } // from try @ 07ca52e4 with catch @ 07ca586c */
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f26eb8);
                    /* catch() { ... } // from try @ 07ca5460 with catch @ 07ca5870 */
                    /* catch() { ... } // from try @ 07ca5250 with catch @ 07ca5874 */
                    /* catch() { ... } // from try @ 07ca5404 with catch @ 07ca5878 */
                    /* catch() { ... } // from try @ 07ca51f4 with catch @ 07ca587c */
  FUN_07a39900(uVar1,uVar2,0);
                    /* catch() { ... } // from try @ 07ca5294 with catch @ 07ca5880 */
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f26ec0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar1,uVar2);
}


