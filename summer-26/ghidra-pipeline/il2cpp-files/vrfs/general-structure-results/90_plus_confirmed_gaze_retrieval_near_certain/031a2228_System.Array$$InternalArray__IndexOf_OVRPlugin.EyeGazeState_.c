/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 031a2228
PROGRAM: vrfs-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long *unaff_x20;
  
  lVar1 = thunk_FUN_015d01b0();
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_015d0480(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar3,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_01656ef8(unaff_x20 + (long)(int)unaff_w19 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


