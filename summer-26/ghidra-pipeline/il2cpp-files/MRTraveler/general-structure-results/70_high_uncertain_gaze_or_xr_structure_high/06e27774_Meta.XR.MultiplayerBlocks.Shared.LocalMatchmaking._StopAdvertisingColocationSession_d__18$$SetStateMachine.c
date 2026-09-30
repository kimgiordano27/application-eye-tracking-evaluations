/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__18$$SetStateMachine
ENTRY_POINT: 06e27774
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__SetStateMachine
               (ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e68f00);
    *(undefined1 *)(unaff_x20 + 0x7f) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_085decd4();
  lVar4 = 0;
  if ((uVar3 & 1) != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(0);
    }
    iVar1 = FUN_0859256c();
    iVar2 = FUN_08592530();
    lVar4 = (long)(iVar1 * iVar2 * 2);
  }
  return lVar4;
}


