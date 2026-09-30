/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0600fbe4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  undefined8 in_d3;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x21 + 0x99d) = 1;
  fVar11 = *unaff_x20;
  fVar13 = unaff_x20[1];
  fVar14 = unaff_x20[2];
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf2 = '\x01';
  }
  puVar1 = PTR_DAT_0759b378;
  lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar9 = *(float *)(lVar3 + 0x1c);
  fVar5 = *(float *)(lVar3 + 0x20);
  fVar7 = *(float *)(lVar3 + 0x18);
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  fVar12 = fVar13 * fVar5 - fVar14 * fVar9;
  fVar14 = fVar14 * fVar7 - fVar11 * fVar5;
  fVar11 = fVar11 * fVar9 - fVar13 * fVar7;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar2 = PTR_DAT_075f2eb0;
  fVar13 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar14 * fVar14);
  if (fVar13 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar12 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar11 = pfVar4[2];
  }
  else {
    fVar12 = fVar12 / fVar13;
    fVar14 = fVar14 / fVar13;
    fVar11 = fVar11 / fVar13;
  }
  uVar10 = (ulong)(uint)fVar11;
  uVar8 = (ulong)(uint)fVar14;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar6 = FUN_06030ebc(fVar12,uVar8,uVar10,unaff_x20 + 3,0);
  fVar11 = *unaff_x20;
  fVar13 = unaff_x20[1];
  fVar14 = unaff_x20[2];
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  FUN_06e67e1c(fVar11,fVar13,fVar14,uVar6,uVar8,uVar10,in_d3);
  return;
}


