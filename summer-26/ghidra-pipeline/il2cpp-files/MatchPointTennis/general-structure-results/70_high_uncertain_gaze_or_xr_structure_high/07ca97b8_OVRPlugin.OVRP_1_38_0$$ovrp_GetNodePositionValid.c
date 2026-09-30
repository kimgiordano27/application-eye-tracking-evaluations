/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 07ca97b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  puVar1 = PTR_DAT_09f1e538;
  if ((DAT_0a526a3d & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f51120);
    FUN_04447ba8(PTR_DAT_09f4d0a0);
    FUN_04447ba8(PTR_DAT_09f4f220);
    FUN_04447ba8(PTR_DAT_09f50368);
    FUN_04447ba8(PTR_DAT_09f1e538);
    DAT_0a526a3d = 1;
  }
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_0952c404(uVar11,0,0);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x80) != 0) && (param_2 != 0)) {
    fVar31 = *(float *)(*(long *)(param_1 + 0x80) + 0x3c);
    plVar12 = (long *)(param_2 + 0x38);
    uVar14 = *(undefined8 *)(param_1 + 0xa8);
    uVar33 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    uVar23 = (ulong)*(uint *)(param_2 + 0x1c);
    uVar32 = *(undefined4 *)(param_2 + 0x20);
    uVar20 = (ulong)*(uint *)(param_2 + 0x24);
    uVar24 = (ulong)*(uint *)(param_2 + 0x28);
    uVar26 = (ulong)*(uint *)(param_2 + 0x2c);
    uVar11 = FUN_04d14544(*plVar12,*(undefined8 *)PTR_DAT_09f51120);
    FUN_07ca4008(uVar14,uVar11,0);
    plVar15 = *(long **)(param_1 + 0x90);
    if (plVar15 != (long *)0x0) {
      lVar6 = *plVar15;
      fVar31 = 1.0 / fVar31;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f4f220) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_07ca9910;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f4f220,2);
LAB_07ca9910:
      uVar11 = (*(code *)*puVar4)(uVar33,uVar3,uVar23,fVar31,plVar15,puVar4[1]);
      puVar1 = PTR_DAT_09f50368;
      plVar15 = *(long **)(param_1 + 0x88);
      if (plVar15 != (long *)0x0) {
        lVar6 = *plVar15;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f50368) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_07ca9998;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f50368,2);
LAB_07ca9998:
        uVar14 = (*(code *)*puVar4)(uVar32,uVar20,uVar24,uVar26,fVar31,plVar15,puVar4[1]);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_09537b20(uVar11,uVar3,uVar23,uVar14,uVar20,uVar24,uVar26,&stack0x00000020,0);
        *(ulong *)(param_2 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(param_2 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(param_2 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(param_2 + 0x14) = in_stack_00000020;
        lVar6 = *(long *)(param_1 + 0xa8);
        if (lVar6 != 0) {
          uVar13 = 0;
          do {
            if (uVar13 == 0x1a) {
              FUN_07ca3afc(lVar6,1);
              *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar6 + 0x18);
              thunk_FUN_044bb4b4(plVar12);
              puVar2 = PTR_DAT_09f4d0a0;
              puVar1 = PTR_DAT_09f1eb60;
              lVar16 = 0;
              lVar6 = 0;
              uVar3 = 0;
              goto LAB_07ca9b68;
            }
            FUN_07ca3918(&stack0x00000020,lVar6,uVar13);
            uVar32 = uStack000000000000002c;
            in_stack_00000040 = in_stack_00000020;
            in_stack_00000048 = uStack0000000000000028;
            lVar6 = *(long *)(param_1 + 0xa0);
            if (lVar6 == 0) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_07ca9cec;
            plVar15 = *(long **)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
            if (plVar15 == (long *)0x0) break;
            lVar6 = *plVar15;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_07ca9ab8;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_044822ac(plVar15,*(long *)puVar1,2);
LAB_07ca9ab8:
            (*(code *)*puVar4)(uVar32,plVar15,puVar4[1]);
            in_stack_00000020 = in_stack_00000040;
            uStack0000000000000028 = in_stack_00000048;
            if (*(long *)(param_1 + 0xa8) == 0) break;
            FUN_07ca3958(*(long *)(param_1 + 0xa8),uVar13);
            lVar6 = *(long *)(param_1 + 0xa8);
            uVar13 = uVar13 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
LAB_07ca9b20:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07ca9b68:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_07ca9b20;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_07ca9cec;
  uVar13 = *(uint *)(lVar5 + lVar6 + 0x20);
  lVar5 = *(long *)(param_2 + 0x48);
  if ((int)uVar13 < 0) {
    if (DAT_0a51bf45 == '\0') {
      FUN_04447ba8(puVar1);
      DAT_0a51bf45 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar31 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar22 = pfVar7[2];
    fVar17 = pfVar7[3];
  }
  else {
    lVar9 = *plVar12;
    if (lVar9 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_07ca9cec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar9 = lVar9 + (ulong)uVar13 * 0x1c;
    fVar18 = *(float *)(lVar9 + 0x30);
    fVar21 = *(float *)(lVar9 + 0x34);
    fVar25 = *(float *)(lVar9 + 0x38);
    fVar17 = (float)FUN_095165fc(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *plVar12;
    if (lVar9 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_07ca9cec;
    lVar9 = lVar9 + lVar16;
    fVar27 = *(float *)(lVar9 + 0x2c);
    fVar30 = *(float *)(lVar9 + 0x30);
    fVar29 = *(float *)(lVar9 + 0x34);
    fVar28 = *(float *)(lVar9 + 0x38);
    fVar31 = (fVar18 * fVar29 + fVar25 * fVar27 + fVar17 * fVar28) - fVar21 * fVar30;
    fVar19 = (fVar21 * fVar27 + fVar25 * fVar30 + fVar18 * fVar28) - fVar17 * fVar29;
    fVar22 = (fVar17 * fVar30 + fVar25 * fVar29 + fVar21 * fVar28) - fVar18 * fVar27;
    fVar17 = ((fVar25 * fVar28 - fVar17 * fVar27) - fVar18 * fVar30) - fVar21 * fVar29;
  }
  if (lVar5 == 0) goto LAB_07ca9b20;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_07ca9cec;
  lVar5 = lVar5 + lVar6 * 4;
  lVar6 = lVar6 + 4;
  uVar3 = uVar3 + 1;
  lVar16 = lVar16 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar31;
  *(float *)(lVar5 + 0x24) = fVar19;
  *(float *)(lVar5 + 0x28) = fVar22;
  *(float *)(lVar5 + 0x2c) = fVar17;
  if (lVar6 == 0x68) {
    return 1;
  }
  goto LAB_07ca9b68;
}


