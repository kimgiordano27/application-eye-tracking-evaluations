/*
FUNCTION_NAME: FUN_05256a84
ENTRY_POINT: 05256a84
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_05256a84(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  if ((DAT_066cfd94 & 1) == 0) {
    FUN_02b3c81c(
                UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                );
    FUN_02b3c81c(System_Net_NtlmClient_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_NetSyncSessionsChangedNotification_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_NetSyncSetSessionPropertyResult_TypeInfo);
    DAT_066cfd94 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo)) {
      lVar5 = FUN_05223bf8(param_2,0);
      if (lVar5 == 0) {
LAB_05256bb4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar4 = FUN_03d437c0(lVar5,*(undefined8 *)
                                  Oculus_Platform_Models_NetSyncSessionsChangedNotification_TypeInfo
                          );
      puVar3 = System_Net_NtlmClient_TypeInfo;
      puVar2 = Oculus_Platform_Models_NetSyncSetSessionPropertyResult_TypeInfo;
      if (0 < iVar4) {
        iVar7 = 0;
        do {
          lVar5 = FUN_05223bf8(param_2,0);
          if (lVar5 == 0) goto LAB_05256bb4;
          plVar6 = (long *)FUN_03d4384c(lVar5,iVar7,*(undefined8 *)puVar2);
          if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)puVar3)) {
            FUN_052551f0(param_1,plVar6[2]);
          }
          iVar7 = iVar7 + 1;
        } while (iVar4 != iVar7);
      }
    }
  }
  return;
}


