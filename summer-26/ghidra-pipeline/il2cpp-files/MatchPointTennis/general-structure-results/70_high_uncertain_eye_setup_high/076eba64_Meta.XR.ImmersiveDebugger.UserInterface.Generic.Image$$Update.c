/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Image$$Update
ENTRY_POINT: 076eba64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Image__Update(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  int unaff_w20;
  long lVar1;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 auVar2 [16];
  
  while (!(bool)in_ZR) {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_076ebb44;
    FUN_071c086c(*(long *)(unaff_x19 + 0x228),unaff_w20,*unaff_x23);
    lVar1 = *(long *)(unaff_x19 + 0x230);
    if (lVar1 != 0) {
      if (*(long *)(unaff_x19 + 0x208) == 0) goto LAB_076ebb44;
      auVar2 = FUN_05ab73fc(*(long *)(unaff_x19 + 0x208),unaff_w20,*unaff_x24);
      FUN_071c0708(lVar1,auVar2._0_8_,auVar2._8_8_,*unaff_x25);
    }
    unaff_w20 = unaff_w20 + 1;
    in_ZR = unaff_w22 == unaff_w20;
  }
  if (*(long *)(unaff_x19 + 0x1b8) != 0) {
    FUN_076eb340();
    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
      FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),1);
      FUN_076eb104();
      return;
    }
  }
LAB_076ebb44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


