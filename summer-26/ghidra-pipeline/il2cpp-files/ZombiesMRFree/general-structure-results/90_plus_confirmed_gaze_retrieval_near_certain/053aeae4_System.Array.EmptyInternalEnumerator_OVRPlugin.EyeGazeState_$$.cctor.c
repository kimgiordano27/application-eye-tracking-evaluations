/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 053aeae4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor(void)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x26;
  
  while( true ) {
                    /* catch() { ... } // from try @ 053aea58 with catch @ 053aeaec
                       catch() { ... } // from try @ 053aeadc with catch @ 053aeaec */
                    /* try { // try from 053aeaf0 to 054aeaf3 has its CatchHandler @ 053aeafc */
                    /* try { // try from 053aeaf4 to 054aeaff has its CatchHandler @ 053ae83c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053aea3c with catch @ 053aeafc
                       catch(type#2 @ 00000000) { ... } // from try @ 053aeaf0 with catch @ 053aeafc
                        */
    FUN_053ae36c();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar1 = FUN_05abbc78(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_050e29b8();
                    /* try { // try from 053aeb68 to 054aebc3 has its CatchHandler @ 053aeb68
                       catch() { ... } // from try @ 053aeb68 with catch @ 053aeb68
                       catch() { ... } // from try @ 053aeca0 with catch @ 053aeb68
                       catch() { ... } // from try @ 053aed28 with catch @ 053aeb68
                       catch() { ... } // from try @ 053aed6c with catch @ 053aeb68
                       catch() { ... } // from try @ 053aed9c with catch @ 053aeb68
                       catch() { ... } // from try @ 053aee20 with catch @ 053aeb68 */
  return;
}


