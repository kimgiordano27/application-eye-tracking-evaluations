/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 05baaac0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x21 + 0x9c2) = in_w8;
  lVar2 = FUN_05974b90(*(undefined8 *)(unaff_x19 + 0x48));
  puVar1 = PTR_DAT_07113260;
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    return;
  }
  uVar4 = *(undefined8 *)PTR_DAT_07113260;
  lVar3 = thunk_FUN_031c3cac(lVar2,uVar4);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(unaff_x19 + 0x48) = lVar3;
    lVar3 = thunk_FUN_031c3cac(lVar2,uVar4);
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058(lVar2,uVar4);
}


