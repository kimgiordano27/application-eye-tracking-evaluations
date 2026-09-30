/*
FUNCTION_NAME: FUN_0361006c
ENTRY_POINT: 0361006c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0361006c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredQuaternion_TypeInfo;
                    /* try { // try from 03610088 to 0371008f has its CatchHandler @ 03610a40 */
  if ((DAT_04538098 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<Stream_<FinishWriteAsync>d__57>__
                );
                    /* try { // try from 03610098 to 037100bb has its CatchHandler @ 03610a7c */
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__59>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TaskExtensions_<WaitAsync>d__1>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<Ua2CoreInitializeCallback_<Initialize>d__2>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<UnityServicesInternal_<EnableInitializationAsync>d__25>__
                );
                    /* try { // try from 036100dc to 037100fb has its CatchHandler @ 03610a74 */
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<UnityServicesInternal_<InitializeServicesAsync>d__22>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebConnection_<Connect>d__16>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebConnectionTunnel_<Initialize>d__42>__
                );
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredSByte_TypeInfo);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredQuaternion_TypeInfo);
    DAT_04538098 = 1;
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
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
  ;
  switch(uVar3) {
  case 7:
    lVar6 = **(long **)(*(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                       + 0xb8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__59>__
                                );
      FUN_03614850(lVar6,0);
      **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
    }
    break;
  case 8:
    lVar6 = *(long *)(*(long *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                               + 0xb8) + 0x18);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<UnityServicesInternal_<InitializeServicesAsync>d__22>__
                                );
      FUN_03614850(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar6;
    }
    break;
  case 9:
    lVar6 = *(long *)(*(long *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                               + 0xb8) + 8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TaskExtensions_<WaitAsync>d__1>__
                                );
      FUN_03614850(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
    }
    break;
  case 10:
    lVar6 = *(long *)(*(long *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                               + 0xb8) + 0x20);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebConnection_<Connect>d__16>__
                                );
      FUN_03614850(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar6;
    }
    break;
  case 0xb:
    lVar6 = *(long *)(*(long *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                               + 0xb8) + 0x10);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<Ua2CoreInitializeCallback_<Initialize>d__2>__
                                );
      FUN_03614850(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar6;
    }
    break;
  case 0xc:
    lVar6 = *(long *)(*(long *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                               + 0xb8) + 0x28);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebConnectionTunnel_<Initialize>d__42>__
                                );
      FUN_03614850(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar6;
    }
    break;
  case 0xd:
    lVar6 = *(long *)(*(long *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                               + 0xb8) + 0x30);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<UnityServicesInternal_<EnableInitializationAsync>d__25>__
                                );
      FUN_03614850(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = lVar6;
    }
    break;
  case 0xe:
    lVar6 = *(long *)(*(long *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                               + 0xb8) + 0x38);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<Stream_<FinishWriteAsync>d__57>__
                                );
      FUN_03614850(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = lVar6;
    }
    break;
  default:
    uVar4 = FUN_0364cdc8(0);
    uVar5 = thunk_FUN_01c273e8(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<FinishWriting>d__31>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar5);
  }
  return lVar6;
}


