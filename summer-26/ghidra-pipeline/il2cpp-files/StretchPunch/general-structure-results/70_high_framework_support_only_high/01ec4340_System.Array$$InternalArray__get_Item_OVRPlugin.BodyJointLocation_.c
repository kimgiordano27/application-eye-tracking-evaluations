/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 01ec4340
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_BodyJointLocation>(long param_1)

{
  long lVar1;
  char cVar2;
  float *pfVar3;
  long unaff_x19;
  uint unaff_w20;
  char cVar4;
  long *unaff_x23;
  long unaff_x24;
  float __y;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  float fVar12;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack000000000000005c;
  
  fVar11 = *(float *)(param_1 + 0xc24);
  fVar9 = unaff_s10 * unaff_s10;
  fVar6 = SQRT(fVar9 + unaff_s8 * unaff_s8 + 0.0);
  if (fVar6 <= fVar11) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar3 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fStack000000000000005c = *pfVar3;
    fStack000000000000000c = pfVar3[1];
    __y = pfVar3[2];
  }
  else {
    fVar9 = unaff_s8 / fVar6;
    fStack000000000000000c = 0.0 / fVar6;
    __y = unaff_s10 / fVar6;
    fStack000000000000005c = fVar9;
  }
  lVar1 = FUN_03d71c60();
  FUN_03d7f21c();
  if (lVar1 == 0) {
LAB_01ec47c4:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  fVar5 = (float)FUN_03d801f8(lVar1,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (*(char *)(unaff_x24 + 0xdbc) == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x24 + 0xdbc) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar10 = fVar9 * fVar9;
  fVar7 = SQRT(fVar10 + fVar5 * fVar5 + 0.0);
  if (fVar7 <= fVar11) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar3 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar5 = *pfVar3;
    fStack0000000000000008 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = 0.0 / fVar7;
    fVar5 = fVar5 / fVar7;
    fVar9 = fVar9 / fVar7;
  }
  lVar1 = FUN_03d71c60();
  FUN_03d7f1a0();
  if (lVar1 == 0) goto LAB_01ec47c4;
  fVar7 = (float)FUN_03d801f8(lVar1,0);
  if (*(char *)(unaff_x24 + 0xdbc) == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x24 + 0xdbc) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar8 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + 0.0);
  fVar12 = SQRT(unaff_s9 * unaff_s9 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (fVar8 <= fVar11) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar3 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar7 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  else {
    fVar7 = fVar7 / fVar8;
    fVar11 = 0.0 / fVar8;
    fVar10 = fVar10 / fVar8;
  }
  cVar4 = *(char *)(unaff_x19 + 0x1b8);
  if (cVar4 != '\0' && (unaff_w20 & 1) == 0) {
    fVar12 = fVar12 * DAT_00bafae8;
  }
  if (*(float *)(unaff_x19 + 0x19c) <= fVar12) {
    if (cVar4 == '\x01' && (unaff_w20 & 1) == 0) goto LAB_01ec4604;
    *(float *)(unaff_x19 + 0x1c4) = *(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0);
    fVar8 = atan2f(__y,fStack000000000000005c);
    fVar12 = DAT_00bafe88;
    cVar4 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1c0) = 0;
    *(float *)(unaff_x19 + 0x1bc) = fVar8 * fVar12;
  }
  else {
    cVar4 = '\0';
  }
  *(char *)(unaff_x19 + 0x1b8) = cVar4;
LAB_01ec4604:
  cVar2 = *(char *)(unaff_x19 + 0x1b9);
  fVar6 = ABS(fVar6);
  if ((unaff_w20 & 1) == 0) {
    fVar12 = DAT_00bafbe4;
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      fVar12 = DAT_00bafc30;
    }
    fVar6 = fVar6 * fVar12;
  }
  if (fVar6 <= DAT_00bafcb0) {
    if (cVar2 != '\0' || (unaff_w20 & 1) != 0) {
      *(float *)(unaff_x19 + 0x1dc) = *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8);
      fVar12 = atan2f(fVar9,fVar5);
      fVar6 = DAT_00bafe88;
      cVar2 = '\0';
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0;
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      *(float *)(unaff_x19 + 0x1d4) = fVar12 * fVar6;
    }
  }
  else if (cVar2 != '\x01' || (unaff_w20 & 1) != 0) {
    *(float *)(unaff_x19 + 0x1d0) = *(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc);
    fVar12 = atan2f(fVar10,fVar7);
    fVar6 = DAT_00bafe88;
    cVar2 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1cc) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(float *)(unaff_x19 + 0x1c8) = fVar12 * fVar6;
  }
  if (cVar4 != '\0') {
    FUN_01ec4870(fStack000000000000005c,fStack000000000000000c,__y,unaff_x19 + 0x1bc);
    cVar2 = *(char *)(unaff_x19 + 0x1b9);
  }
  if (cVar2 == '\0') {
    lVar1 = unaff_x19 + 0x1d4;
  }
  else {
    lVar1 = unaff_x19 + 0x1c8;
    fStack0000000000000008 = fVar11;
    fVar5 = fVar7;
    fVar9 = fVar10;
  }
  FUN_01ec4870(fVar5,fStack0000000000000008,fVar9,lVar1);
  fVar6 = (*(float *)(unaff_x19 + 0x1e0) -
          *(float *)(unaff_x19 + 0x1a0) *
          (*(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc) +
          *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8))) -
          (*(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0));
  fVar9 = fVar6;
  if (((*(char *)(unaff_x19 + 0x18c) != '\0') &&
      (fVar9 = *(float *)(unaff_x19 + 0x194), *(float *)(unaff_x19 + 0x194) <= fVar6)) &&
     (fVar9 = *(float *)(unaff_x19 + 400), fVar6 <= *(float *)(unaff_x19 + 400))) {
    fVar9 = fVar6;
  }
  FUN_01ec3cbc(fVar9);
  FUN_01ec3b28((fVar9 - *(float *)(unaff_x19 + 0x194)) /
               (*(float *)(unaff_x19 + 400) - *(float *)(unaff_x19 + 0x194)));
  return;
}


