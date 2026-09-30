/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 06020614
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(void)

{
  uint *unaff_x19;
  uint uVar1;
  long *unaff_x22;
  long unaff_x28;
  
  uVar1 = 0;
  while( true ) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (uVar1 < 5) break;
    *unaff_x19 = *unaff_x19 & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
    uVar1 = uVar1 + 1;
    if (uVar1 == 5) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0602065c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(byte *)(unaff_x28 + 0x15 + (ulong)uVar1) * 4 + 0x6020660))();
  return;
}


