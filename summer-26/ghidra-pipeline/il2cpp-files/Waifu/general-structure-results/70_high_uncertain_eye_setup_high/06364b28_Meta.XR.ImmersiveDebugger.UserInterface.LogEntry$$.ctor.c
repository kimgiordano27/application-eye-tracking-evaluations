/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry$$.ctor
ENTRY_POINT: 06364b28
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_LogEntry___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w28;
  undefined4 unaff_w29;
  undefined4 uStack000000000000000c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uStack000000000000000c = in_w10;
  FUN_0405d5ec(param_2,param_3,unaff_w28);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  if (lVar2 != 0) {
    FUN_0405ddc4(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),unaff_w29);
    if ((unaff_x23 != 0) && (*(long *)(unaff_x23 + 0x18) != 0)) {
      lVar2 = *(long *)(unaff_x20 + 0x28);
      if (lVar2 == 0) goto LAB_06364c44;
      FUN_0405d6dc(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),unaff_w28);
    }
    if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
      lVar2 = *(long *)(unaff_x20 + 0x48);
      if (lVar2 == 0) goto LAB_06364c44;
      FUN_0405d5ec(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),unaff_w28);
    }
    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
      lVar2 = *(long *)(unaff_x20 + 0x50);
      if (lVar2 == 0) goto LAB_06364c44;
      FUN_0405d51c(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),uVar1);
    }
    if ((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x18) == 0)) {
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x40);
    if (lVar2 != 0) {
      FUN_0405d51c(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                   uStack000000000000000c);
      return;
    }
  }
LAB_06364c44:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


