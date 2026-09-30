/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__16$$SetStateMachine
ENTRY_POINT: 05b3bc10
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__16__SetStateMachine
               (long param_1)

{
  long lVar1;
  ulong in_x9;
  long *unaff_x20;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_0322bef4(param_1);
  }
  lVar1 = **(long **)(param_1 + 0xc0);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4(lVar1);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1))
    {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730();
    }
  }
  return;
}


