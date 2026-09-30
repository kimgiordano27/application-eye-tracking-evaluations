/*
FUNCTION_NAME: FUN_024a8934
ENTRY_POINT: 024a8934
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_024a8934(void)

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
  undefined *puVar10;
  undefined8 uVar11;
  
  puVar10 = StringLiteral_1830;
  puVar9 = Method_RCG_Tools_ScreenFade_FadeInOnMessage__;
  puVar8 = Method_MerchTablePuzzle_TableCompleted__;
  puVar7 = Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>__ctor__;
  puVar6 = Method_System_Collections_Generic_List<ParametricDoor>_GetEnumerator__;
  puVar5 = Method_Unity_XR_CoreUtils_Datums_Datum<PokeThresholdData>__ctor__;
  puVar4 = System_Reflection_CustomAttributeData_TypeInfo;
  puVar3 = System_Runtime_Serialization_Formatters_Binary_BinaryArrayTypeEnum_TypeInfo;
  puVar2 = 
  System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
  ;
  puVar1 = System_Xml_Linq_XElement_var;
  if ((DAT_0378265c & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Datums_Datum<PokeThresholdData>__ctor__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Xml_Linq_XElement_var);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
    thunk_FUN_00d48444(System_Func<JsonSchemaModel,_IEnumerable<string>>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ParametricDoor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Font>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>__ctor__);
    thunk_FUN_00d48444(StringLiteral_1830);
    thunk_FUN_00d48444(VenueEndingSetup_<TurnLightsOff>d__6_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec9a8);
    thunk_FUN_00d48444(Method_RCG_Tools_ScreenFade_FadeInOnMessage__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputEventTrace_DeviceInfo>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_DefaultBinder_<>c_<SelectProperty>b__2_0__);
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_BinaryArrayTypeEnum_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_AudioClip_Create__);
    thunk_FUN_00d48444(System_Reflection_CustomAttributeData_TypeInfo);
    thunk_FUN_00d48444(System_Delegate_var);
    thunk_FUN_00d48444(Method_System_Data_BinaryNode_EvalBinaryOp__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_30__);
    thunk_FUN_00d48444(Method_MerchTablePuzzle_TableCompleted__);
    DAT_0378265c = 1;
  }
  uVar11 = FUN_0265d800(*(undefined8 *)puVar1,1,0,0,0);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar4,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar7,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar6,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar8,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar9,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar3,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar2,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)puVar10,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)Method_System_Data_BinaryNode_EvalBinaryOp__,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputEventTrace_DeviceInfo>_get_Item__
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)System_Delegate_var,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)PTR_DAT_033ec9a8,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)Method_UnityEngine_AudioClip_Create__,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x68) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)Method_System_Collections_Generic_List<Font>_Add__,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)VenueEndingSetup_<TurnLightsOff>d__6_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)Method_System_DefaultBinder_<>c_<SelectProperty>b__2_0__,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)System_Func<JsonSchemaModel,_IEnumerable<string>>_TypeInfo,1,
                        0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_30__,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x90) = uVar11;
  uVar11 = FUN_0265d800(*(undefined8 *)Method_UnityEngine_Component_GetComponents<BaseInputModule>__
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98) = uVar11;
  return;
}


