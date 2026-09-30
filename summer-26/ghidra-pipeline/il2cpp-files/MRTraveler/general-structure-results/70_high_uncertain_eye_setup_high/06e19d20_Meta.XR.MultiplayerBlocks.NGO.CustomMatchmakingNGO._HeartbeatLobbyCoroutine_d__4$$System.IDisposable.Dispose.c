/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.CustomMatchmakingNGO.<HeartbeatLobbyCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 06e19d20
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__System_IDisposable_Dispose
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x23;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x170));
  FUN_03c8f898(PTR_DAT_08e93130);
  *(undefined1 *)(unaff_x20 + 0xff8) = 1;
  puVar1 = PTR_DAT_08e93170;
  lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  do {
    lVar3 = FUN_0714874c(lVar5);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_03cf5138(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar3,uVar6);
      }
    }
    lVar3 = FUN_03cab820(*(long *)(*unaff_x23 + 0xb8) + 0x10,lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


