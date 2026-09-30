/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 05ff18e4
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


void OVRManager__get_xrSession(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f6cb0);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    *(undefined1 *)(unaff_x21 + 0x86c) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8();
  if ((uVar1 & 1) != 0) {
    if (unaff_x20 != 0) {
      uVar2 = FUN_03d78ef4();
      *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
      thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x70),uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return;
}


