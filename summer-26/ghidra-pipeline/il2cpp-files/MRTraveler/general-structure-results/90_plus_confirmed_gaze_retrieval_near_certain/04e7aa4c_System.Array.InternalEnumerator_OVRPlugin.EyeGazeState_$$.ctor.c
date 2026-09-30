/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 04e7aa4c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  ulong unaff_x25;
  
  do {
    uVar1 = FUN_04e77820();
    if ((uVar1 & 1) == 0) {
      FUN_04e77a20();
    }
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x24 = unaff_x24 + 0x18;
      if ((long)*(int *)(unaff_x20 + 0x24) <= (long)unaff_x25) {
        return;
      }
      lVar2 = *(long *)(unaff_x20 + 0x18);
      if (lVar2 == 0) goto LAB_04e7aaac;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
    } while (*(int *)(lVar2 + unaff_x24 + 0x20) < 0);
  } while (unaff_x21 != 0);
LAB_04e7aaac:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


