/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 057ca234
PROGRAM: Hyper-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar1 = FUN_08d948e8();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    unaff_x20[1] = in_stack_00000008;
    *unaff_x20 = in_stack_00000000;
    unaff_x20[3] = in_stack_00000018;
    unaff_x20[2] = in_stack_00000010;
    return;
  }
  thunk_FUN_049ae08c(&DAT_0ae8ed80);
  uVar2 = thunk_FUN_04983f60();
  uVar3 = thunk_FUN_049ae08c(&DAT_0af5c5a0);
  FUN_08cc57b4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar2);
}


