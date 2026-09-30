/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$SetStateMachine
ENTRY_POINT: 04e25fc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__SetStateMachine
               (void)

{
  long *plVar1;
  
  plVar1 = (long *)thunk_FUN_02f1863c();
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04e25fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x158))(plVar1,*(undefined8 *)(*plVar1 + 0x160));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


