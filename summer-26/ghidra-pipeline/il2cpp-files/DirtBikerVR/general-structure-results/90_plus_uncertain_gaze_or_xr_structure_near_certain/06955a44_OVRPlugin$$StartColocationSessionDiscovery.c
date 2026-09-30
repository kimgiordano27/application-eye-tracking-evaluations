/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 06955a44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(float param_1)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float unaff_s9;
  float fVar3;
  
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar1 != 0)) {
    fVar3 = *(float *)(unaff_x19 + 0x28);
    fVar2 = (float)FUN_06960788(lVar1,0);
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar1 != 0)) {
      FUN_07d32918((unaff_s9 - param_1) * fVar3,fVar2 * *(float *)(unaff_x19 + 0x24),lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


