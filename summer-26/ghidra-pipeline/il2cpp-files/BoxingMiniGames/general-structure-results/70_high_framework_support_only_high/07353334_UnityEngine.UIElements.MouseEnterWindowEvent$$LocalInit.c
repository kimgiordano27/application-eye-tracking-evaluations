/*
FUNCTION_NAME: UnityEngine.UIElements.MouseEnterWindowEvent$$LocalInit
ENTRY_POINT: 07353334
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UIElements_MouseEnterWindowEvent__LocalInit(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long unaff_x21;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 *puVar5;
  long unaff_x24;
  undefined8 *puVar6;
  long unaff_x25;
  undefined8 *puVar7;
  long unaff_x26;
  undefined8 *puVar8;
  long unaff_x27;
  long unaff_x28;
  undefined8 *puVar9;
  long unaff_x29;
  undefined8 *puVar10;
  
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
  ;
  puVar8 = *(undefined8 **)(unaff_x26 + 0x78);
  puVar3 = *(undefined8 **)(unaff_x20 + 0x80);
  puVar7 = *(undefined8 **)(unaff_x25 + 0x890);
  puVar6 = *(undefined8 **)(unaff_x24 + 0x880);
  puVar5 = *(undefined8 **)(unaff_x23 + 0x60);
  puVar4 = *(undefined8 **)(unaff_x21 + 0x40);
  puVar10 = *(undefined8 **)(unaff_x29 + 0x88);
  puVar9 = *(undefined8 **)(unaff_x28 + 0x90);
  if ((*(byte *)(unaff_x27 + 0xd7) & 1) == 0) {
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
    *(undefined1 *)(unaff_x27 + 0xd7) = 1;
  }
  uVar2 = thunk_FUN_0367fe20(*puVar8);
  FUN_0459e7d4(uVar2,*puVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),uVar2);
  uVar2 = thunk_FUN_0367fe20(*puVar7);
  FUN_0459e7d4(uVar2,*puVar6);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x38),uVar2);
  uVar2 = thunk_FUN_0367fe20(*puVar5);
  FUN_045f3474(uVar2,*puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x40),uVar2);
  uVar2 = thunk_FUN_0367fe20(*puVar10);
  FUN_04465d30(uVar2,*puVar9);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x48),uVar2);
  uVar2 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Value__
                            );
  FUN_044633ec(uVar2,*(undefined8 *)
                      Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x50),uVar2);
  uVar2 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                            );
  FUN_04529000(uVar2,*(undefined8 *)
                      Method_System_Collections_Generic_KeyValuePair<BindingId,_List<DiContainer_ProviderInfo>>_get_Key__
              );
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x58),uVar2);
  FUN_05e5ae34(param_1,0);
  uVar2 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_073942b8(uVar2,param_1,
               *(undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__,0);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x28),uVar2);
  uVar2 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_073942b8(uVar2,param_1,
               *(undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>__ctor__,0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x30),uVar2);
  return;
}


