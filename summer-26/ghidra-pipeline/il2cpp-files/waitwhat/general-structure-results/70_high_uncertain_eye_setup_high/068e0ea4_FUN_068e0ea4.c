/*
FUNCTION_NAME: FUN_068e0ea4
ENTRY_POINT: 068e0ea4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068e0ea4(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_075592cf & 1) == 0) {
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    DAT_075592cf = 1;
  }
  fVar4 = *(float *)(param_2 + 0x1b8);
  if ((0.0 < fVar4) && (*(float *)(param_2 + 0x288) <= fVar4)) {
    if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_068e4778(param_1,fVar4,param_2 + 0x25c,param_2 + 0x278,param_3,param_4,param_2 + 0x288,0);
    return;
  }
  cVar1 = *(char *)(param_2 + 0x1d1);
  uVar7 = *(undefined4 *)(param_2 + 0x1d4);
  uVar8 = *(undefined4 *)(param_2 + 0x1d8);
  cVar2 = *(char *)(param_2 + 0x1dd);
  uVar5 = *(undefined4 *)(param_2 + 0x1e0);
  uVar6 = *(undefined4 *)(param_2 + 0x1e4);
  cVar3 = *(char *)(param_2 + 0x1e9);
  uVar9 = *(undefined4 *)(param_2 + 0x1ec);
  uVar10 = *(undefined4 *)(param_2 + 0x1f0);
  if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_068e4c60(param_1,uVar7,uVar8,uVar5,uVar6,uVar9,uVar10,param_2 + 0x25c,param_2 + 0x278,param_3,
               param_4,cVar1 != '\0',cVar2 != '\0',cVar3 != '\0',0);
  return;
}


