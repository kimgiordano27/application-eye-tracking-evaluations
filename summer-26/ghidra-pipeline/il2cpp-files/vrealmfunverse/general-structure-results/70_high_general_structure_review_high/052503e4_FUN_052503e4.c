/*
FUNCTION_NAME: FUN_052503e4
ENTRY_POINT: 052503e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_052503e4(undefined8 param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_066cfd78 & 1) == 0) {
    FUN_02b3c81c(
                UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                );
    FUN_02b3c81c(Oculus_Platform_Models_NetSyncSessionsChangedNotification_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_NetSyncSetSessionPropertyResult_TypeInfo);
    DAT_066cfd78 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                     + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(param_2);
    }
    iVar2 = (**(code **)(lVar6 + 0x1e8))(param_2,*(undefined8 *)(lVar6 + 0x1f0));
    if (iVar2 == 0) {
      return;
    }
    uVar3 = FUN_05250524(param_1,param_2);
    lVar6 = FUN_05223bf8(param_2,0);
    lVar4 = FUN_05223bf8(param_2,0);
    if ((lVar4 != 0) &&
       (iVar2 = FUN_03d437c0(lVar4,*(undefined8 *)
                                    Oculus_Platform_Models_NetSyncSessionsChangedNotification_TypeInfo
                            ), lVar6 != 0)) {
      uVar5 = FUN_03d4384c(lVar6,iVar2 + -1,
                           *(undefined8 *)
                            Oculus_Platform_Models_NetSyncSetSessionPropertyResult_TypeInfo);
      if ((param_3 & 1) == 0) {
        FUN_0524f9f4(param_1,uVar5);
      }
      else {
        FUN_05250a24();
      }
      FUN_05250988(param_1,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


