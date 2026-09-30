/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 0565b040
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


undefined8
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *unaff_x24;
  long unaff_x25;
  
  plVar3 = (long *)(*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x940));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar4 = (**(code **)(*plVar3 + 0x2a8))();
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_070f64a8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar7 = FUN_0593e698(uVar7,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    goto LAB_0565b1b4;
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar4 & 1) == 0) goto LAB_0565b214;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar7 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_0594a30c(uVar7,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_0565b164;
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar5 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar5 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
LAB_0565b164:
    if (uVar2 != 5) {
LAB_0565b214:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      FUN_04756a78(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return uVar7;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar7 = *puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar7 = FUN_0593e698(uVar7,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_0565b1b4:
  uVar7 = FUN_0597090c(uVar7);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  uVar7 = FUN_02d37100(uVar7,lVar6);
  return uVar7;
}


