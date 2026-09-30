/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 05348640
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd
               (long param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  uint in_w9;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 < in_w9) {
    uVar1 = param_4[2];
    uVar3 = param_4[1];
    uVar2 = *param_4;
    param_1 = param_1 + (long)(int)param_3 * 0x1c;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_4 + 3);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    FUN_0534867c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


