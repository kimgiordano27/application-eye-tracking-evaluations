/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 085d0c34
PROGRAM: cac-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled
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
  int iVar7;
  long unaff_x23;
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
  float unaff_s12;
  float fVar16;
  float fVar17;
  
  FUN_03f13384(PTR_DAT_09198b70);
  *(undefined1 *)(unaff_x23 + 0x225) = 1;
  lVar6 = *unaff_x20;
  fVar16 = unaff_s12 - unaff_s8;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar6 = *unaff_x20;
  }
  fVar12 = **(float **)(lVar6 + 0xb8);
  fVar9 = -fVar16;
  if (0.0 <= fVar16) {
    fVar9 = fVar16;
  }
                    /* try { // try from 085d0c78 to 086d0c9f has its CatchHandler @ 085d0e60 */
  if (fVar12 <= fVar9) {
    bVar5 = fVar16 < 0.0;
  }
  else {
    iVar7 = *(int *)(unaff_x19 + 0x18);
    if (iVar7 + -2 < 0) {
      bVar5 = false;
      goto FUN_085d0d2c;
    }
    iVar7 = iVar7 + -1;
    do {
      iVar7 = iVar7 + -1;
      FUN_05763aa8();
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
      fVar9 = param_3 - unaff_s8;
      param_3 = **(float **)(lVar6 + 0xb8);
      fVar12 = -fVar9;
      if (0.0 <= fVar9) {
        fVar12 = fVar9;
      }
      if (param_3 <= fVar12) {
        bVar5 = false;
        if (!NAN(fVar9)) {
          bVar5 = fVar9 < 0.0;
        }
        goto LAB_085d0d28;
      }
    } while (0 < iVar7);
    bVar5 = false;
  }
LAB_085d0d28:
  iVar7 = *(int *)(unaff_x19 + 0x18);
FUN_085d0d2c:
  if (iVar7 < 1) {
    bVar5 = false;
  }
  else {
    uVar8 = 0;
    iVar7 = 0;
    fVar9 = unaff_s11 - unaff_s9;
    do {
      fVar13 = fVar12;
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
      fVar17 = param_3 - unaff_s8;
      fVar11 = fVar10 - fVar9;
      fVar14 = fVar17 - fVar16;
      fVar15 = fVar17 * fVar11 - fVar10 * fVar14;
      fVar12 = -fVar15;
      if (0.0 <= fVar15) {
        fVar12 = fVar15;
      }
      fVar11 = fVar14 * fVar14 + (fVar13 - unaff_s10) * (fVar13 - unaff_s10) + fVar11 * fVar11;
      fVar14 = fVar16 * fVar16 + unaff_s10 * unaff_s10 + fVar9 * fVar9;
      param_3 = fVar17 * fVar17 + fVar13 * fVar13 + fVar10 * fVar10;
      bVar1 = false;
      bVar3 = true;
      if (fVar12 < **(float **)(lVar6 + 0xb8)) {
        bVar1 = false;
        bVar3 = true;
        if (!NAN(fVar14) && !NAN(fVar11)) {
          bVar1 = fVar14 == fVar11;
          bVar3 = fVar11 <= fVar14;
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
      fVar12 = **(float **)(lVar6 + 0xb8);
      fVar11 = -fVar17;
      if (0.0 <= fVar17) {
        fVar11 = fVar17;
      }
      if ((fVar12 <= fVar11) && (bVar1 = fVar17 < 0.0, bVar5 != bVar1)) {
        param_3 = fVar16 - fVar17;
        fVar12 = -param_3;
        bVar5 = bVar1;
        if (0.0 < (fVar9 * fVar17 - fVar16 * fVar10) / fVar12) {
          uVar8 = uVar8 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      fVar16 = fVar17;
      fVar9 = fVar10;
      unaff_s10 = fVar13;
    } while (iVar7 < *(int *)(unaff_x19 + 0x18));
    bVar5 = (uVar8 & 0x80000001) == 1;
  }
  return bVar5;
}


