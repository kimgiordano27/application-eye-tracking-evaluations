/*
FUNCTION_NAME: FUN_036940dc
ENTRY_POINT: 036940dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float FUN_036940dc(float param_1,float param_2,long param_3,float *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
  fVar7 = param_2;
  if ((DAT_04833edd & 1) == 0) {
                    /* try { // try from 03694128 to 03794163 has its CatchHandler @ 0369488c */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_9__);
    DAT_04833edd = 1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_9__;
  fVar11 = *param_4;
  fVar9 = param_4[1];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar6 = (float)FUN_0407bb40(param_4,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  pfVar4 = *(float **)(lVar3 + 0xb8);
  fVar14 = *(float *)(param_3 + 0x48);
  fVar10 = *pfVar4;
  fVar8 = pfVar4[1];
  fVar13 = param_2 * 0.5 * param_2;
  if (1.0 <= param_2) {
    fVar12 = param_4[1];
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
      pfVar4 = *(float **)(lVar3 + 0xb8);
    }
    if ((fVar12 - pfVar4[3] < fVar9 + fVar7 * param_1 * param_2 + fVar13 * fVar8 * fVar14) &&
       (*(int *)(lVar3 + 0xe0) == 0)) {
      thunk_FUN_01ee6d7c();
      uVar5 = *(undefined8 *)puVar2;
    }
  }
  return fVar11 + fVar6 * param_1 * param_2 + fVar13 * fVar10 * fVar14;
}


