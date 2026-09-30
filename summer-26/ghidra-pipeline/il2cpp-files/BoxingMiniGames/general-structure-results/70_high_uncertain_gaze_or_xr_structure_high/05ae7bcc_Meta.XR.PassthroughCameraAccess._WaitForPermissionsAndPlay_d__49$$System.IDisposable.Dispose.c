/*
FUNCTION_NAME: Meta.XR.PassthroughCameraAccess.<WaitForPermissionsAndPlay>d__49$$System.IDisposable.Dispose
ENTRY_POINT: 05ae7bcc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_permission_setup
*/


long * Meta_XR_PassthroughCameraAccess_<WaitForPermissionsAndPlay>d__49__System_IDisposable_Dispose
                 (long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  uVar10 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x28);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978(param_1);
  }
  plVar4 = (long *)FUN_05e26f18(uVar10,0);
  if (plVar4 == (long *)0x0) {
LAB_05ae801c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar5 = (**(code **)(*plVar4 + 0x298))();
  if ((uVar5 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_05e26f18(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x24);
    }
    plVar4 = (long *)FUN_05e59d90(uVar10);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar8 = **(long **)(lVar8 + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      return plVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03643084(plVar4);
  }
  if (unaff_x20 == (long *)0x0) goto LAB_05ae801c;
  uVar5 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar5 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x438))();
    uVar11 = *(undefined8 *)PTR_DAT_07a02540;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_05e26f18(uVar11,0);
    uVar5 = FUN_05e30794(uVar10,uVar11,0);
    if ((uVar5 & 1) != 0) {
      lVar8 = (**(code **)(*unaff_x20 + 0x458))();
      if (lVar8 == 0) goto LAB_05ae801c;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05ae8020:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar4 = *(long **)(lVar8 + 0x20);
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar4);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_07a03000;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      plVar6 = (long *)FUN_05e26f18(uVar10,0);
      plVar7 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
      if (plVar7 == (long *)0x0) goto LAB_05ae801c;
      if ((plVar4 != (long *)0x0) &&
         (lVar8 = thunk_FUN_0367fd24(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_05ae8020;
      plVar7[4] = (long)plVar4;
      thunk_FUN_036b7ad0(plVar7 + 4,plVar4);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x948))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950)),
         plVar6 == (long *)0x0)) goto LAB_05ae801c;
      uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar4,*(undefined8 *)(*plVar6 + 0x2a0));
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07a03018;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar10 = FUN_05e26f18(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_036a1978(*unaff_x24);
        }
        goto LAB_05ae7f50;
      }
    }
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar5 & 1) == 0) goto LAB_05ae7fb0;
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
        if (uVar3 != 7) goto LAB_05ae7f00;
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar8 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
LAB_05ae7f00:
    if (uVar3 != 5) {
LAB_05ae7fb0:
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      plVar4 = (long *)thunk_FUN_0367fe20();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0367c9fc(lVar8);
      }
      FUN_04a53ae0(plVar4,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
      return plVar4;
    }
    lVar8 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e26f18(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05ae7f50:
  uVar10 = FUN_05e59d90(uVar10);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0367c9fc(lVar8);
  }
  lVar8 = **(long **)(lVar8 + 0xc0);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0367c9fc(lVar8);
  }
  plVar4 = (long *)FUN_03156018(uVar10,lVar8);
  return plVar4;
}


