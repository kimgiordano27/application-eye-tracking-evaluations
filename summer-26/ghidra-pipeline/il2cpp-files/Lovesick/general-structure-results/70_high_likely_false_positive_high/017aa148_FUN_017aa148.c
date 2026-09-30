/*
FUNCTION_NAME: FUN_017aa148
ENTRY_POINT: 017aa148
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_017aa148(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_64;
  
  if ((DAT_03778f92 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Type_GetConstructor__);
                    /* try { // try from 017aa194 to 018aa1a3 has its CatchHandler @ 017aa1a4 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_IDictionaryKeyPathProvider>_ContainsKey__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
                    /* catch() { ... } // from try @ 017aa0d0 with catch @ 017aa1a4
                       catch() { ... } // from try @ 017aa194 with catch @ 017aa1a4 */
                    /* try { // try from 017aa1a8 to 018aa1ab has its CatchHandler @ 017aa1b4 */
                    /* try { // try from 017aa1ac to 018aa1b7 has its CatchHandler @ 017a9fb4 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017aa0b0 with catch @ 017aa1b4
                       catch(type#2 @ 00000000) { ... } // from try @ 017aa1a8 with catch @ 017aa1b4
                        */
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluator_OnSelect__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<MemberInfo,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTween_ApplyTo<Vector4,_Vector4,_VectorOptions>__);
    thunk_FUN_00d48444(StringLiteral_8585);
    thunk_FUN_00d48444(StringLiteral_5939);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_7334);
    thunk_FUN_00d48444(System_Runtime_Remoting_Metadata_SoapParameterAttribute_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f4378);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqabs_s16__);
    thunk_FUN_00d48444(StringLiteral_8407);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_n_s32_f32__);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                      );
    DAT_03778f92 = 1;
  }
  if (param_2 != 0) {
    lVar11 = param_1[8];
    if ((lVar11 == 0) && (param_1[7] != 0)) {
      lVar11 = FUN_017b8d98(param_1,1,0);
    }
    puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (param_1[0xd] == 0) {
      lVar8 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      param_1[0xd] = lVar8;
    }
    puVar7 = StringLiteral_8407;
    puVar6 = StringLiteral_7334;
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqabs_s16__;
    puVar4 = Method_System_Type_GetConstructor__;
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<Type,_IDictionaryKeyPathProvider>_ContainsKey__;
    uVar9 = FUN_017a9bb0(param_1);
    uVar12 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar12 = FUN_01780344(uVar12,0);
    FUN_01682ab8(param_2,*(undefined8 *)puVar6,uVar9,uVar12,0);
    lVar8 = param_1[3];
    uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_01682ab8(param_2,*(undefined8 *)puVar5,lVar8,uVar9,0);
    lVar8 = param_1[4];
    uVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
    FUN_01682ab8(param_2,*(undefined8 *)puVar7,lVar8,uVar9,0);
    lVar8 = param_1[5];
    uVar9 = FUN_01780344(*(undefined8 *)puVar4,0);
    FUN_01682ab8(param_2,*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
                 ,lVar8,uVar9,0);
    lVar8 = param_1[6];
    uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_01682ab8(param_2,*(undefined8 *)StringLiteral_5939,lVar8,uVar9,0);
    uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_01682ab8(param_2,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_n_s32_f32__,
                 lVar11,uVar9,0);
    lVar11 = param_1[9];
    uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_01682ab8(param_2,*(undefined8 *)
                          System_Collections_Generic_Dictionary<MemberInfo,_bool>_TypeInfo,lVar11,
                 uVar9,0);
    local_64 = (undefined4)param_1[10];
    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&local_64);
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,
                          0);
    FUN_01682ab8(param_2,*(undefined8 *)StringLiteral_8585,uVar9,uVar12,0);
    FUN_0166bc70(param_2,*(undefined8 *)
                          Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                 ,0,0);
    FUN_01677d98(param_2,*(undefined8 *)PTR_DAT_033f4378,(int)param_1[0xc],0);
    lVar11 = param_1[0xd];
    uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_01682ab8(param_2,*(undefined8 *)
                          System_Runtime_Remoting_Metadata_SoapParameterAttribute_TypeInfo,lVar11,
                 uVar9,0);
    if ((param_1[0xe] != 0) &&
       (uVar10 = FUN_01682934(param_1[0xe],0),
       puVar2 = Method_DG_Tweening_DOTween_ApplyTo<Vector4,_Vector4,_VectorOptions>__,
       (uVar10 & 1) != 0)) {
      lVar11 = param_1[0xe];
      uVar9 = *(undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluator_OnSelect__
      ;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      FUN_01682ab8(param_2,*(undefined8 *)puVar2,lVar11,uVar9,0);
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01682944(param_1[0xe],param_1,param_2,param_3,param_4,0);
    }
    return;
  }
  thunk_FUN_00d48444(PTR_DAT_033f37c8);
  uVar9 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar12 = thunk_FUN_00d48444(
                             DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                             );
  FUN_016ec5b8(uVar9,uVar12,0);
  uVar12 = thunk_FUN_00d48444(Method_System_Net_TimerThread_OnDomainUnload__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar12);
}


