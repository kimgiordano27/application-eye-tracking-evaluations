/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 05328c9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SendVirtualKeyboardInput(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined1 in_stack_00000060 [16];
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  
  FUN_0530ed90();
  in_stack_00000040 = in_stack_00000060._4_8_;
  uStack0000000000000054 = in_stack_00000078;
  uStack000000000000004c = in_stack_00000070;
  FUN_053289c8(&stack0x00000024);
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_0528b244();
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      FUN_0528b2cc(*(long *)(unaff_x19 + 0x70),0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        uVar1 = FUN_060ed7ac(*(long *)(unaff_x19 + 0x48),0);
        lVar2 = *(long *)(unaff_x19 + 0x70);
        if (lVar2 != 0) {
          in_stack_00000088 = *(undefined8 *)(lVar2 + 0x20);
          in_stack_00000080 = *(undefined8 *)(lVar2 + 0x18);
          in_stack_00000090 = *(undefined8 *)(lVar2 + 0x28);
          in_stack_00000098 = *(undefined4 *)(lVar2 + 0x30);
          FUN_052c22b0(uVar1,&stack0x00000080,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


