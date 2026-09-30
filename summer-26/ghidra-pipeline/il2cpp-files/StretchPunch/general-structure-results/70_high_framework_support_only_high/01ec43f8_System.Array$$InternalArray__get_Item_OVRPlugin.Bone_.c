/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Bone>
ENTRY_POINT: 01ec43f8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Bone>
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  char cVar2;
  float *pfVar3;
  long unaff_x19;
  uint unaff_w20;
  char cVar4;
  long *unaff_x23;
  long unaff_x24;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float unaff_s11;
  float __x;
  float unaff_s13;
  float fVar8;
  float unaff_s14;
  float fVar9;
  float unaff_s15;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if (*(int *)(param_4 + 0xe0) == 0) {
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
  fVar7 = param_3 * param_3;
  fVar5 = SQRT(fVar7 + unaff_s11 * unaff_s11 + 0.0);
  if (fVar5 <= unaff_s13) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar3 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    __x = *pfVar3;
    fStack0000000000000008 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = 0.0 / fVar5;
    __x = unaff_s11 / fVar5;
    param_3 = param_3 / fVar5;
  }
  lVar1 = FUN_03d71c60();
  FUN_03d7f1a0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  fVar5 = (float)FUN_03d801f8(lVar1,0);
  if (*(char *)(unaff_x24 + 0xdbc) == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x24 + 0xdbc) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar6 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + 0.0);
  fVar8 = SQRT(unaff_s9 * unaff_s9 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (fVar6 <= unaff_s13) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar3 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar5 = *pfVar3;
    fVar9 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  else {
    fVar5 = fVar5 / fVar6;
    fVar9 = 0.0 / fVar6;
    fVar7 = fVar7 / fVar6;
  }
  cVar4 = *(char *)(unaff_x19 + 0x1b8);
  if (cVar4 != '\0' && (unaff_w20 & 1) == 0) {
    fVar8 = fVar8 * DAT_00bafae8;
  }
  if (*(float *)(unaff_x19 + 0x19c) <= fVar8) {
    if (cVar4 == '\x01' && (unaff_w20 & 1) == 0) goto LAB_01ec4604;
    *(float *)(unaff_x19 + 0x1c4) = *(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0);
    fVar6 = atan2f(fStack0000000000000058,fStack000000000000005c);
    fVar8 = DAT_00bafe88;
    cVar4 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1c0) = 0;
    *(float *)(unaff_x19 + 0x1bc) = fVar6 * fVar8;
  }
  else {
    cVar4 = '\0';
  }
  *(char *)(unaff_x19 + 0x1b8) = cVar4;
LAB_01ec4604:
  cVar2 = *(char *)(unaff_x19 + 0x1b9);
  param_2 = ABS(param_2);
  if ((unaff_w20 & 1) == 0) {
    fVar8 = DAT_00bafbe4;
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      fVar8 = DAT_00bafc30;
    }
    param_2 = param_2 * fVar8;
  }
  if (param_2 <= DAT_00bafcb0) {
    if (cVar2 != '\0' || (unaff_w20 & 1) != 0) {
      *(float *)(unaff_x19 + 0x1dc) = *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8);
      fVar6 = atan2f(param_3,__x);
      fVar8 = DAT_00bafe88;
      cVar2 = '\0';
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0;
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      *(float *)(unaff_x19 + 0x1d4) = fVar6 * fVar8;
    }
  }
  else if (cVar2 != '\x01' || (unaff_w20 & 1) != 0) {
    *(float *)(unaff_x19 + 0x1d0) = *(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc);
    fVar6 = atan2f(fVar7,fVar5);
    fVar8 = DAT_00bafe88;
    cVar2 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1cc) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(float *)(unaff_x19 + 0x1c8) = fVar6 * fVar8;
  }
  if (cVar4 != '\0') {
    FUN_01ec4870(fStack000000000000005c,uStack000000000000000c,fStack0000000000000058,
                 unaff_x19 + 0x1bc);
    cVar2 = *(char *)(unaff_x19 + 0x1b9);
  }
  if (cVar2 == '\0') {
    lVar1 = unaff_x19 + 0x1d4;
  }
  else {
    lVar1 = unaff_x19 + 0x1c8;
    fStack0000000000000008 = fVar9;
    __x = fVar5;
    param_3 = fVar7;
  }
  FUN_01ec4870(__x,fStack0000000000000008,param_3,lVar1);
  fVar7 = (*(float *)(unaff_x19 + 0x1e0) -
          *(float *)(unaff_x19 + 0x1a0) *
          (*(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc) +
          *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8))) -
          (*(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0));
  fVar5 = fVar7;
  if (((*(char *)(unaff_x19 + 0x18c) != '\0') &&
      (fVar5 = *(float *)(unaff_x19 + 0x194), *(float *)(unaff_x19 + 0x194) <= fVar7)) &&
     (fVar5 = *(float *)(unaff_x19 + 400), fVar7 <= *(float *)(unaff_x19 + 400))) {
    fVar5 = fVar7;
  }
  FUN_01ec3cbc(fVar5);
  FUN_01ec3b28((fVar5 - *(float *)(unaff_x19 + 0x194)) /
               (*(float *)(unaff_x19 + 400) - *(float *)(unaff_x19 + 0x194)));
  return;
}


