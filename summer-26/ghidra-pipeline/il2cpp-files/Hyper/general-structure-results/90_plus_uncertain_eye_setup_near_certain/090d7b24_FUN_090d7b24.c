/*
FUNCTION_NAME: FUN_090d7b24
ENTRY_POINT: 090d7b24
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_090d7b24(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  uint uStack_bc;
  uint local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  puVar3 = PTR_DAT_0ac09788;
  if ((DAT_0b33058e & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac79960);
    FUN_04947ee4(PTR_DAT_0ac75878);
    FUN_04947ee4(PTR_DAT_0ac77a88);
    FUN_04947ee4(PTR_DAT_0ac78b98);
    FUN_04947ee4(PTR_DAT_0ac09788);
    DAT_0b33058e = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  local_a8 = 0;
  local_b0 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar5 = FUN_0a17cd28(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x80) != 0) && (param_2 != 0)) {
    fVar32 = *(float *)(*(long *)(param_1 + 0x80) + 0x3c);
    uVar37 = *(undefined4 *)(param_2 + 0x14);
    uVar38 = *(undefined4 *)(param_2 + 0x18);
    uVar39 = *(uint *)(param_2 + 0x1c);
    uVar33 = *(undefined4 *)(param_2 + 0x20);
    uVar34 = *(undefined4 *)(param_2 + 0x24);
    uVar35 = *(uint *)(param_2 + 0x28);
    plVar11 = (long *)(param_2 + 0x38);
    uVar36 = *(uint *)(param_2 + 0x2c);
    uVar12 = *(undefined8 *)(param_1 + 0xa8);
    uVar10 = FUN_05b8ae54(*plVar11,*(undefined8 *)PTR_DAT_0ac79960);
    OVRPlugin_OVRP_1_68_0___cctor(uVar12,uVar10,0);
    plVar13 = *(long **)(param_1 + 0x90);
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac77a88) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_104_0__ovrp_GetOpenXRInstanceProcAddrFunc;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac77a88,2);
OVRPlugin_OVRP_1_104_0__ovrp_GetOpenXRInstanceProcAddrFunc:
      auVar22 = ZEXT416(uVar39);
      uVar37 = (*(code *)*puVar6)(uVar37,uVar38,plVar13,puVar6[1]);
      puVar3 = PTR_DAT_0ac78b98;
      plVar13 = *(long **)(param_1 + 0x88);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac78b98) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_090d7d20;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac78b98,2);
LAB_090d7d20:
        auVar25 = ZEXT416(uVar35);
        auVar24 = ZEXT416(uVar36);
        uVar33 = (*(code *)*puVar6)(uVar33,uVar34,auVar25,auVar24,1.0 / fVar32,plVar13,puVar6[1]);
        local_d0 = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        local_b8 = 0;
        local_c0 = 0;
        uStack_bc = 0;
        FUN_0a188128(uVar37,uVar38,auVar22._0_4_,uVar33,uVar34,auVar25._0_4_,auVar24._0_4_,&local_d0
                     ,0);
        uVar35 = 0;
        *(ulong *)(param_2 + 0x1c) = CONCAT44(uStack_c4,uStack_c8);
        *(undefined8 *)(param_2 + 0x14) = local_d0;
        *(ulong *)(param_2 + 0x28) = CONCAT44(local_b8,uStack_bc);
        *(ulong *)(param_2 + 0x20) = CONCAT44(local_c0,uStack_c4);
        do {
          if (*(long *)(param_1 + 0xa8) == 0) goto LAB_090d8044;
          FUN_090d1de8(&local_d0,*(long *)(param_1 + 0xa8),uVar35);
          uVar39 = local_b8;
          uVar36 = uStack_bc;
          uVar34 = local_c0;
          uVar38 = uStack_c4;
          lVar8 = *(long *)(param_1 + 0xa0);
          local_b0 = local_d0;
          local_a8 = uStack_c8;
          if (lVar8 == 0) goto LAB_090d8044;
          if (*(uint *)(lVar8 + 0x18) <= uVar35) goto LAB_090d8048;
          plVar13 = *(long **)(lVar8 + (ulong)uVar35 * 8 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_090d8044;
          lVar8 = *plVar13;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_090d7e34;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_04980e68(plVar13,*(long *)puVar3,2);
LAB_090d7e34:
          auVar22 = ZEXT416(uVar36);
          auVar25 = ZEXT416(uVar39);
          uVar38 = (*(code *)*puVar6)(uVar38,plVar13,puVar6[1]);
          if (*(long *)(param_1 + 0xa8) == 0) goto LAB_090d8044;
          local_f0 = local_b0;
          local_e8 = local_a8;
          local_dc = auVar22._0_4_;
          uStack_d8 = auVar25._0_4_;
          local_e4 = uVar38;
          uStack_e0 = uVar34;
          FUN_090d1e28(*(long *)(param_1 + 0xa8),uVar35,&local_f0);
          uVar35 = uVar35 + 1;
        } while (uVar35 != 0x1a);
        lVar8 = *(long *)(param_1 + 0xa8);
        if (lVar8 != 0) {
          FUN_090d1fb0(lVar8,1);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar8 + 0x18);
          thunk_FUN_049ee3d8(plVar11);
          puVar4 = PTR_DAT_0ac75878;
          puVar3 = PTR_DAT_0ac0f100;
          uVar5 = 0;
          lVar8 = 0x2c;
          do {
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              lVar7 = *(long *)puVar4;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_090d8048;
            lVar14 = *(long *)(param_2 + 0x48);
            uVar35 = *(uint *)(lVar7 + uVar5 * 4 + 0x20);
            if ((int)uVar35 < 0) {
              if (DAT_0b31f57b == '\0') {
                FUN_04947ee4(puVar3);
                DAT_0b31f57b = '\x01';
              }
              puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
              uVar10 = puVar6[1];
              fVar18 = (float)uVar10;
              fVar27 = (float)((ulong)uVar10 >> 0x20);
              uVar10 = *puVar6;
              fVar32 = (float)uVar10;
              fVar26 = (float)((ulong)uVar10 >> 0x20);
            }
            else {
              lVar7 = *plVar11;
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar35) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              lVar7 = lVar7 + (ulong)uVar35 * 0x1c;
              fVar18 = *(float *)(lVar7 + 0x30);
              auVar22 = ZEXT416(*(uint *)(lVar7 + 0x34));
              auVar25 = ZEXT416(*(uint *)(lVar7 + 0x38));
              fVar15 = (float)FUN_0a16a578(*(undefined4 *)(lVar7 + 0x2c),0);
              lVar7 = *plVar11;
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_090d8048;
              pauVar1 = (undefined1 (*) [12])(lVar7 + lVar8);
              fVar30 = (float)*(undefined8 *)(*pauVar1 + 8);
              fVar31 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
              fVar28 = (float)*(undefined8 *)*pauVar1;
              fVar29 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              fVar23 = auVar25._0_4_;
              fVar19 = auVar22._0_4_;
              auVar20._4_4_ = fVar31;
              auVar20._0_4_ = fVar31;
              auVar20._8_4_ = fVar31;
              auVar20._12_4_ = fVar31;
              auVar21._12_4_ = fVar31;
              auVar21._0_12_ = *pauVar1;
              auVar21 = NEON_ext(auVar20,auVar21,4,1);
              fVar16 = fVar15 * fVar29;
              fVar17 = fVar18 * fVar29;
              fVar32 = fVar19 * fVar29;
              fVar26 = fVar15 * fVar30;
              fVar27 = fVar19 * fVar30;
              auVar22._4_4_ = fVar16;
              auVar22._0_4_ = fVar19 * fVar28;
              auVar22._8_4_ = fVar18 * fVar30;
              auVar22._12_4_ = fVar17;
              auVar25._4_4_ = fVar16;
              auVar25._0_4_ = fVar19 * fVar28;
              auVar25._8_4_ = fVar18 * fVar30;
              auVar25._12_4_ = fVar17;
              auVar22 = NEON_ext(auVar22,auVar25,4,1);
              auVar24._4_4_ = fVar32;
              auVar24._0_4_ = fVar18 * fVar28;
              auVar24._8_4_ = fVar26;
              auVar24._12_4_ = fVar27;
              auVar2._4_4_ = fVar32;
              auVar2._0_4_ = fVar18 * fVar28;
              auVar2._8_4_ = fVar26;
              auVar2._12_4_ = fVar27;
              auVar25 = NEON_ext(auVar24,auVar2,0xc,1);
              fVar32 = (fVar28 * fVar23 + fVar15 * auVar21._0_4_ + auVar22._4_4_) - fVar32;
              fVar26 = (fVar29 * fVar23 + fVar18 * auVar21._4_4_ + auVar22._12_4_) - fVar26;
              fVar18 = (fVar30 * fVar23 + fVar19 * auVar21._8_4_ + fVar16) - auVar25._4_4_;
              fVar27 = ((fVar31 * fVar23 - fVar15 * auVar21._12_4_) - fVar17) - fVar27;
            }
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar5) goto LAB_090d8048;
            lVar14 = lVar14 + uVar5 * 0x10;
            uVar5 = uVar5 + 1;
            lVar8 = lVar8 + 0x1c;
            *(ulong *)(lVar14 + 0x28) = CONCAT44(fVar27,fVar18);
            *(ulong *)(lVar14 + 0x20) = CONCAT44(fVar26,fVar32);
            if (uVar5 == 0x1a) {
              return 1;
            }
          } while( true );
        }
      }
    }
  }
LAB_090d8044:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


