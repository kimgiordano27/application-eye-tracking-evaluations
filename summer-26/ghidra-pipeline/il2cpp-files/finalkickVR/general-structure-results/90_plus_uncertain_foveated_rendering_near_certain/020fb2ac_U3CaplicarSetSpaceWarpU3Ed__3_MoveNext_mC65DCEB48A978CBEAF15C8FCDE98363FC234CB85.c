/*
FUNCTION_NAME: U3CaplicarSetSpaceWarpU3Ed__3_MoveNext_mC65DCEB48A978CBEAF15C8FCDE98363FC234CB85
ENTRY_POINT: 020fb2ac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 175
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_foveation_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


undefined1
U3CaplicarSetSpaceWarpU3Ed__3_MoveNext_mC65DCEB48A978CBEAF15C8FCDE98363FC234CB85
          (long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  void *pvVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_50;
  char local_49;
  void *local_48;
  int local_3c;
  undefined8 local_38;
  long local_30;
  undefined1 local_21;
  
  puVar6 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Count__;
  puVar5 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar4 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_2;
  local_30 = param_1;
  if ((U3CaplicarSetSpaceWarpU3Ed__3_MoveNext_mC65DCEB48A978CBEAF15C8FCDE98363FC234CB85::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_GetEnumerator__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_OptionData>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__);
    U3CaplicarSetSpaceWarpU3Ed__3_MoveNext_mC65DCEB48A978CBEAF15C8FCDE98363FC234CB85::
    s_Il2CppMethodInitialized = 1;
  }
                    /* try { // try from 020fb36c to 021fb377 has its CatchHandler @ 020fbaa0 */
  local_49 = 0;
  local_50 = 0;
                    /* try { // try from 020fb378 to 021fb3b7 has its CatchHandler @ 020fb05c */
  local_3c = *(int *)(local_30 + 0x10);
  local_48 = *(void **)(local_30 + 0x28);
  if (local_3c == 0) {
    *(undefined4 *)(local_30 + 0x10) = 0xffffffff;
                    /* try { // try from 020fb3ec to 021fb5cb has its CatchHandler @ 020fbaa0 */
    *(undefined1 *)(local_30 + 0x30) = 1;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
    uVar7 = OVRPlugin_GetSystemHeadsetType_m78DFDBECE24A926CF89B9A8D93931C78A3824B01(0);
    *(undefined4 *)(local_30 + 0x34) = uVar7;
    if (*(int *)(local_30 + 0x34) != 8) {
      *(undefined1 *)(local_30 + 0x30) = 0;
    }
    bVar2 = *(byte *)(local_30 + 0x30);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99(bVar2 & 1);
    uVar7 = *(undefined4 *)(local_30 + 0x20);
    pvVar8 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_GetEnumerator__
                               );
    WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(uVar7,pvVar8,0);
    *(void **)(local_30 + 0x18) = pvVar8;
    Il2CppCodeGenWriteBarrier((void **)(local_30 + 0x18),pvVar8);
    *(undefined4 *)(local_30 + 0x10) = 1;
    local_21 = 1;
  }
  else {
                    /* try { // try from 020fb3b8 to 021fb3bb has its CatchHandler @ 020fbaa0 */
                    /* try { // try from 020fb3bc to 021fb3eb has its CatchHandler @ 020fb05c */
    if (local_3c == 1) {
      *(undefined4 *)(local_30 + 0x10) = 0xffffffff;
      pIVar9 = (Il2CppObject *)
               GraphicsSettings_get_renderPipelineAsset_mB1679AD22B6EB56C50ED48807AA59A643F0782FA();
      pvVar8 = local_48;
      NullCheck(local_48);
      uVar7 = *(undefined4 *)((long)pvVar8 + 0x24);
      pvVar8 = (void *)CastclassClass(pIVar9,*(Il2CppClass **)puVar6);
      NullCheck(pvVar8);
      uVar10 = CastclassClass(pIVar9,*(Il2CppClass **)puVar6);
      UniversalRenderPipelineAsset_set_renderScale_m1D00DA4056718A4BF90E6066E2A56C3F529AADC2
                (uVar7,uVar10,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      OVRManager_set_fixedFoveatedRenderingLevel_m8903AC90BC000FD46ED4E26673BAB531BA615929(4,0);
      OVRManager_set_useDynamicFixedFoveatedRendering_m2BBB38EA8596D5006096F25E2EDE0465713D9CEA(1,0)
      ;
      pvVar8 = local_48;
      local_49 = '\0';
      if ((*(int *)(local_30 + 0x34) != 8) && (*(int *)(local_30 + 0x34) != 9)) {
        local_49 = '\x01';
      }
      local_50 = 0x3f800000;
      if (local_49 != '\0') {
        NullCheck(local_48);
        *(undefined4 *)((long)pvVar8 + 0x20) = 0x5a;
        local_50 = 0x3fb33333;
                    /* try { // try from 020fb5fc to 021fb7cb has its CatchHandler @ 020fbaa0 */
        uVar10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(&local_50);
        uVar10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                           (*(undefined8 *)
                             Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__,
                            uVar10,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar10,0);
        XRSettings_set_eyeTextureResolutionScale_m92F1029D68F387D9B0C2DB35DFAB2FD82C64A30B
                  (local_50,0);
      }
      pvVar8 = local_48;
      NullCheck(local_48);
      uVar7 = *(undefined4 *)((long)pvVar8 + 0x20);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
                );
      Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(uVar7);
      pvVar8 = local_48;
      NullCheck(local_48);
      iVar1 = *(int *)((long)pvVar8 + 0x20);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
      OVRPlugin_set_systemDisplayFrequency_m1C71496AF03BFA13D61113389F4C8CC065043034((float)iVar1,0)
      ;
      bVar2 = *(byte *)(local_30 + 0x30);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99(bVar2 & 1,0);
      pvVar8 = local_48;
      NullCheck(local_48);
      uVar10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((long)pvVar8 + 0x20,0);
      pvVar8 = local_48;
      NullCheck(local_48);
      uVar11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((long)pvVar8 + 0x24,0);
      uVar10 = String_Concat_m093934F71A9B351911EE46311674ED463B180006
                         (*(undefined8 *)
                           Method_System_Collections_Generic_List<Dropdown_OptionData>__ctor__,
                          uVar10,*(undefined8 *)
                                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Item__
                          ,uVar11,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar10,0);
      local_21 = 0;
    }
    else {
      local_21 = 0;
    }
  }
  return local_21;
}


