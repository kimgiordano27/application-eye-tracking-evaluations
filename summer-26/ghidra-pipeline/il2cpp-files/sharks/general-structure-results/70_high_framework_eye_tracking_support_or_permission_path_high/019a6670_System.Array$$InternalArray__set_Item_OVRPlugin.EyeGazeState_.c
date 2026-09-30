/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 019a6670
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x23;
  
                    /* try { // try from 019a667c to 01aa667f has its CatchHandler @ 019a6680 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a667c with catch @ 019a6680
                        */
                    /* try { // try from 019a6684 to 01aa6687 has its CatchHandler @ 019a6690 */
                    /* try { // try from 019a6688 to 01aa6693 has its CatchHandler @ 019a6540 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6684 with catch @ 019a6690
                        */
                    /* try { // try from 019a6694 to 01aa6727 has its CatchHandler @ 019a6694
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6694 with catch @ 019a6694
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6734 with catch @ 019a6694
                       catch(type#1 @ 00000000) { ... } // from try @ 019a67dc with catch @ 019a6694
                        */
  uVar1 = FUN_0199e448();
  uVar1 = FUN_01bd4328(uVar1,*unaff_x23,*(undefined8 *)PTR_DAT_037f4350);
  FUN_01b26490(uVar1,4,*(undefined8 *)PTR_DAT_037f4370);
  return;
}


