/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 031642b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_Posef___cctor
                (float param_1,float param_2,undefined4 param_3,long param_4,float *param_5)

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
  undefined4 uStack000000000000000c;
  float fStack000000000000005c;
  
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  fVar7 = param_2;
  uStack000000000000000c = param_3;
  if ((DAT_03ff2063 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    thunk_FUN_01ad9084(PTR_DAT_03d806f8);
    DAT_03ff2063 = 1;
  }
  puVar2 = PTR_DAT_03d806f8;
  fStack000000000000005c = param_5[2];
  fVar11 = *param_5;
  fVar9 = param_5[1];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar6 = (float)FUN_039274f8(param_5,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  pfVar4 = *(float **)(lVar3 + 0xb8);
  fVar14 = *(float *)(param_4 + 0x48);
  fVar10 = *pfVar4;
  fVar8 = pfVar4[1];
  fVar13 = param_2 * 0.5 * param_2;
  if (1.0 <= param_2) {
    fVar12 = param_5[1];
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *(long *)puVar2;
      pfVar4 = *(float **)(lVar3 + 0xb8);
    }
    if ((fVar12 - pfVar4[3] < fVar9 + fVar7 * param_1 * param_2 + fVar13 * fVar8 * fVar14) &&
       (*(int *)(lVar3 + 0xe0) == 0)) {
      thunk_FUN_01ac7298();
      uVar5 = *(undefined8 *)puVar2;
    }
  }
  return fVar11 + fVar6 * param_1 * param_2 + fVar13 * fVar10 * fVar14;
}


