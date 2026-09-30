/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 0907f05c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_HMDMounted
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float unaff_s8;
  float unaff_s9;
  float in_stack_00000020;
  undefined8 in_stack_00000030;
  
  fVar4 = param_5 * *(float *)(param_1 + 0x20);
  param_3 = param_5 * param_3;
  uVar1 = FUN_0907f17c(param_5 * param_2,param_3,fVar4);
  if ((uVar1 & 1) != 0) {
    in_stack_00000030._4_4_ = in_stack_00000030._4_4_ - *(float *)(unaff_x19 + 0x28);
    param_3 = 0.0;
    in_stack_00000020 = 0.0;
    if (0.0 <= in_stack_00000030._4_4_) {
      in_stack_00000020 = in_stack_00000030._4_4_;
    }
  }
  if (unaff_s9 < ABS(in_stack_00000020)) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0a1ecff0(unaff_s8 + in_stack_00000020,*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_0a17834c(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        fVar3 = (float)FUN_0a18a1a0(lVar2,0);
        if (DAT_0b31f3e4 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
                    /* try { // try from 0907f0f8 to 0917f2db has its CatchHandler @ 0907f0f8
                       catch() { ... } // from try @ 0907f0f8 with catch @ 0907f0f8
                       catch() { ... } // from try @ 0907f348 with catch @ 0907f0f8
                       catch() { ... } // from try @ 0907f384 with catch @ 0907f0f8
                       catch() { ... } // from try @ 0907f688 with catch @ 0907f0f8
                       catch() { ... } // from try @ 0907f77c with catch @ 0907f0f8
                       catch() { ... } // from try @ 0907f7a8 with catch @ 0907f0f8
                       catch() { ... } // from try @ 0907f7c0 with catch @ 0907f0f8 */
          DAT_0b31f3e4 = '\x01';
        }
        uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 0x18);
        param_3 = param_3 + (float)((ulong)uVar5 >> 0x20) * in_stack_00000020 * 0.5;
        FUN_0a18a274(CONCAT44(param_3,fVar3 + (float)uVar5 * in_stack_00000020 * 0.5),param_3,
                     fVar4 + in_stack_00000020 *
                             *(float *)(*(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 0x20) * 0.5,
                     lVar2,0);
        FUN_0907eda4();
        goto LAB_0907f158;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
LAB_0907f158:
  return unaff_s9 < ABS(in_stack_00000020);
}


