/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$IsConsentSettingsChangeEnabled
ENTRY_POINT: 01dafb24
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__IsConsentSettingsChangeEnabled
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(long *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_0106e12c();
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  uVar2 = FUN_00fdc398(param_4);
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) {
      uVar3 = thunk_FUN_01058748(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(param_2 + 0x18) = FUN_00f94858;
    goto LAB_01dafb80;
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
LAB_01dafb80:
  *(code **)(param_2 + 0x38) = FUN_00f94810;
  return;
}


