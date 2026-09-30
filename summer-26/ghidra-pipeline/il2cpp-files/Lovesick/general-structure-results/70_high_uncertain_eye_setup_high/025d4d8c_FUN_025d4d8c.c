/*
FUNCTION_NAME: FUN_025d4d8c
ENTRY_POINT: 025d4d8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_025d4d8c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = Method_System_Security_Cryptography_HMAC_set_Key__;
  if ((DAT_037831e1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Security_Cryptography_HMAC_set_Key__);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    DAT_037831e1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_020d8340(0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    UNRECOVERED_JUMPTABLE = (code *)FUN_025d5d90();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x025d4e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
      return;
    }
  }
  fVar5 = (param_2[2] - param_1[2]) * param_3[2] +
          (*param_2 - *param_1) * *param_3 + (param_2[1] - param_1[1]) * param_3[1];
  fVar3 = (*param_2 - *param_1) - *param_3 * fVar5;
  fVar4 = (param_2[1] - param_1[1]) - param_3[1] * fVar5;
  fVar5 = (param_2[2] - param_1[2]) - param_3[2] * fVar5;
  if (DAT_03781918 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03781918 = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  *param_4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  return;
}


