/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentTitle
ENTRY_POINT: 04f891b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetConsentTitle(long param_1)

{
  long lVar1;
  undefined1 in_CY;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uVar3;
  undefined4 unaff_s8;
  
  while (!(bool)in_CY) {
    lVar2 = *(long *)(unaff_x20 + 0x140);
    if (lVar2 == 0) {
LAB_04f89214:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) break;
    param_1 = param_1 + unaff_x22 * 0x10;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar2 + unaff_x22 * 0x10;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    if (lVar2 == 0) goto LAB_04f89214;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) break;
    lVar1 = unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 1;
    *(undefined4 *)(lVar2 + lVar1 + 0x20) = unaff_s8;
    lVar2 = *unaff_x21;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *unaff_x21;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04f89214;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)unaff_x22) {
      return;
    }
    param_1 = *unaff_x19;
    if (param_1 == 0) goto LAB_04f89214;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


