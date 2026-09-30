/*
FUNCTION_NAME: OVRManager$$set_tiledMultiResLevel
ENTRY_POINT: 0511c934
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511d24c) */
/* WARNING: Removing unreachable block (ram,0x0511ce20) */
/* WARNING: Removing unreachable block (ram,0x0511d2b8) */
/* WARNING: Removing unreachable block (ram,0x0511d2ac) */

void OVRManager__set_tiledMultiResLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 *unaff_x22;
  long lVar16;
  long lVar17;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 uStack0000000000000038;
  undefined2 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  plVar8 = (long *)*unaff_x25;
  if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar8 + 0x5d8))
            (plVar8,*(undefined8 *)PTR_DAT_06780b08,*(undefined8 *)(*plVar8 + 0x5e0));
  plVar8 = (long *)*unaff_x25;
  if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar8 + 0x708))
            (plVar8,*(undefined1 *)(unaff_x20 + 0xb0),*(undefined8 *)(*plVar8 + 0x710));
  puVar6 = PTR_DAT_06780b38;
  puVar5 = PTR_DAT_06780b18;
  puVar4 = PTR_DAT_0677e320;
  puVar3 = PTR_DAT_06776058;
  puVar1 = PTR_DAT_06769cc0;
  puVar2 = PTR_DAT_06769c80;
  FUN_05126684();
  FUN_05126684();
  FUN_05126a14();
  in_stack_00000050 = *(undefined8 *)(unaff_x20 + 0x60);
  in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000050);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)puVar1,uVar9);
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x70);
  in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000040);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)puVar2,uVar9);
  uStack000000000000003c = *(undefined2 *)(unaff_x20 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*unaff_x22,(long)&stack0x00000038 + 4);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)puVar5,uVar9);
  uStack0000000000000038 = *(undefined2 *)(unaff_x20 + 0x82);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*unaff_x22,&stack0x00000038);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)puVar6,uVar9);
  in_stack_00000030 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000030);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)PTR_DAT_06780b10,uVar9);
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000028);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)PTR_DAT_0676aea0,uVar9);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x84);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000020);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)PTR_DAT_06780b00,uVar9);
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x8c);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000018);
  FUN_051260f4(uVar9,uVar15,*(undefined8 *)PTR_DAT_06780b58,uVar9);
  in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x50);
  in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000008);
  uVar9 = FUN_051260f4(uVar9,uVar15,*(undefined8 *)PTR_DAT_06780af0,uVar9);
  uVar9 = FUN_051260f4(uVar9,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06771088,
                       *(undefined8 *)(unaff_x20 + 0x100));
  uVar9 = FUN_051260f4(uVar9,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06780b48,
                       *(undefined8 *)(unaff_x20 + 0x38));
  puVar2 = PTR_DAT_06780ab8;
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    plVar8 = (long *)*unaff_x25;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x5d8))
                (plVar8,*(undefined8 *)PTR_DAT_06780af8,*(undefined8 *)(*plVar8 + 0x5e0));
      plVar8 = (long *)*unaff_x25;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
        plVar8 = *(long **)(unaff_x20 + 0xe0);
        if (plVar8 != (long *)0x0) {
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06780ac0) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0511cc50;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_06780ac0,0);
LAB_0511cc50:
          plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
          puVar4 = PTR_DAT_0677eca8;
          puVar3 = PTR_DAT_0676aab8;
          puVar1 = PTR_DAT_0675f3d8;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          do {
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0511ccc8;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar1,0);
LAB_0511ccc8:
            uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if ((uVar13 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_0511ce14;
              lVar12 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 == 0) goto LAB_0511cdec;
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              goto LAB_0511cdd4;
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0511cd24;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar3,0);
LAB_0511cd24:
            plVar11 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
            lVar17 = *(long *)puVar4;
            lVar16 = *unaff_x25;
            lVar12 = *(long *)(lVar17 + 0x38);
            if (lVar12 == 0) {
              FUN_02d9a33c(lVar17);
              lVar12 = *(long *)(lVar17 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02d9a2e0();
            }
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02d9a2e0();
            }
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            (**(code **)(*plVar11 + 0x2b8))
                      (plVar11,lVar16,**(undefined8 **)(lVar12 + 0xb8),
                       *(undefined8 *)(*plVar11 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_0511d2a4;
  }
  goto LAB_0511ce3c;
LAB_0511d1d4:
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
  }
  plVar8 = (long *)*unaff_x25;
  if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar8 + 0x5a8))(plVar8,*(undefined8 *)(*plVar8 + 0x5b0));
  goto LAB_0511d268;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0511cdd4:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0511ce08;
    }
  }
LAB_0511cdec:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511ce08:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
LAB_0511ce14:
  plVar8 = (long *)*unaff_x25;
  if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
  uVar9 = (**(code **)(*plVar8 + 0x5a8))(plVar8,*(undefined8 *)(*plVar8 + 0x5b0));
LAB_0511ce3c:
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar8 = (long *)*unaff_x25;
    if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar8 + 0x5d8))
              (plVar8,*(undefined8 *)PTR_DAT_0676a770,*(undefined8 *)(*plVar8 + 0x5e0));
    plVar8 = *(long **)(unaff_x20 + 0xf0);
    lVar16 = *unaff_x25;
    lVar17 = *(long *)PTR_DAT_0677eca8;
    lVar12 = *(long *)(lVar17 + 0x38);
    if (lVar12 == 0) {
      FUN_02d9a33c(lVar17);
      lVar12 = *(long *)(lVar17 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d9a2e0();
    }
    if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
    uVar9 = (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,lVar16,**(undefined8 **)(lVar12 + 0xb8),
                       *(undefined8 *)(*plVar8 + 0x2c0));
  }
  if ((*(ulong *)(unaff_x20 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar9,*(undefined8 *)PTR_DAT_06780b20,*unaff_x25,
                 *(ulong *)(unaff_x20 + 0xe8) >> 0x20);
  }
  plVar8 = *(long **)(unaff_x20 + 0xf8);
  if (plVar8 != (long *)0x0) {
    lVar16 = *plVar8;
    lVar12 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,lVar12,0);
LAB_0511cf5c:
    iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    if (0 < iVar7) {
      plVar8 = (long *)*unaff_x25;
      if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar8 + 0x5d8))
                (plVar8,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar8 + 0x5e0));
      plVar8 = *(long **)(unaff_x20 + 0xf8);
      if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
      lVar16 = *plVar8;
      lVar12 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,lVar12,0);
LAB_0511cfe8:
      iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if (iVar7 != 1) {
        plVar8 = (long *)*unaff_x25;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
          plVar8 = *(long **)(unaff_x20 + 0xf8);
          if (plVar8 != (long *)0x0) {
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
            puVar1 = PTR_DAT_06780ad0;
            puVar2 = PTR_DAT_0675f3d8;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar12 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar2,0);
LAB_0511d15c:
              uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              if ((uVar13 & 1) == 0) goto LAB_0511d1d4;
              lVar12 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar1,0);
LAB_0511d1b8:
              (*(code *)*puVar10)(plVar8,puVar10[1]);
              FUN_05126010();
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar8 = *(long **)(unaff_x20 + 0xf8);
      if (plVar8 == (long *)0x0) goto LAB_0511d2a4;
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      (*(code *)*puVar10)(plVar8,0,puVar10[1]);
      FUN_05126010();
    }
  }
LAB_0511d268:
  plVar8 = (long *)*unaff_x25;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x588))(plVar8,*(undefined8 *)(*plVar8 + 0x590));
    return;
  }
LAB_0511d2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


