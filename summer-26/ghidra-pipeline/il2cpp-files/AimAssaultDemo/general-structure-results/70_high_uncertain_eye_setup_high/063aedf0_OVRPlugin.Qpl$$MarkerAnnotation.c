/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 063aedf0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063af91c) */
/* WARNING: Removing unreachable block (ram,0x063af9ec) */

void OVRPlugin_Qpl__MarkerAnnotation(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  int *piVar16;
  long unaff_x19;
  long *plVar17;
  long *unaff_x20;
  long lVar18;
  long unaff_x21;
  long *plVar19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_0373b518(PTR_DAT_07db6f70);
  FUN_0373b518(PTR_DAT_07db6f80);
  FUN_0373b518(PTR_DAT_07db6fc8);
  FUN_0373b518(PTR_DAT_07db6f88);
  FUN_0373b518(PTR_DAT_07db6f90);
  FUN_0373b518(PTR_DAT_07db6f98);
  FUN_0373b518(PTR_DAT_07db6fd0);
  FUN_0373b518(PTR_DAT_07d867b8);
  FUN_0373b518(PTR_DAT_07d89e28);
  FUN_0373b518(PTR_DAT_07d88078);
  FUN_0373b518(PTR_DAT_07d95b58);
  FUN_0373b518(PTR_DAT_07db2100);
  FUN_0373b518(PTR_DAT_07d89f60);
  FUN_0373b518(PTR_DAT_07d896f8);
  FUN_0373b518(PTR_DAT_07db6fa0);
  FUN_0373b518(PTR_DAT_07db6fa8);
  FUN_0373b518(PTR_DAT_07d89700);
  FUN_0373b518(PTR_DAT_07d95cc8);
  *(undefined1 *)(unaff_x21 + 0x6be) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_x20 == (long *)0x0) goto LAB_063af9d4;
  uVar6 = (**(code **)(*unaff_x20 + 0x178))();
  puVar5 = PTR_DAT_07db6fc8;
  puVar4 = PTR_DAT_07d95b58;
  puVar3 = PTR_DAT_07d89f60;
  puVar2 = PTR_DAT_07d86548;
  switch(uVar6) {
  case 1:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6fd0 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6fd0)
       ) goto LAB_063af9d8;
    plVar17 = *(long **)(unaff_x19 + 0x10);
    lVar18 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar10 = FUN_061d52c8(0);
    if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
    }
    FUN_061b5284(lVar18,uVar10,0);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x228))(plVar17,*(undefined8 *)(*plVar17 + 0x230));
      return;
    }
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f98 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07db6f98)
       ) {
      plVar17 = (long *)unaff_x20[4];
      in_stack_00000008 = 0;
      FUN_04e5efe4(&stack0x00000008,(int)unaff_x20[3] + -4,*(undefined8 *)PTR_DAT_07d95cc8);
      if ((plVar17 == (long *)0x0) || (*plVar17 == *(long *)(PTR_DAT_07d86548 + 0x90))) {
LAB_063af3f0:
        FUN_063afd0c();
        return;
      }
LAB_063afad4:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar17);
    }
LAB_063af9d8:
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  case 3:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f88 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f88)
       ) goto LAB_063af9d8;
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 600))(plVar17,(int)unaff_x20[3],*(undefined8 *)(*plVar17 + 0x260));
      plVar17 = (long *)FUN_063afc7c();
      puVar4 = PTR_DAT_07db6fa8;
      puVar3 = PTR_DAT_07d89700;
      puVar2 = PTR_DAT_07d86548;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_063af4bc;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar17,*(long *)puVar3,0);
LAB_063af4bc:
        uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar17 == (long *)0x0) goto FUN_063af920;
          lVar18 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 == 0) goto LAB_063af814;
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_063af7fc;
        }
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_063af518;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar17,*(long *)puVar4,0);
LAB_063af518:
        lVar18 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar9 = *(long **)(lVar18 + 0x18);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar19 = *(long **)(unaff_x19 + 0x10);
        uVar14 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4(uVar14,uVar14 & 0xffffffff);
        }
        (**(code **)(*plVar19 + 0x1d8))
                  (plVar19,uVar14 & 0xffffffff,*(undefined8 *)(*plVar19 + 0x1e0));
        lVar18 = *(long *)(lVar18 + 0x10);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar9 = *(long **)(lVar18 + 0x20);
        if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar9,*(long *)(puVar2 + 0x90),*(undefined4 *)(lVar18 + 0x2c));
        }
        FUN_063afd0c();
        FUN_063aedc8();
      } while( true );
    }
    break;
  case 4:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f70 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f70)
       ) goto LAB_063af9d8;
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 600))(plVar17,(int)unaff_x20[3],*(undefined8 *)(*plVar17 + 0x260));
      in_stack_00000028 = 0;
      plVar17 = (long *)FUN_063afdb0();
      puVar4 = PTR_DAT_07db6fa0;
      puVar3 = PTR_DAT_07d89700;
      puVar2 = PTR_DAT_07d88078;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto FUN_063af6cc;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar17,*(long *)puVar3,0);
FUN_063af6cc:
        uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar17 == (long *)0x0) goto FUN_063af920;
          lVar18 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 == 0) goto LAB_063af868;
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_063af850;
        }
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_063af728;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar17,*(long *)puVar4,0);
LAB_063af728:
        plVar9 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar19 = *(long **)(unaff_x19 + 0x10);
        uVar14 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4(uVar14,uVar14 & 0xffffffff);
        }
        (**(code **)(*plVar19 + 0x1d8))
                  (plVar19,uVar14 & 0xffffffff,*(undefined8 *)(*plVar19 + 0x1e0));
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar10 = FUN_061d52c8(0);
        FUN_06260640(&stack0x00000028,uVar10,0);
        FUN_0632e3c8(in_stack_00000028,0);
        FUN_063afd0c();
        FUN_063aedc8();
        in_stack_00000028 = in_stack_00000028 + 1;
      } while( true );
    }
    break;
  case 5:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f80 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f80)
       ) goto LAB_063af9d8;
    lVar13 = unaff_x20[4];
    if (lVar13 == 0) break;
    uVar10 = *(undefined8 *)PTR_DAT_07d867b8;
    lVar18 = thunk_FUN_037787d0(lVar13,uVar10);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar13,uVar10);
    }
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 == (long *)0x0) break;
    (**(code **)(*plVar17 + 600))
              (plVar17,*(undefined4 *)(lVar18 + 0x18),*(undefined8 *)(*plVar17 + 0x260));
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 == (long *)0x0) break;
    (**(code **)(*plVar17 + 0x1c8))
              (plVar17,*(undefined1 *)((long)unaff_x20 + 0x29),*(undefined8 *)(*plVar17 + 0x1d0));
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
    goto LAB_063af888;
  case 6:
  case 10:
    return;
  case 7:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6fd0 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6fd0)
       ) goto LAB_063af9d8;
    lVar13 = unaff_x20[4];
    if (lVar13 == 0) {
      lVar18 = 0;
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_07d867b8;
      lVar18 = thunk_FUN_037787d0(lVar13,uVar10);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(lVar13,uVar10);
      }
    }
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
LAB_063af888:
    pcVar15 = *(code **)(lVar13 + 0x1e8);
    uVar10 = *(undefined8 *)(lVar13 + 0x1f0);
LAB_063af9a0:
    (*pcVar15)(plVar17,lVar18,uVar10);
    return;
  case 8:
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_07db6fc8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x1b8))
                (plVar17,unaff_x20 == *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8),
                 *(undefined8 *)(*plVar17 + 0x1c0));
      return;
    }
    break;
  case 9:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6fd0 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6fd0)
       ) goto LAB_063af9d8;
    plVar17 = (long *)unaff_x20[4];
    if (plVar17 == (long *)0x0) break;
    if (*plVar17 == *(long *)PTR_DAT_07d89f60) {
      puVar8 = (undefined8 *)thunk_FUN_03778a20();
      uVar10 = *puVar8;
      in_stack_00000020 = uVar10;
      if (*(int *)(unaff_x19 + 0x20) == 2) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar10 = FUN_06224e04(&stack0x00000020,0);
      }
      else if (*(int *)(unaff_x19 + 0x20) == 1) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar10 = FUN_06225390(&stack0x00000020,0);
      }
      in_stack_00000020 = uVar10;
      if (*(int *)(*(long *)PTR_DAT_07db2100 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar18 = FUN_06322e4c(uVar10,0,0);
    }
    else {
      if (*(long *)(*plVar17 + 0x40) != *(long *)(*(long *)PTR_DAT_07d95b58 + 0x40))
      goto LAB_063afad4;
      puVar8 = (undefined8 *)thunk_FUN_03778a20();
      in_stack_00000018 = puVar8[1];
      in_stack_00000010 = *puVar8;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_062272e0(&stack0x00000010,0);
      uVar11 = FUN_06227470(&stack0x00000010,0);
      if (*(int *)(*(long *)PTR_DAT_07db2100 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07db2100);
      }
      lVar18 = FUN_06322d10(uVar10,uVar11,0);
    }
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
    goto LAB_063af998;
  case 0xb:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f90 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f90)
       ) goto LAB_063af9d8;
    lVar18 = unaff_x20[4];
    if (lVar18 != 0) {
      plVar17 = *(long **)(lVar18 + 0x20);
      uVar7 = *(undefined4 *)(lVar18 + 0x2c);
      if ((plVar17 == (long *)0x0) ||
         (lVar18 = *(long *)(PTR_DAT_07d86548 + 0x90), *plVar17 == lVar18)) {
        FUN_063afd0c();
        lVar18 = unaff_x20[5];
        if (lVar18 == 0) break;
        plVar17 = *(long **)(lVar18 + 0x20);
        uVar7 = *(undefined4 *)(lVar18 + 0x2c);
        if ((plVar17 == (long *)0x0) || (lVar18 = *(long *)(puVar2 + 0x90), *plVar17 == lVar18))
        goto LAB_063af3f0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar17,lVar18,uVar7);
    }
    break;
  default:
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar10 = FUN_061d52c8(0);
    FUN_031a5e18();
    uVar6 = (**(code **)(*unaff_x20 + 0x178))();
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar6);
    uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6fb0);
    uVar11 = thunk_FUN_037784fc(uVar11,&stack0x00000008);
    uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db6fb8);
    uVar10 = FUN_063349e4(uVar12,uVar10,uVar11,0);
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar11 = thunk_FUN_037788cc();
    uVar12 = thunk_FUN_037a15ac(PTR_DAT_07d98ee8);
    FUN_061a5334(uVar11,uVar12,uVar10,0);
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6fd8);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar11,uVar10);
  case 0x10:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6fd0 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6fd0)
       ) goto LAB_063af9d8;
    plVar17 = *(long **)(unaff_x19 + 0x10);
    lVar18 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar10 = FUN_061d52c8(0);
    if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
    }
    uVar7 = FUN_061b3af4(lVar18,uVar10,0);
    if (plVar17 == (long *)0x0) break;
    pcVar15 = *(code **)(*plVar17 + 600);
    uVar10 = *(undefined8 *)(*plVar17 + 0x260);
    goto LAB_063af934;
  case 0x12:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6fd0 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6fd0)
       ) goto LAB_063af9d8;
    plVar17 = *(long **)(unaff_x19 + 0x10);
    lVar18 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar10 = FUN_061d52c8(0);
    if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
    }
    lVar18 = FUN_061b44a8(lVar18,uVar10,0);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
LAB_063af998:
    pcVar15 = *(code **)(lVar13 + 0x278);
    uVar10 = *(undefined8 *)(lVar13 + 0x280);
    goto LAB_063af9a0;
  }
  goto LAB_063af9d4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_063af850:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_063af904;
    }
  }
LAB_063af868:
  puVar8 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d896f8,0);
LAB_063af904:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
  goto FUN_063af920;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_063af7fc:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_063af8dc;
    }
  }
LAB_063af814:
  puVar8 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d896f8,0);
LAB_063af8dc:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
FUN_063af920:
  plVar17 = *(long **)(unaff_x19 + 0x10);
  if (plVar17 != (long *)0x0) {
    uVar7 = 0;
    pcVar15 = *(code **)(*plVar17 + 0x1c8);
    uVar10 = *(undefined8 *)(*plVar17 + 0x1d0);
LAB_063af934:
    (*pcVar15)(plVar17,uVar7,uVar10);
    return;
  }
LAB_063af9d4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


