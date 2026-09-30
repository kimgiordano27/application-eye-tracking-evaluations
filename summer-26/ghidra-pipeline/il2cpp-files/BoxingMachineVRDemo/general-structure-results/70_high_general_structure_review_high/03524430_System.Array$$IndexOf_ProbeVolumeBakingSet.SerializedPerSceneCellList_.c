/*
FUNCTION_NAME: System.Array$$IndexOf<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03524430
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035248c8) */

void System_Array__IndexOf<ProbeVolumeBakingSet_SerializedPerSceneCellList>(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  int *piVar15;
  uint unaff_w19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  void *__s;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  __s = (void *)((long)unaff_x23 - in_x9);
  memset(__s,0,unaff_x21);
  if (unaff_x26 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar9 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06764078);
    FUN_04f77010(uVar9,uVar6,0);
    goto LAB_035249e4;
  }
  iVar1 = thunk_FUN_02d6ffd8();
  if (iVar1 == 1) {
    iVar1 = thunk_FUN_02d6ff94();
    if (iVar1 == 0) {
      if ((int)unaff_w19 < 0) {
        thunk_FUN_02dc61f4(PTR_DAT_06764080);
        uVar9 = thunk_FUN_02d9d534();
        uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0675e7b8);
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06767918);
        FUN_04f7a804(uVar9,uVar6,uVar7,0);
        goto LAB_035249e4;
      }
      iVar1 = FUN_0501f6a4();
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = **(long **)(unaff_x20 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02d9a2e0(lVar10);
      }
      lVar11 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar10) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_035244f8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_035244f8:
      iVar2 = (*(code *)*puVar3)();
      puVar8 = PTR_DAT_06767eb8;
      if (iVar2 <= (int)(iVar1 - unaff_w19)) {
        plVar4 = (long *)thunk_FUN_02d9d438();
        if (plVar4 == (long *)0x0) {
          lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            FUN_02d9a2e0(lVar10);
          }
          lVar10 = thunk_FUN_02d9d438();
          if (lVar10 == 0) {
            plVar4 = (long *)thunk_FUN_02d9d438();
            if (plVar4 != (long *)0x0) {
              lVar10 = *(long *)(unaff_x20 + 0x38);
              *(long *)(unaff_x29 + -0x18) = unaff_x20;
              lVar10 = *(long *)(lVar10 + 0x20);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_02d9a2e0(lVar10);
              }
              lVar11 = *unaff_x25;
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar10) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_035246e8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_035246e8:
              plVar5 = (long *)(*(code *)*puVar3)();
              puVar8 = PTR_DAT_0675f3d8;
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              do {
                lVar10 = *plVar5;
                uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
                      lVar11 = *(long *)(unaff_x29 + -0x18);
                      puVar3 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_03524758;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                lVar11 = *(long *)(unaff_x29 + -0x18);
                puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar8,0);
LAB_03524758:
                uVar14 = (*(code *)*puVar3)(plVar5,puVar3[1]);
                if ((uVar14 & 1) == 0) {
                  if (plVar5 == (long *)0x0) goto LAB_035246a8;
                  lVar10 = *plVar5;
                  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar14 == 0) goto LAB_0352489c;
                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  goto LAB_03524884;
                }
                lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x30);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_02d9a2e0(lVar10);
                }
                lVar13 = *plVar5;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar10) {
                      lVar10 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
                      goto LAB_035247cc;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                lVar10 = FUN_02d9a5d4(plVar5,lVar10,0);
LAB_035247cc:
                *(void **)(unaff_x29 + -0x10) = unaff_x22;
                lVar10 = *(long *)(lVar10 + 8);
                (**(code **)(lVar10 + 0x10))
                          (*(undefined8 *)(lVar10 + 8),lVar10,plVar5,unaff_x29 + -0x10);
                memcpy(__s,unaff_x22,unaff_x21);
                memcpy(unaff_x23,__s,unaff_x21);
                lVar10 = thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x40));
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar11 == 0
                   )) {
                  uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                  FUN_02d609b4(uVar6,0);
                }
                if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                lVar11 = (long)(int)unaff_w19;
                plVar4[lVar11 + 4] = lVar10;
                unaff_w19 = unaff_w19 + 1;
                thunk_FUN_02dd37b4(plVar4 + lVar11 + 4,lVar10);
              } while( true );
            }
            thunk_FUN_02dc61f4(PTR_DAT_06763b78);
            uVar9 = thunk_FUN_02d9d534();
            puVar8 = PTR_DAT_06768c90;
            goto LAB_035249d0;
          }
          lVar10 = **(long **)(unaff_x20 + 0x38);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_02d9a2e0(lVar10);
          }
          lVar11 = *unaff_x25;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                puVar3 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                goto LAB_03524694;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_03524694:
          pcVar12 = (code *)*puVar3;
        }
        else {
          lVar10 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
                puVar3 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_035245fc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar8,0);
LAB_035245fc:
          pcVar12 = (code *)*puVar3;
        }
        (*pcVar12)();
LAB_035246a8:
        if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar9 = thunk_FUN_02d9d534();
      puVar8 = PTR_DAT_06768c88;
    }
    else {
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar9 = thunk_FUN_02d9d534();
      puVar8 = PTR_DAT_06768c80;
    }
  }
  else {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar9 = thunk_FUN_02d9d534();
    puVar8 = PTR_DAT_06768c78;
  }
LAB_035249d0:
  uVar6 = thunk_FUN_02dc61f4(puVar8);
  FUN_04f7d8e0(uVar9,uVar6,0);
LAB_035249e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar9,unaff_x20);
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_03524884:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_035248b8;
    }
  }
LAB_0352489c:
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_035248b8:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  goto LAB_035246a8;
}


