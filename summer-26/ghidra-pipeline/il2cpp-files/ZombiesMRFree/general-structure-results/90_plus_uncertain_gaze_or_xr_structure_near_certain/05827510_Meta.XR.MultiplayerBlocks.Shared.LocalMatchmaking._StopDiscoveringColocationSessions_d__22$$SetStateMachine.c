/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$SetStateMachine
ENTRY_POINT: 05827510
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__SetStateMachine
               (long param_1)

{
  long in_stack_00000018;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = *(undefined8 *)(param_1 + 0x18);
    thunk_FUN_03048534();
    if (in_stack_00000018 != 0) {
      if (*(long *)(in_stack_00000018 + 0x18) != 0) {
        *(undefined8 *)(*(long *)(in_stack_00000018 + 0x18) + 0x20) =
             *(undefined8 *)(in_stack_00000018 + 0x20);
        thunk_FUN_03048534();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


