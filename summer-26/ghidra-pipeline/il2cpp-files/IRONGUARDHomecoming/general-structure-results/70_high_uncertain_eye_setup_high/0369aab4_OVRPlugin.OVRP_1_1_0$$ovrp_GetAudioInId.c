/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioInId
ENTRY_POINT: 0369aab4
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId
               (float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float unaff_s9;
  float fVar3;
  float unaff_s10;
  float fVar4;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  
  param_4 = param_4 + param_2 + param_3;
  fVar2 = unaff_s10 * param_4;
  fVar3 = fVar2 / param_1;
  fVar4 = (unaff_s9 * param_4) / param_1;
  param_1 = (unaff_s11 * param_4) / param_1;
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_1 = param_1 * param_1;
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + param_1);
  fVar4 = (float)FUN_0407bbb0();
  if (unaff_s14 * fVar2 + unaff_s12 * fVar4 + unaff_s13 * param_1 < 0.0) {
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


