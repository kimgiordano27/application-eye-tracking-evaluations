/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 0564c0b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(long param_1)

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
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  plVar3 = (long *)FUN_0593e698(uVar8,0);
  lVar4 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
  if (lVar4 == 0) {
LAB_0564c378:
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
     , plVar3 == (long *)0x0)) goto LAB_0564c378;
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
    goto LAB_0564c2ac;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar6 & 1) == 0) goto LAB_0564c30c;
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
        if (uVar2 != 7) goto LAB_0564c25c;
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
LAB_0564c25c:
    if (uVar2 != 5) {
LAB_0564c30c:
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
      FUN_04751920(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
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
LAB_0564c2ac:
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


