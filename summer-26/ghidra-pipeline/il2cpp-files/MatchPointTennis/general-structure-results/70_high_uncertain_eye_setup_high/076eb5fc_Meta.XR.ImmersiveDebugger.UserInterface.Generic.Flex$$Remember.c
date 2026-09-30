/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$Remember
ENTRY_POINT: 076eb5fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__Remember
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  while( true ) {
    FUN_071c0708(unaff_x21,auVar3._0_8_,auVar3._8_8_,*unaff_x26);
    do {
      do {
        if (unaff_w22 == unaff_w20) {
          if (*(long *)(unaff_x19 + 0x1b8) != 0) {
            FUN_076eb340();
            if (*(long *)(unaff_x19 + 0x1b8) != 0) {
              FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),1);
              FUN_076eb104();
              return;
            }
          }
          goto LAB_076ebb44;
        }
        unaff_w20 = unaff_w20 + 1;
        if ((*(long *)(unaff_x19 + 0x200) == 0) ||
           (lVar1 = FUN_05badb74(*(long *)(unaff_x19 + 0x200),unaff_w20,*unaff_x23), lVar1 == 0))
        goto LAB_076ebb44;
        uVar2 = FUN_076e5ef4(lVar1,*(undefined8 *)(unaff_x19 + 0x1f0));
      } while ((uVar2 & 1) == 0);
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_076ebb44;
      FUN_071c086c(*(long *)(unaff_x19 + 0x228),unaff_w20,*unaff_x24);
      unaff_x21 = *(long *)(unaff_x19 + 0x230);
    } while (unaff_x21 == 0);
    if (*(long *)(unaff_x19 + 0x208) == 0) break;
    auVar3 = FUN_05ab73fc(*(long *)(unaff_x19 + 0x208),unaff_w20,*unaff_x25);
  }
LAB_076ebb44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


