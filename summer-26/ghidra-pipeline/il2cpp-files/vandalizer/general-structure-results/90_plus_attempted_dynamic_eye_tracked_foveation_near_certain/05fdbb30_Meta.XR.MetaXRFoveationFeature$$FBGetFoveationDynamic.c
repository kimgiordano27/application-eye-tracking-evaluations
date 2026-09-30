/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 05fdbb30
PROGRAM: vandalizer-libil2cpp.so
SCORE: 120
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic
               (float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  fVar3 = unaff_s9 * unaff_s12 + param_2 + param_3;
  fVar4 = unaff_s12 * fVar3;
  fVar6 = (unaff_s14 * fVar3) / param_1;
  fVar9 = unaff_s10 - fVar6;
  fVar7 = unaff_s11 - (unaff_s13 * fVar3) / param_1;
  fVar8 = unaff_s9 - fVar4 / param_1;
  fVar3 = (float)FUN_06eec180(unaff_x19 + 0xec,0);
  if (*(char *)(unaff_x22 + 0x545) == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x22 + 0x545) = 1;
  }
  fVar2 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
  if (**(float **)(*unaff_x23 + 0xb8) <= fVar2) {
    fVar5 = fVar8 * fVar6 + fVar9 * fVar3 + fVar7 * fVar4;
    fVar9 = fVar9 - (fVar3 * fVar5) / fVar2;
    fVar7 = fVar7 - (fVar4 * fVar5) / fVar2;
    fVar8 = fVar8 - (fVar6 * fVar5) / fVar2;
  }
  if (*(char *)(unaff_x20 + 0xaf2) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  fVar7 = fVar7 + unaff_s11 * *(float *)(lVar1 + 0x1c);
  fVar8 = fVar8 + unaff_s11 * *(float *)(lVar1 + 0x20);
  fVar3 = (float)FUN_05fddf5c(fVar9 + unaff_s11 * *(float *)(lVar1 + 0x18),fVar7,fVar8);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = fVar7, fVar6 = fVar8, lVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)
     ) {
    fVar9 = (float)FUN_06e6a5c4(lVar1,0);
    FUN_06e6a69c(fVar3 + fVar9,fVar7 + fVar4,fVar8 + fVar6,lVar1,0);
    FUN_05fdd668();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


