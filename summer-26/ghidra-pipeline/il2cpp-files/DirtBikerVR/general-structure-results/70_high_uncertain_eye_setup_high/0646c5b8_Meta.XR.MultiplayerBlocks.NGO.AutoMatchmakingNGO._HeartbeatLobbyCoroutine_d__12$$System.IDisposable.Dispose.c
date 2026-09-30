/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.AutoMatchmakingNGO.<HeartbeatLobbyCoroutine>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 0646c5b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_AutoMatchmakingNGO_<HeartbeatLobbyCoroutine>d__12__System_IDisposable_Dispose
               (void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  if (unaff_w22 == 4) {
    *(code **)(unaff_x19 + 0x18) = FUN_0369813c;
  }
  else {
    if (unaff_x20 == 0) {
      uVar1 = thunk_FUN_03ad47ac(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar1,0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  *(code **)(unaff_x19 + 0x38) = FUN_036980c4;
  return;
}


