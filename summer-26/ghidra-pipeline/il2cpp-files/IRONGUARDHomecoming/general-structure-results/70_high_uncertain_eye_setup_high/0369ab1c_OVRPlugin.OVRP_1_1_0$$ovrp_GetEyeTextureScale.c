/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetEyeTextureScale
ENTRY_POINT: 0369ab1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetEyeTextureScale(float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  
  param_1 = param_1 + param_2;
  fVar2 = (float)FUN_0407bbb0();
  fVar3 = SQRT(param_1);
  if (unaff_s14 * param_3 + unaff_s12 * fVar2 + unaff_s13 * param_2 < 0.0) {
    fVar3 = -SQRT(param_1);
  }
  fVar2 = 1.0;
  if (fVar3 < 0.0) {
    fVar2 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar3;
  if (in_stack_00000008._4_4_ != fVar2) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0369aba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  return;
}


