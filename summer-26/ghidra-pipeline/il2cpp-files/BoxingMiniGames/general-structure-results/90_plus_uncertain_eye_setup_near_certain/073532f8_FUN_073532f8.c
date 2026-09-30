/*
FUNCTION_NAME: FUN_073532f8
ENTRY_POINT: 073532f8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_073532f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar9 = 
  Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
  ;
  puVar8 = 
  Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
  ;
  puVar7 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
  ;
  puVar6 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
  ;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection<uint,_Paginator>_GetEnumerator__;
  puVar4 = System_Threading_Tasks_Task_DelayPromise_TypeInfo;
  puVar3 = System_Threading_Tasks_Task_<>c_TypeInfo;
  puVar2 = PTR_DAT_07a09060;
  puVar1 = PTR_DAT_07a09040;
  if ((DAT_07ef30d7 & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>__ctor__);
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__);
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Key__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
                );
    FUN_03642964(PTR_DAT_07a09040);
    FUN_03642964(System_Threading_Tasks_Task_<>c_TypeInfo);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_KeyCollection<uint,_Paginator>_GetEnumerator__
                );
    FUN_03642964(PTR_DAT_07a09060);
    FUN_03642964(System_Threading_Tasks_Task_DelayPromise_TypeInfo);
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Value__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
                );
    DAT_07ef30d7 = 1;
  }
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
  FUN_0459e7d4(uVar10,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),uVar10);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_0459e7d4(uVar10,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x38),uVar10);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_045f3474(uVar10,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x40),uVar10);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_04465d30(uVar10,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x48),uVar10);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                               Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Value__
                             );
  FUN_044633ec(uVar10,*(undefined8 *)
                       Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__)
  ;
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x50),uVar10);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                               Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                             );
  FUN_04529000(uVar10,*(undefined8 *)
                       Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Key__
              );
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x58),uVar10);
  FUN_05e5ae34(param_1,0);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar9);
  FUN_073942b8(uVar10,param_1,
               *(undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__,0);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x28),uVar10);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar9);
  FUN_073942b8(uVar10,param_1,
               *(undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>__ctor__,0);
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x30),uVar10);
  return;
}


