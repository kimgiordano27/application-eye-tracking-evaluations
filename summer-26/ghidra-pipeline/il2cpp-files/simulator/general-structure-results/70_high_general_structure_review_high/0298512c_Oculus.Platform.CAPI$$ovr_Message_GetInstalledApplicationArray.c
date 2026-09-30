/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetInstalledApplicationArray
ENTRY_POINT: 0298512c
PROGRAM: simulator-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02985c34) */
/* WARNING: Removing unreachable block (ram,0x029855c4) */
/* WARNING: Removing unreachable block (ram,0x02985b98) */
/* WARNING: Removing unreachable block (ram,0x029857e0) */
/* WARNING: Removing unreachable block (ram,0x02985ba0) */

void Oculus_Platform_CAPI__ovr_Message_GetInstalledApplicationArray(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  FUN_018c48dc();
  FUN_018c48dc(PTR_DAT_0349d180);
  FUN_018c48dc(PTR_DAT_03497240);
  FUN_018c48dc(PTR_DAT_03497250);
  FUN_018c48dc(PTR_DAT_0349d000);
  FUN_018c48dc(PTR_DAT_0349d1a0);
  FUN_018c48dc(PTR_DAT_0349d5b0);
  *(undefined1 *)(unaff_x21 + 0x7f0) = 1;
  puVar2 = PTR_DAT_03497240;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_018c4afc();
  }
  plVar6 = (long *)(**(code **)(*unaff_x19 + 0x368))();
  puVar5 = PTR_DAT_0349d1a0;
  puVar4 = PTR_DAT_0349d000;
  puVar3 = PTR_DAT_03497250;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_018c4afc();
  }
LAB_029851c0:
  lVar14 = *plVar6;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_0298520c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_018a8460(plVar6,*(long *)puVar3,0);
LAB_0298520c:
  uVar15 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar15 & 1) != 0) {
    lVar14 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0298526c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_018a8460(plVar6,*(long *)puVar3,1);
LAB_0298526c:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 != (long *)0x0) goto code_r0x02985280;
    if ((unaff_x20 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    goto LAB_029852dc;
  }
  plVar6 = (long *)thunk_FUN_018af234(plVar6,*(undefined8 *)puVar2);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar14 = *plVar6;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 == 0) goto LAB_02985a44;
  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
  goto LAB_02985a2c;
code_r0x02985280:
  bVar1 = *(byte *)(*(long *)PTR_DAT_034a6600 + 0x130);
  if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_034a6600)) {
                    /* WARNING: Subroutine does not return */
    FUN_018c4e7c(plVar8);
  }
  if (((unaff_x20 & 1) == 0) ||
     (uVar15 = FUN_027f5598(plVar8[5],*(undefined8 *)PTR_DAT_0349d5b0,0), (uVar15 & 1) == 0)) {
LAB_029852dc:
    lVar14 = *(long *)puVar5;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_018cd5b0();
      lVar14 = *(long *)puVar5;
    }
    if (*(char *)(*(long *)(lVar14 + 0xb8) + 0x19) == '\0') {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
    }
    else {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
      uVar15 = thunk_FUN_028007d4(plVar8[5],*(undefined8 *)PTR_DAT_0349d5b0,0);
      if ((uVar15 & 1) != 0) goto LAB_029851c0;
    }
    if (plVar8[2] != 0) {
      lVar14 = *(long *)puVar5;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_018cd5b0();
        lVar14 = *(long *)puVar5;
      }
      plVar9 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x298))
                                 (plVar9,plVar8[2],*(undefined8 *)(*plVar9 + 0x2a0));
      if (plVar9 == (long *)0x0) {
        lVar14 = plVar8[2];
        uVar12 = thunk_FUN_018ddffc(PTR_DAT_034a6618);
        uVar13 = thunk_FUN_018ddffc(PTR_DAT_0349d398);
        uVar12 = FUN_02800fac(uVar12,lVar14,uVar13,0);
        thunk_FUN_018ddffc(PTR_DAT_0349d098);
        uVar13 = thunk_FUN_018af330();
        FUN_0282710c(uVar13,uVar12,0);
        uVar12 = thunk_FUN_018ddffc(PTR_DAT_034a6610);
                    /* WARNING: Subroutine does not return */
        FUN_018c49d0(uVar13,uVar12);
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_034a6600 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_034a6600))
      {
                    /* WARNING: Subroutine does not return */
        FUN_018c4e7c(plVar9);
      }
      FUN_02825fbc(plVar8,plVar9,0);
    }
    plVar9 = (long *)FUN_02825e90(plVar8,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
LAB_029853d4:
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02985420;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_018a8460(plVar9,*(long *)puVar3,0);
LAB_02985420:
    uVar15 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    if ((uVar15 & 1) != 0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_02985480;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_018a8460(plVar9,*(long *)puVar3,1);
LAB_02985480:
      plVar10 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4e7c(plVar10);
      }
      if (plVar10[2] != 0) {
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_018cd5b0();
          lVar14 = *(long *)puVar5;
        }
        plVar11 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x50);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4afc();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x298))
                                    (plVar11,plVar10[2],*(undefined8 *)(*plVar11 + 0x2a0));
        if (plVar11 == (long *)0x0) {
          lVar14 = plVar10[2];
          uVar12 = thunk_FUN_018ddffc(PTR_DAT_034a6608);
          uVar13 = thunk_FUN_018ddffc(PTR_DAT_0349d398);
          uVar12 = FUN_02800fac(uVar12,lVar14,uVar13,0);
          thunk_FUN_018ddffc(PTR_DAT_0349d098);
          uVar13 = thunk_FUN_018af330();
          FUN_0282710c(uVar13,uVar12,0);
          uVar12 = thunk_FUN_018ddffc(PTR_DAT_034a6610);
                    /* WARNING: Subroutine does not return */
          FUN_018c49d0(uVar13,uVar12);
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4e7c(plVar11);
        }
        FUN_02826954(plVar10,plVar11,0);
      }
      goto LAB_029853d4;
    }
    plVar9 = (long *)thunk_FUN_018af234(plVar9,*(undefined8 *)puVar2);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_029855ac;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_018a8460(plVar9,*(long *)puVar2,0);
LAB_029855ac:
      (*(code *)*puVar7)(plVar9,puVar7[1]);
    }
    plVar9 = (long *)FUN_02825ef4(plVar8,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
LAB_029855f0:
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0298563c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_018a8460(plVar9,*(long *)puVar3,0);
LAB_0298563c:
    uVar15 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    if ((uVar15 & 1) != 0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0298569c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_018a8460(plVar9,*(long *)puVar3,1);
LAB_0298569c:
      plVar10 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4e7c(plVar10);
      }
      if (plVar10[2] != 0) {
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_018cd5b0();
          lVar14 = *(long *)puVar5;
        }
        plVar11 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4afc();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x298))
                                    (plVar11,plVar10[2],*(undefined8 *)(*plVar11 + 0x2a0));
        if (plVar11 == (long *)0x0) {
          lVar14 = plVar10[2];
          uVar12 = thunk_FUN_018ddffc(PTR_DAT_034a6608);
          uVar13 = thunk_FUN_018ddffc(PTR_DAT_0349d398);
          uVar12 = FUN_02800fac(uVar12,lVar14,uVar13,0);
          thunk_FUN_018ddffc(PTR_DAT_0349d098);
          uVar13 = thunk_FUN_018af330();
          FUN_0282710c(uVar13,uVar12,0);
          uVar12 = thunk_FUN_018ddffc(PTR_DAT_034a6610);
                    /* WARNING: Subroutine does not return */
          FUN_018c49d0(uVar13,uVar12);
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4e7c(plVar11);
        }
        FUN_02826954(plVar10,plVar11,0);
      }
      goto LAB_029855f0;
    }
    plVar9 = (long *)thunk_FUN_018af234(plVar9,*(undefined8 *)puVar2);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_029857c8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_018a8460(plVar9,*(long *)puVar2,0);
LAB_029857c8:
      (*(code *)*puVar7)(plVar9,puVar7[1]);
    }
    if (*(int *)(*(long *)PTR_DAT_0349d180 + 0xe0) == 0) {
      thunk_FUN_018cd5b0();
    }
    FUN_02838dd0(plVar8,0);
  }
  goto LAB_029851c0;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_02985a2c:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionsChangedNotification;
    }
  }
LAB_02985a44:
  puVar7 = (undefined8 *)FUN_018a8460(plVar6,*(long *)puVar2,0);
Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionsChangedNotification:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


