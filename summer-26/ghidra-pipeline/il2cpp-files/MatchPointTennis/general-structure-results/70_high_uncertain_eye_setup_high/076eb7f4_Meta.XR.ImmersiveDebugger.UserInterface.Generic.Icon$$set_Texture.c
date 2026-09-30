/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$set_Texture
ENTRY_POINT: 076eb7f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_Texture(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w20;
  long lVar3;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 auVar4 [16];
  
  while (*(long *)(unaff_x19 + 0x218) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x228);
    uVar1 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),unaff_w20,*unaff_x23);
    if (lVar3 == 0) break;
    FUN_071c086c(lVar3,uVar1,*unaff_x25);
    lVar3 = *(long *)(unaff_x19 + 0x230);
    if (lVar3 != 0) {
      if (*(long *)(unaff_x19 + 0x220) == 0) break;
      auVar4 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),unaff_w20,*unaff_x26);
      FUN_071c0708(lVar3,auVar4._0_8_,auVar4._8_8_,*unaff_x27);
    }
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
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_076ebb44;
      lVar3 = *(long *)(unaff_x19 + 0x200);
      uVar1 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),unaff_w20,*unaff_x23);
      if ((lVar3 == 0) || (lVar3 = FUN_05badb74(lVar3,uVar1,*unaff_x24), lVar3 == 0))
      goto LAB_076ebb44;
      uVar2 = FUN_076e5ef4(lVar3,*(undefined8 *)(unaff_x19 + 0x1f0));
    } while ((uVar2 & 1) == 0);
  }
LAB_076ebb44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


