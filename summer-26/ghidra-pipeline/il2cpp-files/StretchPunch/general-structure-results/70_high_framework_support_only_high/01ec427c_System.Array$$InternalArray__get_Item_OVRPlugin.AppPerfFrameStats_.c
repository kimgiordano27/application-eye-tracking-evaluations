/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 01ec427c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_AppPerfFrameStats>
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  float *pfVar5;
  long unaff_x19;
  uint unaff_w20;
  char cVar6;
  long unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack000000000000005c;
  
  fVar7 = (float)FUN_03d7eda4();
  if (unaff_x22 == 0) {
LAB_01ec47c4:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  param_3 = unaff_s10 - param_3;
  uVar11 = FUN_03d80370(unaff_s8 - fVar7,unaff_s9 - param_2);
  lVar3 = FUN_03d71c60();
  puVar2 = 
  Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
  ;
  if (lVar3 == 0) goto LAB_01ec47c4;
  fVar10 = 0.0;
  fVar7 = param_3;
  fVar8 = (float)FUN_03d802b4(uVar11,lVar3,0);
  if (DAT_044a2dbe == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbe = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (DAT_044a2dbc == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbc = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar1 = DAT_00bafc24;
  fVar9 = (float)uVar11;
  fVar15 = param_3 * param_3;
  fVar12 = SQRT(fVar15 + fVar9 * fVar9 + 0.0);
  if (fVar12 <= DAT_00bafc24) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar5 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fStack000000000000005c = *pfVar5;
    fStack000000000000000c = pfVar5[1];
    param_3 = pfVar5[2];
  }
  else {
    fVar15 = fVar9 / fVar12;
    fStack000000000000000c = 0.0 / fVar12;
    param_3 = param_3 / fVar12;
    fStack000000000000005c = fVar15;
  }
  lVar3 = FUN_03d71c60();
  FUN_03d7f21c();
  if (lVar3 == 0) goto LAB_01ec47c4;
  fVar9 = (float)FUN_03d801f8(lVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (DAT_044a2dbc == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbc = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar16 = fVar15 * fVar15;
  fVar13 = SQRT(fVar16 + fVar9 * fVar9 + 0.0);
  if (fVar13 <= fVar1) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar5 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar9 = *pfVar5;
    fStack0000000000000008 = pfVar5[1];
    fVar15 = pfVar5[2];
  }
  else {
    fStack0000000000000008 = 0.0 / fVar13;
    fVar9 = fVar9 / fVar13;
    fVar15 = fVar15 / fVar13;
  }
  lVar3 = FUN_03d71c60();
  FUN_03d7f1a0();
  if (lVar3 == 0) goto LAB_01ec47c4;
  fVar13 = (float)FUN_03d801f8(lVar3,0);
  if (DAT_044a2dbc == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbc = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar14 = SQRT(fVar16 * fVar16 + fVar13 * fVar13 + 0.0);
  fVar7 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10);
  if (fVar14 <= fVar1) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar5 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar13 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar16 = pfVar5[2];
  }
  else {
    fVar13 = fVar13 / fVar14;
    fVar8 = 0.0 / fVar14;
    fVar16 = fVar16 / fVar14;
  }
  cVar6 = *(char *)(unaff_x19 + 0x1b8);
  if (cVar6 != '\0' && (unaff_w20 & 1) == 0) {
    fVar7 = fVar7 * DAT_00bafae8;
  }
  if (*(float *)(unaff_x19 + 0x19c) <= fVar7) {
    if (cVar6 == '\x01' && (unaff_w20 & 1) == 0) goto LAB_01ec4604;
    *(float *)(unaff_x19 + 0x1c4) = *(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0);
    fVar10 = atan2f(param_3,fStack000000000000005c);
    fVar7 = DAT_00bafe88;
    cVar6 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1c0) = 0;
    *(float *)(unaff_x19 + 0x1bc) = fVar10 * fVar7;
  }
  else {
    cVar6 = '\0';
  }
  *(char *)(unaff_x19 + 0x1b8) = cVar6;
LAB_01ec4604:
  cVar4 = *(char *)(unaff_x19 + 0x1b9);
  fVar12 = ABS(fVar12);
  if ((unaff_w20 & 1) == 0) {
    fVar7 = DAT_00bafbe4;
    if (cVar4 != '\0') {
      cVar4 = '\x01';
      fVar7 = DAT_00bafc30;
    }
    fVar12 = fVar12 * fVar7;
  }
  if (fVar12 <= DAT_00bafcb0) {
    if (cVar4 != '\0' || (unaff_w20 & 1) != 0) {
      *(float *)(unaff_x19 + 0x1dc) = *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8);
      fVar10 = atan2f(fVar15,fVar9);
      fVar7 = DAT_00bafe88;
      cVar4 = '\0';
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0;
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      *(float *)(unaff_x19 + 0x1d4) = fVar10 * fVar7;
    }
  }
  else if (cVar4 != '\x01' || (unaff_w20 & 1) != 0) {
    *(float *)(unaff_x19 + 0x1d0) = *(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc);
    fVar10 = atan2f(fVar16,fVar13);
    fVar7 = DAT_00bafe88;
    cVar4 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1cc) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(float *)(unaff_x19 + 0x1c8) = fVar10 * fVar7;
  }
  if (cVar6 != '\0') {
    FUN_01ec4870(fStack000000000000005c,fStack000000000000000c,param_3,unaff_x19 + 0x1bc);
    cVar4 = *(char *)(unaff_x19 + 0x1b9);
  }
  if (cVar4 == '\0') {
    lVar3 = unaff_x19 + 0x1d4;
  }
  else {
    lVar3 = unaff_x19 + 0x1c8;
    fStack0000000000000008 = fVar8;
    fVar9 = fVar13;
    fVar15 = fVar16;
  }
  FUN_01ec4870(fVar9,fStack0000000000000008,fVar15,lVar3);
  fVar8 = (*(float *)(unaff_x19 + 0x1e0) -
          *(float *)(unaff_x19 + 0x1a0) *
          (*(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc) +
          *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8))) -
          (*(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0));
  fVar7 = fVar8;
  if (((*(char *)(unaff_x19 + 0x18c) != '\0') &&
      (fVar7 = *(float *)(unaff_x19 + 0x194), *(float *)(unaff_x19 + 0x194) <= fVar8)) &&
     (fVar7 = *(float *)(unaff_x19 + 400), fVar8 <= *(float *)(unaff_x19 + 400))) {
    fVar7 = fVar8;
  }
  FUN_01ec3cbc(fVar7);
  FUN_01ec3b28((fVar7 - *(float *)(unaff_x19 + 0x194)) /
               (*(float *)(unaff_x19 + 400) - *(float *)(unaff_x19 + 0x194)));
  return;
}


