/*
FUNCTION_NAME: OVRInput_FixedUpdate_m0B2BA5C8485902E1A0EE19A1F7066E671D8ECCB5
ENTRY_POINT: 02d6949c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRInput_FixedUpdate_m0B2BA5C8485902E1A0EE19A1F7066E671D8ECCB5(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  if ((OVRInput_FixedUpdate_m0B2BA5C8485902E1A0EE19A1F7066E671D8ECCB5::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRInput_FixedUpdate_m0B2BA5C8485902E1A0EE19A1F7066E671D8ECCB5::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  iVar3 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if (iVar3 != 3) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    iVar3 = *(int *)(lVar5 + 0x1c);
    fVar6 = (float)Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381();
    fVar7 = (float)Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(0);
    fVar7 = (float)Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                             (fVar7,1e-06,(MethodInfo *)0x0);
    dVar8 = (double)il2cpp_codegen_multiply<double,double>((double)(long)iVar3,(double)fVar6);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar4 = il2cpp_codegen_add<int,int>(*(int *)(lVar5 + 0x1c),1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined4 *)(lVar5 + 0x1c) = uVar4;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C
              (dVar8 / (double)fVar7,0,0);
  }
  return;
}


