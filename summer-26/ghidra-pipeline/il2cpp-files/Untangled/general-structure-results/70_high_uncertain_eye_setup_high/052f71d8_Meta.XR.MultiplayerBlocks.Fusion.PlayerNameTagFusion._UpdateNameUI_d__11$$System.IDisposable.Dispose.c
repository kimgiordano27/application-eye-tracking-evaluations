/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.PlayerNameTagFusion.<UpdateNameUI>d__11$$System.IDisposable.Dispose
ENTRY_POINT: 052f71d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void Meta_XR_MultiplayerBlocks_Fusion_PlayerNameTagFusion_<UpdateNameUI>d__11__System_IDisposable_Dispose
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = FUN_066c67b0(param_4,0);
  if (lVar2 != 0) {
    uVar3 = FUN_066d3ed0(lVar2,0);
    uVar5 = param_2;
    uVar6 = param_3;
    lVar2 = FUN_066c67b0(param_4,0);
    if (lVar2 != 0) {
      uVar4 = FUN_066d4b34(lVar2,0);
      uVar1 = *(uint *)(param_4 + 0x20);
      if ((uVar1 & 1) != 0) {
        uVar3 = (ulong)*(uint *)(param_4 + 0x24);
      }
      if ((uVar1 >> 1 & 1) != 0) {
        param_2 = (ulong)*(uint *)(param_4 + 0x28);
      }
      if ((uVar1 >> 2 & 1) != 0) {
        param_3 = (ulong)*(uint *)(param_4 + 0x2c);
      }
      if ((uVar1 >> 3 & 1) != 0) {
        uVar4 = (ulong)*(uint *)(param_4 + 0x30);
      }
      if ((uVar1 >> 4 & 1) != 0) {
        uVar5 = (ulong)*(uint *)(param_4 + 0x34);
      }
      if ((uVar1 >> 5 & 1) != 0) {
        uVar6 = (ulong)*(uint *)(param_4 + 0x38);
      }
      lVar2 = FUN_066c67b0(param_4,0);
      if (lVar2 != 0) {
        FUN_066d3f5c(uVar3,param_2,param_3,lVar2,0);
        lVar2 = FUN_066c67b0(param_4,0);
        if (lVar2 != 0) {
          FUN_066d4bbc(uVar4,uVar5,uVar6,lVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


