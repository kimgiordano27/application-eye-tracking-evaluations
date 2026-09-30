/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$set_CloseCollidersCacheSize
ENTRY_POINT: 05f97f34
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05f989b0) */
/* WARNING: Removing unreachable block (ram,0x05f98eb8) */
/* WARNING: Removing unreachable block (ram,0x05f98ebc) */
/* WARNING: Removing unreachable block (ram,0x05f98674) */
/* WARNING: Removing unreachable block (ram,0x05f9917c) */
/* WARNING: Removing unreachable block (ram,0x05f99180) */
/* WARNING: Removing unreachable block (ram,0x05f99250) */

undefined8
Oculus_Interaction_Surfaces_PhysicsLayerSurface__set_CloseCollidersCacheSize(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  long unaff_x20;
  uint uVar20;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *plVar21;
  undefined8 uVar22;
  long *plVar23;
  long unaff_x28;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  long *in_stack_000000b8;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x4f8));
  FUN_03642964(PTR_DAT_07a1e0f8);
  FUN_03642964(PTR_DAT_07a02c10);
  FUN_03642964(PTR_DAT_079f4950);
  FUN_03642964(PTR_DAT_079f4598);
  FUN_03642964(PTR_DAT_079f49a0);
  FUN_03642964(PTR_DAT_07a1e050);
  FUN_03642964(PTR_DAT_079f49a8);
  FUN_03642964(PTR_DAT_07a1b7c8);
  FUN_03642964(PTR_DAT_079f4958);
  FUN_03642964(PTR_DAT_07a1bdd8);
  FUN_03642964(PTR_DAT_07a1e460);
  FUN_03642964(PTR_DAT_07a1dc28);
  FUN_03642964(PTR_DAT_07a1dbf0);
  FUN_03642964(PTR_DAT_07a1b7b8);
  FUN_03642964(PTR_DAT_07a1e500);
  FUN_03642964(PTR_DAT_07a1e508);
  FUN_03642964(PTR_DAT_07a1e478);
  FUN_03642964(PTR_DAT_07a1e510);
  FUN_03642964(PTR_DAT_07a1e518);
  FUN_03642964(PTR_DAT_07a1e520);
  FUN_03642964(PTR_DAT_079f4558);
  FUN_03642964(PTR_DAT_07a1e528);
  FUN_03642964(PTR_DAT_07a1e530);
  FUN_03642964(PTR_DAT_07a1e538);
  FUN_03642964(PTR_DAT_07a1e540);
  FUN_03642964(PTR_DAT_07a1e548);
  FUN_03642964(PTR_DAT_07a1e1c0);
  FUN_03642964(PTR_DAT_079fb398);
  FUN_03642964(PTR_DAT_07a1e550);
  FUN_03642964(PTR_DAT_07a01510);
  *(undefined1 *)(unaff_x20 + 0xea0) = 1;
  in_stack_000000b0 = (undefined8 *)0x0;
  in_stack_000000b8 = (long *)0x0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = (undefined8 *)0x0;
  in_stack_00000090 = (long *)0x0;
  in_stack_00000098 = 0;
  in_stack_00000080 = (long *)0x0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_05f7d26c();
  if (unaff_x28 == 0) goto LAB_05f99420;
  uVar11 = FUN_05f8d7f0();
  plVar14 = (long *)PTR_DAT_07a1e1c0;
  puVar2 = PTR_DAT_07a1bdd8;
  if ((uVar11 & 1) == 0) {
    if (*(long *)(unaff_x24 + 0x20) == 0) goto LAB_05f99420;
    uVar20 = *(uint *)(*(long *)(unaff_x24 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar20 = 1;
  }
  plVar21 = *(long **)(unaff_x24 + 0x28);
  if (plVar21 != (long *)0x0) {
    lVar15 = *plVar21;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07a1bdd8) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_05f98170;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_0367cd30(plVar21,*(long *)PTR_DAT_07a1bdd8,0);
LAB_05f98170:
    iVar8 = (*(code *)*puVar12)(plVar21,puVar12[1]);
    if (2 < iVar8) {
      uVar13 = FUN_05f808d8();
      lVar15 = *plVar14;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar15);
        lVar15 = *plVar14;
      }
      puVar12 = *(undefined8 **)(lVar15 + 0xb8);
      lVar24 = puVar12[1];
      uVar22 = *(undefined8 *)PTR_DAT_079fb398;
      if (lVar24 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar15);
          puVar12 = *(undefined8 **)(*plVar14 + 0xb8);
        }
        uVar25 = *puVar12;
        lVar24 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a1e4f8);
        FUN_04159c38(lVar24,uVar25,*(undefined8 *)PTR_DAT_07a1e530,0);
        plVar21 = (long *)(*(long *)(*plVar14 + 0xb8) + 8);
        *plVar21 = lVar24;
        thunk_FUN_036b7ad0(plVar21,lVar24);
      }
      uVar13 = FUN_03cb9310(uVar13,lVar24,*(undefined8 *)PTR_DAT_07a1e4d0);
      uVar13 = FUN_05c98fe8(uVar22,uVar13,0);
      if (unaff_x21 == (long *)0x0) goto LAB_05f99420;
      plVar21 = *(long **)(unaff_x24 + 0x28);
      uVar22 = (**(code **)(*unaff_x21 + 0x278))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x280));
      if (*(int *)(*(long *)PTR_DAT_079f49b0 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f49b0);
      }
      uVar25 = FUN_05d949a4(0);
      uVar13 = FUN_05f7cee0(*(undefined8 *)PTR_DAT_07a1e550,uVar25,*(undefined8 *)(unaff_x28 + 0x60)
                            ,uVar13);
      if (*(int *)(*(long *)PTR_DAT_07a1b7b8 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_07a1b7b8);
      }
      uVar25 = thunk_FUN_0367fd24(unaff_x21,*(undefined8 *)PTR_DAT_07a1b7c8);
      uVar13 = FUN_05f1f140(uVar25,uVar22,uVar13,0);
      if (plVar21 == (long *)0x0) goto LAB_05f99420;
      lVar15 = *plVar21;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_05f98350;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_0367cd30(plVar21,*(long *)puVar2,1);
LAB_05f98350:
      (*(code *)*puVar12)(plVar21,3,uVar13,0,puVar12[1]);
    }
  }
  lVar15 = FUN_05f99740();
  if (uVar20 != 0) {
    if (*(long *)(unaff_x28 + 0xd8) != 0) {
      plVar14 = (long *)FUN_053a404c(*(long *)(unaff_x28 + 0xd8),*(undefined8 *)PTR_DAT_07a1e048);
      puVar7 = PTR_DAT_07a1e548;
      puVar6 = PTR_DAT_07a1e540;
      puVar5 = PTR_DAT_07a1e500;
      puVar4 = PTR_DAT_07a1e4f0;
      puVar3 = PTR_DAT_07a1e4c8;
      puVar2 = PTR_DAT_07a1e050;
      in_stack_00000048 = &stack0x000000b8;
      in_stack_00000040 = 0;
joined_r0x05f983b0:
      do {
        do {
          in_stack_000000b8 = plVar14;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar24 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_079f49a8) {
                puVar12 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_05f9843c;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f49a8,0);
LAB_05f9843c:
          uVar11 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          plVar21 = in_stack_000000b8;
          plVar14 = (long *)PTR_DAT_07a1e1c0;
          if ((uVar11 & 1) == 0) {
            if (in_stack_000000b8 == (long *)0x0)
            goto Oculus_Interaction_Surfaces_PlaneSurface__get_Normal;
            lVar24 = *in_stack_000000b8;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 == 0) goto LAB_05f98640;
            piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            goto LAB_05f98628;
          }
          lVar24 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
          FUN_05f9a8c0(lVar24,0);
          plVar14 = in_stack_000000b8;
          if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *in_stack_000000b8;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_05f984b4;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_0367cd30(in_stack_000000b8,*(long *)puVar2,0);
LAB_05f984b4:
          lVar16 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar21 = (long *)(lVar24 + 0x10);
          *plVar21 = lVar16;
          thunk_FUN_036b7ad0(plVar21);
          if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar14 = in_stack_000000b8;
        } while (*(char *)(*plVar21 + 0x80) != '\0');
        uVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
        FUN_04159004(uVar13,lVar24,*(undefined8 *)puVar6,0);
        uVar11 = FUN_03c9b274(lVar15,uVar13,*(undefined8 *)puVar3);
        plVar14 = in_stack_000000b8;
      } while ((uVar11 & 1) == 0);
      if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar13 = *(undefined8 *)(*plVar21 + 0x30);
      lVar24 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a1e4c0);
      FUN_05f9a7e8(lVar24,uVar13,0);
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      *(long *)(lVar24 + 0x18) = *plVar21;
      thunk_FUN_036b7ad0();
      in_stack_00000060 = 0;
      FUN_0493c164(&stack0x00000060,0,*(undefined8 *)PTR_DAT_07a1e518);
      *(long *)(lVar24 + 0x28) = in_stack_00000060;
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar18 = *(long *)puVar5;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar10 = *(uint *)(lVar15 + 0x18);
          if (uVar10 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar10 + 1;
            plVar14 = (long *)(lVar16 + (long)(int)uVar10 * 8 + 0x20);
            *plVar14 = lVar24;
            thunk_FUN_036b7ad0(plVar14,lVar24);
            plVar14 = in_stack_000000b8;
          }
          else {
            FUN_0459f03c(lVar15,lVar24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            plVar14 = in_stack_000000b8;
          }
          goto joined_r0x05f983b0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    goto LAB_05f99420;
  }
  goto Oculus_Interaction_Surfaces_PlaneSurface__get_Normal;
LAB_05f988c8:
  if (puVar12[3] != 0) {
    uVar13 = FUN_05f808d8(unaff_x28);
    lVar24 = *plVar14;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar24 = *plVar14;
    }
    puVar17 = *(undefined8 **)(lVar24 + 0xb8);
    lVar16 = puVar17[2];
    if (lVar16 == 0) {
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar17 = *(undefined8 **)(*plVar14 + 0xb8);
      }
      uVar22 = *puVar17;
      lVar16 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a1e4f8);
      FUN_04159c38(lVar16,uVar22,*(undefined8 *)PTR_DAT_07a1e538,0);
      plVar23 = (long *)(*(long *)(*plVar14 + 0xb8) + 0x10);
      *plVar23 = lVar16;
      thunk_FUN_036b7ad0(plVar23,lVar16);
    }
    if (puVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar24 = FUN_03ef92bc(uVar13,lVar16,*(undefined8 *)(puVar12[3] + 0x60),
                          *(undefined8 *)PTR_DAT_07a1e528);
    if (lVar24 != 0) {
LAB_05f98794:
      if (*(char *)(lVar24 + 0x80) == '\0') {
        if (((uVar20 != 0) && ((ulong)puVar12[5] >> 0x21 == 0)) && ((puVar12[5] & 0xff) != 0)) {
          plVar23 = (long *)(lVar24 + 0x48);
          if (*plVar23 == 0) {
            lVar16 = FUN_05f90b0c(unaff_x24,*(undefined8 *)(lVar24 + 0x40));
            *plVar23 = lVar16;
            thunk_FUN_036b7ad0(plVar23);
          }
          in_stack_00000098 = *(undefined8 *)(lVar24 + 0x90);
          if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar10 = FUN_0493c1a8(&stack0x00000098,*(undefined4 *)(*(long *)(unaff_x24 + 0x20) + 0x2c)
                                ,*(undefined8 *)PTR_DAT_07a1e478);
          if ((uVar10 >> 1 & 1) != 0) {
            uVar13 = FUN_05f8e0a0(lVar24);
            if (*(int *)(*(long *)PTR_DAT_079f49b0 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar22 = FUN_05d949a4(0);
            uVar13 = FUN_05f93240(uVar22,unaff_x21,uVar13,uVar22,*(undefined8 *)(lVar24 + 0x48),
                                  *(undefined8 *)(lVar24 + 0x40));
            puVar12[6] = uVar13;
            thunk_FUN_036b7ad0();
          }
        }
        lVar16 = FUN_05f808d8(unaff_x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar10 = FUN_053a40d8(lVar16,lVar24,*(undefined8 *)PTR_DAT_07a1e4b8);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar24 = puVar12[6];
        if ((lVar24 != 0) &&
           (lVar16 = thunk_FUN_0367fd24(lVar24,*(undefined8 *)(*plVar21 + 0x40)), lVar16 == 0)) {
          uVar13 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar13,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar21[(long)(int)uVar10 + 4] = lVar24;
        thunk_FUN_036b7ad0(plVar21 + (long)(int)uVar10 + 4,lVar24);
        *(undefined1 *)(puVar12 + 7) = 1;
      }
    }
  }
  goto LAB_05f986f8;
LAB_05f98aec:
  if ((lVar16 == 0) || (*(char *)(lVar24 + 0x82) != '\0')) goto LAB_05f98a3c;
  if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar14 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0x40);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar18 = *plVar14;
  uVar22 = *(undefined8 *)(lVar24 + 0x40);
  uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar11 != 0) {
    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07a1e0f8) {
        puVar17 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_05f98b90;
      }
      uVar11 = uVar11 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar11 != 0);
  }
  puVar17 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_07a1e0f8,0);
LAB_05f98b90:
  plVar14 = (long *)(*(code *)*puVar17)(plVar14,uVar22,puVar17[1]);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)((long)plVar14 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a1dc28 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a1dc28))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar14);
    }
    if ((*(char *)((long)plVar14 + 0xf2) != '\0') && ((char)plVar14[5] == '\0')) {
      plVar14 = *(long **)(lVar24 + 0x68);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar24 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07a1e460) {
            puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto FUN_05f98c5c;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar17 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_07a1e460,1);
FUN_05f98c5c:
      lVar24 = (*(code *)*puVar17)(plVar14,uVar13,puVar17[1]);
      if (lVar24 != 0) {
        uVar22 = thunk_FUN_03652da4(lVar24,0);
        uVar22 = FUN_05f90b70(unaff_x24,uVar22);
        lVar18 = FUN_03156018(uVar22,*(undefined8 *)PTR_DAT_07a1dc28);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(char *)(lVar18 + 0xf1) == '\0') {
          plVar14 = (long *)FUN_03157130(lVar24,*(undefined8 *)PTR_DAT_079f4958);
        }
        else {
          plVar14 = (long *)FUN_05f8ada4(lVar18,lVar24);
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar11 = FUN_03156cec(6,*(undefined8 *)PTR_DAT_079f4958,plVar14);
        if ((uVar11 & 1) == 0) {
          if (*(char *)(lVar18 + 0xf1) == '\0') {
            auVar26 = FUN_03157130(lVar16,*(undefined8 *)PTR_DAT_079f4958);
          }
          else {
            auVar26 = FUN_05f8ada4(lVar18,lVar16);
          }
          uVar22 = auVar26._8_8_;
          if (auVar26._0_8_ != 0) {
            plVar21 = (long *)FUN_03156cec(0,*(undefined8 *)PTR_DAT_079f49a0,auVar26._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar21;
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar24 = *plVar21;
              uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_079f49a8) {
                    puVar17 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_05f98dac;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_0367cd30(plVar21,*(long *)PTR_DAT_079f49a8,0);
LAB_05f98dac:
              uVar11 = (*(code *)*puVar17)(plVar21,puVar17[1]);
              plVar21 = in_stack_00000090;
              if ((uVar11 & 1) == 0) goto LAB_05f98ea4;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar24 = *in_stack_00000090;
              uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_079f49a8) {
                    puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto FUN_05f98e1c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_0367cd30(in_stack_00000090,*(long *)PTR_DAT_079f49a8,1);
FUN_05f98e1c:
              uVar22 = (*(code *)*puVar17)(plVar21,puVar17[1]);
              lVar24 = *plVar14;
              uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_079f4958) {
                    puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                    goto LAB_05f98e84;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4958,2);
LAB_05f98e84:
              (*(code *)*puVar17)(plVar14,uVar22,puVar17[1]);
              plVar21 = in_stack_00000090;
            } while( true );
          }
          goto LAB_05f99474;
        }
      }
    }
  }
  else if (*(int *)((long)plVar14 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a1dbf0 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a1dbf0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar14);
    }
    if ((char)plVar14[5] == '\0') {
      plVar21 = *(long **)(lVar24 + 0x68);
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar24 = *plVar21;
      uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07a1e460) {
            puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_05f98f68;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar17 = (undefined8 *)FUN_0367cd30(plVar21,*(long *)PTR_DAT_07a1e460,1);
LAB_05f98f68:
      lVar24 = (*(code *)*puVar17)(plVar21,uVar13,puVar17[1]);
      if (lVar24 != 0) {
        if ((char)plVar14[0x20] == '\0') {
          plVar21 = (long *)FUN_03157130(lVar24,*(undefined8 *)PTR_DAT_079f4950);
        }
        else {
          plVar21 = (long *)FUN_05f8c474(plVar14,lVar24);
        }
        if ((char)plVar14[0x20] == '\0') {
          auVar26 = FUN_03157130(lVar16,*(undefined8 *)PTR_DAT_079f4950);
        }
        else {
          auVar26 = FUN_05f8c474(plVar14,lVar16);
        }
        uVar22 = auVar26._8_8_;
        if (auVar26._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_03156cec(9,*(undefined8 *)PTR_DAT_079f4950);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar14 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar24 = *in_stack_00000080;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_079f49a8) {
                  puVar17 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_05f99070;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_0367cd30(in_stack_00000080,*(long *)PTR_DAT_079f49a8,0);
LAB_05f99070:
            uVar11 = (*(code *)*puVar17)(plVar14,puVar17[1]);
            plVar14 = in_stack_00000080;
            if ((uVar11 & 1) == 0) goto LAB_05f99168;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar24 = *in_stack_00000080;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07a02c10) {
                  puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_05f990e0;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_0367cd30(in_stack_00000080,*(long *)PTR_DAT_07a02c10,2);
LAB_05f990e0:
            auVar26 = (*(code *)*puVar17)(plVar14,puVar17[1]);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar24 = *plVar21;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_079f4950) {
                  puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_05f99150;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_0367cd30(plVar21,*(long *)PTR_DAT_079f4950,1);
LAB_05f99150:
            (*(code *)*puVar17)(plVar21,auVar26._0_8_,auVar26._8_8_,puVar17[1]);
          } while( true );
        }
LAB_05f99474:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18(0,uVar22,0);
      }
    }
  }
LAB_05f98b78:
  *(undefined1 *)(puVar12 + 7) = 1;
  goto LAB_05f98a3c;
LAB_05f98ea4:
  FUN_0315420c(&stack0x00000040);
  goto LAB_05f98b78;
LAB_05f99168:
  FUN_0324f4c0(&stack0x00000040);
  goto LAB_05f98b78;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar19 = piVar19 + 4;
    if (uVar11 == 0) break;
LAB_05f98628:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar12 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_05f9865c;
    }
  }
LAB_05f98640:
  puVar12 = (undefined8 *)FUN_0367cd30(in_stack_000000b8,*(long *)PTR_DAT_079f4598,0);
LAB_05f9865c:
  (*(code *)*puVar12)(plVar21,puVar12[1]);
Oculus_Interaction_Surfaces_PlaneSurface__get_Normal:
  lVar24 = FUN_05f808d8(unaff_x28);
  puVar2 = PTR_DAT_079f4558;
  if (lVar24 != 0) {
    uVar9 = FUN_053a3a50(lVar24,*(undefined8 *)PTR_DAT_07a1e358);
    plVar21 = (long *)FUN_03642a4c(*(undefined8 *)puVar2,uVar9);
    puVar2 = PTR_DAT_07a1e4e0;
    if (lVar15 != 0) {
      FUN_0459fb44(&stack0x00000040,lVar15,*(undefined8 *)PTR_DAT_07a1e508);
      in_stack_000000a0 = in_stack_00000040;
      in_stack_00000040 = 0;
      in_stack_000000a8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000050;
      in_stack_00000048 = &stack0x000000a0;
LAB_05f986f8:
      uVar11 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2);
      puVar12 = in_stack_000000b0;
      lVar24 = in_stack_00000040;
      if ((uVar11 & 1) != 0) {
        if (uVar20 == 0) {
          if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
        }
        else {
          if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar24 = in_stack_000000b0[3];
          if ((lVar24 != 0) && (*(char *)(in_stack_000000b0 + 5) == '\0')) {
            if ((long *)in_stack_000000b0[6] == (long *)0x0) {
              uVar9 = 1;
            }
            else if (*(long *)in_stack_000000b0[6] == *(long *)(PTR_DAT_079f4610 + 0x90)) {
              uVar11 = FUN_05f937e0(*(undefined8 *)(lVar24 + 0x40),*(undefined8 *)(lVar24 + 0x48));
              uVar9 = 1;
              if ((uVar11 & 1) == 0) {
                uVar9 = 2;
              }
            }
            else {
              uVar9 = 2;
            }
            in_stack_00000060 = 0;
            FUN_0493c164(&stack0x00000060,uVar9,*(undefined8 *)PTR_DAT_07a1e518);
            puVar12[5] = in_stack_00000060;
          }
        }
        lVar24 = puVar12[4];
        if (lVar24 == 0) goto LAB_05f988c8;
        goto LAB_05f98794;
      }
      FUN_05897b24(in_stack_00000048,*(undefined8 *)PTR_DAT_07a1e4d8);
      if (lVar24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(lVar24);
      }
      if (unaff_x25 != 0) {
        uVar13 = (**(code **)(unaff_x25 + 0x18))
                           (*(undefined8 *)(unaff_x25 + 0x40),plVar21,
                            *(undefined8 *)(unaff_x25 + 0x28));
        if (unaff_x23 != 0) {
          FUN_05f97514(unaff_x24,unaff_x21,unaff_x23,uVar13);
        }
        FUN_05f978d4(unaff_x24,unaff_x21,unaff_x28,uVar13);
        FUN_0459fb44(&stack0x00000040,lVar15,*(undefined8 *)PTR_DAT_07a1e508);
        in_stack_00000068 = &stack0x000000a0;
        in_stack_00000060 = 0;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000050;
LAB_05f98a3c:
        do {
          uVar11 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2);
          puVar12 = in_stack_000000b0;
          lVar24 = in_stack_00000060;
          if ((uVar11 & 1) == 0) {
            FUN_05897b24(in_stack_00000068,*(undefined8 *)PTR_DAT_07a1e4d8);
            if (lVar24 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00(lVar24);
            }
            if (*(long *)(unaff_x28 + 0xe0) != 0) {
              FUN_0459fb44(&stack0x00000040,lVar15,*(undefined8 *)PTR_DAT_07a1e508);
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar11 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2),
                    (uVar11 & 1) != 0) {
                if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(char *)(in_stack_000000b0 + 7) == '\0') &&
                   (((ulong)in_stack_000000b0[5] >> 0x20 != 0 ||
                    ((in_stack_000000b0[5] & 0xff) == 0)))) {
                  lVar24 = *(long *)(unaff_x28 + 0xe0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  (**(code **)(lVar24 + 0x18))
                            (*(undefined8 *)(lVar24 + 0x40),uVar13,in_stack_000000b0[2],
                             in_stack_000000b0[6],*(undefined8 *)(lVar24 + 0x28));
                }
              }
              FUN_05897b24(&stack0x000000a0,*(undefined8 *)PTR_DAT_07a1e4d8);
            }
            if (uVar20 != 0) {
              FUN_0459fb44(&stack0x00000040,lVar15,*(undefined8 *)PTR_DAT_07a1e508);
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar11 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2),
                    puVar12 = in_stack_000000b0, (uVar11 & 1) != 0) {
                if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (in_stack_000000b0[3] != 0) {
                  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar9 = (**(code **)(*unaff_x21 + 0x268))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x270));
                  FUN_05f99df0(unaff_x24,uVar13,unaff_x21,unaff_x28,uVar9,puVar12[3],
                               *(undefined4 *)((long)puVar12 + 0x2c),*(char *)(puVar12 + 7) == '\0')
                  ;
                }
              }
              FUN_05897b24(&stack0x000000a0,*(undefined8 *)PTR_DAT_07a1e4d8);
            }
            FUN_05f97b00(unaff_x24,unaff_x21,unaff_x28,uVar13);
            return uVar13;
          }
          if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
        } while ((((*(char *)(in_stack_000000b0 + 7) != '\0') ||
                  (lVar24 = in_stack_000000b0[3], lVar24 == 0)) ||
                 (*(char *)(lVar24 + 0x80) != '\0')) ||
                (((ulong)in_stack_000000b0[5] >> 0x20 == 0 && ((in_stack_000000b0[5] & 0xff) != 0)))
                );
        lVar16 = in_stack_000000b0[6];
        uVar11 = FUN_05f9740c(unaff_x24,lVar24,unaff_x28,lVar16);
        if ((uVar11 & 1) == 0) goto LAB_05f98aec;
        plVar14 = *(long **)(lVar24 + 0x68);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar24 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07a1e460) {
              puVar17 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_05f98b64;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar17 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_07a1e460,0);
LAB_05f98b64:
        (*(code *)*puVar17)(plVar14,uVar13,lVar16,puVar17[1]);
        goto LAB_05f98b78;
      }
    }
  }
LAB_05f99420:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


