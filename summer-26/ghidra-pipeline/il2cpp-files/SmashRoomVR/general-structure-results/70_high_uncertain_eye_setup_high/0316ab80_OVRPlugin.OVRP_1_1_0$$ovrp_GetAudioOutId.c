/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioOutId
ENTRY_POINT: 0316ab80
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAudioOutId
               (float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s12;
  float unaff_s13;
  float fVar9;
  float fVar10;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar9 = *unaff_x20;
  fVar8 = unaff_x20[1];
  fVar10 = unaff_x20[2];
  fVar5 = 1.0;
  fStack000000000000000c = 1.0;
  if (param_1 < 0.0) {
    fStack000000000000000c = -1.0;
  }
  fStack0000000000000008 = param_3;
  if (*(int *)(param_4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar3 = (float)FUN_03927568();
  if (DAT_03fed5da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed5da = '\x01';
  }
  fVar4 = param_3 * param_3 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar10 = fStack0000000000000008 - fVar10;
  fVar7 = **(float **)
            (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8);
  if (fVar7 <= fVar4) {
    fVar6 = fVar10 * param_3 + (unaff_s12 - fVar9) * fVar3 + (unaff_s13 - fVar8) * fVar5;
    fVar7 = fVar3 * fVar6;
    fVar3 = fVar7 / fVar4;
    fVar5 = (fVar5 * fVar6) / fVar4;
    fVar4 = (param_3 * fVar6) / fVar4;
  }
  else {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar3 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar4 = fVar4 * fVar4;
  fVar5 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4);
  fVar3 = (float)FUN_03927568();
  if (fVar10 * fVar7 + (unaff_s12 - fVar9) * fVar3 + (unaff_s13 - fVar8) * fVar4 < 0.0) {
    fVar5 = -fVar5;
  }
  fVar8 = 1.0;
  if (fVar5 < 0.0) {
    fVar8 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar5;
  if (fStack000000000000000c != fVar8) {
    lVar2 = *(long *)(unaff_x19 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0316ad58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


