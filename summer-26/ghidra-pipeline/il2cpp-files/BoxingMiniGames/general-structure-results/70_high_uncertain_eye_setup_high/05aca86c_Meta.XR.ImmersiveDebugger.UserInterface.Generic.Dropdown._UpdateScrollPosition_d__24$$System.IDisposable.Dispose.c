/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.IDisposable.Dispose
ENTRY_POINT: 05aca86c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_IDisposable_Dispose
          (void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  FUN_05e26f18();
  uVar4 = FUN_05e30794();
  if ((uVar4 & 1) != 0) {
    lVar5 = (**(code **)(*unaff_x20 + 0x458))();
    if (lVar5 == 0) {
LAB_05acabb0:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05acabb4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    plVar9 = *(long **)(lVar5 + 0x20);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar9);
      }
    }
    uVar10 = *(undefined8 *)PTR_DAT_07a03000;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar6 = (long *)FUN_05e26f18(uVar10,0);
    plVar7 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
    if (plVar7 == (long *)0x0) goto LAB_05acabb0;
    if ((plVar9 != (long *)0x0) &&
       (lVar5 = thunk_FUN_0367fd24(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar10,0);
    }
    if ((int)plVar7[3] == 0) goto LAB_05acabb4;
    plVar7[4] = (long)plVar9;
    thunk_FUN_036b7ad0(plVar7 + 4,plVar9);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x948))
                                   (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950)),
       plVar6 == (long *)0x0)) goto LAB_05acabb0;
    uVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2a0));
    if ((uVar4 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_07a03018;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_05e26f18(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978(*unaff_x24);
      }
      goto LAB_05acaae4;
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar4 & 1) == 0) goto LAB_05acab44;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e4c8a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_05e32ff8(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7)
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__set_Progress;
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__set_Progress:
    if (uVar3 != 5) {
LAB_05acab44:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar10 = thunk_FUN_0367fe20();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      FUN_04a4a48c(uVar10,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return uVar10;
    }
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar10 = *puVar8;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e26f18(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05acaae4:
  uVar10 = FUN_05e59d90(uVar10);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  uVar10 = FUN_03156018(uVar10,lVar5);
  return uVar10;
}


