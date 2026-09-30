/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 04e284ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (long param_1)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  while( true ) {
    uVar1 = FUN_06347318(param_1);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    param_1 = unaff_x24 + 0x10;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x25 == 0) break;
    unaff_x24 = param_1;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
  return 0xffffffff;
}


