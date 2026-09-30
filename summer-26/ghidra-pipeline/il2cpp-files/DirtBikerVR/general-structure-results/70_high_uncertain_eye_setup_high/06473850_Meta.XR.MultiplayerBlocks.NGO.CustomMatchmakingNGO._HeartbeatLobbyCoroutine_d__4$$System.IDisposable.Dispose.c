/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.CustomMatchmakingNGO.<HeartbeatLobbyCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 06473850
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


void Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x20);
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
    lVar2 = *(long *)(param_4 + 0x20);
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) != 0) {
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
      lVar2 = *(long *)(param_4 + 0x20);
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
        lVar2 = *(long *)(param_4 + 0x20);
      }
      if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) != 0) {
        lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03ac4090();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06473918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))
                    (*(undefined8 *)(lVar1 + 0x40),param_2,param_3,*(undefined8 *)(lVar1 + 0x28));
          return;
        }
        goto LAB_06473928;
      }
    }
  }
  FUN_064735c0(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30));
LAB_06473928:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


