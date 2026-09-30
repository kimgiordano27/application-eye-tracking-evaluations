/*
FUNCTION_NAME: FUN_05d17bd0
ENTRY_POINT: 05d17bd0
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_05d17bd0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_06a7a600 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Converter<Object,_IUpdateDriver>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Converter<ParameterExpression,_Expression>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
              );
    DAT_06a7a600 = 1;
  }
  puVar3 = 
  System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
  ;
  puVar2 = System_Converter<ParameterExpression,_Expression>_TypeInfo;
  puVar1 = System_Converter<Object,_IUpdateDriver>_TypeInfo;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*param_2 != 0) {
    FUN_03968dbc(&local_78,*param_2,
                 *(undefined8 *)
                  System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                );
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar4 = FUN_0481f4e4(&local_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor__Unsubscribe
                (param_1,local_50);
    }
    FUN_0481f4e0(&local_60,*(undefined8 *)puVar1);
    if (param_2[1] != 0) {
      FUN_03968dbc(&local_78,param_2[1],*(undefined8 *)puVar3);
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      while (uVar4 = FUN_0481f4e4(&local_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor__Unsubscribe
                  (param_1,local_50);
      }
      FUN_0481f4e0(&local_60,*(undefined8 *)puVar1);
      if (param_2[2] != 0) {
        FUN_03968dbc(&local_78,param_2[2],*(undefined8 *)puVar3);
        uStack_58 = uStack_70;
        local_60 = local_78;
        local_50 = local_68;
        while (uVar4 = FUN_0481f4e4(&local_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
          FUN_05d180a0(param_1,local_50);
        }
        FUN_0481f4e0(&local_60,*(undefined8 *)puVar1);
        FUN_05d18290(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


