/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$IsConsentSettingsChangeEnabled
ENTRY_POINT: 090c94f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__IsConsentSettingsChangeEnabled(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  uint unaff_w21;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_w21) {
LAB_090c9584:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar2 = *(long *)(param_1 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar2 != 0) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar3 = 0;
        uVar1 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        puVar4 = (undefined4 *)(unaff_x19 + 0x2c);
        do {
          if (uVar1 <= uVar3) goto LAB_090c9584;
          if (unaff_x19 == 0) goto LAB_090c9588;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_090c9584;
          FUN_090c958c(puVar4[-3],puVar4[-2],puVar4[-1],*puVar4);
          uVar1 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 4;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      return;
    }
  }
LAB_090c9588:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


