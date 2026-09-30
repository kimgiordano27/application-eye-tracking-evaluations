/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 0697af90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(long param_1)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  float unaff_s8;
  
  if ((*(byte *)(unaff_x20 + 0x134) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08487160);
    *(undefined1 *)(unaff_x20 + 0x134) = 1;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    fVar2 = **(float **)(*(long *)PTR_DAT_08487160 + 0xb8);
    if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= unaff_s8) {
      fVar2 = unaff_s8;
    }
    *(float *)(lVar1 + 0x58) = fVar2;
    *(float *)(lVar1 + 0x5c) = 1.0 / fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


