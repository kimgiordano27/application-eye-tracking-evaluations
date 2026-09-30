/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry$$set_Line
ENTRY_POINT: 06364adc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__set_Line(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long in_x9;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  
  if (in_x9 != 0) {
    lVar5 = *(long *)(in_x9 + 0x10) +
            (long)*(int *)(*(long *)(param_1 + 0x10) + (long)unaff_w25 * 0x44 + 4) * 0x50;
    if (*(int *)(lVar5 + 4) != 1) {
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0x30);
    if (lVar6 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x14);
      uVar2 = *(undefined4 *)(lVar5 + 0x34);
      uVar3 = *(undefined4 *)(lVar5 + 0x24);
      uVar4 = *(undefined4 *)(lVar5 + 0x44);
      FUN_0405d5ec(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),uVar1);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      if (lVar5 != 0) {
        FUN_0405ddc4(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar3);
        if ((unaff_x23 != 0) && (*(long *)(unaff_x23 + 0x18) != 0)) {
          lVar5 = *(long *)(unaff_x20 + 0x28);
          if (lVar5 == 0) goto LAB_06364c44;
          FUN_0405d6dc(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar1);
        }
        if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
          lVar5 = *(long *)(unaff_x20 + 0x48);
          if (lVar5 == 0) goto LAB_06364c44;
          FUN_0405d5ec(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar1);
        }
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
          lVar5 = *(long *)(unaff_x20 + 0x50);
          if (lVar5 == 0) goto LAB_06364c44;
          FUN_0405d51c(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar4);
        }
        if (unaff_x19 == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x18) == 0) {
          return;
        }
        lVar5 = *(long *)(unaff_x20 + 0x40);
        if (lVar5 != 0) {
          FUN_0405d51c(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar2);
          return;
        }
      }
    }
  }
LAB_06364c44:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


