/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03b08728
PROGRAM: Untangled-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>
              (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long param_5)

{
  void *__src;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_x9;
  long unaff_x19;
  void *unaff_x20;
  long lVar4;
  void *unaff_x22;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x26;
  int unaff_w27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    param_1 = (undefined8 *)*param_1;
    uVar1 = *param_1;
    *(int *)(unaff_x29 + -0xc) = unaff_w27;
    *(undefined8 *)(unaff_x29 + -0x28) = in_x9;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x26;
    (*(code *)param_1[2])(uVar1,param_1,param_4,param_5);
    memcpy(unaff_x22,unaff_x26,unaff_x23);
    lVar4 = *(long *)(unaff_x19 + 0x38);
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x10) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x30);
    }
    memcpy(unaff_x28,__src,unaff_x24);
    lVar2 = *(long *)(lVar4 + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
      lVar4 = *(long *)(unaff_x19 + 0x38);
    }
    uVar1 = *(undefined8 *)(lVar4 + 0x20);
    puVar3 = unaff_x28;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x10) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x28;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    FUN_02f08988(lVar2,uVar1);
    if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03b087e0;
    unaff_w27 = unaff_w27 + 1;
    if (*(int *)(unaff_x29 + -0x34) == unaff_w27) break;
    param_1 = *(undefined8 **)(unaff_x19 + 0x38);
    in_x9 = *(undefined8 *)(unaff_x29 + -0x40);
    param_5 = unaff_x29 + -0x28;
    param_4 = 0;
  }
  unaff_w27 = -1;
LAB_03b087e0:
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


