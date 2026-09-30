/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 01b7f474
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_VirtualKeyboardModelAnimationState>
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  size_t unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar6 [16];
  
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  auVar6 = (**(code **)*param_1)();
  *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar6;
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(unaff_x29 + -0x20);
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x23;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x22;
    uVar4 = thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar4 = thunk_FUN_018617ec(uVar4,unaff_x29 + -0x30);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037f93c0);
    uVar4 = FUN_02a473b8(uVar5,uVar4,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar5 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar5);
  }
  lVar2 = *(long *)(unaff_x19 + 0x38);
  if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x20,unaff_x21,unaff_x24);
  lVar2 = *(long *)(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar1 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
  uVar4 = *puVar1;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x20;
  (*(code *)puVar1[2])(uVar4,puVar1,unaff_x29 + -0x20,unaff_x29 + -0x30,unaff_x20);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


