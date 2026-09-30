/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$OnApplicationFocus
ENTRY_POINT: 04a4bf54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__OnApplicationFocus(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  
  if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar1 = FUN_04d9e838(*(long *)(unaff_x21 + 0x18),0);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_02b79548(lVar1,lVar3);
    if (lVar2 == 0) goto LAB_04a4bfec;
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  *(long *)(unaff_x19 + 0x18) = lVar2;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_02b79548(lVar1,lVar3);
    if (lVar2 == 0) {
LAB_04a4bfec:
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar1,lVar3);
    }
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar2);
  *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


