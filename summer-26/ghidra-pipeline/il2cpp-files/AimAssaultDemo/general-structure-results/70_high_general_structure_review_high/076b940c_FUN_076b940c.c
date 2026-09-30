/*
FUNCTION_NAME: FUN_076b940c
ENTRY_POINT: 076b940c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void FUN_076b940c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_07d86518;
  if ((DAT_08271386 & 1) == 0) {
    FUN_0373b518(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_Create__);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_SetException__
                );
    FUN_0373b518(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_SetResult__);
    FUN_0373b518(PTR_DAT_07d86518);
    FUN_0373b518(UnityEngine_UIElements_EventBase<MouseLeaveEvent>_TypeInfo);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_SetStateMachine__
                );
    FUN_0373b518(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_get_Task__);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<GetRequestStream>d__50>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializationCompletionReason>,_XRAnchorTransferBatch_<ExportAsync>d__10>__
                );
    DAT_08271386 = 1;
  }
  lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,5);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializationCompletionReason>,_XRAnchorTransferBatch_<ExportAsync>d__10>__
      ;
      thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20));
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x28) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_SetStateMachine__
        ;
        thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x28));
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
          ;
          thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x30));
          if (3 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x38) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_get_Task__;
            thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x38));
            puVar4 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_SetResult__;
            puVar3 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_SetException__;
            puVar2 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Sprite>_Create__;
            puVar1 = UnityEngine_UIElements_EventBase<MouseLeaveEvent>_TypeInfo;
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<GetRequestStream>d__50>__
              ;
              thunk_FUN_037aeb94();
              *(long *)(param_1 + 0x18) = lVar5;
              thunk_FUN_037aeb94((long *)(param_1 + 0x18),lVar5);
              uVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
              FUN_046340bc(uVar6,*(undefined8 *)puVar3);
              *(undefined8 *)(param_1 + 0x20) = uVar6;
              thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x20),uVar6);
              uVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
              FUN_046340bc(uVar6,*(undefined8 *)puVar3);
              *(undefined8 *)(param_1 + 0x28) = uVar6;
              thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x28),uVar6);
              FUN_062855bc(param_1,0);
              uVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
              FUN_0788ee04(uVar6,param_1,*(undefined8 *)puVar2,0);
              FUN_0788cca0(uVar6,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


