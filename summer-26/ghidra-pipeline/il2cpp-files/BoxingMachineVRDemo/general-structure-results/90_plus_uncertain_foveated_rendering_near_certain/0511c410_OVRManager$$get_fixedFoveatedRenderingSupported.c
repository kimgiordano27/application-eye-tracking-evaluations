/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 0511c410
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0511d24c) */
/* WARNING: Removing unreachable block (ram,0x0511ce20) */
/* WARNING: Removing unreachable block (ram,0x0511d2b8) */
/* WARNING: Removing unreachable block (ram,0x0511d2ac) */

void OVRManager__get_fixedFoveatedRenderingSupported(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x21;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *unaff_x22;
  long lVar18;
  long lVar19;
  long *plVar20;
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
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0677eca8);
    FUN_02d6084c(PTR_DAT_06780ab8);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_06780ac0);
    FUN_02d6084c(PTR_DAT_06780ac8);
    FUN_02d6084c(PTR_DAT_0676aab8);
    FUN_02d6084c(PTR_DAT_06780ad0);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_06780ad8);
    FUN_02d6084c(PTR_DAT_0677ebe0);
    FUN_02d6084c(PTR_DAT_0677ebf0);
    FUN_02d6084c(PTR_DAT_0677e320);
    FUN_02d6084c(PTR_DAT_06780ae0);
    FUN_02d6084c(PTR_DAT_06776058);
    FUN_02d6084c(PTR_DAT_06780ae8);
    FUN_02d6084c(PTR_DAT_06769cc0);
    FUN_02d6084c(PTR_DAT_0676aed8);
    FUN_02d6084c(PTR_DAT_06780af0);
    FUN_02d6084c(PTR_DAT_06780af8);
    FUN_02d6084c(PTR_DAT_06780b00);
    FUN_02d6084c(PTR_DAT_06780b08);
    FUN_02d6084c(PTR_DAT_06780b10);
    FUN_02d6084c(PTR_DAT_0676a770);
    FUN_02d6084c(PTR_DAT_06780b18);
    FUN_02d6084c(PTR_DAT_06771088);
    FUN_02d6084c(PTR_DAT_06780b20);
    FUN_02d6084c(PTR_DAT_06768be0);
    FUN_02d6084c(PTR_DAT_06769370);
    FUN_02d6084c(PTR_DAT_06780b28);
    FUN_02d6084c(PTR_DAT_06780b30);
    FUN_02d6084c(PTR_DAT_06780b38);
    FUN_02d6084c(PTR_DAT_06769c80);
    FUN_02d6084c(PTR_DAT_0676b5c8);
    FUN_02d6084c(PTR_DAT_0676aea0);
    FUN_02d6084c(PTR_DAT_06780b40);
    FUN_02d6084c(PTR_DAT_06780b48);
    FUN_02d6084c(PTR_DAT_0676ded8);
    FUN_02d6084c(PTR_DAT_06780a58);
    FUN_02d6084c(PTR_DAT_06780b50);
    FUN_02d6084c(PTR_DAT_06780b58);
    FUN_02d6084c(PTR_DAT_06780b60);
    FUN_02d6084c(PTR_DAT_067686e0);
    *(undefined1 *)(unaff_x21 + 0xc08) = 1;
  }
  FUN_050f136c(param_3,*unaff_x22,0);
  puVar2 = PTR_DAT_06780ab8;
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar16 = *(long **)(*(long *)(param_2 + 0x18) + 0x10), plVar16 == (long *)0x0))
  goto LAB_0511d2a4;
  lVar13 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06780ab8) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
        goto LAB_0511c694;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)PTR_DAT_06780ab8,4);
LAB_0511c694:
  uVar14 = (*(code *)*puVar10)(plVar16,param_3,puVar10[1]);
  if ((uVar14 & 1) == 0) {
    if ((*(long *)(param_2 + 0x18) == 0) ||
       (plVar16 = *(long **)(*(long *)(param_2 + 0x18) + 0x10), plVar16 == (long *)0x0))
    goto LAB_0511d2a4;
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0511c708;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)puVar2,2);
LAB_0511c708:
    (*(code *)*puVar10)(plVar16,param_3,puVar10[1]);
  }
  plVar20 = (long *)(param_2 + 0x10);
  plVar16 = (long *)*plVar20;
  if ((plVar16 == (long *)0x0) ||
     (uVar11 = (**(code **)(*plVar16 + 0x578))(plVar16,*(undefined8 *)(*plVar16 + 0x580)),
     puVar7 = PTR_DAT_06780b50, puVar6 = PTR_DAT_06780b28, puVar4 = PTR_DAT_06780ae8,
     puVar5 = PTR_DAT_06780ae0, puVar3 = PTR_DAT_0676ded8, puVar1 = PTR_DAT_0676b5c8,
     puVar2 = PTR_DAT_0676aed8, param_3 == 0)) goto LAB_0511d2a4;
  uVar11 = FUN_051260f4(uVar11,*plVar20,*(undefined8 *)PTR_DAT_06769370,
                        *(undefined8 *)(param_3 + 0x10));
  uVar11 = FUN_051260f4(uVar11,*plVar20,*(undefined8 *)puVar1,*(undefined8 *)(param_3 + 0x18));
  FUN_051260f4(uVar11,*plVar20,*(undefined8 *)puVar3,*(undefined8 *)(param_3 + 0x28));
  lVar13 = *plVar20;
  in_stack_00000050 = CONCAT62(in_stack_00000050._2_6_,*(undefined2 *)(param_3 + 0x20));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000050);
  FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar6,uVar11);
  lVar13 = *plVar20;
  in_stack_00000040 = CONCAT62(in_stack_00000040._2_6_,*(undefined2 *)(param_3 + 0x22));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000040);
  FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar2,uVar11);
  lVar13 = *plVar20;
  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,*(undefined2 *)(param_3 + 0x24));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000008);
  FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar4,uVar11);
  lVar13 = *plVar20;
  in_stack_00000030 = CONCAT62(in_stack_00000030._2_6_,*(undefined2 *)(param_3 + 0x26));
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000030);
  uVar11 = FUN_051260f4(uVar11,lVar13,*(undefined8 *)puVar7,uVar11);
  if ((*(ulong *)(param_3 + 0x30) & 0xff) != 0) {
    FUN_05126158(uVar11,*(undefined8 *)PTR_DAT_067686e0,*plVar20,*(ulong *)(param_3 + 0x30) >> 0x20)
    ;
  }
  if (*(char *)(param_3 + 0xd0) == '\0') {
    plVar16 = (long *)*plVar20;
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar16 + 0x5d8))
              (plVar16,*(undefined8 *)PTR_DAT_06780b30,*(undefined8 *)(*plVar16 + 0x5e0));
    plVar16 = (long *)*plVar20;
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar16 + 0x708))
              (plVar16,*(undefined1 *)(param_3 + 0xd0),*(undefined8 *)(*plVar16 + 0x710));
  }
  else if (*(long *)(param_3 + 0xc0) != 0) {
    plVar16 = (long *)*plVar20;
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar16 + 0x5d8))
              (plVar16,*(undefined8 *)PTR_DAT_06780b30,*(undefined8 *)(*plVar16 + 0x5e0));
    FUN_05126010(param_2,*(undefined8 *)(param_3 + 0xc0));
  }
  if (*(char *)(param_3 + 0xb0) == '\0') {
    plVar16 = (long *)*plVar20;
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar16 + 0x5d8))
              (plVar16,*(undefined8 *)PTR_DAT_06780b08,*(undefined8 *)(*plVar16 + 0x5e0));
    plVar16 = (long *)*plVar20;
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar16 + 0x708))
              (plVar16,*(undefined1 *)(param_3 + 0xb0),*(undefined8 *)(*plVar16 + 0x710));
  }
  else if (*(long *)(param_3 + 0xa8) != 0) {
    plVar16 = (long *)*plVar20;
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar16 + 0x5d8))
              (plVar16,*(undefined8 *)PTR_DAT_06780b08,*(undefined8 *)(*plVar16 + 0x5e0));
    FUN_05126010(param_2,*(undefined8 *)(param_3 + 0xa8));
  }
  puVar8 = PTR_DAT_06780b60;
  puVar7 = PTR_DAT_06780b38;
  puVar6 = PTR_DAT_06780b18;
  puVar4 = PTR_DAT_0677e320;
  puVar3 = PTR_DAT_06776058;
  puVar1 = PTR_DAT_06769cc0;
  puVar2 = PTR_DAT_06769c80;
  FUN_05126684(param_2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_06768be0,
               *(undefined8 *)(param_3 + 0xb8));
  FUN_05126684(param_2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)puVar8,
               *(undefined8 *)(param_3 + 200));
  FUN_05126a14(param_2,param_3);
  in_stack_00000050 = *(undefined8 *)(param_3 + 0x60);
  in_stack_00000058 = *(undefined8 *)(param_3 + 0x68);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000050);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)puVar1,uVar11);
  in_stack_00000040 = *(undefined8 *)(param_3 + 0x70);
  in_stack_00000048 = *(undefined8 *)(param_3 + 0x78);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000040);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)puVar2,uVar11);
  uStack000000000000003c = *(undefined2 *)(param_3 + 0x80);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,(long)&stack0x00000038 + 4);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)puVar6,uVar11);
  uStack0000000000000038 = *(undefined2 *)(param_3 + 0x82);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar5,&stack0x00000038);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)puVar7,uVar11);
  in_stack_00000030 = *(undefined8 *)(param_3 + 0x40);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000030);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)PTR_DAT_06780b10,uVar11);
  in_stack_00000028 = *(undefined8 *)(param_3 + 0x48);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000028);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)PTR_DAT_0676aea0,uVar11);
  in_stack_00000020 = *(undefined8 *)(param_3 + 0x84);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000020);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)PTR_DAT_06780b00,uVar11);
  in_stack_00000018 = *(undefined8 *)(param_3 + 0x8c);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000018);
  FUN_051260f4(uVar11,uVar17,*(undefined8 *)PTR_DAT_06780b58,uVar11);
  in_stack_00000008 = *(undefined8 *)(param_3 + 0x50);
  in_stack_00000010 = *(undefined8 *)(param_3 + 0x58);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&stack0x00000008);
  uVar11 = FUN_051260f4(uVar11,uVar17,*(undefined8 *)PTR_DAT_06780af0,uVar11);
  uVar11 = FUN_051260f4(uVar11,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_06771088,
                        *(undefined8 *)(param_3 + 0x100));
  uVar11 = FUN_051260f4(uVar11,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_06780b48,
                        *(undefined8 *)(param_3 + 0x38));
  puVar2 = PTR_DAT_06780ab8;
  if (*(long *)(param_3 + 0xe0) != 0) {
    plVar16 = (long *)*plVar20;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x5d8))
                (plVar16,*(undefined8 *)PTR_DAT_06780af8,*(undefined8 *)(*plVar16 + 0x5e0));
      plVar16 = (long *)*plVar20;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x598))(plVar16,*(undefined8 *)(*plVar16 + 0x5a0));
        plVar16 = *(long **)(param_3 + 0xe0);
        if (plVar16 != (long *)0x0) {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06780ac0) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0511cc50;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)PTR_DAT_06780ac0,0);
LAB_0511cc50:
          plVar16 = (long *)(*(code *)*puVar10)(plVar16,puVar10[1]);
          puVar5 = PTR_DAT_0677eca8;
          puVar3 = PTR_DAT_0676aab8;
          puVar1 = PTR_DAT_0675f3d8;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          do {
            lVar13 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0511ccc8;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)puVar1,0);
LAB_0511ccc8:
            uVar14 = (*(code *)*puVar10)(plVar16,puVar10[1]);
            if ((uVar14 & 1) == 0) {
              if (plVar16 == (long *)0x0) goto LAB_0511ce14;
              lVar13 = *plVar16;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 == 0) goto LAB_0511cdec;
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_0511cdd4;
            }
            lVar13 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0511cd24;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)puVar3,0);
LAB_0511cd24:
            plVar12 = (long *)(*(code *)*puVar10)(plVar16,puVar10[1]);
            lVar19 = *(long *)puVar5;
            lVar18 = *plVar20;
            lVar13 = *(long *)(lVar19 + 0x38);
            if (lVar13 == 0) {
              FUN_02d9a33c(lVar19);
              lVar13 = *(long *)(lVar19 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02d9a2e0();
            }
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar13 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02d9a2e0();
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            (**(code **)(*plVar12 + 0x2b8))
                      (plVar12,lVar18,**(undefined8 **)(lVar13 + 0xb8),
                       *(undefined8 *)(*plVar12 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_0511d2a4;
  }
  goto LAB_0511ce3c;
LAB_0511d1d4:
  if (plVar16 != (long *)0x0) {
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar10)(plVar16,puVar10[1]);
  }
  plVar16 = (long *)*plVar20;
  if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar16 + 0x5a8))(plVar16,*(undefined8 *)(*plVar16 + 0x5b0));
  goto LAB_0511d268;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0511cdd4:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0511ce08;
    }
  }
LAB_0511cdec:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511ce08:
  (*(code *)*puVar10)(plVar16,puVar10[1]);
LAB_0511ce14:
  plVar16 = (long *)*plVar20;
  if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
  uVar11 = (**(code **)(*plVar16 + 0x5a8))(plVar16,*(undefined8 *)(*plVar16 + 0x5b0));
LAB_0511ce3c:
  if (*(long *)(param_3 + 0xf0) != 0) {
    plVar16 = (long *)*plVar20;
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar16 + 0x5d8))
              (plVar16,*(undefined8 *)PTR_DAT_0676a770,*(undefined8 *)(*plVar16 + 0x5e0));
    plVar16 = *(long **)(param_3 + 0xf0);
    lVar18 = *plVar20;
    lVar19 = *(long *)PTR_DAT_0677eca8;
    lVar13 = *(long *)(lVar19 + 0x38);
    if (lVar13 == 0) {
      FUN_02d9a33c(lVar19);
      lVar13 = *(long *)(lVar19 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar13 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d9a2e0();
    }
    if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
    uVar11 = (**(code **)(*plVar16 + 0x2b8))
                       (plVar16,lVar18,**(undefined8 **)(lVar13 + 0xb8),
                        *(undefined8 *)(*plVar16 + 0x2c0));
  }
  if ((*(ulong *)(param_3 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar11,*(undefined8 *)PTR_DAT_06780b20,*plVar20,*(ulong *)(param_3 + 0xe8) >> 0x20)
    ;
  }
  plVar16 = *(long **)(param_3 + 0xf8);
  if (plVar16 != (long *)0x0) {
    lVar18 = *plVar16;
    lVar13 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,lVar13,0);
LAB_0511cf5c:
    iVar9 = (*(code *)*puVar10)(plVar16,puVar10[1]);
    if (0 < iVar9) {
      plVar16 = (long *)*plVar20;
      if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar16 + 0x5d8))
                (plVar16,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar16 + 0x5e0));
      plVar16 = *(long **)(param_3 + 0xf8);
      if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
      lVar18 = *plVar16;
      lVar13 = *(long *)puVar2;
      uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,lVar13,0);
LAB_0511cfe8:
      iVar9 = (*(code *)*puVar10)(plVar16,puVar10[1]);
      if (iVar9 != 1) {
        plVar16 = (long *)*plVar20;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x598))(plVar16,*(undefined8 *)(*plVar16 + 0x5a0));
          plVar16 = *(long **)(param_3 + 0xf8);
          if (plVar16 != (long *)0x0) {
            lVar13 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar16 = (long *)(*(code *)*puVar10)(plVar16,puVar10[1]);
            puVar1 = PTR_DAT_06780ad0;
            puVar2 = PTR_DAT_0675f3d8;
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar13 = *plVar16;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)puVar2,0);
LAB_0511d15c:
              uVar14 = (*(code *)*puVar10)(plVar16,puVar10[1]);
              if ((uVar14 & 1) == 0) goto LAB_0511d1d4;
              lVar13 = *plVar16;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)puVar1,0);
LAB_0511d1b8:
              uVar11 = (*(code *)*puVar10)(plVar16,puVar10[1]);
              FUN_05126010(param_2,uVar11);
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar16 = *(long **)(param_3 + 0xf8);
      if (plVar16 == (long *)0x0) goto LAB_0511d2a4;
      lVar13 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      uVar11 = (*(code *)*puVar10)(plVar16,0,puVar10[1]);
      FUN_05126010(param_2,uVar11);
    }
  }
LAB_0511d268:
  plVar20 = (long *)*plVar20;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x588))(plVar20,*(undefined8 *)(*plVar20 + 0x590));
    return;
  }
LAB_0511d2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


