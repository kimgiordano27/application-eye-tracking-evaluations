/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01bcb0b4
PROGRAM: sharks-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x29;
  
  plVar3 = *(long **)(unaff_x22 + 0x38);
  puVar2 = (undefined8 *)plVar3[4];
  if (-1 < *(int *)(*plVar3 + 0x28)) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  uVar1 = *puVar2;
  if (-1 < *(int *)(plVar3[1] + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  if (-1 < *(int *)(plVar3[2] + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x20;
  (*(code *)puVar2[2])(uVar1,puVar2,param_1,unaff_x29 + -0x20,unaff_x20);
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


