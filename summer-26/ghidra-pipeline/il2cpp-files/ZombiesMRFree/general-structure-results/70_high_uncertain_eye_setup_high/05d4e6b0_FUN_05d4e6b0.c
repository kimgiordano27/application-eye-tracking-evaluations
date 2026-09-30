/*
FUNCTION_NAME: FUN_05d4e6b0
ENTRY_POINT: 05d4e6b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05d4e6b0(long param_1,long param_2)

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
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  undefined4 uVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  puVar1 = PTR_DAT_06f6d618;
  if ((DAT_07398b9c & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb9378);
    FUN_02fe925c(PTR_DAT_06fb4a40);
    FUN_02fe925c(PTR_DAT_06fb75f0);
    FUN_02fe925c(PTR_DAT_06fb8620);
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_07398b9c = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_068f9b78(uVar11,0,0);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x80) != 0) && (param_2 != 0)) {
    fVar33 = *(float *)(*(long *)(param_1 + 0x80) + 0x3c);
    plVar12 = (long *)(param_2 + 0x38);
    uVar14 = *(undefined8 *)(param_1 + 0xa8);
    uVar35 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    uVar24 = (ulong)*(uint *)(param_2 + 0x1c);
    uVar34 = *(undefined4 *)(param_2 + 0x20);
    uVar20 = (ulong)*(uint *)(param_2 + 0x24);
    uVar25 = (ulong)*(uint *)(param_2 + 0x28);
    uVar28 = (ulong)*(uint *)(param_2 + 0x2c);
    uVar11 = FUN_03c530b8(*plVar12,*(undefined8 *)PTR_DAT_06fb9378);
    FUN_05d48f50(uVar14,uVar11,0);
    plVar15 = *(long **)(param_1 + 0x90);
    if (plVar15 != (long *)0x0) {
      lVar6 = *plVar15;
      fVar33 = 1.0 / fVar33;
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
      uVar11 = (*(code *)*puVar4)(uVar35,uVar3,uVar24,fVar33,plVar15,puVar4[1]);
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
        uVar14 = (*(code *)*puVar4)(uVar34,uVar20,uVar25,uVar28,fVar33,plVar15,puVar4[1]);
        local_d0 = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        FUN_06902890(uVar11,uVar3,uVar24,uVar14,uVar20,uVar25,uVar28,&local_d0,0);
        *(ulong *)(param_2 + 0x28) = CONCAT44(uStack_b8,uStack_bc);
        *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_c0,uStack_c4);
        *(ulong *)(param_2 + 0x1c) = CONCAT44(uStack_c4,uStack_c8);
        *(undefined8 *)(param_2 + 0x14) = local_d0;
        lVar6 = *(long *)(param_1 + 0xa8);
        if (lVar6 != 0) {
          uVar13 = 0;
          do {
            if (uVar13 == 0x1a) {
              FUN_05d48a44(lVar6,1);
              *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar6 + 0x18);
              thunk_FUN_03048534(plVar12);
              puVar2 = PTR_DAT_06fb4a40;
              puVar1 = PTR_DAT_06f6d7e8;
              lVar16 = 0;
              lVar6 = 0;
              uVar3 = 0;
              goto LAB_05d4ea70;
            }
            FUN_05d48860(&local_d0,lVar6,uVar13);
            uVar26 = uStack_b8;
            uVar21 = uStack_bc;
            uVar35 = uStack_c0;
            uVar34 = uStack_c4;
            local_b0 = local_d0;
            local_a8 = uStack_c8;
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
            uVar34 = (*(code *)*puVar4)(uVar34,plVar15,puVar4[1]);
            local_d0 = local_b0;
            uStack_c8 = local_a8;
            if (*(long *)(param_1 + 0xa8) == 0) break;
            local_f0 = local_b0;
            local_e8 = local_a8;
            local_e4 = uVar34;
            uStack_e0 = uVar35;
            local_dc = uVar21;
            uStack_d8 = uVar26;
            FUN_05d488a0(*(long *)(param_1 + 0xa8),uVar13,&local_f0);
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
    fVar33 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar23 = pfVar7[2];
    fVar17 = pfVar7[3];
  }
  else {
    lVar9 = *plVar12;
    if (lVar9 == 0) goto LAB_05d4ea28;
    if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_05d4ebf4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar9 = lVar9 + (ulong)uVar13 * 0x1c;
    fVar18 = *(float *)(lVar9 + 0x30);
    fVar22 = *(float *)(lVar9 + 0x34);
    fVar27 = *(float *)(lVar9 + 0x38);
    fVar17 = (float)FUN_068ec9ec(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *plVar12;
    if (lVar9 == 0) goto LAB_05d4ea28;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_05d4ebf4;
    lVar9 = lVar9 + lVar16;
    fVar29 = *(float *)(lVar9 + 0x2c);
    fVar32 = *(float *)(lVar9 + 0x30);
    fVar31 = *(float *)(lVar9 + 0x34);
    fVar30 = *(float *)(lVar9 + 0x38);
    fVar33 = (fVar18 * fVar31 + fVar27 * fVar29 + fVar17 * fVar30) - fVar22 * fVar32;
    fVar19 = (fVar22 * fVar29 + fVar27 * fVar32 + fVar18 * fVar30) - fVar17 * fVar31;
    fVar23 = (fVar17 * fVar32 + fVar27 * fVar31 + fVar22 * fVar30) - fVar18 * fVar29;
    fVar17 = ((fVar27 * fVar30 - fVar17 * fVar29) - fVar18 * fVar32) - fVar22 * fVar31;
  }
  if (lVar5 == 0) goto LAB_05d4ea28;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_05d4ebf4;
  lVar5 = lVar5 + lVar6 * 4;
  lVar6 = lVar6 + 4;
  uVar3 = uVar3 + 1;
  lVar16 = lVar16 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar33;
  *(float *)(lVar5 + 0x24) = fVar19;
  *(float *)(lVar5 + 0x28) = fVar23;
  *(float *)(lVar5 + 0x2c) = fVar17;
  if (lVar6 == 0x68) {
    return 1;
  }
  goto LAB_05d4ea70;
}


