/*
FUNCTION_NAME: FUN_017a9670
ENTRY_POINT: 017a9670
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_017a9670(long param_1,long param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  
  if ((DAT_03778f8c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Type_GetConstructor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_IDictionaryKeyPathProvider>_ContainsKey__
                      );
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluator_OnSelect__
                      );
    thunk_FUN_00d48444(StringLiteral_3185);
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
    DAT_03778f8c = 1;
  }
  FUN_017b46ec(param_1,0);
  puVar5 = StringLiteral_8407;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqabs_s16__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<Type,_IDictionaryKeyPathProvider>_ContainsKey__;
  if (param_2 == 0) {
                    /* try { // try from 017a9a8c to 018a9aab has its CatchHandler @ 017a9b18 */
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
                    /* catch() { ... } // from try @ 017a9a70 with catch @ 017a9aac
                       try { // try from 017a9aac to 018a9adb has its CatchHandler @ 017a97d8 */
    uVar14 = thunk_FUN_00d48444(
                               DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                               );
                    /* catch() { ... } // from try @ 017a9848 with catch @ 017a9ab8 */
    FUN_016ec5b8(uVar10,uVar14,0);
    uVar14 = thunk_FUN_00d48444(
                               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_PostfixBurstDelegate_var
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar14);
  }
  uVar10 = FUN_01684938(param_2,*(undefined8 *)StringLiteral_7334,0);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
                    /* try { // try from 017a97d8 to 018a9847 has its CatchHandler @ 017a97d8
                       catch() { ... } // from try @ 017a97d8 with catch @ 017a97d8
                       catch() { ... } // from try @ 017a990c with catch @ 017a97d8
                       catch() { ... } // from try @ 017a9a14 with catch @ 017a97d8
                       catch() { ... } // from try @ 017a9aac with catch @ 017a97d8
                       catch() { ... } // from try @ 017a9b04 with catch @ 017a97d8 */
  uVar10 = FUN_01684938(param_2,*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar10 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_01780344(uVar10,0);
  lVar11 = FUN_01682618(param_2,*(undefined8 *)puVar5,uVar10,0);
  puVar2 = System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar10 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
    lVar12 = thunk_FUN_00d6225c(lVar11,uVar10);
    if (lVar12 == 0) {
LAB_017a984c:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar11,uVar10);
    }
    *(long *)(param_1 + 0x20) = lVar12;
    uVar10 = *(undefined8 *)puVar2;
    lVar12 = thunk_FUN_00d6225c(lVar11,uVar10);
    if (lVar12 == 0) goto LAB_017a984c;
  }
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__;
  uVar10 = FUN_01780344(*(undefined8 *)Method_System_Type_GetConstructor__,0);
  plVar13 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar2,uVar10,0);
  if (plVar13 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_017a98f0:
    puVar8 = StringLiteral_8585;
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_n_s32_f32__;
    puVar6 = Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluator_OnSelect__;
    puVar5 = Method_DG_Tweening_DOTween_ApplyTo<Vector4,_Vector4,_VectorOptions>__;
    puVar4 = System_Runtime_Remoting_Metadata_SoapParameterAttribute_TypeInfo;
    puVar3 = System_Collections_Generic_Dictionary<MemberInfo,_bool>_TypeInfo;
    puVar2 = PTR_DAT_033f4378;
    uVar10 = FUN_01684938(param_2,*(undefined8 *)StringLiteral_5939,0);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    uVar10 = FUN_01684938(param_2,*(undefined8 *)puVar7,0);
    *(undefined8 *)(param_1 + 0x40) = uVar10;
    uVar10 = FUN_01684938(param_2,*(undefined8 *)puVar3,0);
    *(undefined8 *)(param_1 + 0x48) = uVar10;
    uVar9 = FUN_016844dc(param_2,*(undefined8 *)puVar8,0);
    *(undefined4 *)(param_1 + 0x50) = uVar9;
    uVar9 = FUN_016844dc(param_2,*(undefined8 *)puVar2,0);
    *(undefined4 *)(param_1 + 0x60) = uVar9;
    uVar10 = FUN_01684938(param_2,*(undefined8 *)puVar4,0);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    plVar13 = (long *)FUN_01682618(param_2,*(undefined8 *)puVar5,uVar10,0);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else if (*plVar13 != *(long *)StringLiteral_3185) {
      plVar13 = (long *)0x0;
    }
    *(long **)(param_1 + 0x70) = plVar13;
    if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
      if (param_4 == 0x80) {
        uVar10 = FUN_015f5b28(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),0);
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = uVar10;
      }
      return;
    }
    uVar10 = thunk_FUN_00d48444(StringLiteral_11004);
    uVar10 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar10,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar14,uVar10,0);
    uVar10 = thunk_FUN_00d48444(
                               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_PostfixBurstDelegate_var
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar14,uVar10);
  }
  lVar11 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
  ;
  bVar1 = *(byte *)(lVar11 + 300);
  if ((bVar1 <= *(byte *)(*plVar13 + 300)) &&
     (*(long *)(*(long *)(*plVar13 + 200) + ((ulong)bVar1 - 1) * 8) == lVar11)) {
    *(long **)(param_1 + 0x28) = plVar13;
    if ((bVar1 <= *(byte *)(*plVar13 + 300)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + ((ulong)bVar1 - 1) * 8) == lVar11)) goto LAB_017a98f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


