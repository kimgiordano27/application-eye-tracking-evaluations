/*
FUNCTION_NAME: FUN_07394c48
ENTRY_POINT: 07394c48
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07394c48(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  
  puVar3 = Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<ConstantBufferBase>_get_Current__;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<Column>_MoveNext__;
  if ((DAT_07ef349b & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__);
    FUN_03642964(Method_System_Collections_Generic_List<DecalCachedChunk>_GetEnumerator__);
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Key__
                );
    FUN_03642964(PTR_DAT_07a09040);
    FUN_03642964(System_Threading_Tasks_Task_<>c_TypeInfo);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                );
    FUN_03642964(PTR_DAT_07a09060);
    FUN_03642964(System_Threading_Tasks_Task_DelayPromise_TypeInfo);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Value__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                );
    FUN_03642964(Method_System_Collections_Generic_List<DecalCachedChunk>_RemoveRange__);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
                );
    FUN_03642964(Method_System_Collections_Generic_List<DecalCachedChunk>_get_Item__);
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<Column>_MoveNext__);
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<ConstantBufferBase>_get_Current__
                );
    FUN_03642964(Method_System_Collections_Generic_List<DecalCachedChunk>_set_Item__);
    DAT_07ef349b = 1;
  }
  *(undefined8 *)(param_5 + 0x18) = 0;
  thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x18),0);
  *(undefined8 *)(param_5 + 0x20) = 0;
  thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x20),0);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_073878c0(uVar9,0x100,0x40,0);
  *(undefined8 *)(param_5 + 0x28) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x28),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_072b1de4(uVar9,0);
  *(undefined8 *)(param_5 + 0x50) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x50),uVar9);
  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_072a6db0(lVar10,0);
  uVar11 = FUN_0717e7e0(0);
  puVar8 = 
  Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Value__
  ;
  puVar7 = Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__;
  puVar6 = 
  Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
  ;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
  ;
  puVar4 = System_Threading_Tasks_Task_DelayPromise_TypeInfo;
  puVar3 = System_Threading_Tasks_Task_<>c_TypeInfo;
  puVar2 = PTR_DAT_07a09060;
  puVar1 = PTR_DAT_07a09040;
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x38) = uVar11;
    *(undefined4 *)(lVar10 + 0x3c) = param_2;
    *(undefined4 *)(lVar10 + 0x40) = param_3;
    *(undefined4 *)(lVar10 + 0x44) = param_4;
    *(undefined1 *)(lVar10 + 0x81) = 1;
    *(long *)(param_5 + 0x58) = lVar10;
    thunk_FUN_036b7ad0((long *)(param_5 + 0x58),lVar10);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
    FUN_04465d30(uVar9,*(undefined8 *)puVar6);
    *(undefined8 *)(param_5 + 0x60) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x60),uVar9);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
    FUN_044633ec(uVar9,*(undefined8 *)puVar7);
    *(undefined8 *)(param_5 + 0x68) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x68),uVar9);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
    FUN_0459e7d4(uVar9,*(undefined8 *)puVar3);
    *(undefined8 *)(param_5 + 0x70) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x70),uVar9);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_045f3474(uVar9,*(undefined8 *)puVar1);
    *(undefined8 *)(param_5 + 0x78) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x78),uVar9);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                              );
    FUN_04529000(uVar9,*(undefined8 *)
                        Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Key__
                );
    *(undefined8 *)(param_5 + 0x80) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x80),uVar9);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_System_Collections_Generic_List<DecalCachedChunk>_RemoveRange__
                              );
    FUN_046f6b24(uVar9,0x100,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalCachedChunk>_GetEnumerator__);
    *(undefined8 *)(param_5 + 0x90) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x90),uVar9);
    FUN_05e5ae34(param_5,0);
    *(undefined8 *)(param_5 + 0x10) = param_6;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x10),param_6);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
                              );
    FUN_073942b8(uVar9,param_5,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalCachedChunk>_get_Item__)
    ;
    *(undefined8 *)(param_5 + 0x88) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x88),uVar9);
    uVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_System_Collections_Generic_List<DecalCachedChunk>_set_Item__)
    ;
    FUN_0735fb4c(uVar9,0);
    *(undefined8 *)(param_5 + 0x48) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(param_5 + 0x48),uVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


