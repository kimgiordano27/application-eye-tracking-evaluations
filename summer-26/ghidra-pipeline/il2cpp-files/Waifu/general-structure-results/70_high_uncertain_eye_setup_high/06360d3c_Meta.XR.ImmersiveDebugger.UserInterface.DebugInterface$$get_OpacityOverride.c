/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$get_OpacityOverride
ENTRY_POINT: 06360d3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__get_OpacityOverride(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar2 = FUN_063178b4(param_1,0);
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) && (*(long *)(unaff_x19 + 0x10) != 0)) {
    lVar2 = FUN_063178b4(*(long *)(unaff_x19 + 0x10),0);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x30) != 0) {
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          lVar2 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
          if (((*(long *)(unaff_x19 + 0x10) != 0) &&
              (lVar3 = FUN_063178b4(*(long *)(unaff_x19 + 0x10),0), lVar3 != 0)) &&
             ((*(long *)(lVar3 + 0x90) != 0 && (*(long *)(unaff_x19 + 0x10) != 0)))) {
            uVar1 = *(undefined4 *)(*(long *)(lVar3 + 0x90) + 0x18);
            lVar3 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
            if (lVar3 != 0) {
              in_stack_00000030 = unaff_x20;
              in_stack_00000038 = unaff_x24;
              in_stack_00000040 = unaff_x25;
              in_stack_00000048 = unaff_x26;
              in_stack_00000050 = unaff_x21;
              in_stack_00000058 = unaff_x27;
              in_stack_00000060 = unaff_x23;
              auVar4 = FUN_04003d70(&stack0x00000030,uVar1,0x40,*(undefined8 *)(lVar3 + 0xd0),
                                    *(undefined8 *)(lVar3 + 0xd8),DAT_0840ef68);
              if (lVar2 != 0) {
                *(undefined1 (*) [16])(lVar2 + 0xd0) = auVar4;
                return 1;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


