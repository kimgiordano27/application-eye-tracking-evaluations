/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 05d41800
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    *(undefined1 *)(unaff_x21 + 0xafc) = 1;
  }
  plVar3 = (long *)(unaff_x19 + 0x48);
  plVar1 = (long *)FUN_05b36320(*plVar3);
  if (plVar1 == (long *)0x0) {
    *plVar3 = 0;
  }
  else {
    lVar2 = *(long *)PTR_DAT_06f73f20;
    if ((*plVar1 != lVar2) || (*plVar3 = (long)plVar1, *plVar1 != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar1);
    }
  }
  thunk_FUN_03048534(plVar3,plVar1);
  return;
}


