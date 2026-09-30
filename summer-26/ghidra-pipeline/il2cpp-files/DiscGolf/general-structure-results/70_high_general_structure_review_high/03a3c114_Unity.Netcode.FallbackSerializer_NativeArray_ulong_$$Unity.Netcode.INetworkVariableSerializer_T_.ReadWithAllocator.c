/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Unity.Netcode.INetworkVariableSerializer<T>.ReadWithAllocator
ENTRY_POINT: 03a3c114
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Unity_Netcode_INetworkVariableSerializer<T>_ReadWithAllocator
                 (void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  thunk_FUN_02df485c();
  FUN_054f73b4(unaff_x21 + 0x20,0);
  uVar4 = FUN_055006dc();
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0f368);
    FUN_05498c4c(plVar5,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18();
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
LAB_03a3c16c:
    lVar6 = *plVar8;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar5);
      }
    }
    return plVar5;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(unaff_x25 + 0xe0));
  }
  plVar5 = (long *)FUN_054f73b4(uVar10,0);
  if (plVar5 == (long *)0x0) {
LAB_03a3c634:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = (**(code **)(*plVar5 + 0x328))();
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_06a0f358;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_054f73b4(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x24);
    }
    plVar5 = (long *)FUN_05529ba8(uVar10);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
    goto LAB_03a3c16c;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_03a3c634;
  uVar4 = (**(code **)(*unaff_x20 + 0x448))();
  if ((uVar4 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x4c8))();
    uVar11 = *(undefined8 *)PTR_DAT_06a0a830;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_054f73b4(uVar11,0);
    uVar4 = FUN_055006dc(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = (**(code **)(*unaff_x20 + 0x4e8))();
      if (lVar6 == 0) goto LAB_03a3c634;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_03a3c638:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar5);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_06a0f360;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar8 = (long *)FUN_054f73b4(uVar10,0);
      plVar7 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
      if (plVar7 == (long *)0x0) goto LAB_03a3c634;
      if ((plVar5 != (long *)0x0) &&
         (lVar6 = thunk_FUN_02dd3048(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
        uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_03a3c638;
      plVar7[4] = (long)plVar5;
      LeanTween__value(plVar7 + 4,plVar5);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x9c8))
                                     (plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x9d0)),
         plVar8 == (long *)0x0)) goto LAB_03a3c634;
      uVar4 = (**(code **)(*plVar8 + 0x328))(plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x330));
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_06a0f378;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar10 = FUN_054f73b4(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x24);
        }
        goto LAB_03a3c568;
      }
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x658))();
  if ((uVar4 & 1) == 0) goto LAB_03a3c5c8;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_0551c7b0();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_05502f90(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_03a3c518;
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_06a0f388;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_06a0f370;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_06a0f350;
    }
  }
  else {
LAB_03a3c518:
    if (uVar3 != 5) {
LAB_03a3c5c8:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      plVar5 = (long *)thunk_FUN_02dd3144();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      FUN_043d6f60(plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_06a0f380;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_054f73b4(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
LAB_03a3c568:
  uVar10 = FUN_05529ba8(uVar10);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18(lVar6);
  }
  plVar5 = (long *)FUN_02979eb8(uVar10,lVar6);
  return plVar5;
}


