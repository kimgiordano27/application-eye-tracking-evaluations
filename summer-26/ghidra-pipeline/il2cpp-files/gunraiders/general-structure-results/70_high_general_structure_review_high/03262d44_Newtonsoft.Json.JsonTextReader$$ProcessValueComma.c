/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ProcessValueComma
ENTRY_POINT: 03262d44
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_JsonTextReader__ProcessValueComma(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  uint unaff_w21;
  
  FUN_01c5d288();
  FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_Reset__);
  FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__);
  FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__);
  FUN_01c5d288(Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_set_Progress__);
  *(undefined1 *)(unaff_x20 + 0xb34) = 1;
  puVar1 = UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo;
  if ((int)unaff_w21 < 0x51) {
    if ((int)unaff_w21 < 0x12) {
      switch(unaff_w21) {
      case 2:
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__)
        ;
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                    System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
        FUN_03224d0c(uVar3,uVar2);
        return uVar3;
      case 3:
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_Release__
                          );
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                    System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
        FUN_0322453c(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar5 = *(long *)
                 UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar5 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_01c36d0c();
        }
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar3 = *(undefined8 *)Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_set_Progress__
        ;
        uVar4 = 0x80070004;
        break;
      case 5:
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ResourceManagerRuntimeData>_op_Implicit__
                          );
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<short,_int,_string>_TypeInfo);
        FUN_032efb94(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_OperationException__
                          );
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar4 = 0x80070006;
        break;
      default:
        goto switchD_03262eb0_caseD_7;
      case 0xf:
        uVar3 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_op_Implicit__
                          );
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar4 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<string>_op_Implicit__
        ;
        uVar4 = 0x11;
LAB_0326334c:
        uVar4 = uVar4 | 0x80070000;
      }
      goto LAB_032631a0;
    }
    if ((int)unaff_w21 < 0x21) {
      if (unaff_w21 != 0x1d) {
        if (unaff_w21 == 0x20) {
          uVar3 = System_Convert__ToSingle
                            (*(undefined8 *)
                              Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_Result__
                            );
          uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
          uVar4 = 0x80070020;
          goto LAB_032631a0;
        }
        goto switchD_03262eb0_caseD_7;
      }
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<UnityWebRequest>_get_Result__
                        );
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = 0x1d;
    }
    else if (unaff_w21 == 0x21) {
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_SetIsCompleted__);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = 0x21;
    }
    else if (unaff_w21 == 0x27) {
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_OnUpdate__);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = 0x27;
    }
    else {
      if (unaff_w21 != 0x50) goto switchD_03262eb0_caseD_7;
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_IsValid__
                        );
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = 0x50;
    }
  }
  else {
    if (0x91 < (int)unaff_w21) {
      if (unaff_w21 == 0xce) {
        uVar2 = System_Convert__ToSingle
                          (*(undefined8 *)
                            Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_Reset__);
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<byte,_int,_LocalVoice>_TypeInfo);
        FUN_032285f4(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w21 == 0x10b) {
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar3 = *(undefined8 *)Method_VoxelBusters_CoreLibrary_AsyncOperation<object>_OnStart__;
        uVar4 = 0x10b;
        goto LAB_0326334c;
      }
      if (unaff_w21 == 6000) {
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_IsDone__
        ;
        goto LAB_032631a0;
      }
switchD_03262eb0_caseD_7:
      uVar2 = thunk_FUN_01c49334(*(undefined8 *)
                                  Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ResourceManagerRuntimeData>_get_Result__
                                 ,&stack0x0000000c);
      uVar3 = FUN_031536d4(*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_add_Completed__
                           ,uVar2);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = unaff_w21 | 0x80070000;
      goto LAB_032631a0;
    }
    if (unaff_w21 == 0x52) {
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_PercentComplete__
                        );
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = 0x52;
    }
    else if (unaff_w21 == 0x57) {
      lVar6 = *(long *)PTR_DAT_0422f958;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_01c723f0(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01c72394();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01c72394();
      }
      uVar3 = FUN_0315375c(*(undefined8 *)
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_get_ReferenceCount__
                           ,**(undefined8 **)(lVar5 + 0xb8),0);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = 0x57;
    }
    else {
      if (unaff_w21 != 0x91) goto switchD_03262eb0_caseD_7;
      uVar3 = System_Convert__ToSingle
                        (*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_AsyncOperation<object>__ctor__);
      uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231800);
      uVar4 = 0x91;
    }
  }
  uVar4 = uVar4 | 0x80070000;
LAB_032631a0:
  FUN_032251e8(uVar2,uVar3,uVar4,0);
  return uVar2;
}


