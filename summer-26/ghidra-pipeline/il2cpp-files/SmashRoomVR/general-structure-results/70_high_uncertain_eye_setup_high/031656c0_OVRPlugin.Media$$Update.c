/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 031656c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__Update(float param_1,float param_2,float param_3)

{
  bool bVar1;
  float *pfVar2;
  float *unaff_x19;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fVar6 = unaff_s9 - param_3 / param_1;
  fVar7 = unaff_s10 - (unaff_s12 * param_2) / param_1;
  fVar8 = unaff_s11 - (unaff_s8 * param_2) / param_1;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar3 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
  if (fVar3 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
  }
  else {
    fVar6 = fVar6 / fVar3;
    fVar7 = fVar7 / fVar3;
    fVar8 = fVar8 / fVar3;
  }
  fVar3 = unaff_s15 * unaff_s15 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_;
  fVar4 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000010 = fStack0000000000000010 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar5 = (fVar4 * fVar4 + fStack0000000000000010 * fStack0000000000000010 +
          fStack0000000000000014 * fStack0000000000000014) - fVar3;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (unaff_s14 < fVar5) {
    bVar1 = false;
  }
  else {
    fVar5 = fVar8 * fVar4 - fVar7 * fStack0000000000000014;
    fVar8 = fVar6 * fStack0000000000000014 - fVar8 * fStack0000000000000010;
    fVar6 = fVar7 * fStack0000000000000010 - fVar6 * fVar4;
    bVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar8 * fVar8 <= fVar3;
  }
  return bVar1;
}


