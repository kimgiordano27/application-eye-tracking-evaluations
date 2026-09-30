/*
FUNCTION_NAME: OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E
ENTRY_POINT: 02d86c28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 163
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_8
*/


byte OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *pOVar7;
  Il2CppFakeBox<int> aIStack_60 [24];
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *local_48;
  int local_40;
  int local_3c;
  byte local_36;
  byte local_35;
  undefined4 local_34;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *local_30;
  int local_24;
  undefined8 local_20;
  byte local_11;
  
  puVar3 = Method_spawnerRayos_<DestruirTrueno>d__15_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_romperMuro_<adiosTrozo>d__4_System_Collections_IEnumerator_Reset__;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  local_20 = param_1;
  if ((OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_spawnerRayos_<instaciarRayo>d__14_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__);
    OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_30 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar5 + 0x1d0);
  NullCheck(local_30);
  local_34 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                       (local_30,*(MethodInfo **)puVar2);
  local_35 = OVRManager_PassthroughInitializedOrPending_m7B360381FEDC2014AFB1ABB74E907B62B0D14348
                       (local_34,0);
  local_35 = local_35 & 1;
  if (local_35 == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_36 = OVRPlugin_InitializeInsightPassthrough_m533CFC66EFCBCF4C9B69AC938D2E2653724D2304();
    local_36 = local_36 & 1;
    local_40 = OVRPlugin_GetInsightPassthroughInitializationState_m3E668E023B953E8204B732EBCD358FAC7B7660C4
                         (0);
    local_3c = local_40;
    local_24 = local_40;
    if (local_40 < 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_48 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar5 + 0x1d0);
      NullCheck(local_48);
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (local_48,3,*(MethodInfo **)puVar3);
      Il2CppFakeBox<int>::Il2CppFakeBox
                (aIStack_60,
                 *(Il2CppClass **)
                  Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__,
                 &local_24);
      uVar6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_60);
      uVar6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                        (*(undefined8 *)
                          Method_spawnerRayos_<instaciarRayo>d__14_System_Collections_IEnumerator_Reset__
                         ,uVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__
                         ,0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar6,0);
    }
    else if (local_40 == 2) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pOVar7 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar5 + 0x1d0);
      NullCheck(pOVar7);
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (pOVar7,1,*(MethodInfo **)puVar3);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pOVar7 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar5 + 0x1d0);
      NullCheck(pOVar7);
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (pOVar7,2,*(MethodInfo **)puVar3);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pOVar7 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar5 + 0x1d0);
    NullCheck(pOVar7);
    uVar4 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                      (pOVar7,*(MethodInfo **)puVar2);
    local_11 = OVRManager_PassthroughInitializedOrPending_m7B360381FEDC2014AFB1ABB74E907B62B0D14348
                         (uVar4,0);
    local_11 = local_11 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}


