/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 085d0bc8
PROGRAM: cac-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float unaff_s9;
  float fVar17;
  
  FUN_03f13384(PTR_DAT_09198b70);
                    /* try { // try from 085d0bd8 to 086d0c07 has its CatchHandler @ 085d0d8c */
  *(undefined1 *)(unaff_x20 + 0x1bf) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(int *)(unaff_x19 + 0x18) < 3) {
    return false;
  }
  fVar10 = (float)FUN_05763aa8();
  puVar1 = PTR_DAT_09198b70;
                    /* try { // try from 085d0c10 to 086d0c1f has its CatchHandler @ 085d0d74 */
  fVar15 = param_3;
  if (*(int *)(*(long *)PTR_DAT_09198b70 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
                    /* try { // try from 085d0c28 to 086d0c2b has its CatchHandler @ 085d0d88 */
  if (DAT_0969b225 == '\0') {
    FUN_03f13384(PTR_DAT_09198b70);
    DAT_0969b225 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  param_3 = param_3 - unaff_s8;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar7 = *(long *)puVar1;
  }
  fVar12 = **(float **)(lVar7 + 0xb8);
  fVar11 = -param_3;
  if (0.0 <= param_3) {
    fVar11 = param_3;
  }
  if (fVar12 <= fVar11) {
    bVar2 = param_3 < 0.0;
  }
  else {
    iVar8 = *(int *)(unaff_x19 + 0x18);
    if (iVar8 + -2 < 0) {
      bVar2 = false;
      goto FUN_085d0d2c;
    }
    iVar8 = iVar8 + -1;
    do {
      iVar8 = iVar8 + -1;
      FUN_05763aa8();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (DAT_0969b225 == '\0') {
        FUN_03f13384(puVar1);
        DAT_0969b225 = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar7 = *(long *)puVar1;
      }
      fVar11 = fVar15 - unaff_s8;
      fVar15 = **(float **)(lVar7 + 0xb8);
      fVar12 = -fVar11;
      if (0.0 <= fVar11) {
        fVar12 = fVar11;
      }
      if (fVar15 <= fVar12) {
        bVar2 = false;
        if (!NAN(fVar11)) {
          bVar2 = fVar11 < 0.0;
        }
        goto LAB_085d0d28;
      }
    } while (0 < iVar8);
    bVar2 = false;
  }
LAB_085d0d28:
  iVar8 = *(int *)(unaff_x19 + 0x18);
FUN_085d0d2c:
  if (iVar8 < 1) {
    return false;
  }
  uVar9 = 0;
  iVar8 = 0;
  fVar10 = fVar10 - unaff_s9;
  do {
    fVar13 = fVar12;
    fVar11 = (float)FUN_05763aa8();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if (DAT_0969b225 == '\0') {
      FUN_03f13384(puVar1);
      DAT_0969b225 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar7 = *(long *)puVar1;
    }
    fVar11 = fVar11 - unaff_s9;
    fVar17 = fVar15 - unaff_s8;
    fVar15 = fVar11 - fVar10;
    fVar14 = fVar17 - param_3;
    fVar16 = fVar17 * fVar15 - fVar11 * fVar14;
    fVar12 = -fVar16;
    if (0.0 <= fVar16) {
      fVar12 = fVar16;
    }
    fVar14 = fVar14 * fVar14 + (fVar13 - param_2) * (fVar13 - param_2) + fVar15 * fVar15;
    fVar16 = param_3 * param_3 + param_2 * param_2 + fVar10 * fVar10;
    fVar15 = fVar17 * fVar17 + fVar13 * fVar13 + fVar11 * fVar11;
    bVar3 = false;
    bVar5 = true;
    if (fVar12 < **(float **)(lVar7 + 0xb8)) {
      bVar3 = false;
      bVar5 = true;
      if (!NAN(fVar16) && !NAN(fVar14)) {
        bVar3 = fVar16 == fVar14;
        bVar5 = fVar14 <= fVar16;
      }
    }
    bVar4 = false;
    bVar6 = true;
    if (!bVar5 || bVar3) {
      bVar4 = false;
      bVar6 = true;
      if (!NAN(fVar15) && !NAN(fVar14)) {
        bVar4 = fVar15 == fVar14;
        bVar6 = fVar14 <= fVar15;
      }
    }
    if (!bVar6 || bVar4) {
      return true;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if (DAT_0969b225 == '\0') {
      FUN_03f13384(puVar1);
      DAT_0969b225 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar7 = *(long *)puVar1;
    }
    fVar12 = **(float **)(lVar7 + 0xb8);
    fVar14 = -fVar17;
    if (0.0 <= fVar17) {
      fVar14 = fVar17;
    }
    if ((fVar12 <= fVar14) && (bVar3 = fVar17 < 0.0, bVar2 != bVar3)) {
      fVar15 = param_3 - fVar17;
      fVar12 = -fVar15;
      bVar2 = bVar3;
      if (0.0 < (fVar10 * fVar17 - param_3 * fVar11) / fVar12) {
        uVar9 = uVar9 + 1;
      }
    }
    iVar8 = iVar8 + 1;
    param_2 = fVar13;
    param_3 = fVar17;
    fVar10 = fVar11;
  } while (iVar8 < *(int *)(unaff_x19 + 0x18));
  return (uVar9 & 0x80000001) == 1;
}


