/*
FUNCTION_NAME: FUN_00e7fab8
ENTRY_POINT: 00e7fab8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_10
*/


void FUN_00e7fab8(long param_1)

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
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03774f6e & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_GetSendError__
                      );
    thunk_FUN_00d48444(UnityEngine_ProBuilder_KdTree_KdTree<float,_int>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7350);
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__);
    thunk_FUN_00d48444(StringLiteral_4557);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_CharacterValidation>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SubtitleData>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JProperty_<WriteToAsync>d__1>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__);
    DAT_03774f6e = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  FUN_00e77150(param_1);
  puVar1 = UnityEngine_ProBuilder_KdTree_KdTree<float,_int>_TypeInfo;
  if (*(char *)(param_1 + 0x60) == '\0') {
    uVar10 = FUN_010c3404(param_1,*(undefined8 *)
                                   System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_TypeInfo
                         );
    uVar10 = FUN_010dfe04(uVar10,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x88) = uVar10;
    puVar9 = StringLiteral_7350;
    puVar8 = StringLiteral_4557;
    puVar7 = StringLiteral_1006;
    puVar6 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_CharacterValidation>__;
    puVar5 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__;
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JProperty_<WriteToAsync>d__1>__
    ;
    puVar3 = 
    Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_GetSendError__
    ;
    puVar2 = Method_System_Collections_Generic_List<SubtitleData>_get_Count__;
    puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__;
    if (*(long *)(param_1 + 0x80) == 0) {
LAB_00e7fd4c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(*(long *)(param_1 + 0x80),&local_98,
                 *(undefined8 *)
                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                );
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar8), (uVar11 & 1) != 0) {
      lVar12 = FUN_00ac4460(&local_80,*(undefined8 *)puVar6);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = *(long *)(param_1 + 0xb8);
      lVar12 = FUN_0268fd10(lVar12,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0269f578(lVar12,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ac4f98(lVar13,*(undefined8 *)puVar7);
    }
    FUN_012b8948(&local_80,*(undefined8 *)puVar1);
    lVar12 = *(long *)puVar5;
    uVar10 = *(undefined8 *)(param_1 + 0xb8);
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
      lVar12 = *(long *)puVar5;
    }
    lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar13 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar12);
        lVar12 = *(long *)puVar5;
      }
      uVar14 = **(undefined8 **)(lVar12 + 0xb8);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar13 == 0) goto LAB_00e7fd4c;
      FUN_012d239c(lVar13,uVar14,*(undefined8 *)puVar4,0);
      *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = lVar13;
    }
    uVar10 = FUN_010dca98(uVar10,lVar13,*(undefined8 *)puVar3);
    uVar10 = FUN_010dfe04(uVar10,*(undefined8 *)puVar9);
    *(undefined8 *)(param_1 + 0xb8) = uVar10;
    FUN_00e7fdd0(param_1);
  }
  return;
}


