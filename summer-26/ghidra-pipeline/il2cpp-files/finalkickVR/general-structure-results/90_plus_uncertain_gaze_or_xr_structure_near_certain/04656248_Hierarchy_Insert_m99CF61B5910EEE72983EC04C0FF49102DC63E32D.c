/*
FUNCTION_NAME: Hierarchy_Insert_m99CF61B5910EEE72983EC04C0FF49102DC63E32D
ENTRY_POINT: 04656248
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void Hierarchy_Insert_m99CF61B5910EEE72983EC04C0FF49102DC63E32D
               (long *param_1,int param_2,
               VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303 *pBVar9;
  Il2CppClass *pIVar10;
  Exception_t *pEVar11;
  undefined8 uVar12;
  MethodInfo *pMVar13;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar14;
  void *pvVar15;
  void *pvVar16;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar17;
  long lVar18;
  uint local_6c;
  undefined8 local_58;
  undefined1 local_4b;
  byte local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  undefined8 local_40;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_38;
  int local_2c;
  long *local_28;
  
  puVar2 = PTR_Hierarchy_Insert_m99CF61B5910EEE72983EC04C0FF49102DC63E32D_RuntimeMethod_var_048df4a0
  ;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_40 = param_4;
  local_38 = param_3;
  local_2c = param_2;
  local_28 = param_1;
  if ((Hierarchy_Insert_m99CF61B5910EEE72983EC04C0FF49102DC63E32D::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUpdateType>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    Hierarchy_Insert_m99CF61B5910EEE72983EC04C0FF49102DC63E32D::s_Il2CppMethodInitialized = 1;
  }
  iVar5 = local_2c;
  local_44 = 0;
  local_46 = 0;
  local_47 = 0;
  local_48 = 0;
  local_49 = 0;
  local_4a = 0;
  local_4b = 0;
  local_58 = 0;
  local_45 = local_38 == (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  if ((bool)local_45) {
    pIVar10 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                        );
    pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
    uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)PTR__stringLiteral05BA33FC7FFF2013E3C524D47B41296B7EACC4E7_048df4a8
                       );
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar11,uVar12,0);
    pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar11,pMVar13);
  }
  iVar4 = Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5(local_28,0);
  local_46 = iVar4 < iVar5;
  if ((bool)local_46) {
    uVar12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(&local_2c);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)PTR__stringLiteral27C87AC914BC35591F312B19EFCB93B2312614C8_048df4b0)
    ;
    uVar12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(uVar7,uVar12,0);
    pIVar10 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                        );
    pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
    ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(pEVar11,uVar12,0);
    pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar11,pMVar13);
  }
  local_47 = local_38 == (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)*local_28;
  if (!(bool)local_47) {
    pVVar14 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)*local_28;
    NullCheck(pVVar14);
    lVar8 = VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline
                      (pVVar14,(MethodInfo *)0x0);
    if (lVar8 == 0) {
      bVar3 = 0;
    }
    else {
      pVVar14 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)*local_28;
      NullCheck(pVVar14);
      pBVar9 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303 *)
               VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline
                         (pVVar14,(MethodInfo *)0x0);
      NullCheck(pBVar9);
      bVar3 = BaseVisualElementPanel_get_duringLayoutPhase_m2EEED4B0599F0FD8A4B61DDF5328ACCE8425A652_inline
                        (pBVar9,(MethodInfo *)0x0);
      bVar3 = bVar3 & 1;
    }
    pVVar14 = local_38;
    local_48 = bVar3 != 0;
    if ((bool)local_48) {
      pIVar10 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                          );
      pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
      uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          PTR__stringLiteral5400D7AAD4F73F8F5518E360476136A99DFFB433_048df4c0);
      InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar11,uVar12,0);
      pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar11,pMVar13);
    }
    NullCheck(local_38);
    VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(pVVar14,0);
    pvVar15 = (void *)*local_28;
    NullCheck(pvVar15);
    lVar18 = *(long *)((long)pvVar15 + 0x398);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_49 = lVar18 == *(long *)(lVar8 + 0x48);
    if ((bool)local_49) {
      pvVar16 = (void *)*local_28;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_System_Nullable<InputUpdateType>__ctor__);
      pvVar15 = (void *)VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2(0,0);
      NullCheck(pvVar16);
      *(void **)((long)pvVar16 + 0x398) = pvVar15;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar16 + 0x398),pvVar15);
    }
    pVVar14 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)*local_28;
    NullCheck(pVVar14);
    pvVar15 = (void *)VisualElement_get_yogaNode_m7BD89E6914D168F12DF8C7CAE48FA58088E997C6_inline
                                (pVVar14,(MethodInfo *)0x0);
    NullCheck(pvVar15);
    local_4a = YogaNode_get_IsMeasureDefined_m97892E308FBA12A5BEA9004007709B7475946CC5(pvVar15,0);
    local_4a = local_4a & 1;
    if (local_4a != 0) {
      pvVar15 = (void *)*local_28;
      NullCheck(pvVar15);
      VisualElement_RemoveMeasureFunction_m8425FBA16D58505840B921AFDB9E0ECD73C2815D(pvVar15,0);
    }
    Hierarchy_PutChildAtIndex_m0F02F382CB8DA304532375D726FE999B6162BA2F
              (local_28,local_38,local_2c,0);
    pVVar14 = local_38;
    NullCheck(local_38);
    pVVar17 = local_38;
    iVar5 = *(int *)(pVVar14 + 0x328);
    NullCheck(local_38);
    local_6c = (uint)(((byte)pVVar17[0x10] & 1) != 0);
    iVar5 = il2cpp_codegen_add<int,int>(iVar5,local_6c);
    local_4b = 0 < iVar5;
    local_44 = iVar5;
    if ((bool)local_4b) {
      pvVar15 = (void *)*local_28;
      NullCheck(pvVar15);
      VisualElement_ChangeIMGUIContainerCount_m161374C22DDC4B94F733D150DAA1B90B2C48A708
                (pvVar15,iVar5,0);
    }
    pVVar14 = local_38;
    NullCheck(local_38);
    local_58 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (pVVar14,(MethodInfo *)0x0);
    Hierarchy_SetParent_mEFAE20C63FCA1AE6BC5E2935738C686F6F711DAF(&local_58,*local_28,0);
    pVVar14 = local_38;
    pvVar15 = (void *)*local_28;
    NullCheck(pvVar15);
    bVar3 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412
                      (pvVar15,0);
    NullCheck(pVVar14);
    VisualElement_PropagateEnabledToChildren_m7E034E7063F93FF1B8BCB1FEB445BECE20C2179E
              (pVVar14,bVar3 & 1,0);
    pVVar14 = local_38;
    NullCheck(local_38);
    iVar5 = VisualElement_get_languageDirection_m4C8BB8F0D3201471BB27A2905A201FA682711A7D_inline
                      (pVVar14,(MethodInfo *)0x0);
    pVVar14 = local_38;
    if (iVar5 == 0) {
      pVVar17 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)*local_28;
      NullCheck(pVVar17);
      uVar6 = VisualElement_get_localLanguageDirection_m309788891892ACE25CD2616BC509E5AD90868329_inline
                        (pVVar17,(MethodInfo *)0x0);
      NullCheck(pVVar14);
      VisualElement_set_localLanguageDirection_m68BE764B903788521A3241A2C39A39B74B3CCAF1
                (pVVar14,uVar6,0);
    }
    pVVar14 = local_38;
    NullCheck(local_38);
    Oculus_Voice_Bindings_Android_VoiceSDKListenerBinding__onError(pVVar14,0);
    pVVar14 = local_38;
    NullCheck(local_38);
    VisualElement_IncrementVersion_m03581665EE480D3C329058FFE08734450493E33E(pVVar14,4,0);
    pvVar15 = (void *)*local_28;
    NullCheck(pvVar15);
    VisualElement_IncrementVersion_m03581665EE480D3C329058FFE08734450493E33E(pvVar15,4,0);
    return;
  }
  pIVar10 = (Il2CppClass *)
            il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                      );
  pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
  uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)PTR__stringLiteral5338A97A4E0097B99259F2AAB53CED274C56E28C_048df4b8);
  ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar11,uVar12,0);
  pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar11,pMVar13);
}


