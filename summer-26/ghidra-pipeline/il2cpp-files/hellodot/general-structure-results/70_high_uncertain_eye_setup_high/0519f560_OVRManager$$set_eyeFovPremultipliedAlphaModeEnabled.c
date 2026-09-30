/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 0519f560
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_066084c8;
  if ((DAT_06a7121e & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066084c8);
    DAT_06a7121e = 1;
  }
  iVar2 = FUN_036c48f4(param_1,param_2,param_3,*(undefined8 *)puVar1);
  if (iVar2 != 0) {
    return;
  }
  if ((param_2 != 0) && (local_34 = *(undefined4 *)(param_2 + 0xb8), param_3 != 0)) {
    FUN_04f2e5b4(&local_34,*(undefined4 *)(param_3 + 0xb8),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


