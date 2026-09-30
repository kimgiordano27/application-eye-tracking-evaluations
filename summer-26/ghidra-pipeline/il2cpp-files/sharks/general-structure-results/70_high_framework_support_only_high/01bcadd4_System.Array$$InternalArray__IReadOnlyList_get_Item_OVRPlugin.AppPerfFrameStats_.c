/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 01bcadd4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_AppPerfFrameStats>
          (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_x9;
  long *plVar4;
  ulong in_x10;
  undefined8 *__dest;
  long unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  __dest = (undefined8 *)(in_x9 - (in_x10 & 0x1fffffff0));
  if (-1 < *(int *)(param_1 + 0x28)) {
    unaff_x23 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x21,unaff_x23,param_4);
  if (-1 < *(int *)(*(long *)(unaff_x26 + 8) + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,unaff_x22,unaff_x24);
  if ((*(byte *)(*(long *)(unaff_x26 + 0x10) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar1 = thunk_FUN_01861bbc();
  plVar4 = *(long **)(unaff_x20 + 0x38);
  puVar2 = (undefined8 *)plVar4[3];
  uVar3 = *puVar2;
  if (-1 < *(int *)(*plVar4 + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  if (-1 < *(int *)(plVar4[1] + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
  *(undefined8 **)(unaff_x29 + -0x10) = __dest;
  (*(code *)puVar2[2])(uVar3,puVar2,uVar1,unaff_x29 + -0x18,__dest);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


