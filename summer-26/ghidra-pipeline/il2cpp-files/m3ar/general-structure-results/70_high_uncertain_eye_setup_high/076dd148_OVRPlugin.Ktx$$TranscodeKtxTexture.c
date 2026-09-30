/*
FUNCTION_NAME: OVRPlugin.Ktx$$TranscodeKtxTexture
ENTRY_POINT: 076dd148
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Ktx__TranscodeKtxTexture(float param_1,float param_2)

{
  long lVar1;
  int in_w8;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar7;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = unaff_s10 - (param_2 + unaff_s13);
  fVar6 = unaff_s8 - (param_1 + unaff_s12);
  fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + (unaff_s11 - unaff_s15) * (unaff_s11 - unaff_s15));
  if ((0.0 < fStack0000000000000004) &&
     (fVar6 = (float)FUN_076dd2c0(fVar4), fStack0000000000000004 < fVar6)) {
    return 0;
  }
  if ((*(int *)(unaff_x20 + 0x28) == 1) ||
     ((fVar6 = fStack0000000000000014, fVar5 = fStack0000000000000018,
      fVar7 = fStack000000000000001c, *(int *)(unaff_x20 + 0x28) != 2 &&
      (SQRT(fStack0000000000000000) <= unaff_s14)))) {
    fVar6 = -fStack0000000000000014;
    fVar5 = -fStack0000000000000018;
    fVar7 = -fStack000000000000001c;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar1 != 0)) {
      fVar2 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      fStack0000000000000008 = fStack0000000000000008 + fStack0000000000000014 * fVar2;
      fStack000000000000000c = fStack000000000000000c + fStack0000000000000018 * fVar2;
      uVar3 = FUN_08596980(fStack0000000000000010 + fStack000000000000001c * fVar2,lVar1,0);
      *unaff_x19 = uVar3;
      unaff_x19[1] = fStack000000000000000c;
      unaff_x19[2] = fStack0000000000000008;
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
        uVar3 = FUN_08599d5c(fVar7,lVar1,0);
        unaff_x19[3] = uVar3;
        unaff_x19[4] = fVar5;
        unaff_x19[5] = fVar6;
        uVar3 = FUN_076dd2c0(fVar4);
        unaff_x19[6] = uVar3;
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


