/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 0246d5ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool in_CY;
  undefined4 uVar3;
  long lVar4;
  int in_w9;
  int in_w10;
  int in_w11;
  uint in_w12;
  long unaff_x19;
  long *plVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_03ce2c78;
                    /* try { // try from 0246d5ec to 0256d5f7 has its CatchHandler @ 0246d60c */
  if ((in_CY) || (in_w12 <= in_w11 - 2U)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar6 = *(long **)(param_1 + (long)in_w9 * 8 + 0x20);
  plVar5 = *(long **)(param_1 + (long)in_w10 * 8 + 0x20);
  uVar3 = FUN_0245bbbc();
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03ce2d48 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce2d48)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar6);
    }
  }
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cda428 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cda428)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
  }
  FUN_024f95d4(lVar4,plVar6,plVar5,uVar3,0);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x38) = 1;
    *(long *)(unaff_x19 + 0x140) = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x140,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


