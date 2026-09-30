/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.AvatarSpawnerFusion.<SpawnAvatarRoutine>d__18$$System.IDisposable.Dispose
ENTRY_POINT: 056614b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Fusion_AvatarSpawnerFusion_<SpawnAvatarRoutine>d__18__System_IDisposable_Dispose
          (long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *unaff_x24;
  long unaff_x25;
  
  uVar8 = **(undefined8 **)(param_1 + 0x490);
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  plVar3 = (long *)FUN_0593e698(uVar8,0);
  lVar4 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
  if (lVar4 == 0) {
LAB_0566176c:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_031c3cac(), lVar5 == 0)) {
    uVar8 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar8,0);
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  *(long *)(lVar4 + 0x20) = unaff_x21;
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x938))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x940))
     , plVar3 == (long *)0x0)) goto LAB_0566176c;
  uVar6 = (**(code **)(*plVar3 + 0x2a8))();
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_070f64a8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar8 = FUN_0593e698(uVar8,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    goto LAB_056616a0;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar6 & 1) == 0) goto LAB_05661700;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_0594a30c(uVar8,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_05661650;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
LAB_05661650:
    if (uVar2 != 5) {
LAB_05661700:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4(lVar4);
      }
      FUN_04758a48(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return uVar8;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar8 = *puVar7;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_0593e698(uVar8,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_056616a0:
  uVar8 = FUN_0597090c(uVar8);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  uVar8 = FUN_02d37100(uVar8,lVar4);
  return uVar8;
}


