/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$SetStateMachine
ENTRY_POINT: 0775ef3c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__SetStateMachine
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  long *unaff_x22;
  
  uVar1 = FUN_09531730(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_04d7a1ac();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x22);
    }
    uVar1 = FUN_09531730(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (lVar2 != 0) {
      FUN_094edf40(lVar2);
      return;
    }
  }
  else if (unaff_x21 != 0) {
    FUN_094ed400();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


