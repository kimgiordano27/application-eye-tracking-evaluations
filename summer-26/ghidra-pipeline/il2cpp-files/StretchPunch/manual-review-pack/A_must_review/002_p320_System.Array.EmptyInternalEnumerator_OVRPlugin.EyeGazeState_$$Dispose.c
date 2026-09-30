/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 02b18d40
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 243
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  
  do {
    uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    do {
      if (uVar2 <= unaff_x23) {
LAB_02b18df0:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      FUN_02b185f4();
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 2;
      if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
        *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar1 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
        if (lVar1 != 0) {
          FUN_029bf94c();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
      if (uVar2 <= unaff_x23) goto LAB_02b18df0;
    } while (*unaff_x24 != 0);
    FUN_033b3310(0x11,0);
  } while( true );
}


