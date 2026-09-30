/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 090b2dd0
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_0b330324 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac791d0);
    DAT_0b330324 = 1;
  }
  puVar1 = PTR_DAT_0ac791d0;
  if (*(long *)(param_5 + 0x40) != 0) {
    lVar2 = thunk_FUN_0a147588(*(long *)(param_5 + 0x40),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)puVar1);
    }
    if (lVar2 != 0) {
      thunk_FUN_0a14c2a4(param_1,param_2,param_3,param_4,lVar2,
                         *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      if ((*(long *)(param_5 + 0x40) != 0) &&
         (lVar2 = thunk_FUN_0a147588(*(long *)(param_5 + 0x40),0), lVar2 != 0)) {
        thunk_FUN_0a14c2a4(param_1,param_2,param_3,param_4,lVar2,
                           *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


