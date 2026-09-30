/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 090d46d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000078;
  uint uStack000000000000007c;
  
  if ((param_1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0ac401c0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar1 = FUN_0a188688(&stack0x00000010,0);
    if (lVar2 != 0) {
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
LAB_090d4874:
        *(undefined4 *)(lVar2 + 0x38) = in_stack_00000028;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000020;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000010;
        FUN_090d4b58(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
        return;
      }
      goto LAB_090d48bc;
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (lVar2 != 0) {
      if ((unaff_w19 < *(uint *)(lVar2 + 0x18)) &&
         (uStack000000000000007c < *(uint *)(lVar2 + 0x18))) {
        lVar3 = lVar2 + 0x20 + (long)(int)uStack000000000000007c * 0x1c;
        lVar2 = lVar2 + 0x20 + (long)(int)unaff_w19 * 0x1c;
        uStack0000000000000078 = *(undefined4 *)(lVar3 + 0xc);
        fVar13 = *(float *)(lVar3 + 0x18);
        fVar14 = *(float *)(lVar2 + 0x14);
        fVar12 = *(float *)(lVar2 + 0x18);
        fVar11 = *(float *)(lVar2 + 0xc);
        fVar10 = *(float *)(lVar2 + 0x10);
        fVar6 = *(float *)(lVar3 + 0x10);
        fVar8 = *(float *)(lVar3 + 0x14);
        fVar7 = fVar6;
        fVar9 = fVar8;
        FUN_0a16a578(0);
        uVar4 = FUN_0a16adac(0);
        fVar5 = (float)FUN_0a16a578(uStack0000000000000078,fVar6,fVar8,fVar13,0);
        lVar2 = *(long *)(unaff_x20 + 0x28);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = 0;
        uVar1 = FUN_0a188128(uVar4,fVar7,fVar9,
                             (fVar14 * fVar6 + fVar11 * fVar13 + fVar12 * fVar5) - fVar10 * fVar8,
                             (fVar11 * fVar8 + fVar10 * fVar13 + fVar12 * fVar6) - fVar14 * fVar5,
                             (fVar10 * fVar5 + fVar14 * fVar13 + fVar12 * fVar8) - fVar11 * fVar6,
                             ((fVar12 * fVar13 - fVar11 * fVar5) - fVar10 * fVar6) - fVar14 * fVar8,
                             &stack0x00000010,0);
        if (lVar2 == 0) goto LAB_090d48c0;
        if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
          goto LAB_090d4874;
        }
      }
LAB_090d48bc:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
  }
LAB_090d48c0:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


