/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 0511c674
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0511d24c) */
/* WARNING: Removing unreachable block (ram,0x0511ce20) */
/* WARNING: Removing unreachable block (ram,0x0511d2b8) */
/* WARNING: Removing unreachable block (ram,0x0511d2ac) */

void OVRManager__GetDynamicFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long *plVar15;
  undefined8 uVar16;
  long *unaff_x22;
  long lVar17;
  long lVar18;
  long *plVar19;
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
  
  puVar9 = (undefined8 *)FUN_02d9a5d4();
  uVar10 = (*(code *)*puVar9)();
  if ((uVar10 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x18) == 0) ||
       (plVar15 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x10), plVar15 == (long *)0x0))
    goto LAB_0511d2a4;
    lVar13 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0511c708;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*unaff_x22,2);
LAB_0511c708:
    (*(code *)*puVar9)(plVar15);
  }
  plVar19 = (long *)(unaff_x19 + 0x10);
  plVar15 = (long *)*plVar19;
  if ((plVar15 == (long *)0x0) ||
     (uVar11 = (**(code **)(*plVar15 + 0x578))(plVar15,*(undefined8 *)(*plVar15 + 0x580)),
     puVar7 = PTR_DAT_06780b50, puVar6 = PTR_DAT_06780b28, puVar4 = PTR_DAT_06780ae8,
     puVar5 = PTR_DAT_06780ae0, puVar3 = PTR_DAT_0676ded8, puVar1 = PTR_DAT_0676b5c8,
     puVar2 = PTR_DAT_0676aed8, unaff_x20 == 0)) goto LAB_0511d2a4;
  uVar11 = FUN_051260f4(uVar11,*plVar19,*(undefined8 *)PTR_DAT_06769370,
                        *(undefined8 *)(unaff_x20 + 0x10));
  uVar11 = FUN_051260f4(uVar11,*plVar19,*(undefined8 *)puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_051260f4(uVar11,*plVar19,*(undefined8 *)puVar3,*(undefined8 *)(unaff_x20 + 0x28));
  lVar13 = *plVar19;
  in_stack_00000050 = CONCAT62(in_stack_00000050._2_6_,*(undefined2 *)(unaff_x20 + 0x20));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000050);
  FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar6,uVar11);
  lVar13 = *plVar19;
  in_stack_00000040 = CONCAT62(in_stack_00000040._2_6_,*(undefined2 *)(unaff_x20 + 0x22));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000040);
  FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar2,uVar11);
  lVar13 = *plVar19;
  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,*(undefined2 *)(unaff_x20 + 0x24));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000008);
  FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar4,uVar11);
  lVar13 = *plVar19;
  in_stack_00000030 = CONCAT62(in_stack_00000030._2_6_,*(undefined2 *)(unaff_x20 + 0x26));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000030);
  uVar11 = FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar7,uVar11);
  if ((*(ulong *)(unaff_x20 + 0x30) & 0xff) != 0) {
    FUN_05126158(uVar11,*(undefined8 *)PTR_DAT_067686e0,*plVar19,
                 *(ulong *)(unaff_x20 + 0x30) >> 0x20);
  }
  if (*(char *)(unaff_x20 + 0xd0) == '\0') {
    plVar15 = (long *)*plVar19;
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar15 + 0x5d8))
              (plVar15,*(undefined8 *)PTR_DAT_06780b30,*(undefined8 *)(*plVar15 + 0x5e0));
    plVar15 = (long *)*plVar19;
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar15 + 0x708))
              (plVar15,*(undefined1 *)(unaff_x20 + 0xd0),*(undefined8 *)(*plVar15 + 0x710));
  }
  else if (*(long *)(unaff_x20 + 0xc0) != 0) {
    plVar15 = (long *)*plVar19;
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar15 + 0x5d8))
              (plVar15,*(undefined8 *)PTR_DAT_06780b30,*(undefined8 *)(*plVar15 + 0x5e0));
    FUN_05126010();
  }
  if (*(char *)(unaff_x20 + 0xb0) == '\0') {
    plVar15 = (long *)*plVar19;
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar15 + 0x5d8))
              (plVar15,*(undefined8 *)PTR_DAT_06780b08,*(undefined8 *)(*plVar15 + 0x5e0));
    plVar15 = (long *)*plVar19;
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar15 + 0x708))
              (plVar15,*(undefined1 *)(unaff_x20 + 0xb0),*(undefined8 *)(*plVar15 + 0x710));
  }
  else if (*(long *)(unaff_x20 + 0xa8) != 0) {
    plVar15 = (long *)*plVar19;
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar15 + 0x5d8))
              (plVar15,*(undefined8 *)PTR_DAT_06780b08,*(undefined8 *)(*plVar15 + 0x5e0));
    FUN_05126010();
  }
  puVar7 = PTR_DAT_06780b38;
  puVar6 = PTR_DAT_06780b18;
  puVar4 = PTR_DAT_0677e320;
  puVar3 = PTR_DAT_06776058;
  puVar1 = PTR_DAT_06769cc0;
  puVar2 = PTR_DAT_06769c80;
  FUN_05126684();
  FUN_05126684();
  FUN_05126a14();
  in_stack_00000050 = *(undefined8 *)(unaff_x20 + 0x60);
  in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000050);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)puVar1,uVar11);
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x70);
  in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000040);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)puVar2,uVar11);
  uStack000000000000003c = *(undefined2 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,(long)&stack0x00000038 + 4);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)puVar6,uVar11);
  uStack0000000000000038 = *(undefined2 *)(unaff_x20 + 0x82);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000038);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)puVar7,uVar11);
  in_stack_00000030 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000030);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)PTR_DAT_06780b10,uVar11);
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000028);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)PTR_DAT_0676aea0,uVar11);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x84);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000020);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)PTR_DAT_06780b00,uVar11);
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x8c);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000018);
  FUN_051260f4(uVar11,uVar16,*(undefined8 *)PTR_DAT_06780b58,uVar11);
  in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x50);
  in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000008);
  uVar11 = FUN_051260f4(uVar11,uVar16,*(undefined8 *)PTR_DAT_06780af0,uVar11);
  uVar11 = FUN_051260f4(uVar11,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06771088,
                        *(undefined8 *)(unaff_x20 + 0x100));
  uVar11 = FUN_051260f4(uVar11,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06780b48,
                        *(undefined8 *)(unaff_x20 + 0x38));
  puVar2 = PTR_DAT_06780ab8;
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    plVar15 = (long *)*plVar19;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x5d8))
                (plVar15,*(undefined8 *)PTR_DAT_06780af8,*(undefined8 *)(*plVar15 + 0x5e0));
      plVar15 = (long *)*plVar19;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x598))(plVar15,*(undefined8 *)(*plVar15 + 0x5a0));
        plVar15 = *(long **)(unaff_x20 + 0xe0);
        if (plVar15 != (long *)0x0) {
          lVar13 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06780ac0) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0511cc50;
              }
              uVar10 = uVar10 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)PTR_DAT_06780ac0,0);
LAB_0511cc50:
          plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
          puVar5 = PTR_DAT_0677eca8;
          puVar3 = PTR_DAT_0676aab8;
          puVar1 = PTR_DAT_0675f3d8;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          do {
            lVar13 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0511ccc8;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)puVar1,0);
LAB_0511ccc8:
            uVar10 = (*(code *)*puVar9)(plVar15,puVar9[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar15 == (long *)0x0) goto LAB_0511ce14;
              lVar13 = *plVar15;
              uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar10 == 0) goto LAB_0511cdec;
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_0511cdd4;
            }
            lVar13 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0511cd24;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)puVar3,0);
LAB_0511cd24:
            plVar12 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
            lVar18 = *(long *)puVar5;
            lVar17 = *plVar19;
            lVar13 = *(long *)(lVar18 + 0x38);
            if (lVar13 == 0) {
              FUN_02d9a33c(lVar18);
              lVar13 = *(long *)(lVar18 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02d9a2e0();
            }
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02d9a2e0();
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            (**(code **)(*plVar12 + 0x2b8))
                      (plVar12,lVar17,**(undefined8 **)(lVar13 + 0xb8),
                       *(undefined8 *)(*plVar12 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_0511d2a4;
  }
  goto LAB_0511ce3c;
LAB_0511d1d4:
  if (plVar15 != (long *)0x0) {
    lVar13 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar9)(plVar15,puVar9[1]);
  }
  plVar15 = (long *)*plVar19;
  if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar15 + 0x5a8))(plVar15,*(undefined8 *)(*plVar15 + 0x5b0));
  goto LAB_0511d268;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar14 = piVar14 + 4;
    if (uVar10 == 0) break;
LAB_0511cdd4:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0511ce08;
    }
  }
LAB_0511cdec:
  puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511ce08:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
LAB_0511ce14:
  plVar15 = (long *)*plVar19;
  if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
  uVar11 = (**(code **)(*plVar15 + 0x5a8))(plVar15,*(undefined8 *)(*plVar15 + 0x5b0));
LAB_0511ce3c:
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar15 = (long *)*plVar19;
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar15 + 0x5d8))
              (plVar15,*(undefined8 *)PTR_DAT_0676a770,*(undefined8 *)(*plVar15 + 0x5e0));
    plVar15 = *(long **)(unaff_x20 + 0xf0);
    lVar17 = *plVar19;
    lVar18 = *(long *)PTR_DAT_0677eca8;
    lVar13 = *(long *)(lVar18 + 0x38);
    if (lVar13 == 0) {
      FUN_02d9a33c(lVar18);
      lVar13 = *(long *)(lVar18 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d9a2e0();
    }
    if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
    uVar11 = (**(code **)(*plVar15 + 0x2b8))
                       (plVar15,lVar17,**(undefined8 **)(lVar13 + 0xb8),
                        *(undefined8 *)(*plVar15 + 0x2c0));
  }
  if ((*(ulong *)(unaff_x20 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar11,*(undefined8 *)PTR_DAT_06780b20,*plVar19,
                 *(ulong *)(unaff_x20 + 0xe8) >> 0x20);
  }
  plVar15 = *(long **)(unaff_x20 + 0xf8);
  if (plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    lVar13 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,lVar13,0);
LAB_0511cf5c:
    iVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if (0 < iVar8) {
      plVar15 = (long *)*plVar19;
      if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar15 + 0x5d8))
                (plVar15,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar15 + 0x5e0));
      plVar15 = *(long **)(unaff_x20 + 0xf8);
      if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
      lVar17 = *plVar15;
      lVar13 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,lVar13,0);
LAB_0511cfe8:
      iVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if (iVar8 != 1) {
        plVar15 = (long *)*plVar19;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x598))(plVar15,*(undefined8 *)(*plVar15 + 0x5a0));
          plVar15 = *(long **)(unaff_x20 + 0xf8);
          if (plVar15 != (long *)0x0) {
            lVar13 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
            puVar1 = PTR_DAT_06780ad0;
            puVar2 = PTR_DAT_0675f3d8;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar13 = *plVar15;
              uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar10 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                    puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar10 != 0);
              }
              puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)puVar2,0);
LAB_0511d15c:
              uVar10 = (*(code *)*puVar9)(plVar15,puVar9[1]);
              if ((uVar10 & 1) == 0) goto LAB_0511d1d4;
              lVar13 = *plVar15;
              uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar10 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar10 != 0);
              }
              puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)puVar1,0);
LAB_0511d1b8:
              (*(code *)*puVar9)(plVar15,puVar9[1]);
              FUN_05126010();
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar15 = *(long **)(unaff_x20 + 0xf8);
      if (plVar15 == (long *)0x0) goto LAB_0511d2a4;
      lVar13 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      (*(code *)*puVar9)(plVar15,0,puVar9[1]);
      FUN_05126010();
    }
  }
LAB_0511d268:
  plVar19 = (long *)*plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x588))(plVar19,*(undefined8 *)(*plVar19 + 0x590));
    return;
  }
LAB_0511d2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


