/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ReadNullChar
ENTRY_POINT: 03262c24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_JsonTextReader__ReadNullChar(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if ((*(byte *)(unaff_x20 + 0xb34) & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    FUN_01c5d288(System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
    FUN_01c5d288(PTR_DAT_04231800);
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ResourceManagerRuntimeData>_get_Result__
                );
    FUN_01c5d288(UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo);
    FUN_01c5d288(System_Func<byte,_int,_LocalVoice>_TypeInfo);
    FUN_01c5d288(System_Func<short,_int,_string>_TypeInfo);
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ResourceManagerRuntimeData>_op_Implicit__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_IsValid__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_Release__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_add_Completed__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_IsDone__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_OperationException__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_PercentComplete__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_ReferenceCount__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_Result__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_op_Implicit__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<string>_op_Implicit__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<UnityWebRequest>_get_Result__
                );
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>__ctor__);
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_OnStart__);
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_OnUpdate__);
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_Reset__);
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__);
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__);
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_set_Progress__);
    *(undefined1 *)(unaff_x20 + 0xb34) = 1;
  }
  puVar1 = UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo;
  if ((int)param_2 < 0x51) {
    if ((int)param_2 < 0x12) {
      switch(param_2) {
      case 2:
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__,
                           param_1,0);
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                    System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
        FUN_03224d0c(uVar3,uVar2,param_1,0);
        return uVar3;
      case 3:
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_Release__
                           ,param_1,0);
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                    System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
        FUN_0322453c(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar4 = *(long *)
                 UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar4 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_01c36d0c();
        }
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar3 = *(undefined8 *)Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_set_Progress__
        ;
        param_2 = 0x80070004;
        break;
      case 5:
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ResourceManagerRuntimeData>_op_Implicit__
                           ,param_1,0);
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<short,_int,_string>_TypeInfo);
        FUN_032efb94(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_OperationException__
                           ,param_1,0);
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        param_2 = 0x80070006;
        break;
      default:
        goto switchD_03262eb0_caseD_7;
      case 0xf:
        uVar3 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_op_Implicit__
                           ,param_1,0);
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        param_2 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<string>_op_Implicit__
        ;
        param_2 = 0x11;
LAB_0326334c:
        param_2 = param_2 | 0x80070000;
      }
      goto LAB_032631a0;
    }
    if ((int)param_2 < 0x21) {
      if (param_2 != 0x1d) {
        if (param_2 == 0x20) {
          uVar3 = System_Convert__ToSingle
                            (*(undefined8 *)
                              Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_Result__
                             ,param_1,0);
          uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
          param_2 = 0x80070020;
          goto LAB_032631a0;
        }
        goto switchD_03262eb0_caseD_7;
      }
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<UnityWebRequest>_get_Result__
                         ,param_1,0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = 0x1d;
    }
    else if (param_2 == 0x21) {
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__,
                         param_1,0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = 0x21;
    }
    else if (param_2 == 0x27) {
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_OnUpdate__,param_1,
                         0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = 0x27;
    }
    else {
      if (param_2 != 0x50) goto switchD_03262eb0_caseD_7;
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_IsValid__
                         ,param_1,0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = 0x50;
    }
  }
  else {
    if (0x91 < (int)param_2) {
      if (param_2 == 0xce) {
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_Reset__,param_1,0
                          );
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<byte,_int,_LocalVoice>_TypeInfo);
        FUN_032285f4(uVar3,uVar2,0);
        return uVar3;
      }
      if (param_2 == 0x10b) {
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar3 = *(undefined8 *)Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_OnStart__;
        param_2 = 0x10b;
        goto LAB_0326334c;
      }
      if (param_2 == 6000) {
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        param_2 = 0x80071770;
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_IsDone__
        ;
        goto LAB_032631a0;
      }
switchD_03262eb0_caseD_7:
      in_stack_00000008._4_4_ = param_2;
      uVar2 = thunk_FUN_01c49334(*(undefined8 *)
                                  Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ResourceManagerRuntimeData>_get_Result__
                                 ,(long)&stack0x00000008 + 4);
      uVar3 = FUN_031536d4(*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_add_Completed__
                           ,uVar2,param_1,0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = param_2 | 0x80070000;
      goto LAB_032631a0;
    }
    if (param_2 == 0x52) {
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_PercentComplete__
                         ,param_1,0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = 0x52;
    }
    else if (param_2 == 0x57) {
      lVar5 = *(long *)PTR_DAT_0422f958;
      lVar4 = *(long *)(lVar5 + 0x38);
      if (lVar4 == 0) {
        FUN_01c723f0(lVar5);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
      }
      uVar3 = FUN_0315375c(*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_ReferenceCount__
                           ,**(undefined8 **)(lVar4 + 0xb8),0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = 0x57;
    }
    else {
      if (param_2 != 0x91) goto switchD_03262eb0_caseD_7;
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_AsyncOperation<object>__ctor__,param_1,0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      param_2 = 0x91;
    }
  }
  param_2 = param_2 | 0x80070000;
LAB_032631a0:
  FUN_032251e8(uVar2,uVar3,param_2,0);
  return uVar2;
}


