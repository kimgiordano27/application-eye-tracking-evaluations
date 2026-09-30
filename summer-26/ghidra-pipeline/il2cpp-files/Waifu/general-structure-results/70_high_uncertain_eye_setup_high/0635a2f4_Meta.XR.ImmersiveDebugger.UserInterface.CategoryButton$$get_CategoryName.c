/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$get_CategoryName
ENTRY_POINT: 0635a2f4
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__get_CategoryName
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  
  FUN_043876d4(param_2,unaff_w23,*(undefined8 *)(param_1 + 0x830));
  if (*(long *)(unaff_x20 + 0xa0) != 0) {
    FUN_04254208(*(long *)(unaff_x20 + 0xa0),unaff_w23,unaff_w21,DAT_083ea830);
    if (*(long *)(unaff_x20 + 0xb0) != 0) {
      FUN_043888fc(*(long *)(unaff_x20 + 0xb0),unaff_w23,DAT_083eb878);
      if (*(long *)(unaff_x20 + 0xb8) != 0) {
        FUN_04389050(*(long *)(unaff_x20 + 0xb8),unaff_w23,DAT_083eb8b8);
        *(undefined1 *)(unaff_x20 + 0xc0) = 1;
        if (*(long *)(unaff_x20 + 0x90) != 0) {
          uVar1 = FUN_0638b184(*(long *)(unaff_x20 + 0x90),unaff_w23,0);
          if ((uVar1 & 1) == 0) {
            if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0635a3a0;
            FUN_05cad404(*(long *)(unaff_x20 + 0xa8),unaff_w19,DAT_083e1ae8);
          }
          return ~unaff_w22 & 1;
        }
      }
    }
  }
LAB_0635a3a0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


