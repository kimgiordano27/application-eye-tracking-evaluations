/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup.<SpawnSpeaker>d__10$$System.IDisposable.Dispose
ENTRY_POINT: 05665710
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MultiplayerBlocks_Fusion_VoiceSetup_<SpawnSpeaker>d__10__System_IDisposable_Dispose
                 (undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  int in_w9;
  long unaff_x19;
  
  if (in_w9 == 0) {
    thunk_FUN_031e5338(param_1);
  }
  plVar1 = (long *)FUN_0597090c();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar1);
    }
  }
  return plVar1;
}


