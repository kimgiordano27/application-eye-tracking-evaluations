/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorStartDest
ENTRY_POINT: 06d97bc4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d97e8c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorStartDest(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  long *unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000018;
  
  FUN_0716f8f0();
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  uVar2 = *(undefined8 *)(unaff_x19 + 10);
  lVar5 = *(long *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar4 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      puVar6 = (undefined8 *)(lVar5 + 0x20);
      *puVar6 = uVar1;
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
      thunk_FUN_03d233cc(puVar6,0);
    }
    else {
      FUN_05088c98();
    }
    if ((unaff_w25 < 0) && (in_stack_00000018._4_1_ != '\0')) {
      thunk_FUN_03cdf404();
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701e078(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


