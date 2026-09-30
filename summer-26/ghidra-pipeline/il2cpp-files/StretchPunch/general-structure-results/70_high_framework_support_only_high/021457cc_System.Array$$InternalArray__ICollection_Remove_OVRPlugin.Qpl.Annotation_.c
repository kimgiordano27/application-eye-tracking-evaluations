/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 021457cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Remove<OVRPlugin_Qpl_Annotation>(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar5;
  long unaff_x21;
  undefined8 uVar6;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  uVar2 = FUN_01dde7f8();
  uVar2 = FUN_01d7d9bc(uVar2,unaff_w19);
  lVar5 = *(long *)(unaff_x21 + 0x18);
  uVar6 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar6 = FUN_033a87c8(uVar6,0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_027b9c94(&stack0x00000020,uVar6,unaff_w19,*unaff_x26);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_027b808c(&stack0x00000008,uVar2,in_stack_00000020,in_stack_00000028,
               *(undefined8 *)StringLiteral_1696);
  if (lVar5 != 0) {
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    lVar3 = *(long *)(lVar5 + 0x10);
    lVar4 = *(long *)StringLiteral_1690;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000018;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000008;
        thunk_FUN_01e10808(lVar3 + 0x20,0);
      }
      else {
        in_stack_00000058 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000008;
        in_stack_00000060 = in_stack_00000018;
        FUN_030e904c(lVar5,&stack0x00000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


