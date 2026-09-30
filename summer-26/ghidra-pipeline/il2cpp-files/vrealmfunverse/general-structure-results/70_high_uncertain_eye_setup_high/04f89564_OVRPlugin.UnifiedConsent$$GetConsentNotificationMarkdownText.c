/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentNotificationMarkdownText
ENTRY_POINT: 04f89564
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetConsentNotificationMarkdownText(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w23;
  uint uVar4;
  long unaff_x24;
  undefined8 uVar5;
  
  do {
    thunk_FUN_02b9ad44();
    lVar2 = *unaff_x21;
    do {
      lVar2 = **(long **)(lVar2 + 0xb8);
      if (lVar2 == 0) {
LAB_04f8960c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar4 = (uint)unaff_x24;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_04f89610;
      if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x48), lVar3 == 0)) goto LAB_04f8960c;
      uVar1 = *(uint *)(lVar2 + unaff_x24 * 4 + 0x20);
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_04f89610;
      lVar2 = *(long *)(unaff_x19 + 0x140);
      if (lVar2 == 0) goto LAB_04f8960c;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_04f89610;
      lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      lVar2 = lVar2 + unaff_x24 * 0x10;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar5;
      lVar2 = *(long *)(unaff_x19 + 0xd0);
      if (lVar2 == 0) goto LAB_04f8960c;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_04f89610:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      *(undefined4 *)(lVar2 + unaff_x24 * 4 + 0x20) = unaff_w23;
      if ((int)uVar4 <= (int)unaff_w22) {
        return;
      }
      if (uVar4 <= unaff_w22) goto LAB_04f89610;
      lVar2 = *unaff_x21;
      unaff_x24 = (long)*(int *)(unaff_x20 + (long)(int)unaff_w22 * 4 + 0x20);
    } while (*(int *)(lVar2 + 0xe4) != 0);
  } while( true );
}


