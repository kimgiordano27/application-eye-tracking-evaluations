/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 07a682ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if ((DAT_098955d5 & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0d40);
    DAT_098955d5 = 1;
  }
  puVar2 = PTR_DAT_092f0d40;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_07a66dd0();
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07a66808(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


