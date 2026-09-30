/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 01d90484
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


long OVRPlugin__RequestBodyTrackingFidelity(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  lVar1 = FUN_00fdc388(*unaff_x21,1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_0103ffe0(), lVar2 == 0)) {
    uVar3 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar3,0);
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(long *)(lVar1 + 0x20) = unaff_x19;
    thunk_FUN_0106e12c();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


