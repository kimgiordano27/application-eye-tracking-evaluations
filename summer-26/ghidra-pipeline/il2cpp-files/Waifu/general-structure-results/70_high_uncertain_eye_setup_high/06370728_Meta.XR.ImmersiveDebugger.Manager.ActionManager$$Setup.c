/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$Setup
ENTRY_POINT: 06370728
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__Setup(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined4 unaff_s8;
  undefined4 unaff_s11;
  undefined4 unaff_s13;
  undefined1 auVar4 [16];
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(unaff_x20 + 0x10) != 0)) {
    lVar2 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0);
    if ((lVar2 != 0) && ((*(long *)(lVar2 + 0x38) != 0 && (*(long *)(unaff_x20 + 0x10) != 0)))) {
      lVar2 = FUN_063179f8(*(long *)(unaff_x20 + 0x10),0);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
        FUN_04392e3c(*(long *)(lVar2 + 0x18),DAT_083ebd80);
        if ((*(long *)(unaff_x20 + 0x10) != 0) &&
           (lVar2 = FUN_063179f8(*(long *)(unaff_x20 + 0x10),0), lVar2 != 0)) {
          if ((*(long *)(lVar2 + 0x18) != 0) && (*(long *)(unaff_x20 + 0x10) != 0)) {
            lVar2 = FUN_06317a64(*(long *)(unaff_x20 + 0x10),0);
            if ((*(long *)(unaff_x20 + 0x18) != 0) && (*(long *)(unaff_x20 + 0x10) != 0)) {
              uVar1 = *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x30);
              lVar3 = FUN_06317a64(*(long *)(unaff_x20 + 0x10),0);
              if (lVar3 != 0) {
                uStack0000000000000064 = 0;
                in_stack_00000048 = unaff_s13;
                in_stack_00000050 = unaff_s8;
                in_stack_00000058 = unaff_w22;
                uStack0000000000000060 = unaff_s11;
                auVar4 = FUN_04003f20(&stack0x00000048,uVar1,2,*(undefined8 *)(lVar3 + 0xd0),
                                      *(undefined8 *)(lVar3 + 0xd8),DAT_0840ef80);
                if (lVar2 != 0) {
                  *(undefined1 (*) [16])(lVar2 + 0xd0) = auVar4;
                  return;
                }
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


