/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 0635e8cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e6fd8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e6fe0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e6fc8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f34c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f34e0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x8e7) = unaff_w21;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (long *)0x0;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_05fd5ad4();
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000040 = (long *)0x0;
    while (uVar1 = FUN_05fd5b44(&stack0x00000030,DAT_083e6fc0), (uVar1 & 1) != 0) {
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      (**(code **)(*in_stack_00000040 + 0x198))
                (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x1a0));
    }
  }
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000028 = (long *)0x0;
    in_stack_00000018 = 0;
    FUN_05fd5ad4(&stack0x00000018,*(long *)(unaff_x19 + 0x88),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f34e0 + 0x20) + 0xc0) + 0x138));
    while (uVar1 = FUN_05fd5b44(&stack0x00000018,DAT_083e6fd8), (uVar1 & 1) != 0) {
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      (**(code **)(*in_stack_00000028 + 0x1a8))
                (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1b0));
    }
  }
  return;
}


