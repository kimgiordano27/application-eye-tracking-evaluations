/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelScrollRect$$OnBeginDrag
ENTRY_POINT: 04a40a8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelScrollRect__OnBeginDrag(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  long unaff_x25;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x25 + 0x588);
  lVar2 = *plVar3;
  lVar1 = thunk_FUN_02b79548(param_1,lVar2);
  if (lVar1 == 0) {
LAB_04a40b80:
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_1,lVar2);
  }
  lVar2 = *plVar3;
  *(long *)(unaff_x19 + 0x10) = lVar1;
  lVar1 = thunk_FUN_02b79548(param_1,lVar2);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_1,lVar2);
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar1);
  if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  param_1 = FUN_04d9e838(*(long *)(unaff_x21 + 0x18),0);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218(lVar2);
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_02b79548(param_1,lVar2);
    if (lVar1 == 0) goto LAB_04a40b80;
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  *(long *)(unaff_x19 + 0x18) = lVar1;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218(lVar2);
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_02b79548(param_1,lVar2);
    if (lVar1 == 0) goto LAB_04a40b80;
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar1);
  *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


