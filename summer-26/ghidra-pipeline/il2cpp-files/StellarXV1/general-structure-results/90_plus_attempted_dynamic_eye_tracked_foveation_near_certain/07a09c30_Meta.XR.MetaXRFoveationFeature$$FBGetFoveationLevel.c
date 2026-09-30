/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 07a09c30
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel
               (undefined1 param_1 [16],float param_2,float param_3)

{
  bool bVar1;
  long lVar2;
  int in_w8;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar3;
  undefined8 uVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar5;
  float unaff_s14;
  float fVar6;
  float unaff_s15;
  float fVar7;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 in_stack_00000020;
  
  if ((in_w8 != 1) &&
     ((in_w8 == 2 ||
      (unaff_s10 <
       SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
            param_2 * param_2 + (unaff_s11 - unaff_s15) * (unaff_s11 - unaff_s15)))))) {
    unaff_s8 = -unaff_s8;
                    /* try { // try from 07a09c6c to 07b09c73 has its CatchHandler @ 07a09e3c */
    unaff_s9 = -unaff_s9;
    param_3 = -param_3;
  }
  unaff_x19[0] = 0.0;
  unaff_x19[1] = 0.0;
  unaff_x19[2] = 0.0;
  unaff_x19[3] = 0.0;
  unaff_x19[6] = 0.0;
  unaff_x19[4] = 0.0;
  unaff_x19[5] = 0.0;
  if (((*(long *)(unaff_x20 + 0x20) != 0) &&
      (lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar2 != 0)) &&
     (lVar2 = FUN_089c7534(lVar2,0), lVar2 != 0)) {
    fVar3 = (float)FUN_089dd968(in_stack_00000020,lVar2,0);
    *unaff_x19 = fVar3;
    unaff_x19[1] = unaff_s14;
    unaff_x19[2] = unaff_s12;
    fVar5 = *unaff_x21;
    fVar7 = unaff_x21[1];
    fVar6 = unaff_x21[2];
    if (*(char *)(unaff_x23 + 0x5ad) == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      *(undefined1 *)(unaff_x23 + 0x5ad) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    unaff_x19[6] = SQRT((fVar6 - unaff_s12) * (fVar6 - unaff_s12) +
                        (fVar5 - fVar3) * (fVar5 - fVar3) +
                        (fVar7 - unaff_s14) * (fVar7 - unaff_s14));
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (lVar2 = FUN_089c7534(lVar2,0), lVar2 != 0)) {
      fVar3 = (float)FUN_089dcd84(unaff_s8,lVar2,0);
      if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        *(undefined1 *)(unaff_x24 + 0x4e7) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      fVar5 = SQRT(param_3 * param_3 + fVar3 * fVar3 + unaff_s9 * unaff_s9);
      if (fVar5 <= fStack0000000000000008) {
        if (DAT_098854f1 == '\0') {
          FUN_04077588(PTR_DAT_09285d60);
          DAT_098854f1 = '\x01';
        }
        uVar4 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
        param_3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
      }
      else {
        param_3 = param_3 / fVar5;
        uVar4 = CONCAT44(unaff_s9 / fVar5,fVar3 / fVar5);
      }
      *(undefined8 *)(unaff_x19 + 3) = uVar4;
      unaff_x19[5] = param_3;
      if (fStack000000000000000c <= 0.0) {
        bVar1 = true;
      }
      else {
        bVar1 = unaff_x19[6] <= fStack000000000000000c;
      }
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


