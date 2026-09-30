/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetEyeTextureScale
ENTRY_POINT: 0316ac50
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetEyeTextureScale
               (float *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar2 = param_1[2];
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar2 = fVar2 * fVar2;
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2);
  fVar4 = (float)FUN_03927568();
  if (unaff_s14 * param_4 + unaff_s12 * fVar4 + unaff_s13 * fVar2 < 0.0) {
    fVar3 = -fVar3;
  }
  fVar2 = 1.0;
  if (fVar3 < 0.0) {
    fVar2 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar3;
  if (in_stack_00000008._4_4_ != fVar2) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0316ad58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


