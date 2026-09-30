/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 07475df0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsInsightPassthroughSupported(float param_1,float param_2,float param_3)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float fVar9;
  float unaff_s15;
  float in_stack_000000a8;
  float fStack00000000000000ac;
  
  fStack00000000000000ac = param_1;
  if (DAT_09836324 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_09836324 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (0 < (int)unaff_x19[10]) {
    in_stack_000000a8 = in_stack_000000a8 + unaff_s10 * unaff_s15;
    fVar9 = unaff_s14 + unaff_s9 * unaff_s15;
    fVar8 = unaff_s11 + unaff_s8 * unaff_s15;
    fVar5 = SQRT((fVar8 - param_3) * (fVar8 - param_3) +
                 (fVar9 - fStack00000000000000ac) * (fVar9 - fStack00000000000000ac) +
                 (in_stack_000000a8 - param_2) * (in_stack_000000a8 - param_2));
    lVar2 = 0;
    uVar3 = 0;
    do {
      fVar6 = in_stack_000000a8;
      fVar7 = fVar8;
      uVar4 = FUN_07476340(fVar9,in_stack_000000a8,fVar8,fVar9 + unaff_s9 * fVar5 * 0.5,
                           in_stack_000000a8 + unaff_s10 * fVar5 * 0.5,
                           fVar8 + unaff_s8 * fVar5 * 0.5);
      lVar1 = unaff_x19[7];
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar1 = lVar1 + lVar2;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(float *)(lVar1 + 0x24) = fVar6;
      *(float *)(lVar1 + 0x28) = fVar7;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0xc;
    } while ((long)uVar3 < (long)(int)unaff_x19[10]);
  }
  (**(code **)(*unaff_x19 + 0x1c8))();
  return;
}


