/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 0511c98c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511d24c) */
/* WARNING: Removing unreachable block (ram,0x0511ce20) */
/* WARNING: Removing unreachable block (ram,0x0511d2b8) */
/* WARNING: Removing unreachable block (ram,0x0511d2ac) */

void OVRManager__get_gpuUtilSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 *unaff_x22;
  long lVar13;
  long unaff_x24;
  undefined8 *puVar14;
  long lVar15;
  long *unaff_x25;
  long unaff_x27;
  undefined8 *puVar16;
  long unaff_x28;
  undefined8 *puVar17;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined2 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  puVar3 = PTR_DAT_06780b38;
  puVar1 = PTR_DAT_06780b18;
  puVar2 = PTR_DAT_06776058;
  puVar16 = *(undefined8 **)(unaff_x27 + 800);
  puVar17 = *(undefined8 **)(unaff_x28 + 0xcc0);
  puVar14 = *(undefined8 **)(unaff_x24 + 0xc80);
  FUN_05126684();
  FUN_05126684();
  FUN_05126a14();
  in_stack_00000050 = *(undefined8 *)(unaff_x20 + 0x60);
  in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*puVar16,&stack0x00000050);
  FUN_051260f4(uVar6,uVar12,*puVar17,uVar6);
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x70);
  in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*puVar16,&stack0x00000040);
  FUN_051260f4(uVar6,uVar12,*puVar14,uVar6);
  uStack000000000000003c = *(undefined2 *)(unaff_x20 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*unaff_x22,&stack0x0000003c);
  FUN_051260f4(uVar6,uVar12,*(undefined8 *)puVar1,uVar6);
  in_stack_00000038 = *(undefined2 *)(unaff_x20 + 0x82);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*unaff_x22,&stack0x00000038);
  FUN_051260f4(uVar6,uVar12,*(undefined8 *)puVar3,uVar6);
  in_stack_00000030 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000030);
  FUN_051260f4(uVar6,uVar12,*(undefined8 *)PTR_DAT_06780b10,uVar6);
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000028);
  FUN_051260f4(uVar6,uVar12,*(undefined8 *)PTR_DAT_0676aea0,uVar6);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x84);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000020);
  FUN_051260f4(uVar6,uVar12,*(undefined8 *)PTR_DAT_06780b00,uVar6);
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x8c);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000018);
  FUN_051260f4(uVar6,uVar12,*(undefined8 *)PTR_DAT_06780b58,uVar6);
  in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x50);
  in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*puVar16,&stack0x00000008);
  uVar6 = FUN_051260f4(uVar6,uVar12,*(undefined8 *)PTR_DAT_06780af0,uVar6);
  uVar6 = FUN_051260f4(uVar6,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06771088,
                       *(undefined8 *)(unaff_x20 + 0x100));
  uVar6 = FUN_051260f4(uVar6,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06780b48,
                       *(undefined8 *)(unaff_x20 + 0x38));
  puVar2 = PTR_DAT_06780ab8;
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    plVar7 = (long *)*unaff_x25;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x5d8))
                (plVar7,*(undefined8 *)PTR_DAT_06780af8,*(undefined8 *)(*plVar7 + 0x5e0));
      plVar7 = (long *)*unaff_x25;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0));
        plVar7 = *(long **)(unaff_x20 + 0xe0);
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06780ac0) {
                puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0511cc50;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06780ac0,0);
LAB_0511cc50:
          plVar7 = (long *)(*(code *)*puVar14)(plVar7,puVar14[1]);
          puVar4 = PTR_DAT_0677eca8;
          puVar3 = PTR_DAT_0676aab8;
          puVar1 = PTR_DAT_0675f3d8;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          do {
            lVar9 = *plVar7;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0511ccc8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_0511ccc8:
            uVar10 = (*(code *)*puVar14)(plVar7,puVar14[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar7 == (long *)0x0) goto LAB_0511ce14;
              lVar9 = *plVar7;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_0511cdec;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_0511cdd4;
            }
            lVar9 = *plVar7;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                  puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0511cd24;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_0511cd24:
            plVar8 = (long *)(*(code *)*puVar14)(plVar7,puVar14[1]);
            lVar15 = *(long *)puVar4;
            lVar13 = *unaff_x25;
            lVar9 = *(long *)(lVar15 + 0x38);
            if (lVar9 == 0) {
              FUN_02d9a33c(lVar15);
              lVar9 = *(long *)(lVar15 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02d9a2e0();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02d9a2e0();
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,lVar13,**(undefined8 **)(lVar9 + 0xb8),
                       *(undefined8 *)(*plVar8 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_0511d2a4;
  }
  goto LAB_0511ce3c;
LAB_0511d1d4:
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar14)(plVar7,puVar14[1]);
  }
  plVar7 = (long *)*unaff_x25;
  if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,*(undefined8 *)(*plVar7 + 0x5b0));
  goto LAB_0511d268;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0511cdd4:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0511ce08;
    }
  }
LAB_0511cdec:
  puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511ce08:
  (*(code *)*puVar14)(plVar7,puVar14[1]);
LAB_0511ce14:
  plVar7 = (long *)*unaff_x25;
  if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
  uVar6 = (**(code **)(*plVar7 + 0x5a8))(plVar7,*(undefined8 *)(*plVar7 + 0x5b0));
LAB_0511ce3c:
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar7 = (long *)*unaff_x25;
    if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar7 + 0x5d8))
              (plVar7,*(undefined8 *)PTR_DAT_0676a770,*(undefined8 *)(*plVar7 + 0x5e0));
    plVar7 = *(long **)(unaff_x20 + 0xf0);
    lVar13 = *unaff_x25;
    lVar15 = *(long *)PTR_DAT_0677eca8;
    lVar9 = *(long *)(lVar15 + 0x38);
    if (lVar9 == 0) {
      FUN_02d9a33c(lVar15);
      lVar9 = *(long *)(lVar15 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d9a2e0();
    }
    if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
    uVar6 = (**(code **)(*plVar7 + 0x2b8))
                      (plVar7,lVar13,**(undefined8 **)(lVar9 + 0xb8),
                       *(undefined8 *)(*plVar7 + 0x2c0));
  }
  if ((*(ulong *)(unaff_x20 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar6,*(undefined8 *)PTR_DAT_06780b20,*unaff_x25,
                 *(ulong *)(unaff_x20 + 0xe8) >> 0x20);
  }
  plVar7 = *(long **)(unaff_x20 + 0xf8);
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar7;
    lVar9 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar9,0);
LAB_0511cf5c:
    iVar5 = (*(code *)*puVar14)(plVar7,puVar14[1]);
    if (0 < iVar5) {
      plVar7 = (long *)*unaff_x25;
      if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar7 + 0x5d8))
                (plVar7,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar7 + 0x5e0));
      plVar7 = *(long **)(unaff_x20 + 0xf8);
      if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
      lVar13 = *plVar7;
      lVar9 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar14 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar9,0);
LAB_0511cfe8:
      iVar5 = (*(code *)*puVar14)(plVar7,puVar14[1]);
      if (iVar5 != 1) {
        plVar7 = (long *)*unaff_x25;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0));
          plVar7 = *(long **)(unaff_x20 + 0xf8);
          if (plVar7 != (long *)0x0) {
            lVar9 = *plVar7;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar7 = (long *)(*(code *)*puVar14)(plVar7,puVar14[1]);
            puVar1 = PTR_DAT_06780ad0;
            puVar2 = PTR_DAT_0675f3d8;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar9 = *plVar7;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_0511d15c:
              uVar10 = (*(code *)*puVar14)(plVar7,puVar14[1]);
              if ((uVar10 & 1) == 0) goto LAB_0511d1d4;
              lVar9 = *plVar7;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                    puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_0511d1b8:
              (*(code *)*puVar14)(plVar7,puVar14[1]);
              FUN_05126010();
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar7 = *(long **)(unaff_x20 + 0xf8);
      if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar14 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      (*(code *)*puVar14)(plVar7,0,puVar14[1]);
      FUN_05126010();
    }
  }
LAB_0511d268:
  plVar7 = (long *)*unaff_x25;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x588))(plVar7,*(undefined8 *)(*plVar7 + 0x590));
    return;
  }
LAB_0511d2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


