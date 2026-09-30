/*
FUNCTION_NAME: FUN_03617688
ENTRY_POINT: 03617688
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


long FUN_03617688(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredQuaternion_TypeInfo;
  if ((DAT_045380f2 & 1) == 0) {
    FUN_01c5d288(Method_RootMotion_AvatarUtility_GetIKGoalTQ__);
    FUN_01c5d288(Method_RootMotion_AvatarUtility_GetPostRotation__);
    FUN_01c5d288(Method_System_Threading_Tasks_AwaitTaskContinuation_InvokeAction__);
    FUN_01c5d288(Method_BRPotionSpawner_OnLeftRoom__);
    FUN_01c5d288(Method_System_ComponentModel_BackgroundWorker_<RunWorkerAsync>b__27_0__);
    FUN_01c5d288(Method_System_ComponentModel_BackgroundWorker_AsyncOperationCompleted__);
    FUN_01c5d288(Method_System_ComponentModel_BackgroundWorker_CancelAsync__);
    FUN_01c5d288(Method_System_ComponentModel_BackgroundWorker_ProgressReporter__);
    FUN_01c5d288(Method_System_ComponentModel_BackgroundWorker_ReportProgress__);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredSByte_TypeInfo);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredQuaternion_TypeInfo);
    DAT_045380f2 = 1;
  }
  puVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredSByte_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = FUN_0364e6a0(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  uVar3 = FUN_0364e5b8(uVar4,0);
  puVar1 = Method_RootMotion_AvatarUtility_GetPostRotation__;
  switch(uVar3) {
  case 7:
    lVar6 = **(long **)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Threading_Tasks_AwaitTaskContinuation_InvokeAction__
                                );
      FUN_03313b6c(lVar6,0);
      **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
    }
    break;
  case 8:
    lVar6 = *(long *)(*(long *)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8) +
                     0x18);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_ComponentModel_BackgroundWorker_CancelAsync__);
      FUN_03313b6c(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar6;
    }
    break;
  case 9:
    lVar6 = *(long *)(*(long *)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8) +
                     8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_BRPotionSpawner_OnLeftRoom__);
      FUN_03313b6c(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
    }
    break;
  case 10:
    lVar6 = *(long *)(*(long *)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8) +
                     0x20);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_ComponentModel_BackgroundWorker_ProgressReporter__);
      FUN_03313b6c(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar6;
    }
    break;
  case 0xb:
    lVar6 = *(long *)(*(long *)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8) +
                     0x10);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_ComponentModel_BackgroundWorker_<RunWorkerAsync>b__27_0__
                                );
      FUN_03313b6c(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar6;
    }
    break;
  case 0xc:
    lVar6 = *(long *)(*(long *)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8) +
                     0x28);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_ComponentModel_BackgroundWorker_ReportProgress__);
      FUN_03313b6c(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar6;
    }
    break;
  case 0xd:
    lVar6 = *(long *)(*(long *)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8) +
                     0x30);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_ComponentModel_BackgroundWorker_AsyncOperationCompleted__
                                );
      FUN_03313b6c(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = lVar6;
    }
    break;
  case 0xe:
    lVar6 = *(long *)(*(long *)(*(long *)Method_RootMotion_AvatarUtility_GetPostRotation__ + 0xb8) +
                     0x38);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_RootMotion_AvatarUtility_GetIKGoalTQ__);
      FUN_03313b6c(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = lVar6;
    }
    break;
  default:
    uVar4 = FUN_0364cdc8(0);
    uVar5 = thunk_FUN_01c273e8(Method_System_ComponentModel_BackgroundWorker_RunWorkerAsync__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar5);
  }
  return lVar6;
}


