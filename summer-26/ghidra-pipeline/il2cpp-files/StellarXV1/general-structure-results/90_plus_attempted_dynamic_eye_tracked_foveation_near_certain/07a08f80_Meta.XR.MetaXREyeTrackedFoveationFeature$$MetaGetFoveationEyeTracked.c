/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 07a08f80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  
  lVar1 = FUN_089c7534();
  if (lVar1 != 0) {
    fVar3 = *(float *)(unaff_x20 + 0x30);
    fVar4 = *(float *)(unaff_x20 + 0x34);
                    /* try { // try from 07a08f94 to 07b08fab has its CatchHandler @ 07a08ff8 */
    FUN_089dd77c(*(undefined4 *)(unaff_x20 + 0x2c),lVar1,0);
    fVar2 = (float)FUN_089dd874();
    *unaff_x19 = unaff_s8;
    unaff_x19[1] = unaff_s9;
                    /* try { // try from 07a08fac to 07b08fe7 has its CatchHandler @ 07a08d9c */
    unaff_x19[2] = unaff_s10;
    unaff_x19[5] = fVar4 * 0.5;
    *(ulong *)(unaff_x19 + 3) = CONCAT44(fVar3 * 0.5,fVar2 * 0.5);
    FUN_089c6dec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


