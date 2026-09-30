/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$.ctor
ENTRY_POINT: 05fdbbac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature___ctor(float *param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  param_3 = param_3 + param_2;
  if (*param_1 <= param_3) {
    fVar3 = unaff_s9 * unaff_s12 + unaff_s10 * unaff_s14 + unaff_s8 * unaff_s13;
    unaff_s10 = unaff_s10 - (unaff_s14 * fVar3) / param_3;
    unaff_s8 = unaff_s8 - (unaff_s13 * fVar3) / param_3;
    unaff_s9 = unaff_s9 - (unaff_s12 * fVar3) / param_3;
  }
  if (*(char *)(unaff_x20 + 0xaf2) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  fVar6 = unaff_s8 + unaff_s11 * *(float *)(lVar1 + 0x1c);
  fVar7 = unaff_s9 + unaff_s11 * *(float *)(lVar1 + 0x20);
  fVar3 = (float)FUN_05fddf5c(unaff_s10 + unaff_s11 * *(float *)(lVar1 + 0x18),fVar6,fVar7);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = fVar6, fVar5 = fVar7, lVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)
     ) {
    fVar2 = (float)FUN_06e6a5c4(lVar1,0);
    FUN_06e6a69c(fVar3 + fVar2,fVar6 + fVar4,fVar7 + fVar5,lVar1,0);
    FUN_05fdd668();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


