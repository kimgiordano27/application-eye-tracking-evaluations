/*
FUNCTION_NAME: OVRPlugin_get_systemDisplayFrequenciesAvailable_m0C8838572B37964AD96032AA4F4C021F077AE68D
ENTRY_POINT: 02db5d7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_11;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8
OVRPlugin_get_systemDisplayFrequenciesAvailable_m0C8838572B37964AD96032AA4F4C021F077AE68D
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint local_38;
  uint local_2c;
  undefined8 local_28;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
  ;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__;
  local_28 = param_1;
  if ((OVRPlugin_get_systemDisplayFrequenciesAvailable_m0C8838572B37964AD96032AA4F4C021F077AE68D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_get_systemDisplayFrequenciesAvailable_m0C8838572B37964AD96032AA4F4C021F077AE68D::
    s_Il2CppMethodInitialized = 1;
  }
  local_2c = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  if (*(long *)(lVar7 + 0x78) == 0) {
    pvVar8 = (void *)SZArrayNew(*(Il2CppClass **)puVar1,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *(void **)(lVar7 + 0x78) = pvVar8;
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x78),pvVar8);
    uVar9 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar10 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                      (uVar9,*puVar10,0);
    if ((bVar4 & 1) != 0) {
      local_2c = 0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      iVar5 = OVRP_1_21_0_ovrp_GetSystemDisplayAvailableFrequencies_m9A84A93A8B5F5A5EC6E9386018B0C5470637E0F3
                        (0,&local_2c,0);
      local_38 = local_2c;
      if ((iVar5 == 0) && (0 < (int)local_2c)) {
        pvVar8 = (void *)il2cpp_codegen_object_new
                                   (*(Il2CppClass **)
                                     Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_0__
                                   );
        uVar6 = il2cpp_codegen_multiply<int,int>(4,local_38);
        OVRNativeBuffer__ctor_m49B59D113EB19FB7AB2111CBCD8AC8D2D0EF4285(pvVar8,uVar6);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        *(void **)(lVar7 + 0x70) = pvVar8;
        lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x70),pvVar8);
        lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        pvVar8 = *(void **)(lVar7 + 0x70);
        NullCheck(pvVar8);
        uVar9 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7(pvVar8,0,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        iVar5 = OVRP_1_21_0_ovrp_GetSystemDisplayAvailableFrequencies_m9A84A93A8B5F5A5EC6E9386018B0C5470637E0F3
                          (uVar9,&local_2c,0);
        if (iVar5 == 0) {
          if ((int)local_38 < (int)local_2c) {
          }
          else {
            local_38 = local_2c;
          }
          if (0 < (int)local_38) {
            pvVar8 = (void *)SZArrayNew(*(Il2CppClass **)puVar1,local_38);
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
            *(void **)(lVar7 + 0x78) = pvVar8;
            lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
            Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x78),pvVar8);
            lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
            pvVar8 = *(void **)(lVar7 + 0x70);
            NullCheck(pvVar8);
            uVar9 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7(pvVar8);
            lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
            uVar11 = *(undefined8 *)(lVar7 + 0x78);
            il2cpp_codegen_runtime_class_init_inline
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__
                      );
            Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(uVar9,uVar11,0,local_38,0);
          }
        }
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  return *(undefined8 *)(lVar7 + 0x78);
}


