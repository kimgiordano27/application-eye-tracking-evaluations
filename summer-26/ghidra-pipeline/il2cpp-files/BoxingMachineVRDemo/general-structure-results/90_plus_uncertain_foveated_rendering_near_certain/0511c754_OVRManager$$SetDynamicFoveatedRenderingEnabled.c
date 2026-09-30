/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 0511c754
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0511d24c) */
/* WARNING: Removing unreachable block (ram,0x0511ce20) */
/* WARNING: Removing unreachable block (ram,0x0511d2b8) */
/* WARNING: Removing unreachable block (ram,0x0511d2ac) */

void OVRManager__SetDynamicFoveatedRenderingEnabled(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *puVar18;
  long unaff_x27;
  undefined8 *puVar19;
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
  
  puVar3 = PTR_DAT_06780b50;
  puVar1 = PTR_DAT_06780ae8;
  puVar2 = PTR_DAT_0676aed8;
  puVar18 = *(undefined8 **)(unaff_x26 + 0xed8);
  puVar15 = *(undefined8 **)(unaff_x22 + 0xae0);
  puVar19 = *(undefined8 **)(unaff_x27 + 0xb28);
  uVar8 = FUN_051260f4(param_2,*unaff_x25,*param_1,*(undefined8 *)(unaff_x20 + 0x10));
  uVar8 = FUN_051260f4(uVar8,*unaff_x25,*unaff_x21,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_051260f4(uVar8,*unaff_x25,*puVar18,*(undefined8 *)(unaff_x20 + 0x28));
  lVar13 = *unaff_x25;
  in_stack_00000050 = CONCAT62(in_stack_00000050._2_6_,*(undefined2 *)(unaff_x20 + 0x20));
  uVar8 = thunk_FUN_02d9d164(*puVar15,&stack0x00000050);
  FUN_051260f4(uVar8,lVar13,*puVar19,uVar8);
  lVar13 = *unaff_x25;
  in_stack_00000040 = CONCAT62(in_stack_00000040._2_6_,*(undefined2 *)(unaff_x20 + 0x22));
  uVar8 = thunk_FUN_02d9d164(*puVar15,&stack0x00000040);
  FUN_051260f4(uVar8,lVar13,*(undefined8 *)puVar2,uVar8);
  lVar13 = *unaff_x25;
  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,*(undefined2 *)(unaff_x20 + 0x24));
  uVar8 = thunk_FUN_02d9d164(*puVar15,&stack0x00000008);
  FUN_051260f4(uVar8,lVar13,*(undefined8 *)puVar1,uVar8);
  lVar13 = *unaff_x25;
  in_stack_00000030 = CONCAT62(in_stack_00000030._2_6_,*(undefined2 *)(unaff_x20 + 0x26));
  uVar8 = thunk_FUN_02d9d164(*puVar15,&stack0x00000030);
  uVar8 = FUN_051260f4(uVar8,lVar13,*(undefined8 *)puVar3,uVar8);
  if ((*(ulong *)(unaff_x20 + 0x30) & 0xff) != 0) {
    FUN_05126158(uVar8,*(undefined8 *)PTR_DAT_067686e0,*unaff_x25,
                 *(ulong *)(unaff_x20 + 0x30) >> 0x20);
  }
  if (*(char *)(unaff_x20 + 0xd0) == '\0') {
    plVar9 = (long *)*unaff_x25;
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar9 + 0x5d8))
              (plVar9,*(undefined8 *)PTR_DAT_06780b30,*(undefined8 *)(*plVar9 + 0x5e0));
    plVar9 = (long *)*unaff_x25;
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar9 + 0x708))
              (plVar9,*(undefined1 *)(unaff_x20 + 0xd0),*(undefined8 *)(*plVar9 + 0x710));
  }
  else if (*(long *)(unaff_x20 + 0xc0) != 0) {
    plVar9 = (long *)*unaff_x25;
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar9 + 0x5d8))
              (plVar9,*(undefined8 *)PTR_DAT_06780b30,*(undefined8 *)(*plVar9 + 0x5e0));
    FUN_05126010();
  }
  if (*(char *)(unaff_x20 + 0xb0) == '\0') {
    plVar9 = (long *)*unaff_x25;
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar9 + 0x5d8))
              (plVar9,*(undefined8 *)PTR_DAT_06780b08,*(undefined8 *)(*plVar9 + 0x5e0));
    plVar9 = (long *)*unaff_x25;
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar9 + 0x708))
              (plVar9,*(undefined1 *)(unaff_x20 + 0xb0),*(undefined8 *)(*plVar9 + 0x710));
  }
  else if (*(long *)(unaff_x20 + 0xa8) != 0) {
    plVar9 = (long *)*unaff_x25;
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar9 + 0x5d8))
              (plVar9,*(undefined8 *)PTR_DAT_06780b08,*(undefined8 *)(*plVar9 + 0x5e0));
    FUN_05126010();
  }
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
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000050);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)puVar1,uVar8);
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x70);
  in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000040);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)puVar2,uVar8);
  uStack000000000000003c = *(undefined2 *)(unaff_x20 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*puVar15,(long)&stack0x00000038 + 4);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)puVar5,uVar8);
  uStack0000000000000038 = *(undefined2 *)(unaff_x20 + 0x82);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*puVar15,&stack0x00000038);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)puVar6,uVar8);
  in_stack_00000030 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000030);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)PTR_DAT_06780b10,uVar8);
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000028);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)PTR_DAT_0676aea0,uVar8);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x84);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000020);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)PTR_DAT_06780b00,uVar8);
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x8c);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000018);
  FUN_051260f4(uVar8,uVar14,*(undefined8 *)PTR_DAT_06780b58,uVar8);
  in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x50);
  in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000008);
  uVar8 = FUN_051260f4(uVar8,uVar14,*(undefined8 *)PTR_DAT_06780af0,uVar8);
  uVar8 = FUN_051260f4(uVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06771088,
                       *(undefined8 *)(unaff_x20 + 0x100));
  uVar8 = FUN_051260f4(uVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06780b48,
                       *(undefined8 *)(unaff_x20 + 0x38));
  puVar2 = PTR_DAT_06780ab8;
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    plVar9 = (long *)*unaff_x25;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x5d8))
                (plVar9,*(undefined8 *)PTR_DAT_06780af8,*(undefined8 *)(*plVar9 + 0x5e0));
      plVar9 = (long *)*unaff_x25;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0));
        plVar9 = *(long **)(unaff_x20 + 0xe0);
        if (plVar9 != (long *)0x0) {
          lVar13 = *plVar9;
          uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780ac0) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0511cc50;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06780ac0,0);
LAB_0511cc50:
          plVar9 = (long *)(*(code *)*puVar15)(plVar9,puVar15[1]);
          puVar4 = PTR_DAT_0677eca8;
          puVar3 = PTR_DAT_0676aab8;
          puVar1 = PTR_DAT_0675f3d8;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          do {
            lVar13 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0511ccc8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0);
LAB_0511ccc8:
            uVar11 = (*(code *)*puVar15)(plVar9,puVar15[1]);
            if ((uVar11 & 1) == 0) {
              if (plVar9 == (long *)0x0) goto LAB_0511ce14;
              lVar13 = *plVar9;
              uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar11 == 0) goto LAB_0511cdec;
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_0511cdd4;
            }
            lVar13 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0511cd24;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,0);
LAB_0511cd24:
            plVar10 = (long *)(*(code *)*puVar15)(plVar9,puVar15[1]);
            lVar17 = *(long *)puVar4;
            lVar16 = *unaff_x25;
            lVar13 = *(long *)(lVar17 + 0x38);
            if (lVar13 == 0) {
              FUN_02d9a33c(lVar17);
              lVar13 = *(long *)(lVar17 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02d9a2e0();
            }
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02d9a2e0();
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            (**(code **)(*plVar10 + 0x2b8))
                      (plVar10,lVar16,**(undefined8 **)(lVar13 + 0xb8),
                       *(undefined8 *)(*plVar10 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_0511d2a4;
  }
  goto LAB_0511ce3c;
LAB_0511d1d4:
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar15)(plVar9,puVar15[1]);
  }
  plVar9 = (long *)*unaff_x25;
  if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar9 + 0x5a8))(plVar9,*(undefined8 *)(*plVar9 + 0x5b0));
  goto LAB_0511d268;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0511cdd4:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0511ce08;
    }
  }
LAB_0511cdec:
  puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511ce08:
  (*(code *)*puVar15)(plVar9,puVar15[1]);
LAB_0511ce14:
  plVar9 = (long *)*unaff_x25;
  if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
  uVar8 = (**(code **)(*plVar9 + 0x5a8))(plVar9,*(undefined8 *)(*plVar9 + 0x5b0));
LAB_0511ce3c:
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar9 = (long *)*unaff_x25;
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar9 + 0x5d8))
              (plVar9,*(undefined8 *)PTR_DAT_0676a770,*(undefined8 *)(*plVar9 + 0x5e0));
    plVar9 = *(long **)(unaff_x20 + 0xf0);
    lVar16 = *unaff_x25;
    lVar17 = *(long *)PTR_DAT_0677eca8;
    lVar13 = *(long *)(lVar17 + 0x38);
    if (lVar13 == 0) {
      FUN_02d9a33c(lVar17);
      lVar13 = *(long *)(lVar17 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d9a2e0();
    }
    if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
    uVar8 = (**(code **)(*plVar9 + 0x2b8))
                      (plVar9,lVar16,**(undefined8 **)(lVar13 + 0xb8),
                       *(undefined8 *)(*plVar9 + 0x2c0));
  }
  if ((*(ulong *)(unaff_x20 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar8,*(undefined8 *)PTR_DAT_06780b20,*unaff_x25,
                 *(ulong *)(unaff_x20 + 0xe8) >> 0x20);
  }
  plVar9 = *(long **)(unaff_x20 + 0xf8);
  if (plVar9 != (long *)0x0) {
    lVar16 = *plVar9;
    lVar13 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar15 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar13,0);
LAB_0511cf5c:
    iVar7 = (*(code *)*puVar15)(plVar9,puVar15[1]);
    if (0 < iVar7) {
      plVar9 = (long *)*unaff_x25;
      if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar9 + 0x5d8))
                (plVar9,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar9 + 0x5e0));
      plVar9 = *(long **)(unaff_x20 + 0xf8);
      if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
      lVar16 = *plVar9;
      lVar13 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar13) {
            puVar15 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar13,0);
LAB_0511cfe8:
      iVar7 = (*(code *)*puVar15)(plVar9,puVar15[1]);
      if (iVar7 != 1) {
        plVar9 = (long *)*unaff_x25;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0));
          plVar9 = *(long **)(unaff_x20 + 0xf8);
          if (plVar9 != (long *)0x0) {
            lVar13 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar9 = (long *)(*(code *)*puVar15)(plVar9,puVar15[1]);
            puVar1 = PTR_DAT_06780ad0;
            puVar2 = PTR_DAT_0675f3d8;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar13 = *plVar9;
              uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,0);
LAB_0511d15c:
              uVar11 = (*(code *)*puVar15)(plVar9,puVar15[1]);
              if ((uVar11 & 1) == 0) goto LAB_0511d1d4;
              lVar13 = *plVar9;
              uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0);
LAB_0511d1b8:
              (*(code *)*puVar15)(plVar9,puVar15[1]);
              FUN_05126010();
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar9 = *(long **)(unaff_x20 + 0xf8);
      if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
      lVar13 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      (*(code *)*puVar15)(plVar9,0,puVar15[1]);
      FUN_05126010();
    }
  }
LAB_0511d268:
  plVar9 = (long *)*unaff_x25;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x588))(plVar9,*(undefined8 *)(*plVar9 + 0x590));
    return;
  }
LAB_0511d2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


