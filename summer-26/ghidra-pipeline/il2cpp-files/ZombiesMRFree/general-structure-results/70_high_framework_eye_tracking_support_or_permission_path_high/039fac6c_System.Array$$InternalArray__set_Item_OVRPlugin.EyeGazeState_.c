/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 039fac6c
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


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>
              (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    in_stack_00000018 = unaff_x21;
    thunk_FUN_0301043c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000018);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_02feb2c4(lVar3);
    }
    uVar2 = thunk_FUN_05b4a650();
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x25 == unaff_x23) {
      iVar1 = RootMotion_Dynamics_SubBehaviourCOM__GetMomentum();
      return iVar1 + -1;
    }
    param_1 = &stack0x00000028;
    param_3 = (size_t)*(uint *)(*unaff_x20 + 0x104);
    param_2 = (void *)(unaff_x24 + unaff_x23 * param_3);
  }
  iVar1 = RootMotion_Dynamics_SubBehaviourCOM__GetMomentum();
  return iVar1 + (int)unaff_x23;
}


