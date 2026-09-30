/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 076dec9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
OVRPlugin_Qpl__CreateMarkerHandle
          (undefined8 param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float unaff_s12;
  float fVar7;
  float unaff_s15;
  float fVar8;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
                    /* catch() { ... } // from try @ 076dea60 with catch @ 076dec9c */
                    /* try { // try from 076deca0 to 077defd3 has its CatchHandler @ 076deca0
                       catch() { ... } // from try @ 076deca0 with catch @ 076deca0
                       catch() { ... } // from try @ 076df2cc with catch @ 076deca0
                       catch() { ... } // from try @ 076df3f8 with catch @ 076deca0
                       catch() { ... } // from try @ 076df4a0 with catch @ 076deca0
                       catch() { ... } // from try @ 076df59c with catch @ 076deca0
                       catch() { ... } // from try @ 076df69c with catch @ 076deca0
                       catch() { ... } // from try @ 076df6b0 with catch @ 076deca0
                       catch() { ... } // from try @ 076df6dc with catch @ 076deca0 */
  fStack0000000000000010 = param_2._0_4_;
  fVar7 = fStack0000000000000010;
  fStack0000000000000014 = param_2._4_4_;
  fVar6 = fStack0000000000000014;
  _fStack0000000000000010 = param_2._0_8_;
  uStack0000000000000020 = param_1;
  fVar1 = (float)OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerPointCached();
  if (0.0 < param_5 + param_2._8_4_ * param_4 + fVar7 * fVar1 + fVar6 * param_3) {
    fVar6 = unaff_x20[1];
    fVar7 = unaff_x20[2];
    fVar8 = *unaff_x20;
    fVar1 = unaff_s10 * unaff_x20[5] + unaff_s8 * unaff_x20[3] + unaff_s9 * unaff_x20[4];
    fStack000000000000000c = unaff_s15;
    if (DAT_09539e11 == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539e11 = '\x01';
    }
    fVar2 = ABS(fVar1);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar5 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
    fVar3 = fVar2 * DAT_01a2ee44;
    if (fVar2 * DAT_01a2ee44 <= fVar5) {
      fVar3 = fVar5;
    }
    if (fVar3 <= ABS(0.0 - fVar1)) {
      fVar7 = unaff_s10 * fVar7;
      fVar1 = (-(fVar7 + unaff_s8 * fVar8 + unaff_s9 * fVar6) - unaff_s12) / fVar1;
      if ((0.0 < fVar1) && ((fStack000000000000000c <= 0.0 || (fVar1 <= fStack000000000000000c)))) {
        uStack0000000000000018 = *(undefined8 *)(unaff_x20 + 2);
        _fStack0000000000000010 = *(undefined8 *)unaff_x20;
        uStack0000000000000020 = *(undefined8 *)(unaff_x20 + 4);
        uVar4 = FUN_0853dbe0(fVar1,&stack0x00000010,0);
        *unaff_x19 = uVar4;
        unaff_x19[1] = fVar7;
        unaff_x19[2] = fVar5;
        unaff_x19[3] = unaff_s8;
        unaff_x19[4] = unaff_s9;
        unaff_x19[5] = unaff_s10;
        unaff_x19[6] = fVar1;
        return 1;
      }
    }
  }
  return 0;
}


