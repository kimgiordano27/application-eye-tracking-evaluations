/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentSettingsChangeText
ENTRY_POINT: 0696d158
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetConsentSettingsChangeText(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  int iVar5;
  
  puVar1 = PTR_DAT_084b5d60;
  iVar5 = 0;
  while (*(long *)(param_1 + 0xe8) != 0) {
    iVar2 = FUN_06936294(*(long *)(param_1 + 0xe8),0);
    if (iVar2 <= iVar5) {
      *(undefined4 *)(unaff_x19 + 0x98) = 0;
      return;
    }
    if ((((*(long *)(unaff_x19 + 0x90) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar4 == 0)) ||
        (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
       ((lVar4 = FUN_04de82e0(lVar4,iVar5,*(undefined8 *)puVar1), lVar4 == 0 ||
        (plVar3 = *(long **)(lVar4 + 0x80), plVar3 == (long *)0x0)))) break;
    (**(code **)(*plVar3 + 0x308))(0,plVar3,*(undefined8 *)(*plVar3 + 0x310));
    param_1 = *(long *)(unaff_x19 + 0x90);
    iVar5 = iVar5 + 1;
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


