/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 05c61340
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  uint uStack000000000000013c;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  ulong in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  ulong in_stack_00000170;
  
  if ((DAT_076d7a3f & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072ab1f0);
    thunk_FUN_032e1da0(PTR_DAT_072abb18);
    thunk_FUN_032e1da0(PTR_DAT_072abb20);
    thunk_FUN_032e1da0(PTR_DAT_072ab200);
    thunk_FUN_032e1da0(PTR_DAT_072ab208);
    thunk_FUN_032e1da0(PTR_DAT_072abb28);
    thunk_FUN_032e1da0(PTR_DAT_072abb30);
    thunk_FUN_032e1da0(PTR_DAT_072ab2d0);
    thunk_FUN_032e1da0(PTR_DAT_072abb38);
    thunk_FUN_032e1da0(PTR_DAT_072abb40);
    thunk_FUN_032e1da0(PTR_DAT_072ab9f0);
    thunk_FUN_032e1da0(PTR_DAT_072abb48);
    thunk_FUN_032e1da0(PTR_DAT_072abb50);
    thunk_FUN_032e1da0(PTR_DAT_072abb58);
    thunk_FUN_032e1da0(PTR_DAT_072abb60);
    thunk_FUN_032e1da0(PTR_DAT_072abb68);
    thunk_FUN_032e1da0(PTR_DAT_072abb70);
    thunk_FUN_032e1da0(PTR_DAT_0727b958);
    thunk_FUN_032e1da0(PTR_DAT_072abb78);
    thunk_FUN_032e1da0(PTR_DAT_072abb80);
    thunk_FUN_032e1da0(PTR_DAT_072abb88);
    thunk_FUN_032e1da0(PTR_DAT_072abb90);
    thunk_FUN_032e1da0(PTR_DAT_072abb98);
    thunk_FUN_032e1da0(PTR_DAT_072abba0);
    thunk_FUN_032e1da0(PTR_DAT_072abba8);
    thunk_FUN_032e1da0(PTR_DAT_072abbb0);
    thunk_FUN_032e1da0(PTR_DAT_0728e118);
    thunk_FUN_032e1da0(PTR_DAT_072abbb8);
    thunk_FUN_032e1da0(PTR_DAT_07281758);
    thunk_FUN_032e1da0(PTR_DAT_072817e0);
    thunk_FUN_032e1da0(PTR_DAT_072abbc0);
    thunk_FUN_032e1da0(PTR_DAT_072abbc8);
    thunk_FUN_032e1da0(PTR_DAT_072aae88);
    thunk_FUN_032e1da0(PTR_DAT_072abbd0);
    DAT_076d7a3f = 1;
  }
  uStack000000000000013c = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b0 = 0;
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  plVar18 = *(long **)(param_1 + 0x18);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar18 == (long *)0x0) goto LAB_05c61d8c;
    *(undefined4 *)((long)plVar18 + 0x20c) = *(undefined4 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x50) = plVar18[0x1e];
    thunk_FUN_0333a630();
    *(long *)(param_1 + 0x58) = plVar18[0x1f];
    thunk_FUN_0333a630();
    puVar22 = (undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x60) = *puVar22;
    lVar16 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072abbc0);
    plVar11 = (long *)(param_1 + 0x68);
    *plVar11 = lVar16;
    thunk_FUN_0333a630();
    uVar8 = *(undefined4 *)(param_1 + 0x60);
    lVar16 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ab9f0);
    FUN_0507eeb8(lVar16,uVar8,*(undefined8 *)PTR_DAT_072abb38);
    plVar19 = (long *)(param_1 + 0x70);
    *plVar19 = lVar16;
    thunk_FUN_0333a630(plVar19,lVar16);
    *(bool *)(param_1 + 0x78) = plVar18[0x33] == 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar15 = 0;
      lVar16 = 0x20;
      do {
        iVar9 = FUN_05c3885c(puVar22,uVar15 & 0xffffffff,0);
        uVar13 = *(undefined8 *)PTR_DAT_072abbc8;
        if (iVar9 == 0) {
          uVar13 = FUN_057a19ac(*(undefined8 *)PTR_DAT_072abbd0,uVar13,0);
          if (*(int *)(*(long *)PTR_DAT_07281758 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)PTR_DAT_07281758);
          }
          FUN_05c61198(uVar13,*(undefined8 *)PTR_DAT_072aae88,plVar18);
        }
        else {
          if (*plVar19 == 0) goto LAB_05c61d8c;
          FUN_0507f864(*plVar19,iVar9,uVar15 & 0xffffffff,*(undefined8 *)PTR_DAT_072abb20);
          uVar8 = FUN_05c3869c(puVar22,uVar15 & 0xffffffff,0);
          lVar21 = *(long *)(param_1 + 0x58);
          if (lVar21 == 0) goto LAB_05c61d8c;
          uVar14 = FUN_050811d4(lVar21,iVar9,&stack0x0000013c,*(undefined8 *)PTR_DAT_072ab2d0);
          if ((uVar14 & 1) == 0) {
            if (*(char *)(param_1 + 0x78) == '\0') {
              uVar20 = 0;
            }
            else {
              lVar21 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b958);
              FUN_06be9c64(lVar21,uVar13,0);
              if (lVar21 == 0) goto LAB_05c61d8c;
              uVar20 = FUN_06be99dc(lVar21,0);
            }
            lVar21 = *plVar11;
            in_stack_00000038 = 0;
            in_stack_00000040 = 0;
            in_stack_00000030 = uVar13;
            thunk_FUN_0333a630(&stack0x00000030,uVar13);
            in_stack_00000038 = uVar20;
            thunk_FUN_0333a630(&stack0x00000038,uVar20);
            in_stack_00000040 = CONCAT44(iVar9,uVar8);
            if (lVar21 == 0) goto LAB_05c61d8c;
            uVar2 = *(uint *)(lVar21 + 0x18);
            in_stack_00000068 = in_stack_00000038;
            in_stack_00000060 = in_stack_00000030;
            in_stack_00000070 = in_stack_00000040;
          }
          else {
            lVar21 = *(long *)(param_1 + 0x50);
            if (lVar21 == 0) goto LAB_05c61d8c;
            if (*(uint *)(lVar21 + 0x18) <= uStack000000000000013c) goto LAB_05c61d98;
            lVar21 = lVar21 + (ulong)uStack000000000000013c * 0x18;
            uVar20 = *(undefined8 *)(lVar21 + 0x28);
            uVar1 = *(undefined4 *)(lVar21 + 0x34);
            lVar21 = *plVar11;
            in_stack_00000038 = 0;
            in_stack_00000040 = 0;
            in_stack_00000030 = uVar13;
            thunk_FUN_0333a630(&stack0x00000030,uVar13);
            in_stack_00000038 = uVar20;
            thunk_FUN_0333a630(&stack0x00000038,uVar20);
            in_stack_00000040 = CONCAT44(uVar1,uVar8);
            if (lVar21 == 0) goto LAB_05c61d8c;
            uVar2 = *(uint *)(lVar21 + 0x18);
            in_stack_00000080 = in_stack_00000030;
            in_stack_00000088 = in_stack_00000038;
            in_stack_00000090 = in_stack_00000040;
          }
          if (uVar2 <= uVar15) {
LAB_05c61d98:
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          puVar12 = (undefined8 *)(lVar21 + lVar16);
          puVar12[2] = in_stack_00000040;
          puVar12[1] = in_stack_00000038;
          *puVar12 = in_stack_00000030;
          thunk_FUN_0333a630(puVar12,0);
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x18;
      } while (uVar15 < *(uint *)(param_1 + 0x60));
    }
    if (*(int *)(*(long *)PTR_DAT_072817e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar15 = FUN_05c3aa04(0);
    if ((uVar15 & 1) != 0) {
      uVar13 = 0x100000001;
      goto LAB_05c61c84;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_05c6191c;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_05c61c40;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_05c61c90;
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (plVar18 == (long *)0x0) goto LAB_05c61d8c;
    uVar20 = *(undefined8 *)(param_1 + 0x68);
    uVar13 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
    if (*(int *)(*(long *)PTR_DAT_0728e118 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_05c5b0d4(uVar20,uVar13,param_1 + 0x28,0);
  }
  if (*(int *)(*(long *)PTR_DAT_072817e0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar15 = FUN_05c3aa04(0);
  uVar13 = DAT_0139e570;
  if ((uVar15 & 1) != 0) {
LAB_05c61c84:
    *(undefined8 *)(param_1 + 0x10) = uVar13;
    return 1;
  }
LAB_05c6191c:
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_05c61d8c:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_0507fc3c(&stack0x00000030,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_072abb30);
  puVar7 = PTR_DAT_072abba8;
  puVar6 = PTR_DAT_072abb88;
  puVar5 = PTR_DAT_072abb58;
  puVar4 = PTR_DAT_072abb40;
  puVar3 = PTR_DAT_072abb28;
  in_stack_00000118 = in_stack_00000038;
  in_stack_00000110 = in_stack_00000030;
  in_stack_00000128 = in_stack_00000048;
  in_stack_00000120 = in_stack_00000040;
  lVar16 = 0;
  while (uVar14 = FUN_05379444(&stack0x00000110,*(undefined8 *)puVar5), uVar15 = in_stack_00000120,
        (uVar14 & 1) != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar14 = FUN_0507fa50(*(long *)(param_1 + 0x70),in_stack_00000120 & 0xffffffff,
                          *(undefined8 *)puVar3);
    if ((uVar14 & 1) == 0) {
      lVar21 = *(long *)(param_1 + 0x50);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar21 + 0x18) <= (uint)(uVar15 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar21 = lVar21 + (uVar15 >> 0x20) * 0x18;
      in_stack_00000100 = *(ulong *)(lVar21 + 0x30);
      in_stack_000000f8 = *(undefined8 *)(lVar21 + 0x28);
      in_stack_000000f0 = *(undefined8 *)(lVar21 + 0x20);
      if (lVar16 == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        iVar9 = FUN_0507f518(*(long *)(param_1 + 0x58),*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        iVar10 = FUN_0507f518(*(long *)(param_1 + 0x70),*(undefined8 *)puVar4);
        lVar16 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072abbb0);
        iVar9 = iVar9 - iVar10;
        if (iVar9 < 5) {
          iVar9 = 4;
        }
        FUN_0432d998(lVar16,iVar9,*(undefined8 *)puVar7);
        in_stack_00000038 = in_stack_000000f8;
        in_stack_00000030 = in_stack_000000f0;
        in_stack_00000040 = in_stack_00000100;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
      }
      lVar17 = *(long *)puVar6;
      in_stack_00000148 = in_stack_000000f8;
      in_stack_00000140 = in_stack_000000f0;
      in_stack_00000150 = in_stack_00000100;
      lVar21 = *(long *)(lVar16 + 0x10);
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      in_stack_00000030 = in_stack_000000f0;
      in_stack_00000038 = in_stack_000000f8;
      in_stack_00000040 = in_stack_00000100;
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar2 = *(uint *)(lVar16 + 0x18);
      if (uVar2 < *(uint *)(lVar21 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
        lVar21 = lVar21 + (long)(int)uVar2 * 0x18;
        *(ulong *)(lVar21 + 0x30) = in_stack_00000100;
        *(undefined8 *)(lVar21 + 0x28) = in_stack_000000f8;
        *(undefined8 *)(lVar21 + 0x20) = in_stack_000000f0;
        thunk_FUN_0333a630(lVar21 + 0x20,0);
      }
      else {
        in_stack_00000168 = in_stack_000000f8;
        in_stack_00000160 = in_stack_000000f0;
        in_stack_00000170 = in_stack_00000100;
        FUN_0432e248(lVar16,&stack0x00000160,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  FUN_05379544(&stack0x00000110,*(undefined8 *)PTR_DAT_072abb48);
  if (lVar16 != 0) {
    FUN_043300e4(lVar16,*(undefined8 *)PTR_DAT_072abba0);
    FUN_0432eed8(&stack0x00000030,lVar16,*(undefined8 *)PTR_DAT_072abb98);
    puVar3 = PTR_DAT_072abb60;
    in_stack_000000c8 = in_stack_00000038;
    in_stack_000000c0 = in_stack_00000030;
    in_stack_000000d8 = in_stack_00000048;
    in_stack_000000d0 = in_stack_00000040;
    in_stack_000000e0 = in_stack_00000050;
    while (uVar15 = FUN_053359cc(&stack0x000000c0,*(undefined8 *)puVar3), (uVar15 & 1) != 0) {
      in_stack_000000b0 = in_stack_000000e0;
      in_stack_000000a8 = in_stack_000000d8;
      in_stack_000000a0 = in_stack_000000d0;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05c58ce0(plVar18,&stack0x000000a0,0);
    }
    FUN_053359c8(&stack0x000000c0,*(undefined8 *)PTR_DAT_072abb50);
    iVar9 = *(int *)(lVar16 + 0x18);
    *(undefined4 *)(lVar16 + 0x18) = 0;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (0 < iVar9) {
      FUN_05946274(*(undefined8 *)(lVar16 + 0x10),0,iVar9,0);
    }
  }
  if (plVar18 == (long *)0x0) goto LAB_05c61d8c;
  plVar18[0x1e] = *(long *)(param_1 + 0x68);
  thunk_FUN_0333a630(plVar18 + 0x1e);
  FUN_03b0183c(plVar18[0x1f],*(undefined8 *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_072abbb8);
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_05c61d8c;
  FUN_0507f9e4(*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_072ab208);
  if (plVar18[0x20] == 0) goto LAB_05c61d8c;
  FUN_0506fe10(plVar18[0x20],*(undefined8 *)PTR_DAT_072ab200);
  if (*(int *)(*(long *)PTR_DAT_072817e0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar15 = FUN_05c3aa04(0);
  uVar13 = DAT_0139e020;
  if ((uVar15 & 1) != 0) goto LAB_05c61c84;
LAB_05c61c40:
  if (*(int *)(param_1 + 0x60) != 0) {
    if (plVar18 == (long *)0x0) goto LAB_05c61d8c;
    FUN_05c5809c(plVar18,0);
  }
  if (*(int *)(*(long *)PTR_DAT_072817e0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar15 = FUN_05c3aa04(0);
  uVar13 = DAT_0139d8b0;
  if ((uVar15 & 1) != 0) goto LAB_05c61c84;
LAB_05c61c90:
  if (plVar18 == (long *)0x0) goto LAB_05c61d8c;
  if (plVar18[0x33] == 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      lVar16 = FUN_05c587e8(plVar18,0);
      FUN_038c20d0(lVar16,*(undefined8 *)PTR_DAT_072abb18);
      goto LAB_05c61d44;
    }
  }
  else {
    FUN_05c58588(plVar18,0);
    FUN_05c56b24(plVar18,param_1 + 0x28,0);
  }
  lVar21 = *(long *)PTR_DAT_072ab1f0;
  lVar16 = *(long *)(lVar21 + 0x38);
  if (lVar16 == 0) {
    FUN_03293514(lVar21);
    lVar16 = *(long *)(lVar21 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 0x10);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_032934b8();
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar16 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_032934b8();
  }
  lVar16 = **(long **)(lVar16 + 0xb8);
LAB_05c61d44:
  plVar18[0x17] = lVar16;
  thunk_FUN_0333a630(plVar18 + 0x17,lVar16);
  FUN_05c5c48c(plVar18,0);
  *(undefined4 *)(plVar18 + 0x40) = *(undefined4 *)(param_1 + 0x20);
  return 0;
}


