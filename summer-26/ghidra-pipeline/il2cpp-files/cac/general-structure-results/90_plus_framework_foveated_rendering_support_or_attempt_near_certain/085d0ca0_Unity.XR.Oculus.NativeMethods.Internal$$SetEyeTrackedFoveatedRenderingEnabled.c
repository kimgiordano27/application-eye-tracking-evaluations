/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 085d0ca0
PROGRAM: cac-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int iVar7;
  long unaff_x23;
  undefined1 unaff_w24;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float fVar16;
  
  while( true ) {
    FUN_05763aa8();
                    /* try { // try from 085d0cb0 to 086d0cb3 has its CatchHandler @ 085d0d84 */
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
                    /* try { // try from 085d0cb8 to 086d0cbb has its CatchHandler @ 085d0d80 */
    if (*(char *)(unaff_x23 + 0x225) == '\0') {
                    /* try { // try from 085d0cc0 to 086d0cc3 has its CatchHandler @ 085d0d78 */
                    /* try { // try from 085d0cc4 to 086d0ceb has its CatchHandler @ 085d05b0 */
      FUN_03f13384();
                    /* catch() { ... } // from try @ 085d0a3c with catch @ 085d0cc8 */
      *(undefined1 *)(unaff_x23 + 0x225) = unaff_w24;
    }
                    /* catch() { ... } // from try @ 085d0a6c with catch @ 085d0ccc */
    lVar6 = *unaff_x20;
                    /* catch() { ... } // from try @ 085d0a50 with catch @ 085d0cd0 */
                    /* catch() { ... } // from try @ 085d0a40 with catch @ 085d0cd4 */
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar6 = *unaff_x20;
    }
    fVar9 = param_3 - unaff_s8;
    param_3 = **(float **)(lVar6 + 0xb8);
                    /* try { // try from 085d0cec to 086d0d03 has its CatchHandler @ 085d0e24 */
    fVar14 = -fVar9;
    if (0.0 <= fVar9) {
      fVar14 = fVar9;
    }
    if (param_3 <= fVar14) break;
    if (unaff_w21 < 1) {
      bVar5 = false;
LAB_085d0d28:
      if (*(int *)(unaff_x19 + 0x18) < 1) {
        bVar5 = false;
      }
      else {
        uVar8 = 0;
        iVar7 = 0;
        fVar9 = unaff_s11 - unaff_s9;
        do {
          fVar12 = fVar14;
          fVar10 = (float)FUN_05763aa8();
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (*(char *)(unaff_x23 + 0x225) == '\0') {
            FUN_03f13384();
            *(undefined1 *)(unaff_x23 + 0x225) = 1;
          }
          lVar6 = *unaff_x20;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            lVar6 = *unaff_x20;
          }
          fVar10 = fVar10 - unaff_s9;
          fVar16 = param_3 - unaff_s8;
          fVar11 = fVar10 - fVar9;
          fVar13 = fVar16 - unaff_s13;
          fVar15 = fVar16 * fVar11 - fVar10 * fVar13;
          fVar14 = -fVar15;
          if (0.0 <= fVar15) {
            fVar14 = fVar15;
          }
          fVar11 = fVar13 * fVar13 + (fVar12 - unaff_s10) * (fVar12 - unaff_s10) + fVar11 * fVar11;
          fVar13 = unaff_s13 * unaff_s13 + unaff_s10 * unaff_s10 + fVar9 * fVar9;
          param_3 = fVar16 * fVar16 + fVar12 * fVar12 + fVar10 * fVar10;
          bVar1 = false;
          bVar3 = true;
          if (fVar14 < **(float **)(lVar6 + 0xb8)) {
            bVar1 = false;
            bVar3 = true;
            if (!NAN(fVar13) && !NAN(fVar11)) {
              bVar1 = fVar13 == fVar11;
              bVar3 = fVar11 <= fVar13;
            }
          }
          bVar2 = false;
          bVar4 = true;
          if (!bVar3 || bVar1) {
            bVar2 = false;
            bVar4 = true;
            if (!NAN(param_3) && !NAN(fVar11)) {
              bVar2 = param_3 == fVar11;
              bVar4 = fVar11 <= param_3;
            }
          }
          if (!bVar4 || bVar2) {
            return true;
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (*(char *)(unaff_x23 + 0x225) == '\0') {
            FUN_03f13384();
            *(undefined1 *)(unaff_x23 + 0x225) = 1;
          }
          lVar6 = *unaff_x20;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            lVar6 = *unaff_x20;
          }
          fVar14 = **(float **)(lVar6 + 0xb8);
          fVar11 = -fVar16;
          if (0.0 <= fVar16) {
            fVar11 = fVar16;
          }
          if ((fVar14 <= fVar11) && (bVar1 = fVar16 < 0.0, bVar5 != bVar1)) {
            param_3 = unaff_s13 - fVar16;
            fVar14 = -param_3;
            bVar5 = bVar1;
            if (0.0 < (fVar9 * fVar16 - unaff_s13 * fVar10) / fVar14) {
              uVar8 = uVar8 + 1;
            }
          }
          iVar7 = iVar7 + 1;
          fVar9 = fVar10;
          unaff_s13 = fVar16;
          unaff_s10 = fVar12;
        } while (iVar7 < *(int *)(unaff_x19 + 0x18));
        bVar5 = (uVar8 & 0x80000001) == 1;
      }
      return bVar5;
    }
    unaff_w21 = unaff_w21 + -1;
  }
  bVar5 = fVar9 < 0.0;
  goto LAB_085d0d28;
}


