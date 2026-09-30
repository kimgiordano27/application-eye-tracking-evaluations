/*
FUNCTION_NAME: OVRManager_ShutdownInsightPassthrough_mBBB77D5EB2CE95920737C34F1A0A5E6C14A6E576
ENTRY_POINT: 02d8b0c4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_7;functionality_gaze_interaction_hits_4
*/


void OVRManager_ShutdownInsightPassthrough_mBBB77D5EB2CE95920737C34F1A0A5E6C14A6E576(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *pOVar7;
  
  puVar3 = Method_spawnerRayos_<DestruirTrueno>d__15_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_ShutdownInsightPassthrough_mBBB77D5EB2CE95920737C34F1A0A5E6C14A6E576::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_romperMuro_<adiosTrozo>d__4_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__3__
              );
    OVRManager_ShutdownInsightPassthrough_mBBB77D5EB2CE95920737C34F1A0A5E6C14A6E576::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pOVar7 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar6 + 0x1d0);
  NullCheck(pOVar7);
  uVar5 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                    (pOVar7,*(MethodInfo **)
                             Method_romperMuro_<adiosTrozo>d__4_System_Collections_IEnumerator_Reset__
                    );
  bVar4 = OVRManager_PassthroughInitializedOrPending_m7B360381FEDC2014AFB1ABB74E907B62B0D14348
                    (uVar5,0);
  if ((bVar4 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pOVar7 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar6 + 0x1d0);
    NullCheck(pOVar7);
    Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
              (pOVar7,0,*(MethodInfo **)puVar3);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar4 = OVRPlugin_ShutdownInsightPassthrough_m8BD5F14E5C47D98E1E78889BEDC2D32DE96C9F96(0);
    if ((bVar4 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar4 = OVRPlugin_IsInsightPassthroughInitialized_m1637AFD376CCC2D63B5C34475FD012FD7DF3EB36(0)
      ;
      if ((bVar4 & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        pOVar7 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar6 + 0x1d0);
        NullCheck(pOVar7);
        Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                  (pOVar7,0,*(MethodInfo **)puVar3);
      }
      else {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                  );
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__3__
                   ,0);
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pOVar7 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar6 + 0x1d0);
      NullCheck(pOVar7);
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (pOVar7,0,*(MethodInfo **)puVar3);
    }
  }
  return;
}


