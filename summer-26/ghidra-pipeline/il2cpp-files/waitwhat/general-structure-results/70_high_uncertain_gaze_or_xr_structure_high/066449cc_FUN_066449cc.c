/*
FUNCTION_NAME: FUN_066449cc
ENTRY_POINT: 066449cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void FUN_066449cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  
  puVar2 = UnityEngine_Rendering_DebugDisplaySettingsVolume_TypeInfo;
  if ((DAT_07557bfe & 1) == 0) {
    FUN_03188a78(UnityEngine_Rendering_Universal_DecalDrawScreenSpaceSystem_TypeInfo);
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(PTR_DAT_070c4248);
    FUN_03188a78(UnityEngine_Rendering_DebugDisplaySettingsVolume_TypeInfo);
    DAT_07557bfe = 1;
  }
  puVar1 = PTR_DAT_070c4248;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = FUN_03188b1c(*(undefined8 *)puVar1,**(undefined4 **)(lVar4 + 0xb8));
  uVar3 = FUN_06a08a7c(0,0);
  lVar5 = thunk_FUN_06a0896c(0);
  puVar2 = UnityEngine_Rendering_Universal_DecalDrawScreenSpaceSystem_TypeInfo;
  if (lVar5 != 0) {
    uVar3 = uVar3 & 0xff;
    if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
      iVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      lVar6 = lVar5;
      iVar7 = 0;
      do {
        if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0(lVar6,uVar3);
        }
        iVar9 = *(int *)(lVar5 + 0x20 + uVar10 * 4);
        FUN_03bedc68(lVar4,uVar3,iVar7,(iVar9 - iVar7) + 1,*(undefined8 *)puVar2);
        lVar6 = FUN_06a08a7c(iVar9,0);
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar10 = uVar10 + 1;
        uVar3 = (uint)lVar6 & 0xff;
        iVar7 = iVar9;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    FUN_03bedc68(lVar4,uVar3,iVar9,9 - iVar9,*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo);
      FUN_069a776c(lVar5,0x10,*(undefined4 *)(lVar4 + 0x18),4,0);
      *(long *)(param_1 + 0x48) = lVar5;
      if (lVar5 != 0) {
        FUN_069a7e20(lVar5,lVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


