/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 0636e264
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_w19;
  void *__src;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  *(undefined1 *)(unaff_x22 + 0x960) = unaff_w23;
  if (unaff_x21 != 0) {
    uVar1 = FUN_07a18d2c();
    uVar3 = param_2;
    uVar4 = param_3;
    uVar2 = FUN_07a172b0();
    if (*(long *)(unaff_x20 + 0x48) != 0) {
      __src = (void *)(*(long *)(*(long *)(unaff_x20 + 0x48) + 0x10) + (long)unaff_w19 * 0x9c);
      memcpy(&stack0x00000000,__src,0x9c);
      *(undefined4 *)((long)__src + 0x28) = uVar1;
      *(undefined4 *)((long)__src + 0x2c) = param_2;
      *(undefined4 *)((long)__src + 0x30) = param_3;
      *(undefined4 *)((long)__src + 0x34) = uVar1;
      *(undefined4 *)((long)__src + 0x38) = param_2;
      *(undefined4 *)((long)__src + 0x3c) = param_3;
      *(undefined4 *)((long)__src + 0x50) = uVar2;
      *(undefined4 *)((long)__src + 0x54) = uVar3;
      *(undefined4 *)((long)__src + 0x58) = uVar4;
      *(undefined4 *)((long)__src + 0x5c) = param_4;
      *(undefined4 *)((long)__src + 0x60) = uVar2;
      *(undefined4 *)((long)__src + 100) = uVar3;
      *(undefined4 *)((long)__src + 0x68) = uVar4;
      *(undefined4 *)((long)__src + 0x6c) = param_4;
      *(undefined8 *)((long)__src + 0x48) = in_stack_00000048;
      *(undefined8 *)((long)__src + 0x40) = in_stack_00000040;
      *(undefined8 *)((long)__src + 0x78) = in_stack_00000078;
      *(undefined8 *)((long)__src + 0x70) = in_stack_00000070;
      *(ulong *)((long)__src + 0x88) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      *(undefined8 *)((long)__src + 0x80) = in_stack_00000080;
      *(undefined8 *)((long)__src + 0x94) = uStack0000000000000094;
      *(ulong *)((long)__src + 0x8c) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


