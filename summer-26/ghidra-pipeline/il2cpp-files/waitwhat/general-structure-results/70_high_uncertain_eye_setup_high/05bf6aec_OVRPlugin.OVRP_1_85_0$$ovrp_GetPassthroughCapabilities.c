/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_GetPassthroughCapabilities
ENTRY_POINT: 05bf6aec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_85_0__ovrp_GetPassthroughCapabilities(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint unaff_w19;
  long *unaff_x20;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000078;
  uint uStack000000000000007c;
  
  uVar1 = (**(code **)(*unaff_x20 + 0x178))();
  if ((uVar1 & 1) == 0) {
    lVar3 = unaff_x20[5];
    if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar2 = FUN_069e53e4(&stack0x00000010,0);
    if (lVar3 != 0) {
      if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)unaff_w19 * 0x1c;
LAB_05bf6ca0:
        *(undefined4 *)(lVar3 + 0x38) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000010;
        FUN_05bf6f84(uVar2,unaff_w19,unaff_x20[8]);
        return;
      }
      goto LAB_05bf6ce8;
    }
  }
  else {
    lVar3 = unaff_x20[3];
    if (lVar3 != 0) {
      if ((unaff_w19 < *(uint *)(lVar3 + 0x18)) &&
         (uStack000000000000007c < *(uint *)(lVar3 + 0x18))) {
        lVar4 = lVar3 + 0x20 + (long)(int)uStack000000000000007c * 0x1c;
        lVar3 = lVar3 + 0x20 + (long)(int)unaff_w19 * 0x1c;
        uStack0000000000000078 = *(undefined4 *)(lVar4 + 0xc);
        fVar14 = *(float *)(lVar4 + 0x18);
        fVar15 = *(float *)(lVar3 + 0x14);
        fVar13 = *(float *)(lVar3 + 0x18);
        fVar12 = *(float *)(lVar3 + 0xc);
        fVar11 = *(float *)(lVar3 + 0x10);
        fVar7 = *(float *)(lVar4 + 0x10);
        fVar9 = *(float *)(lVar4 + 0x14);
        fVar8 = fVar7;
        fVar10 = fVar9;
        UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor(0);
        uVar5 = FUN_069c57a8(0);
        fVar6 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor
                                 (uStack0000000000000078,fVar7,fVar9,fVar14,0);
        lVar3 = unaff_x20[5];
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = 0;
        uVar2 = FUN_069e4d6c(uVar5,fVar8,fVar10,
                             (fVar15 * fVar7 + fVar12 * fVar14 + fVar13 * fVar6) - fVar11 * fVar9,
                             (fVar12 * fVar9 + fVar11 * fVar14 + fVar13 * fVar7) - fVar15 * fVar6,
                             (fVar11 * fVar6 + fVar15 * fVar14 + fVar13 * fVar9) - fVar12 * fVar7,
                             ((fVar13 * fVar14 - fVar12 * fVar6) - fVar11 * fVar7) - fVar15 * fVar9,
                             &stack0x00000010,0);
        if (lVar3 == 0) goto LAB_05bf6cec;
        if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
          lVar3 = lVar3 + (long)(int)unaff_w19 * 0x1c;
          goto LAB_05bf6ca0;
        }
      }
LAB_05bf6ce8:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
  }
LAB_05bf6cec:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


