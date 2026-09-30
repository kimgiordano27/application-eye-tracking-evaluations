/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 01bcb008
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BoneCapsule>
          (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long in_x10;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  long unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  size_t unaff_x26;
  long unaff_x28;
  long unaff_x29;
  
  uVar1 = *(uint *)(in_x10 + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(param_4 + 0xf & 0x1fffffff0));
  __dest_01 = (undefined8 *)((long)__dest - (unaff_x26 + 0xf & 0x1fffffff0));
  __dest_00 = (undefined8 *)((long)__dest_01 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  if (-1 < *(int *)(param_1 + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,unaff_x25,param_4);
  if (-1 < *(int *)(*(long *)(unaff_x28 + 8) + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(__dest_01,unaff_x24,unaff_x26);
  if (-1 < *(int *)(*(long *)(unaff_x28 + 0x10) + 0x28)) {
    unaff_x23 = (void *)(unaff_x29 + -0x38);
  }
  memcpy(__dest_00,unaff_x23,(ulong)uVar1);
  if ((*(byte *)(*(long *)(unaff_x28 + 0x18) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar2 = thunk_FUN_01861bbc();
  plVar5 = *(long **)(unaff_x22 + 0x38);
  puVar4 = (undefined8 *)plVar5[4];
  if (-1 < *(int *)(*plVar5 + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  uVar3 = *puVar4;
  if (-1 < *(int *)(plVar5[1] + 0x28)) {
    __dest_01 = (undefined8 *)*__dest_01;
  }
  if (-1 < *(int *)(plVar5[2] + 0x28)) {
    __dest_00 = (undefined8 *)*__dest_00;
  }
  *(undefined8 **)(unaff_x29 + -0x20) = __dest;
  *(undefined8 **)(unaff_x29 + -0x18) = __dest_01;
  *(undefined8 **)(unaff_x29 + -0x10) = __dest_00;
  (*(code *)puVar4[2])(uVar3,puVar4,uVar2,unaff_x29 + -0x20,__dest_00);
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


