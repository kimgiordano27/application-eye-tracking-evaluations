/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$ReadDelta
ENTRY_POINT: 03a3bfbc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__ReadDelta(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a0f358);
  FUN_02d965b8(PTR_DAT_06a0f360);
  FUN_02d965b8(PTR_DAT_06a0f368);
  FUN_02d965b8(PTR_DAT_06a0f370);
  FUN_02d965b8(PTR_DAT_06a0f378);
  FUN_02d965b8(PTR_DAT_06a0a830);
  FUN_02d965b8(PTR_DAT_06a0d350);
  FUN_02d965b8(PTR_DAT_06a0f380);
  FUN_02d965b8(PTR_DAT_06a0f388);
  FUN_02d965b8(PTR_DAT_069fc720);
  *(undefined1 *)(unaff_x20 + 0xb68) = 1;
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
  puVar3 = PTR_DAT_069fb9c0;
  uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  puVar4 = PTR_DAT_06a0d350;
  plVar7 = (long *)FUN_054f73b4(uVar13,0);
  if (plVar7 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_03a3c62c;
  }
  uVar13 = FUN_054f73b4(*(long *)(puVar3 + 0x18) + 0x20,0);
  uVar8 = FUN_055006dc(plVar7,uVar13,0);
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(puVar3 + 0x90);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar13 = FUN_054f73b4(lVar6 + 0x20,0);
    uVar8 = FUN_055006dc(plVar7,uVar13,0);
    if ((uVar8 & 1) != 0) {
      plVar7 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0f368);
      FUN_05498c4c(plVar7,0);
      goto LAB_03a3c154;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(puVar3 + 0xe0));
    }
    plVar11 = (long *)FUN_054f73b4(uVar13,0);
    if (plVar11 == (long *)0x0) {
LAB_03a3c634:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = (**(code **)(*plVar11 + 0x328))(plVar11,plVar7,*(undefined8 *)(*plVar11 + 0x330));
    if ((uVar8 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03a3c634;
      uVar8 = (**(code **)(*plVar7 + 0x448))(plVar7,*(undefined8 *)(*plVar7 + 0x450));
      if ((uVar8 & 1) != 0) {
        uVar13 = (**(code **)(*plVar7 + 0x4c8))(plVar7,*(undefined8 *)(*plVar7 + 0x4d0));
        uVar14 = *(undefined8 *)PTR_DAT_06a0a830;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar3 + 0xe0));
        }
        uVar14 = FUN_054f73b4(uVar14,0);
        uVar8 = FUN_055006dc(uVar13,uVar14,0);
        if ((uVar8 & 1) != 0) {
          lVar6 = (**(code **)(*plVar7 + 0x4e8))(plVar7,*(undefined8 *)(*plVar7 + 0x4f0));
          if (lVar6 == 0) goto LAB_03a3c634;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_03a3c638:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          plVar11 = *(long **)(lVar6 + 0x20);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar11);
            }
          }
          uVar13 = *(undefined8 *)PTR_DAT_06a0f360;
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          plVar9 = (long *)FUN_054f73b4(uVar13,0);
          plVar10 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
          if (plVar10 == (long *)0x0) goto LAB_03a3c634;
          if ((plVar11 != (long *)0x0) &&
             (lVar6 = thunk_FUN_02dd3048(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
            uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar13,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_03a3c638;
          plVar10[4] = (long)plVar11;
          LeanTween__value(plVar10 + 4,plVar11);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x9c8))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x9d0)),
             plVar9 == (long *)0x0)) goto LAB_03a3c634;
          uVar8 = (**(code **)(*plVar9 + 0x328))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x330));
          if ((uVar8 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_06a0f378;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar13 = FUN_054f73b4(uVar13,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar4);
            }
            goto LAB_03a3c568;
          }
        }
      }
      uVar8 = (**(code **)(*plVar7 + 0x658))(plVar7,*(undefined8 *)(*plVar7 + 0x660));
      if ((uVar8 & 1) == 0) goto LAB_03a3c5c8;
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar13 = FUN_0551c7b0(plVar7,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar3 + 0xe0));
      }
      uVar5 = FUN_05502f90(uVar13,0);
      if (uVar5 < 0xd) {
        uVar2 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar5 != 7) goto LAB_03a3c518;
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_06a0f388;
          }
          else {
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_06a0f370;
          }
        }
        else {
          lVar6 = *(long *)(puVar3 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_06a0f350;
        }
      }
      else {
LAB_03a3c518:
        if (uVar5 != 5) {
LAB_03a3c5c8:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02dcfd18();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          plVar7 = (long *)thunk_FUN_02dd3144();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02dcfd18(lVar6);
          }
          FUN_043d6f60(plVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar7;
        }
        lVar6 = *(long *)(puVar3 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_06a0f380;
      }
      uVar13 = *puVar12;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar13 = FUN_054f73b4(uVar13,0);
      plVar11 = plVar7;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar4);
      }
LAB_03a3c568:
      uVar13 = FUN_05529ba8(uVar13,plVar11,0);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      plVar7 = (long *)FUN_02979eb8(uVar13,lVar6);
      return plVar7;
    }
    uVar13 = *(undefined8 *)PTR_DAT_06a0f358;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar13 = FUN_054f73b4(uVar13,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar4);
    }
    plVar7 = (long *)FUN_05529ba8(uVar13,plVar7,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar7 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0f348);
    FUN_05498b4c(plVar7,0);
LAB_03a3c154:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18();
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar11;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18(lVar6);
  }
  if (plVar7 != (long *)0x0) {
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_03a3c62c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar7);
    }
  }
  return plVar7;
}


