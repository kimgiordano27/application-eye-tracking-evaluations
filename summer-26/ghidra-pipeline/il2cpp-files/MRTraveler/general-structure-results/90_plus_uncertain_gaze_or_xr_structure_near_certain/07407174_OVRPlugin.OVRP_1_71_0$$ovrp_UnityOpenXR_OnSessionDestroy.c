/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 07407174
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_073fc3c4();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((*(char *)(unaff_x20 + 0x12) != '\0') &&
     (((uVar1 = FUN_07407200(), (uVar1 & 1) == 0 || (uVar1 = FUN_07407398(), (uVar1 & 1) == 0)) &&
      (*(char *)(unaff_x19 + 0x90) == '\0')))) {
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_085a437c(*(undefined8 *)PTR_DAT_08eb63b8,0);
    return;
  }
  return;
}


