/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 013cf4cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>
               (undefined1 param_1 [16],undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  while( true ) {
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    unaff_x19[2] = unaff_x20[2];
    unaff_x19[1] = uVar3;
    *unaff_x19 = uVar2;
    thunk_FUN_01286abc(param_2,param_3);
    unaff_x20[2] = in_stack_00000010;
    unaff_x20[1] = uStack0000000000000008;
    *unaff_x20 = uStack0000000000000000;
    thunk_FUN_01286abc(unaff_x20 + 1,0);
    puVar1 = unaff_x19 + 3;
    unaff_x20 = unaff_x20 + -3;
    if (unaff_x20 <= puVar1) break;
    in_stack_00000010 = unaff_x19[5];
    uStack0000000000000008 = unaff_x19[4];
    uStack0000000000000000 = *puVar1;
    param_2 = unaff_x19 + 4;
    param_3 = 0;
    unaff_x19 = puVar1;
  }
  return;
}


