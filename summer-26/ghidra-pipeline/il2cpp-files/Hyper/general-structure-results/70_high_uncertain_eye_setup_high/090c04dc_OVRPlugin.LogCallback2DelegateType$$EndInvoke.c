/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 090c04dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_LogCallback2DelegateType__EndInvoke(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long unaff_x21;
  ulong uVar9;
  undefined1 (*pauVar10) [12];
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if ((*(byte *)(unaff_x21 + 0x47f) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75878);
    *(undefined1 *)(unaff_x21 + 0x47f) = 1;
  }
  puVar6 = PTR_DAT_0ac75878;
  puVar5 = PTR_DAT_0ac0f100;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) < 0x1a) {
      return 0;
    }
    if (*unaff_x19 != 0) {
      if (*(int *)(*unaff_x19 + 0x18) < 0x1a) {
        return 0;
      }
      uVar9 = 0;
      pauVar10 = (undefined1 (*) [12])(param_1 + 0x2c);
      while( true ) {
        lVar7 = *(long *)puVar6;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar7 = *(long *)puVar6;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_090c069c;
        lVar11 = *unaff_x19;
        uVar1 = *(uint *)(lVar7 + uVar9 * 4 + 0x20);
        if ((int)uVar1 < 0) {
          if (DAT_0b31f57b == '\0') {
            FUN_04947ee4(puVar5);
            DAT_0b31f57b = '\x01';
          }
          puVar8 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
          uVar2 = puVar8[1];
          fVar15 = (float)uVar2;
          fVar24 = (float)((ulong)uVar2 >> 0x20);
          uVar2 = *puVar8;
          fVar22 = (float)uVar2;
          fVar23 = (float)((ulong)uVar2 >> 0x20);
        }
        else {
          if (*(uint *)(param_1 + 0x18) <= uVar1) goto LAB_090c069c;
          lVar7 = param_1 + 0x20 + (ulong)uVar1 * 0x1c;
          fVar15 = *(float *)(lVar7 + 0x10);
          auVar19 = ZEXT416(*(uint *)(lVar7 + 0x14));
          auVar21 = ZEXT416(*(uint *)(lVar7 + 0x18));
          fVar12 = (float)FUN_0a16a578(*(undefined4 *)(lVar7 + 0xc),0);
          if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_090c069c;
          fVar27 = (float)*(undefined8 *)(*pauVar10 + 8);
          fVar28 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          fVar25 = (float)*(undefined8 *)*pauVar10;
          fVar26 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          fVar20 = auVar21._0_4_;
          fVar16 = auVar19._0_4_;
          auVar17._4_4_ = fVar28;
          auVar17._0_4_ = fVar28;
          auVar17._8_4_ = fVar28;
          auVar17._12_4_ = fVar28;
          auVar18._12_4_ = fVar28;
          auVar18._0_12_ = *pauVar10;
          auVar18 = NEON_ext(auVar17,auVar18,4,1);
          fVar13 = fVar12 * fVar26;
          fVar14 = fVar15 * fVar26;
          fVar22 = fVar16 * fVar26;
          fVar23 = fVar12 * fVar27;
          fVar24 = fVar16 * fVar27;
          auVar19._4_4_ = fVar13;
          auVar19._0_4_ = fVar16 * fVar25;
          auVar19._8_4_ = fVar15 * fVar27;
          auVar19._12_4_ = fVar14;
          auVar21._4_4_ = fVar13;
          auVar21._0_4_ = fVar16 * fVar25;
          auVar21._8_4_ = fVar15 * fVar27;
          auVar21._12_4_ = fVar14;
          auVar19 = NEON_ext(auVar19,auVar21,4,1);
          auVar3._4_4_ = fVar22;
          auVar3._0_4_ = fVar15 * fVar25;
          auVar3._8_4_ = fVar23;
          auVar3._12_4_ = fVar24;
          auVar4._4_4_ = fVar22;
          auVar4._0_4_ = fVar15 * fVar25;
          auVar4._8_4_ = fVar23;
          auVar4._12_4_ = fVar24;
          auVar21 = NEON_ext(auVar3,auVar4,0xc,1);
          fVar22 = (fVar25 * fVar20 + fVar12 * auVar18._0_4_ + auVar19._4_4_) - fVar22;
          fVar23 = (fVar26 * fVar20 + fVar15 * auVar18._4_4_ + auVar19._12_4_) - fVar23;
          fVar15 = (fVar27 * fVar20 + fVar16 * auVar18._8_4_ + fVar13) - auVar21._4_4_;
          fVar24 = ((fVar28 * fVar20 - fVar12 * auVar18._12_4_) - fVar14) - fVar24;
        }
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) {
LAB_090c069c:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar11 = lVar11 + uVar9 * 0x10;
        uVar9 = uVar9 + 1;
        pauVar10 = (undefined1 (*) [12])(pauVar10[2] + 4);
        *(ulong *)(lVar11 + 0x28) = CONCAT44(fVar24,fVar15);
        *(ulong *)(lVar11 + 0x20) = CONCAT44(fVar23,fVar22);
        if (uVar9 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


