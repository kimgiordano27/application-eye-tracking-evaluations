/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__14$$SetStateMachine
ENTRY_POINT: 06e262a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__14__SetStateMachine
               (long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  
  while( true ) {
    if ((bool)in_ZR) {
      return;
    }
    plVar1 = (long *)FUN_0714874c(param_1);
    if ((plVar1 != (long *)0x0) && (*plVar1 != *unaff_x22)) break;
    lVar2 = FUN_03cab820();
    in_ZR = param_1 == lVar2;
    param_1 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fecc(plVar1);
}


