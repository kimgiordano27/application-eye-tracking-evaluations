/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 02f7b784
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1,float param_2,float param_3,float param_4,float param_5,
               undefined1 param_6 [16],float param_7)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long in_x9;
  long lVar14;
  uint uVar15;
  int iVar16;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  ulong uVar17;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  int unaff_w28;
  uint unaff_w29;
  float fVar19;
  undefined1 auVar18 [16];
  undefined4 uVar20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  int iStack0000000000000004;
  float fStack0000000000000008;
  uint uStack000000000000000c;
  float in_stack_00000010;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    param_1 = param_1 + 1;
    lVar14 = unaff_x24 + in_x9 * unaff_x21;
    uVar11 = (int)in_x9 + unaff_w22;
    *(float *)(lVar14 + 0x24) = param_3 * (unaff_s9 + param_5);
    *(float *)(lVar14 + 0x28) = param_4 * param_7;
    *(float *)(lVar14 + 0x20) = param_2 * (unaff_s9 + param_5);
    if (unaff_x25 == param_1) {
      do {
        uVar11 = unaff_w29 + 1;
        if (uVar11 == unaff_w22) {
          iStack0000000000000004 = unaff_w23;
          if ((_fStack0000000000000008 & 0x100000000) == 0) goto LAB_02f7b8a0;
          if (DAT_06b7224b == '\0') {
            FUN_02d6084c(PTR_DAT_0675e318);
            DAT_06b7224b = '\x01';
          }
          if (unaff_x24 == 0) goto LAB_02f7bdd0;
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_w26) goto LAB_02f7bdcc;
          uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8) + 1);
          lVar14 = unaff_x24 + (long)(int)unaff_w26 * 0xc;
          *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8);
          *(undefined4 *)(lVar14 + 0x28) = uVar20;
          fVar19 = DAT_01208338;
          if ((int)unaff_w22 < 1) goto LAB_02f7b8a0;
          uVar11 = 0;
          goto LAB_02f7b84c;
        }
        sincosf(unaff_s10 + ((float)(int)uVar11 * unaff_s15) / unaff_s13,
                (float *)((long)&stack0x00000030 + 4),&stack0x00000030);
        unaff_w29 = uVar11;
      } while (unaff_w28 < 1);
      if (unaff_x24 == 0) goto LAB_02f7bdd0;
      param_1 = 0;
      param_3 = fStack0000000000000034;
      param_2 = fStack0000000000000030;
      param_7 = in_stack_00000010;
    }
    param_4 = (float)(int)param_1 / unaff_s14;
    param_5 = param_4;
    if (unaff_s11 < param_4) {
      param_5 = unaff_s11;
    }
    if (param_4 < 0.0) {
      param_5 = unaff_s12;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= uVar11) break;
    param_5 = unaff_s8 * param_5;
    in_x9 = (long)(int)uVar11;
  }
LAB_02f7bdcc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
  while( true ) {
    sincosf(unaff_s10 + ((float)(int)uVar11 * fVar19) / (float)(int)unaff_w22,
            (float *)((long)&stack0x00000028 + 4),&stack0x00000028);
    uVar11 = uVar11 + 1;
    lVar14 = unaff_x24 + (long)(int)uVar15 * 0xc;
    *(float *)(lVar14 + 0x20) = unaff_s9 * fStack0000000000000028;
    *(float *)(lVar14 + 0x24) = unaff_s9 * fStack000000000000002c;
    *(undefined4 *)(lVar14 + 0x28) = 0;
    if (unaff_w22 == uVar11) break;
LAB_02f7b84c:
    uVar15 = unaff_w26 + 1 + uVar11;
    if (*(uint *)(unaff_x24 + 0x18) <= uVar15) goto LAB_02f7bdcc;
  }
LAB_02f7b8a0:
  puVar5 = (undefined8 *)PTR_DAT_06762338;
  if ((unaff_x27 & 1) != 0) {
    if (unaff_x24 == 0) goto LAB_02f7bdd0;
    FUN_02d60934(*(undefined8 *)PTR_DAT_0675ed48,*(int *)(unaff_x24 + 0x18) << 1);
    FUN_05029864();
    FUN_05029864();
    puVar5 = (undefined8 *)PTR_DAT_06762338;
  }
  PTR_DAT_06762338 = (undefined *)puVar5;
  if (unaff_x19 != 0) {
    FUN_06040930();
    lVar14 = FUN_02d60934(*puVar5,unaff_w20);
    puVar7 = PTR_DAT_06762360;
    if ((int)unaff_w26 < 1) {
      uVar11 = 0;
    }
    else {
      uVar17 = 0;
      cVar9 = DAT_06b7297d;
      do {
        if (cVar9 == '\0') {
          FUN_02d6084c(puVar7);
          cVar9 = '\x01';
          DAT_06b7297d = '\x01';
        }
        if (lVar14 == 0) goto LAB_02f7bdd0;
        if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_02f7bdcc;
        uVar3 = uVar17 + 1;
        *(undefined8 *)(lVar14 + 0x20 + uVar17 * 8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        uVar17 = uVar3;
        uVar11 = unaff_w26;
      } while (unaff_w26 != uVar3);
    }
    uVar6 = DAT_01206e48;
    iVar12 = unaff_w22 + 1;
    if (0 < iVar12 && ((uStack000000000000000c ^ 0xffffffff) & 1) == 0) {
      if (lVar14 == 0) goto LAB_02f7bdd0;
      do {
        if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_02f7bdcc;
        lVar8 = (long)(int)uVar11;
        uVar11 = uVar11 + 1;
        iVar12 = iVar12 + -1;
        *(undefined8 *)(lVar14 + lVar8 * 8 + 0x20) = uVar6;
      } while (iVar12 != 0);
    }
    if ((unaff_x27 & 1) != 0) {
      if (lVar14 == 0) goto LAB_02f7bdd0;
      lVar8 = FUN_02d60934(*(undefined8 *)PTR_DAT_06762338,*(int *)(lVar14 + 0x18) << 1);
      FUN_05029864(lVar14,lVar8,0,0);
      FUN_05029864(lVar14,lVar8,*(undefined4 *)(lVar14 + 0x18),0);
      iVar12 = *(int *)(lVar14 + 0x18);
      if (0 < iVar12) {
        if (lVar8 == 0) goto LAB_02f7bdd0;
        iVar16 = 0;
        do {
          if (*(uint *)(lVar8 + 0x18) <= (uint)(iVar12 + iVar16)) goto LAB_02f7bdcc;
          *(undefined4 *)(lVar8 + (long)(iVar12 + iVar16) * 8 + 0x24) = 0x3f800000;
          iVar12 = *(int *)(lVar14 + 0x18);
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar12);
      }
    }
    puVar7 = PTR_DAT_0675ee10;
    if (unaff_x19 != 0) {
      FUN_06040b34();
      iVar12 = iStack0000000000000004 + 1;
      iVar16 = unaff_w22 * 3;
      iVar10 = 1;
      if (1 < iVar12) {
        iVar10 = iStack0000000000000004 + 1;
      }
      if ((_fStack0000000000000008 & 0x100000000) == 0) {
        iVar16 = 0;
      }
      lVar14 = FUN_02d60934(*(undefined8 *)puVar7,iVar16 + unaff_w22 * iVar10 * 6);
      uVar11 = 0;
      if (0 < (int)unaff_w22) {
        uVar15 = 0;
        do {
          uVar2 = uVar15 + 1;
          iVar16 = 0;
          if (uVar2 != unaff_w22) {
            iVar16 = uVar15 + 1;
          }
          if (0 < iVar12) {
            if (lVar14 == 0) goto LAB_02f7bdd0;
            uVar4 = *(uint *)(lVar14 + 0x18);
            iVar10 = iVar12;
            do {
              uVar13 = uVar11;
              if (uVar4 <= uVar13) goto LAB_02f7bdcc;
              *(uint *)(lVar14 + (long)(int)uVar13 * 4 + 0x20) = uVar15;
              if ((uVar4 <= uVar13 + 1) ||
                 (*(int *)(lVar14 + (long)(int)(uVar13 + 1) * 4 + 0x20) = iVar16,
                 uVar4 <= uVar13 + 2)) goto LAB_02f7bdcc;
              *(uint *)(lVar14 + (long)(int)(uVar13 + 2) * 4 + 0x20) = unaff_w22 + uVar15;
              if ((uVar4 <= uVar13 + 3) ||
                 ((*(uint *)(lVar14 + (long)(int)(uVar13 + 3) * 4 + 0x20) = unaff_w22 + iVar16,
                  uVar4 <= uVar13 + 4 ||
                  (*(uint *)(lVar14 + (long)(int)(uVar13 + 4) * 4 + 0x20) = unaff_w22 + uVar15,
                  uVar4 <= uVar13 + 5)))) goto LAB_02f7bdcc;
              iVar10 = iVar10 + -1;
              uVar15 = uVar15 + unaff_w22;
              *(int *)(lVar14 + (long)(int)(uVar13 + 5) * 4 + 0x20) = iVar16;
              iVar16 = iVar16 + unaff_w22;
              uVar11 = uVar13 + 6;
            } while (iVar10 != 0);
            uVar11 = uVar13 + 6;
          }
          uVar15 = uVar2;
        } while (uVar2 != unaff_w22);
      }
      if ((_fStack0000000000000008 & 0x100000000) == 0) {
LAB_02f7bc5c:
        if ((unaff_x27 & 1) != 0) {
          if (lVar14 == 0) goto LAB_02f7bdd0;
          lVar8 = FUN_02d60934(*(undefined8 *)puVar7,*(int *)(lVar14 + 0x18) << 1);
          FUN_05029864(lVar14,lVar8,0,0);
          uVar11 = *(uint *)(lVar14 + 0x18);
          if (0 < (int)uVar11) {
            uVar15 = 0;
            do {
              if (uVar11 <= uVar15) goto LAB_02f7bdcc;
              if (lVar8 == 0) goto LAB_02f7bdd0;
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (uVar2 <= uVar11 + uVar15) goto LAB_02f7bdcc;
              *(int *)(lVar8 + (long)(int)(uVar11 + uVar15) * 4 + 0x20) =
                   *(int *)(lVar14 + (long)(int)uVar15 * 4 + 0x20) + unaff_w20;
              if ((((uVar11 <= uVar15 + 2) || (uVar4 = uVar11 + uVar15 + 1, uVar2 <= uVar4)) ||
                  (*(int *)(lVar8 + (long)(int)uVar4 * 4 + 0x20) =
                        *(int *)(lVar14 + (long)(int)(uVar15 + 2) * 4 + 0x20) + unaff_w20,
                  uVar11 <= uVar15 + 1)) || (uVar4 = uVar11 + uVar15 + 2, uVar2 <= uVar4))
              goto LAB_02f7bdcc;
              iVar12 = uVar15 + 1;
              uVar15 = uVar15 + 3;
              *(int *)(lVar8 + (long)(int)uVar4 * 4 + 0x20) =
                   *(int *)(lVar14 + (long)iVar12 * 4 + 0x20) + unaff_w20;
            } while ((int)uVar15 < (int)uVar11);
          }
        }
        if (unaff_x19 != 0) {
          FUN_06042188();
          if (unaff_s9 <= fStack0000000000000008) {
            unaff_s9 = fStack0000000000000008;
          }
          auVar18._0_4_ = in_stack_00000010 * 0.5;
          fVar19 = (unaff_s9 + unaff_s9) * 0.5;
          auVar18._4_4_ = auVar18._0_4_;
          auVar18._8_4_ = fVar19;
          auVar18._12_4_ = fVar19;
          auVar18 = NEON_ext(auVar18,auVar18,4,1);
          in_stack_00000038 = 0;
          in_stack_00000048 = auVar18._8_8_;
          in_stack_00000040 = auVar18._0_8_;
          FUN_0603fcb4();
          return;
        }
      }
      else if (lVar14 != 0) {
        uVar15 = *(uint *)(lVar14 + 0x18);
        if (uVar11 < uVar15) {
          iVar12 = 0;
          bVar1 = 0 < (int)(unaff_w22 - 1);
          do {
            uVar2 = uVar11 + 1;
            uVar4 = uVar11 + 2;
            *(uint *)(lVar14 + (long)(int)uVar11 * 4 + 0x20) = unaff_w26;
            if (!bVar1) {
              if ((uVar2 < uVar15) &&
                 (*(uint *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = unaff_w26 + 1, uVar4 < uVar15))
              {
                *(uint *)(lVar14 + (long)(int)uVar4 * 4 + 0x20) = unaff_w26 + unaff_w22;
                goto LAB_02f7bc5c;
              }
              break;
            }
            if (uVar15 <= uVar2) break;
            iVar16 = unaff_w26 + iVar12;
            *(int *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = iVar16 + 2;
            if (uVar15 <= uVar4) break;
            iVar12 = iVar12 + 1;
            uVar11 = uVar11 + 3;
            bVar1 = iVar12 < (int)(unaff_w22 - 1);
            *(int *)(lVar14 + (long)(int)uVar4 * 4 + 0x20) = iVar16 + 1;
          } while (uVar11 < uVar15);
        }
        goto LAB_02f7bdcc;
      }
    }
  }
LAB_02f7bdd0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


