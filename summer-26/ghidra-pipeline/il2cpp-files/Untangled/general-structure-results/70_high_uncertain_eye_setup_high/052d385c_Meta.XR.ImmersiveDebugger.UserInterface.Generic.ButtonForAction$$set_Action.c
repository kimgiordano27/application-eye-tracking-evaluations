/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$set_Action
ENTRY_POINT: 052d385c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction__set_Action(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  if (param_1 == 0) goto LAB_052d392c;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (unaff_x19[0x2d] == 0) goto LAB_052d392c;
    lVar3 = FUN_066c67b0(unaff_x19[0x2d],0);
    if (*(char *)(unaff_x23 + 0xf56) == '\0') {
      FUN_02f07e70(PTR_DAT_06d3c9b8);
      *(undefined1 *)(unaff_x23 + 0xf56) = 1;
    }
    if ((**(long **)(*unaff_x24 + 0xb8) == 0) || (lVar3 == 0)) goto LAB_052d392c;
    FUN_066d5b08(lVar3,*(undefined8 *)(**(long **)(*unaff_x24 + 0xb8) + 0x30),0);
  }
  if ((int)unaff_x19[0x2e] == 0) {
    if (unaff_x20 == 0) goto LAB_052d392c;
    lVar3 = FUN_066c67b0();
    if ((unaff_x19[0x14] == 0) || (lVar1 = FUN_066c67b0(unaff_x19[0x14],0), lVar1 == 0))
    goto LAB_052d392c;
    FUN_066d48c0(lVar1,0);
  }
  else {
    if ((int)unaff_x19[0x2e] != 1) {
      return;
    }
    if (unaff_x20 == 0) goto LAB_052d392c;
    lVar3 = FUN_066c67b0();
    (**(code **)(*unaff_x19 + 0x638))();
  }
  if (lVar3 != 0) {
    FUN_066d4960(lVar3,0);
    return;
  }
LAB_052d392c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


