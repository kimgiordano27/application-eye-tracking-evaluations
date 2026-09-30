/*
FUNCTION_NAME: FUN_03902b70
ENTRY_POINT: 03902b70
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03902b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_045398a1 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_01c5d288(Method_System_Runtime_Remoting_RemotingServices_GetClientChannelSinkChain__);
    FUN_01c5d288(Method_System_Runtime_Remoting_RemotingServices_GetMethodBaseFromMethodMessage__);
    DAT_045398a1 = 1;
  }
  uVar2 = FUN_0390297c(param_1,param_2,param_3);
  puVar1 = Method_System_Runtime_Remoting_RemotingServices_GetClientChannelSinkChain__;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = FUN_03901f3c(*(long *)(param_1 + 0x28));
    uVar2 = FUN_031536d4(*(undefined8 *)puVar1,uVar2,uVar3,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar4 = FUN_03901f94(*(long *)(param_1 + 0x28));
      if (lVar4 != 0) {
        uVar3 = FUN_032cf39c(param_1 + 0x18,*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo,0);
        uVar5 = FUN_03902658(param_1);
        puVar1 = Method_System_Runtime_Remoting_RemotingServices_GetMethodBaseFromMethodMessage__;
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_03902ccc;
        uVar6 = FUN_03901f94(*(long *)(param_1 + 0x28));
        uVar3 = FUN_03153718(*(undefined8 *)puVar1,uVar3,uVar5,uVar6,0);
        uVar2 = FUN_03146988(uVar2,uVar3,0);
      }
      uVar3 = FUN_03902aa0(param_1,param_4);
      uVar2 = FUN_03146988(uVar2,uVar3,0);
      FUN_03902828(param_1,uVar2);
      return;
    }
  }
LAB_03902ccc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


