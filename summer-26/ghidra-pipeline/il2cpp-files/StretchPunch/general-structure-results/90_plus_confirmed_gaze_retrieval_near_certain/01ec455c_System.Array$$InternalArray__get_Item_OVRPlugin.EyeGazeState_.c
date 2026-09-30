/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01ec455c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 153
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(void)

{
  long lVar1;
  char cVar2;
  float *pfVar3;
  long unaff_x19;
  uint unaff_w20;
  char cVar4;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fVar7;
  ulong unaff_d11;
  ulong unaff_d12;
  float unaff_s13;
  float fVar8;
  float __y;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
  *(undefined1 *)(unaff_x21 + 0xdbb) = 1;
  pfVar3 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
  fVar7 = *pfVar3;
  fVar8 = pfVar3[1];
  __y = pfVar3[2];
  cVar4 = *(char *)(unaff_x19 + 0x1b8);
  if (cVar4 != '\0' && (unaff_w20 & 1) == 0) {
    unaff_s13 = unaff_s13 * DAT_00bafae8;
  }
  if (*(float *)(unaff_x19 + 0x19c) <= unaff_s13) {
    if (cVar4 == '\x01' && (unaff_w20 & 1) == 0) goto LAB_01ec4604;
    *(float *)(unaff_x19 + 0x1c4) = *(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0);
    fVar6 = atan2f(fStack0000000000000058,fStack000000000000005c);
    fVar5 = DAT_00bafe88;
    cVar4 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1c0) = 0;
    *(float *)(unaff_x19 + 0x1bc) = fVar6 * fVar5;
  }
  else {
    cVar4 = '\0';
  }
  *(char *)(unaff_x19 + 0x1b8) = cVar4;
LAB_01ec4604:
  cVar2 = *(char *)(unaff_x19 + 0x1b9);
  fVar5 = ABS(unaff_s8);
  if ((unaff_w20 & 1) == 0) {
    fVar6 = DAT_00bafbe4;
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      fVar6 = DAT_00bafc30;
    }
    fVar5 = fVar5 * fVar6;
  }
  if (fVar5 <= DAT_00bafcb0) {
    if (cVar2 != '\0' || (unaff_w20 & 1) != 0) {
      *(float *)(unaff_x19 + 0x1dc) = *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8);
      fVar6 = atan2f((float)unaff_d12,(float)unaff_d11);
      fVar5 = DAT_00bafe88;
      cVar2 = '\0';
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0;
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      *(float *)(unaff_x19 + 0x1d4) = fVar6 * fVar5;
    }
  }
  else if (cVar2 != '\x01' || (unaff_w20 & 1) != 0) {
    *(float *)(unaff_x19 + 0x1d0) = *(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc);
    fVar6 = atan2f(__y,fVar7);
    fVar5 = DAT_00bafe88;
    cVar2 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1cc) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(float *)(unaff_x19 + 0x1c8) = fVar6 * fVar5;
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
    unaff_d11 = (ulong)(uint)fVar7;
    unaff_d12 = (ulong)(uint)__y;
    fStack0000000000000008 = fVar8;
  }
  FUN_01ec4870(unaff_d11,fStack0000000000000008,unaff_d12,lVar1);
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


