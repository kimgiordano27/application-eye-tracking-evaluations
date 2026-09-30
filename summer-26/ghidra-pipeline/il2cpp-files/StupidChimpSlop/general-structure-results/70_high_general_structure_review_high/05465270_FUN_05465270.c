/*
FUNCTION_NAME: FUN_05465270
ENTRY_POINT: 05465270
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_05465270(long *param_1,long param_2,undefined4 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  
  puVar1 = PTR_DAT_0664a998;
  if ((DAT_06a53954 & 1) == 0) {
    FUN_02d4dc40(PlayFab_GroupsModels_UnblockEntityRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664a998);
    FUN_02d4dc40(System_IO_UnexceptionalStreamReader_TypeInfo);
    FUN_02d4dc40(System_IO_UnexceptionalStreamWriter_TypeInfo);
    FUN_02d4dc40(System_UnhandledExceptionEventHandler_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_UniTask_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_UniTaskCompletionSource_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_UniTaskCompletionSourceCoreShared_TypeInfo);
    DAT_06a53954 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    FUN_031bdd2c(**(long **)(lVar2 + 0xb8),
                 *(undefined8 *)Cysharp_Threading_Tasks_UniTaskCompletionSourceCoreShared_TypeInfo,
                 (int)param_1[0x18],param_2,param_3,
                 *(undefined8 *)PlayFab_GroupsModels_UnblockEntityRequest_TypeInfo);
    param_1[9] = param_2;
    thunk_FUN_02dc1ef0(param_1 + 9,param_2);
    param_1[0xb] = param_4;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    thunk_FUN_02dc1ef0(param_1 + 0xb,param_4);
    if (*(char *)((long)param_1 + 0xa5) == '\0') {
      if ((param_5 & 1) == 0) {
        FUN_054690b8(param_1,1,0);
      }
      else {
        (**(code **)(*param_1 + 0x598))(param_1,1,*(undefined8 *)(*param_1 + 0x5a0));
      }
      param_1 = param_1 + 8;
      lVar2 = *param_1;
      if (lVar2 != 0) {
        *param_1 = 0;
        thunk_FUN_02dc1ef0(param_1,0);
        FUN_0483c658(&local_70,lVar2,*(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo);
        puVar1 = System_UnhandledExceptionEventHandler_TypeInfo;
        while (uVar3 = FUN_04a25124(&local_70,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_054852ec(local_58,0);
        }
        FUN_04a25244(&local_70,*(undefined8 *)System_IO_UnexceptionalStreamWriter_TypeInfo);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


