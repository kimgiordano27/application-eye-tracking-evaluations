/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03ab2d60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  thunk_FUN_03798b70(param_1);
  lVar1 = FUN_03aac8e4();
  if ((lVar1 != 0) && (unaff_x22 != 0)) {
    FUN_075aa9c8();
    if ((unaff_x24 & 1) == 0) {
      FUN_03aaf9f0();
      FUN_03ad8654(lVar1 + 0x38,unaff_w19);
    }
    else {
      FUN_03aaf9f0(&stack0x00000060);
      if ((unaff_x20 == 0) || (lVar2 = FUN_075aa9c8(), lVar2 == 0)) goto LAB_03ab2e10;
      FUN_075ba188(lVar2,0);
      in_stack_00000038 = in_stack_00000068;
      in_stack_00000030 = in_stack_00000060;
      in_stack_00000048 = in_stack_00000078;
      in_stack_00000040 = in_stack_00000070;
      in_stack_00000058 = in_stack_00000088;
      in_stack_00000050 = in_stack_00000080;
      FUN_03ad86fc(lVar1 + 0x38,unaff_w19,&stack0x00000030,0);
    }
    return;
  }
LAB_03ab2e10:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


