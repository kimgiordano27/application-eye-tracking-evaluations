/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 01d95744
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  
  lVar1 = thunk_FUN_0103ffe0();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,0);
  }
  if ((int)*(long *)(unaff_x21 + 0x18) != 0) {
    *(undefined8 *)
     (unaff_x21 + ((*(long *)(unaff_x21 + 0x18) << 0x20) + -0x100000000 >> 0x1d) + 0x20) = unaff_x20
    ;
    thunk_FUN_0106e12c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


