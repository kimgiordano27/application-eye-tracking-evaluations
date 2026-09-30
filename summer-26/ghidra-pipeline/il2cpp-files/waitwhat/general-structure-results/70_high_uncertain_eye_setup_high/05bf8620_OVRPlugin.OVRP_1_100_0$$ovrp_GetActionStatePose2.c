/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_GetActionStatePose2
ENTRY_POINT: 05bf8620
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_100_0__ovrp_GetActionStatePose2(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint in_w8;
  long lVar4;
  uint in_w9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined1 (*unaff_x25) [12];
  long unaff_x26;
  undefined1 unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
code_r0x05bf8620:
  if (in_w8 < in_w9) {
    lVar4 = unaff_x23 + (ulong)in_w8 * (unaff_x28 & 0xffffffff);
    fVar8 = *(float *)(lVar4 + 0x10);
    auVar12 = ZEXT416(*(uint *)(lVar4 + 0x14));
    auVar14 = ZEXT416(*(uint *)(lVar4 + 0x18));
    fVar5 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor
                             (*(undefined4 *)(lVar4 + 0xc),0);
    if (unaff_x22 < *(uint *)(unaff_x20 + 0x18)) {
      fVar20 = (float)*(undefined8 *)(*unaff_x25 + 8);
      fVar21 = (float)((ulong)*(undefined8 *)(*unaff_x25 + 8) >> 0x20);
      fVar18 = (float)*(undefined8 *)*unaff_x25;
      fVar19 = (float)((ulong)*(undefined8 *)*unaff_x25 >> 0x20);
      fVar13 = auVar14._0_4_;
      fVar9 = auVar12._0_4_;
      auVar10._4_4_ = fVar21;
      auVar10._0_4_ = fVar21;
      auVar10._8_4_ = fVar21;
      auVar10._12_4_ = fVar21;
      auVar11._12_4_ = fVar21;
      auVar11._0_12_ = *unaff_x25;
      auVar11 = NEON_ext(auVar10,auVar11,4,1);
      fVar6 = fVar5 * fVar19;
      fVar7 = fVar8 * fVar19;
      fVar15 = fVar9 * fVar19;
      fVar16 = fVar5 * fVar20;
      fVar17 = fVar9 * fVar20;
      auVar12._4_4_ = fVar6;
      auVar12._0_4_ = fVar9 * fVar18;
      auVar12._8_4_ = fVar8 * fVar20;
      auVar12._12_4_ = fVar7;
      auVar14._4_4_ = fVar6;
      auVar14._0_4_ = fVar9 * fVar18;
      auVar14._8_4_ = fVar8 * fVar20;
      auVar14._12_4_ = fVar7;
      auVar12 = NEON_ext(auVar12,auVar14,4,1);
      auVar2._4_4_ = fVar15;
      auVar2._0_4_ = fVar8 * fVar18;
      auVar2._8_4_ = fVar16;
      auVar2._12_4_ = fVar17;
      auVar3._4_4_ = fVar15;
      auVar3._0_4_ = fVar8 * fVar18;
      auVar3._8_4_ = fVar16;
      auVar3._12_4_ = fVar17;
      auVar14 = NEON_ext(auVar2,auVar3,0xc,1);
      fVar15 = (fVar18 * fVar13 + fVar5 * auVar11._0_4_ + auVar12._4_4_) - fVar15;
      fVar16 = (fVar19 * fVar13 + fVar8 * auVar11._4_4_ + auVar12._12_4_) - fVar16;
      fVar8 = (fVar20 * fVar13 + fVar9 * auVar11._8_4_ + fVar6) - auVar14._4_4_;
      fVar17 = ((fVar21 * fVar13 - fVar5 * auVar11._12_4_) - fVar7) - fVar17;
      do {
        if (unaff_x29 == 0) {
LAB_05bf8738:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(unaff_x29 + 0x18) <= unaff_x22) break;
        lVar4 = unaff_x29 + unaff_x22 * 0x10;
        unaff_x22 = unaff_x22 + 1;
        unaff_x25 = (undefined1 (*) [12])(unaff_x25[2] + 4);
        *(ulong *)(lVar4 + 0x28) = CONCAT44(fVar17,fVar8);
        *(ulong *)(lVar4 + 0x20) = CONCAT44(fVar16,fVar15);
        if (unaff_x22 == 0x1a) {
          return 1;
        }
        lVar4 = *unaff_x24;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar4 = *unaff_x24;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (lVar4 == 0) goto LAB_05bf8738;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x22) break;
        unaff_x29 = *unaff_x19;
        in_w8 = *(uint *)(lVar4 + unaff_x22 * 4 + 0x20);
        if (-1 < (int)in_w8) goto code_r0x05bf861c;
        if (*(char *)(unaff_x26 + 0xbbe) == '\0') {
          FUN_03188a78();
          *(undefined1 *)(unaff_x26 + 0xbbe) = unaff_w27;
        }
        uVar1 = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
        fVar8 = (float)uVar1;
        fVar17 = (float)((ulong)uVar1 >> 0x20);
        uVar1 = **(undefined8 **)(*unaff_x21 + 0xb8);
        fVar15 = (float)uVar1;
        fVar16 = (float)((ulong)uVar1 >> 0x20);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
code_r0x05bf861c:
  in_w9 = *(uint *)(unaff_x20 + 0x18);
  goto code_r0x05bf8620;
}


