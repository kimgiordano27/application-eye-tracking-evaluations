/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentSettingsChangeText
ENTRY_POINT: 04f8977c
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


void OVRPlugin_UnifiedConsent__GetConsentSettingsChangeText(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint in_w9;
  long unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uStack000000000000002c;
  
  if (param_2 < in_w9) {
    param_1 = param_1 + (long)(int)param_3 * 0x10;
    *(undefined4 *)(param_1 + 0x20) = unaff_s11;
    *(undefined4 *)(param_1 + 0x24) = unaff_s10;
    *(undefined4 *)(param_1 + 0x28) = unaff_s9;
    *(undefined4 *)(param_1 + 0x2c) = unaff_s8;
    lVar1 = *(long *)(unaff_x19 + 0xd0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (param_3 < *(uint *)(lVar1 + 0x18)) {
      *(undefined4 *)(lVar1 + (long)(int)param_3 * 4 + 0x20) = 0x3f800000;
      uStack000000000000002c = 2;
      FUN_04f897ec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


