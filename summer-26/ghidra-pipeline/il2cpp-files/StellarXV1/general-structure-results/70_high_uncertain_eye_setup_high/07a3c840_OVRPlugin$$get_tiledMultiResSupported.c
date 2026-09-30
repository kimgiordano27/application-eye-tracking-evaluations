/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 07a3c840
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_tiledMultiResSupported
               (long param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
               undefined8 param_5,undefined1 param_6 [16])

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 unaff_s10;
  float unaff_s13;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000060;
  
  uStack0000000000000030 =
       CONCAT44(param_6._4_4_ + (float)((ulong)param_5 >> 0x20) * SQRT(param_2) * param_4._4_4_,
                param_6._0_4_ + (float)param_5 * SQRT(param_2) * param_4._0_4_);
  uStack0000000000000038 = 0;
  uStack0000000000000040 = param_6._0_8_;
  while( true ) {
    fStack0000000000000010 = (float)(int)unaff_x21 / ((float)(int)param_1 + unaff_s13);
    uStack0000000000000000 = in_stack_00000060;
    uStack0000000000000004 = in_stack_00000050;
    uVar4 = unaff_s10;
    fVar3 = param_6._4_4_;
    uVar2 = FUN_07a3cccc(uStack0000000000000040);
    lVar1 = unaff_x19[7];
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) break;
    lVar1 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
    unaff_x20 = unaff_x20 + 0xc;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(float *)(lVar1 + 0x24) = fVar3;
    *(undefined4 *)(lVar1 + 0x28) = uVar4;
    param_1 = (long)(int)unaff_x19[10];
    if (param_1 <= (long)unaff_x21) {
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


