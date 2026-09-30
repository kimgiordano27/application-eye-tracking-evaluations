/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 020cd5ec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  
  lVar1 = FUN_03ef547c();
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01dde7f8(lVar3);
  }
  uVar2 = thunk_FUN_01de27b8(lVar3);
  FUN_02df8630();
  if (lVar1 != 0) {
    FUN_03ef5210(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


