/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioInId
ENTRY_POINT: 0316abe8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId(long *param_1)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar3 = unaff_s11 * unaff_s11 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9;
  fVar4 = **(float **)(*param_1 + 0xb8);
  if (fVar4 <= fVar3) {
    fVar5 = (fStack0000000000000008 - unaff_s15) * unaff_s11 +
            (unaff_s12 - unaff_s14) * unaff_s10 + (unaff_s13 - unaff_s8) * unaff_s9;
    fVar4 = unaff_s10 * fVar5;
    fVar6 = fVar4 / fVar3;
    fVar7 = (unaff_s9 * fVar5) / fVar3;
    fVar3 = (unaff_s11 * fVar5) / fVar3;
  }
  else {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar3 = fVar3 * fVar3;
  fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar3);
  fVar6 = (float)FUN_03927568();
  if ((fStack0000000000000008 - unaff_s15) * fVar4 +
      (unaff_s12 - unaff_s14) * fVar6 + (unaff_s13 - unaff_s8) * fVar3 < 0.0) {
    fVar5 = -fVar5;
  }
  fVar3 = 1.0;
  if (fVar5 < 0.0) {
    fVar3 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar5;
  if (fStack000000000000000c != fVar3) {
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


