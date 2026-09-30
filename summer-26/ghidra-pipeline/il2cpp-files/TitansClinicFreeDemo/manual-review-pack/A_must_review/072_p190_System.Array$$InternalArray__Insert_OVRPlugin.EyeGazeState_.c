/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0145cfa8
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


undefined8 System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628(param_1);
    param_1 = *unaff_x24;
  }
  uVar1 = FUN_01f665dc(*(long *)(param_1 + 0xb8) + 8,0);
  uVar2 = FUN_01f665dc(*(long *)(*unaff_x24 + 0xb8) + 0xc,0);
  FUN_01e68bb0(uVar1,*unaff_x22,uVar2,0);
  if (unaff_x20 != 0) {
    uVar1 = FUN_01e6a264();
    FUN_01332478(uVar1,0,0);
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    uVar1 = thunk_FUN_0124bba8();
    FUN_01c71b24(uVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar3 = *unaff_x24;
    }
    *(int *)(*(long *)(lVar3 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar3 + 0xb8) + 0x3c) + 1;
    FUN_01335bac(uVar1,0);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


