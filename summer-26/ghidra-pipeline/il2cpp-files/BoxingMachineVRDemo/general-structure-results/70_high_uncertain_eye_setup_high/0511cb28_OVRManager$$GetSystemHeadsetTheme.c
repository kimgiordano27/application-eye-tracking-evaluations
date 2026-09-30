/*
FUNCTION_NAME: OVRManager$$GetSystemHeadsetTheme
ENTRY_POINT: 0511cb28
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

void OVRManager__GetSystemHeadsetTheme(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
  thunk_FUN_02d9d164();
  FUN_051260f4();
  in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x50);
  in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = thunk_FUN_02d9d164(*unaff_x27,&stack0x00000008);
  uVar6 = FUN_051260f4(uVar6,uVar13,*(undefined8 *)PTR_DAT_06780af0,uVar6);
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
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780ac0) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0511cc50;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06780ac0,0);
LAB_0511cc50:
          plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          puVar4 = PTR_DAT_0677eca8;
          puVar3 = PTR_DAT_0676aab8;
          puVar1 = PTR_DAT_0675f3d8;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          do {
            lVar10 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0511ccc8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_0511ccc8:
            uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
            if ((uVar11 & 1) == 0) {
              if (plVar7 == (long *)0x0) goto LAB_0511ce14;
              lVar10 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 == 0) goto LAB_0511cdec;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_0511cdd4;
            }
            lVar10 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0511cd24;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_0511cd24:
            plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
            lVar15 = *(long *)puVar4;
            lVar14 = *unaff_x25;
            lVar10 = *(long *)(lVar15 + 0x38);
            if (lVar10 == 0) {
              FUN_02d9a33c(lVar15);
              lVar10 = *(long *)(lVar15 + 0x38);
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_02d9a2e0();
            }
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_02d9a2e0();
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            (**(code **)(*plVar9 + 0x2b8))
                      (plVar9,lVar14,**(undefined8 **)(lVar10 + 0xb8),
                       *(undefined8 *)(*plVar9 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_0511d2a4;
  }
  goto LAB_0511ce3c;
LAB_0511d1d4:
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  plVar7 = (long *)*unaff_x25;
  if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,*(undefined8 *)(*plVar7 + 0x5b0));
  goto LAB_0511d268;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0511cdd4:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0511ce08;
    }
  }
LAB_0511cdec:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511ce08:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
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
    lVar14 = *unaff_x25;
    lVar15 = *(long *)PTR_DAT_0677eca8;
    lVar10 = *(long *)(lVar15 + 0x38);
    if (lVar10 == 0) {
      FUN_02d9a33c(lVar15);
      lVar10 = *(long *)(lVar15 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d9a2e0();
    }
    if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
    uVar6 = (**(code **)(*plVar7 + 0x2b8))
                      (plVar7,lVar14,**(undefined8 **)(lVar10 + 0xb8),
                       *(undefined8 *)(*plVar7 + 0x2c0));
  }
  if ((*(ulong *)(unaff_x20 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar6,*(undefined8 *)PTR_DAT_06780b20,*unaff_x25,
                 *(ulong *)(unaff_x20 + 0xe8) >> 0x20);
  }
  plVar7 = *(long **)(unaff_x20 + 0xf8);
  if (plVar7 != (long *)0x0) {
    lVar14 = *plVar7;
    lVar10 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar10,0);
LAB_0511cf5c:
    iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (0 < iVar5) {
      plVar7 = (long *)*unaff_x25;
      if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar7 + 0x5d8))
                (plVar7,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar7 + 0x5e0));
      plVar7 = *(long **)(unaff_x20 + 0xf8);
      if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
      lVar14 = *plVar7;
      lVar10 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar10,0);
LAB_0511cfe8:
      iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (iVar5 != 1) {
        plVar7 = (long *)*unaff_x25;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0));
          plVar7 = *(long **)(unaff_x20 + 0xf8);
          if (plVar7 != (long *)0x0) {
            lVar10 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
            puVar1 = PTR_DAT_06780ad0;
            puVar2 = PTR_DAT_0675f3d8;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar10 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_0511d15c:
              uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              if ((uVar11 & 1) == 0) goto LAB_0511d1d4;
              lVar10 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_0511d1b8:
              (*(code *)*puVar8)(plVar7,puVar8[1]);
              FUN_05126010();
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar7 = *(long **)(unaff_x20 + 0xf8);
      if (plVar7 == (long *)0x0) goto LAB_0511d2a4;
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      (*(code *)*puVar8)(plVar7,0,puVar8[1]);
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


