/*
FUNCTION_NAME: FUN_06d6cdc0
ENTRY_POINT: 06d6cdc0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 FUN_06d6cdc0(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  int local_28;
  int local_24;
  
  puVar1 = PTR_DAT_079f4e28;
  if ((DAT_07eeaabe & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo);
    FUN_03642964(UnityEngine_PostProcessing_EyeAdaptationComponent_TypeInfo);
    FUN_03642964(UnityEngine_PostProcessing_EyeAdaptationModel_TypeInfo);
    FUN_03642964(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    DAT_07eeaabe = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  local_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_071c24dc(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar7 = *(undefined8 *)UnityEngine_PostProcessing_EyeAdaptationComponent_TypeInfo;
LAB_06d6ce88:
    FUN_07179a54(uVar7,param_1,0);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x24)) {
    if (DAT_07eeab45 == '\0') {
      FUN_03642964(System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo);
      DAT_07eeab45 = '\x01';
    }
    puVar1 = System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo;
    lVar3 = *(long *)System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(param_1 + 0x24) <= **(int **)(lVar3 + 0xb8)) {
      local_24 = *(int *)(param_1 + 0x24);
      uVar7 = FUN_05e14f10(&local_24,0);
      uVar7 = FUN_05c8d7b8(*(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo,
                           uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
      }
      FUN_07179da0(uVar7,param_1,0);
      return 0;
    }
  }
  puVar1 = System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo;
  if (param_2 == -1) {
    return 1;
  }
  uVar6 = 0;
  lVar3 = *(long *)System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo;
  while( true ) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar1;
    }
    piVar4 = *(int **)(lVar3 + 0xb8);
    if (*piVar4 <= (int)uVar6) {
      return 1;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar1;
      piVar4 = *(int **)(lVar3 + 0xb8);
    }
    lVar5 = *(long *)(piVar4 + 2);
    if (lVar5 == 0) goto Unity_Mathematics_noise__srnoise;
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_06d6d0a4;
    lVar8 = (long)(int)uVar6;
    lVar5 = *(long *)(lVar5 + lVar8 * 8 + 0x20);
    if (lVar5 == 0) goto Unity_Mathematics_noise__srnoise;
    if (*(int *)(lVar5 + 0x98) == param_2) break;
    uVar6 = uVar6 + 1;
  }
  local_28 = param_2;
  uVar7 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_28);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar3);
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (uVar6 < *(uint *)(lVar3 + 0x18)) {
      uVar7 = FUN_05c98b2c(*(undefined8 *)UnityEngine_PostProcessing_EyeAdaptationModel_TypeInfo,
                           uVar7,*(undefined8 *)(lVar3 + lVar8 * 8 + 0x20),0);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar3 == 0) goto Unity_Mathematics_noise__srnoise;
      if (uVar6 < *(uint *)(lVar3 + 0x18)) {
        param_1 = *(long *)(lVar3 + lVar8 * 8 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        goto LAB_06d6ce88;
      }
    }
LAB_06d6d0a4:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
Unity_Mathematics_noise__srnoise:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


