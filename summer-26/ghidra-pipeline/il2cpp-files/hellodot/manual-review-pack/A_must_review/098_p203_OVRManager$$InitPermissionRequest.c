/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 051a4708
PROGRAM: hellodot-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cad60);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608660);
    *(undefined1 *)(unaff_x20 + 0x25e) = 1;
  }
  puVar1 = PTR_DAT_06608660;
  if (*(char *)(param_2 + 0x38) != '\0') {
    lVar3 = *(long *)(param_2 + 0x20);
    uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cad60);
    FUN_047b506c(uVar2,param_2,*(undefined8 *)puVar1,0);
    if (lVar3 != 0) {
      FUN_051a30b4(lVar3,uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  return;
}


