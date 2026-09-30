/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 05676360
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


uint Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (void)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_031c09d4(lVar2);
  }
  lVar2 = thunk_FUN_031c3cac();
  if (lVar2 == 0) {
    FUN_0595040c(2,0);
    uVar1 = 0;
LAB_05676460:
    return uVar1 & 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
    thunk_FUN_031c3ef0();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
      thunk_FUN_031c3ef0();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto LAB_05676460;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058();
}


