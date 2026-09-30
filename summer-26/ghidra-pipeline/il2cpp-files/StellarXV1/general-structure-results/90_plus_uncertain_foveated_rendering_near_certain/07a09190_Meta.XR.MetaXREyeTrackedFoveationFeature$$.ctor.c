/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 07a09190
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
Meta_XR_MetaXREyeTrackedFoveationFeature___ctor
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
  
  fStack0000000000000010 = param_2._0_4_;
  fVar7 = fStack0000000000000010;
  fStack0000000000000014 = param_2._4_4_;
  fVar6 = fStack0000000000000014;
  _fStack0000000000000010 = param_2._0_8_;
  uStack0000000000000020 = param_1;
  fVar1 = (float)FUN_07a0dec8();
  if (0.0 < param_5 + param_2._8_4_ * param_4 + fVar7 * fVar1 + fVar6 * param_3) {
    fVar6 = unaff_x20[1];
    fVar7 = unaff_x20[2];
    fVar8 = *unaff_x20;
    fVar1 = unaff_s10 * unaff_x20[5] + unaff_s8 * unaff_x20[3] + unaff_s9 * unaff_x20[4];
    fStack000000000000000c = unaff_s15;
    if (DAT_09885627 == '\0') {
      FUN_04077588(PTR_DAT_09285d58);
      DAT_09885627 = '\x01';
    }
    fVar2 = ABS(fVar1);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar5 = **(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) * 8.0;
    fVar3 = fVar2 * DAT_01aecc74;
    if (fVar2 * DAT_01aecc74 <= fVar5) {
      fVar3 = fVar5;
    }
    if (fVar3 <= ABS(0.0 - fVar1)) {
      fVar7 = unaff_s10 * fVar7;
      fVar1 = (-(fVar7 + unaff_s8 * fVar8 + unaff_s9 * fVar6) - unaff_s12) / fVar1;
      if ((0.0 < fVar1) && ((fStack000000000000000c <= 0.0 || (fVar1 <= fStack000000000000000c)))) {
        uStack0000000000000018 = *(undefined8 *)(unaff_x20 + 2);
        _fStack0000000000000010 = *(undefined8 *)unaff_x20;
        uStack0000000000000020 = *(undefined8 *)(unaff_x20 + 4);
        uVar4 = UnityEngine_TextCore_Text_FontAsset__DestroyAtlasTextures(fVar1,&stack0x00000010,0);
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


