/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_SendVirtualKeyboardInput
ENTRY_POINT: 05d4e6e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_SendVirtualKeyboardInput(long param_1,long param_2)

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
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long unaff_x22;
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
  
  plVar11 = *(long **)(unaff_x20 + 0x618);
  if ((*(byte *)(unaff_x22 + 0xb9c) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb9378);
    FUN_02fe925c(PTR_DAT_06fb4a40);
    FUN_02fe925c(PTR_DAT_06fb75f0);
    FUN_02fe925c(PTR_DAT_06fb8620);
    FUN_02fe925c(PTR_DAT_06f6d618);
    *(undefined1 *)(unaff_x22 + 0xb9c) = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_068f9b78(uVar12,0,0);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x80) != 0) && (param_2 != 0)) {
    fVar31 = *(float *)(*(long *)(param_1 + 0x80) + 0x3c);
    plVar11 = (long *)(param_2 + 0x38);
    uVar14 = *(undefined8 *)(param_1 + 0xa8);
    uVar33 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    uVar23 = (ulong)*(uint *)(param_2 + 0x1c);
    uVar32 = *(undefined4 *)(param_2 + 0x20);
    uVar20 = (ulong)*(uint *)(param_2 + 0x24);
    uVar24 = (ulong)*(uint *)(param_2 + 0x28);
    uVar26 = (ulong)*(uint *)(param_2 + 0x2c);
    uVar12 = FUN_03c530b8(*plVar11,*(undefined8 *)PTR_DAT_06fb9378);
    FUN_05d48f50(uVar14,uVar12,0);
    plVar15 = *(long **)(param_1 + 0x90);
    if (plVar15 != (long *)0x0) {
      lVar6 = *plVar15;
      fVar31 = 1.0 / fVar31;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06fb75f0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_05d4e818;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8(plVar15,*(long *)PTR_DAT_06fb75f0,2);
LAB_05d4e818:
      uVar12 = (*(code *)*puVar4)(uVar33,uVar3,uVar23,fVar31,plVar15,puVar4[1]);
      puVar1 = PTR_DAT_06fb8620;
      plVar15 = *(long **)(param_1 + 0x88);
      if (plVar15 != (long *)0x0) {
        lVar6 = *plVar15;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06fb8620) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto OVRPlugin_OVRP_1_74_0__ovrp_SuggestVirtualKeyboardLocation;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02feb5b8(plVar15,*(long *)PTR_DAT_06fb8620,2);
OVRPlugin_OVRP_1_74_0__ovrp_SuggestVirtualKeyboardLocation:
        uVar14 = (*(code *)*puVar4)(uVar32,uVar20,uVar24,uVar26,fVar31,plVar15,puVar4[1]);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_06902890(uVar12,uVar3,uVar23,uVar14,uVar20,uVar24,uVar26,&stack0x00000020,0);
        *(ulong *)(param_2 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(param_2 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(param_2 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(param_2 + 0x14) = in_stack_00000020;
        lVar6 = *(long *)(param_1 + 0xa8);
        if (lVar6 != 0) {
          uVar13 = 0;
          do {
            if (uVar13 == 0x1a) {
              FUN_05d48a44(lVar6,1);
              *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar6 + 0x18);
              thunk_FUN_03048534(plVar11);
              puVar2 = PTR_DAT_06fb4a40;
              puVar1 = PTR_DAT_06f6d7e8;
              lVar16 = 0;
              lVar6 = 0;
              uVar3 = 0;
              goto LAB_05d4ea70;
            }
            FUN_05d48860(&stack0x00000020,lVar6,uVar13);
            uVar32 = uStack000000000000002c;
            in_stack_00000040 = in_stack_00000020;
            in_stack_00000048 = uStack0000000000000028;
            lVar6 = *(long *)(param_1 + 0xa0);
            if (lVar6 == 0) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_05d4ebf4;
            plVar15 = *(long **)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
            if (plVar15 == (long *)0x0) break;
            lVar6 = *plVar15;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_05d4e9c0;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_02feb5b8(plVar15,*(long *)puVar1,2);
LAB_05d4e9c0:
            (*(code *)*puVar4)(uVar32,plVar15,puVar4[1]);
            in_stack_00000020 = in_stack_00000040;
            uStack0000000000000028 = in_stack_00000048;
            if (*(long *)(param_1 + 0xa8) == 0) break;
            FUN_05d488a0(*(long *)(param_1 + 0xa8),uVar13);
            lVar6 = *(long *)(param_1 + 0xa8);
            uVar13 = uVar13 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
LAB_05d4ea28:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
LAB_05d4ea70:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_05d4ea28;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_05d4ebf4;
  uVar13 = *(uint *)(lVar5 + lVar6 + 0x20);
  lVar5 = *(long *)(param_2 + 0x48);
  if ((int)uVar13 < 0) {
    if (DAT_0738e663 == '\0') {
      FUN_02fe925c(puVar1);
      DAT_0738e663 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar31 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar22 = pfVar7[2];
    fVar17 = pfVar7[3];
  }
  else {
    lVar9 = *plVar11;
    if (lVar9 == 0) goto LAB_05d4ea28;
    if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_05d4ebf4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar9 = lVar9 + (ulong)uVar13 * 0x1c;
    fVar18 = *(float *)(lVar9 + 0x30);
    fVar21 = *(float *)(lVar9 + 0x34);
    fVar25 = *(float *)(lVar9 + 0x38);
    fVar17 = (float)FUN_068ec9ec(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *plVar11;
    if (lVar9 == 0) goto LAB_05d4ea28;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_05d4ebf4;
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
  if (lVar5 == 0) goto LAB_05d4ea28;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_05d4ebf4;
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
  goto LAB_05d4ea70;
}


