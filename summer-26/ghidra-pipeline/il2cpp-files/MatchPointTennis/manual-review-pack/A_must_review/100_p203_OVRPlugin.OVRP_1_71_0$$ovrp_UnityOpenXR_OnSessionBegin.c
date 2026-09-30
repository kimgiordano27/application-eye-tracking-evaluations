/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 07ca0aa0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  
  *(undefined1 *)(unaff_x21 + 0x9e8) = 1;
  plVar3 = (long *)(unaff_x20 + 0x58);
  plVar1 = (long *)FUN_07a84204(*plVar3);
  if (plVar1 == (long *)0x0) {
    *plVar3 = 0;
  }
  else {
    lVar2 = *(long *)PTR_DAT_09f1ea48;
    if ((*plVar1 != lVar2) || (*plVar3 = (long)plVar1, *plVar1 != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar1);
    }
  }
  thunk_FUN_044bb4b4(plVar3,plVar1);
  if (*(char *)(unaff_x20 + 0x81) == '\0') {
    return;
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07ca0b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


