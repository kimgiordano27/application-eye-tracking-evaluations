/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0395c3b4
PROGRAM: vrfs-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(long *)(*unaff_x19 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0395c440 with catch @ 0395c464 */
    FUN_0160f170();
  }
  thunk_FUN_015d06c4();
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar2 = *(long *)(lVar1 + 0xe0);
                    /* try { // try from 0395c3e4 to 03a5c3f3 has its CatchHandler @ 0395c428 */
  pcVar3 = *(code **)(*(long *)(lVar1 + 0x1a8) + 8);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    FUN_015c2790(lVar2);
                    /* try { // try from 0395c3fc to 03a5c403 has its CatchHandler @ 0395c424 */
  }
  if ((unaff_x21 != 0) && (lVar1 = thunk_FUN_015d0480(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  (*pcVar3)();
  return;
}


