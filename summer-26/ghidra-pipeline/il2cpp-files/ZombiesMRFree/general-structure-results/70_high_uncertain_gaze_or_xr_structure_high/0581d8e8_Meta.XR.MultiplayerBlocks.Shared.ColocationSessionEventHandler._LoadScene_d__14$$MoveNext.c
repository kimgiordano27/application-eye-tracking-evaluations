/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<LoadScene>d__14$$MoveNext
ENTRY_POINT: 0581d8e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<LoadScene>d__14__MoveNext
               (long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0581d904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x158))(plVar1,*(undefined8 *)(*plVar1 + 0x160));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


