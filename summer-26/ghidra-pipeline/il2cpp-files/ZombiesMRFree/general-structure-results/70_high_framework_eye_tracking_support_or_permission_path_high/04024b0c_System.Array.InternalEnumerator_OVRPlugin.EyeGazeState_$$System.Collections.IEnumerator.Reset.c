/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04024b0c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (void)

{
  long lVar1;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x19 + 4);
                    /* catch() { ... } // from try @ 04024a24 with catch @ 04024b14
                       catch() { ... } // from try @ 04024b04 with catch @ 04024b14 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  FUN_03b63ea4(uVar2,&stack0x0000000c,0,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xc0));
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


