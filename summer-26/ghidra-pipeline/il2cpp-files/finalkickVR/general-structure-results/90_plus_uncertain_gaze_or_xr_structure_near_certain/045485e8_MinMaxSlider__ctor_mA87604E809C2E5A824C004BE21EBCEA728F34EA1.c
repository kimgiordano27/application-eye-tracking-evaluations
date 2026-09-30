/*
FUNCTION_NAME: MinMaxSlider__ctor_mA87604E809C2E5A824C004BE21EBCEA728F34EA1
ENTRY_POINT: 045485e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void MinMaxSlider__ctor_mA87604E809C2E5A824C004BE21EBCEA728F34EA1
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,
               BaseField_1_t24288AF0F89D70409E802DB92E87D9CA0A822507 *param_5,String_t *param_6,
               undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 local_1f0;
  float local_1e8;
  float local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3 *local_1c8;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_1c0;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_170;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_168;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_160;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_158;
  undefined8 local_150;
  void *local_148;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *local_140;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *local_138;
  undefined8 local_130;
  void *local_128;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_120;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_118;
  void *local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  void *local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  String_t *local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  String_t *local_30;
  BaseField_1_t24288AF0F89D70409E802DB92E87D9CA0A822507 *local_28;
  
  puVar4 = PTR_MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4_il2cpp_TypeInfo_var_048dc550;
  puVar3 = 
  PTR_BaseField_1_get_visualInput_mB67A705CA11702E37CE3B69FCB2EDA51A7F9C5BF_RuntimeMethod_var_048d8f38
  ;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  local_48 = param_7;
  local_40 = param_4;
  local_3c = param_3;
  local_38 = param_2;
  local_34 = param_1;
  local_30 = param_6;
  local_28 = param_5;
  if ((MinMaxSlider__ctor_mA87604E809C2E5A824C004BE21EBCEA728F34EA1::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1__ctor_m30F6DF5E940820B1A8FC53785FF945DC355BC826_RuntimeMethod_var_048dc558
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_get_labelElement_m38806C5C5005D95F6B639B5F9D78C96401419543_RuntimeMethod_var_048d8f30
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_set_rawValue_m060DFBCFE636B2EA5EB4876E907262C2A2C5538B_RuntimeMethod_var_048dc560
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_t24288AF0F89D70409E802DB92E87D9CA0A822507_il2cpp_TypeInfo_var_048dc568
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ClampedDragger_1__ctor_m63E75D205DBC0793EC7958E05CD905C93D08DEB9_RuntimeMethod_var_048dc570
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3_il2cpp_TypeInfo_var_048dc578
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MinMaxSlider_SetSliderValueFromClick_mF9D57F90A44C59AAC865BC817B772A285864FA8E_RuntimeMethod_var_048dc580
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MinMaxSlider_SetSliderValueFromDrag_mD421F9F3F18595C77CF9B42951E02EB446E238D4_RuntimeMethod_var_048dc588
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MinMaxSlider_UpdateDragElementPosition_mDB06EDD1CFF033594C8766717F35A2C1542FACE5_RuntimeMethod_var_048dc590
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_get_PointableElement__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral71FB05A922053E39D8A3714482FFD983F3159D45_048dc598);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralD954E0949D97DDF7387DBC8561A11A20F37DD260_048dc5a0);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
              );
    MinMaxSlider__ctor_mA87604E809C2E5A824C004BE21EBCEA728F34EA1::s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  local_58 = (void *)0x0;
  local_60 = local_30;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_BaseField_1_t24288AF0F89D70409E802DB92E87D9CA0A822507_il2cpp_TypeInfo_var_048dc568
            );
  BaseField_1__ctor_m30F6DF5E940820B1A8FC53785FF945DC355BC826
            (local_28,local_60,(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0,
             *(MethodInfo **)
              PTR_BaseField_1__ctor_m30F6DF5E940820B1A8FC53785FF945DC355BC826_RuntimeMethod_var_048dc558
            );
  fVar8 = (float)std::__ndk1::numeric_limits<float>::max();
  *(float *)(local_28 + 0x494) = -fVar8;
  uVar9 = std::__ndk1::numeric_limits<float>::max();
  *(undefined4 *)(local_28 + 0x498) = uVar9;
  local_64 = local_3c;
  MinMaxSlider_set_lowLimit_m9204F1AF03143F64011EB7913247C073CAF62570(local_3c,local_28,0);
  local_68 = local_40;
  MinMaxSlider_set_highLimit_mC866BDEE3CB2D8C065A10589DED2E080DEF44AA8(local_40,local_28,0);
  local_6c = local_34;
  local_70 = local_38;
  local_78 = 0;
  Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
            ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 *)&local_78,local_34,local_38,
             (MethodInfo *)0x0);
  local_90 = local_78;
  uVar5 = local_90;
  local_90._0_4_ = (undefined4)local_78;
  uVar9 = (undefined4)local_90;
  local_90._4_4_ = (undefined4)((ulong)local_78 >> 0x20);
  uVar10 = local_90._4_4_;
  local_90 = uVar5;
  local_9c = MinMaxSlider_ClampValues_m86382047C10DC7B30A46EE9FBD4AE6B831ABB343(uVar9,local_28,0);
  local_88 = local_9c;
  uStack_84 = uVar10;
  local_50._0_4_ = local_9c;
  local_50._4_4_ = uVar10;
  local_98 = local_9c;
  uStack_94 = uVar10;
  local_80 = local_9c;
  uStack_7c = uVar10;
  MinMaxSlider_set_minValue_mB68AEFF3E47C68CD6C46D6329D325A68C6340627(local_9c,local_28,0);
  local_a8 = (undefined4)local_50;
  uStack_a4 = local_50._4_4_;
  local_ac = local_50._4_4_;
  MinMaxSlider_set_maxValue_m27BCD55A460921A3B8951E13C66F0D6F3833AA30(local_50._4_4_,local_28,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_b8 = *puVar6;
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_28,local_b8,0);
  local_c0 = (void *)BaseField_1_get_labelElement_m38806C5C5005D95F6B639B5F9D78C96401419543_inline
                               (local_28,*(MethodInfo **)
                                          PTR_BaseField_1_get_labelElement_m38806C5C5005D95F6B639B5F9D78C96401419543_RuntimeMethod_var_048d8f30
                               );
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_c8 = *(undefined8 *)(lVar7 + 8);
  NullCheck(local_c0);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_c0,local_c8,0);
  local_d0 = (void *)BaseField_1_get_visualInput_mB67A705CA11702E37CE3B69FCB2EDA51A7F9C5BF
                               (local_28,*(MethodInfo **)puVar3);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_d8 = *(undefined8 *)(lVar7 + 0x10);
  NullCheck(local_d0);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_d0,local_d8,0);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(local_28,1,0);
  *(undefined4 *)(local_28 + 0x490) = 0;
  local_e0 = (void *)BaseField_1_get_visualInput_mB67A705CA11702E37CE3B69FCB2EDA51A7F9C5BF
                               (local_28,*(MethodInfo **)puVar3);
  NullCheck(local_e0);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(local_e0,0,0);
  local_e8 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_e8,0);
  local_f0 = local_e8;
  NullCheck(local_e8);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_f0,*(undefined8 *)
                       Method_Oculus_Interaction_PointerInteractable<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
             ,0);
  local_58 = local_f0;
  local_f8 = local_f0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_100 = *(undefined8 *)(lVar7 + 0x18);
  NullCheck(local_f8);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_f8,local_100,0);
  local_108 = (void *)BaseField_1_get_visualInput_mB67A705CA11702E37CE3B69FCB2EDA51A7F9C5BF
                                (local_28,*(MethodInfo **)puVar3);
  local_110 = local_58;
  NullCheck(local_108);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_108,local_110,0);
  local_118 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_118,0);
  local_120 = local_118;
  NullCheck(local_118);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_120,
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_get_PointableElement__
             ,0);
  MinMaxSlider_set_dragElement_mC77E4978405261AAA274B2DD596E1FB8DED6CF7B_inline
            ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,local_120,
             (MethodInfo *)0x0);
  local_128 = (void *)MinMaxSlider_get_dragElement_mAD64ED89C1932B20A2810795B5136DF70BCA90E7_inline
                                ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                                 (MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_130 = *(undefined8 *)(lVar7 + 0x20);
  NullCheck(local_128);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_128,local_130,0);
  local_138 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
              MinMaxSlider_get_dragElement_mAD64ED89C1932B20A2810795B5136DF70BCA90E7_inline
                        ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                         (MethodInfo *)0x0);
  local_140 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__
                        );
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (local_140,(Il2CppObject *)local_28,
             *(long *)
              PTR_MinMaxSlider_UpdateDragElementPosition_mDB06EDD1CFF033594C8766717F35A2C1542FACE5_RuntimeMethod_var_048dc590
             ,(MethodInfo *)0x0);
  NullCheck(local_138);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (local_138,local_140,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
  local_148 = (void *)BaseField_1_get_visualInput_mB67A705CA11702E37CE3B69FCB2EDA51A7F9C5BF
                                (local_28,*(MethodInfo **)puVar3);
  local_150 = MinMaxSlider_get_dragElement_mAD64ED89C1932B20A2810795B5136DF70BCA90E7_inline
                        ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                         (MethodInfo *)0x0);
  NullCheck(local_148);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_148,local_150,0);
  local_158 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_158,0);
  local_160 = local_158;
  NullCheck(local_158);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_160,
             *(undefined8 *)PTR__stringLiteral71FB05A922053E39D8A3714482FFD983F3159D45_048dc598,0);
  MinMaxSlider_set_dragMinThumb_m897CB8CA807C4756DACB6606C298FCF54B0CE6D0_inline
            ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,local_160,
             (MethodInfo *)0x0);
  local_168 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_168,0);
  local_170 = local_168;
  NullCheck(local_168);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_170,
             *(undefined8 *)PTR__stringLiteralD954E0949D97DDF7387DBC8561A11A20F37DD260_048dc5a0,0);
  MinMaxSlider_set_dragMaxThumb_m69F021E09522AB8C4ECD00EC32880E0143067984_inline
            ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,local_170,
             (MethodInfo *)0x0);
  local_178 = (void *)MinMaxSlider_get_dragMinThumb_mB816F10C4B631954C399C052E91E59AD5201EFE2_inline
                                ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                                 (MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_180 = *(undefined8 *)(lVar7 + 0x28);
  NullCheck(local_178);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_178,local_180,0);
  local_188 = (void *)MinMaxSlider_get_dragMaxThumb_m73F20516C2772D73C3D48D3D5E56A80BEEDEB883_inline
                                ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                                 (MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_190 = *(undefined8 *)(lVar7 + 0x30);
  NullCheck(local_188);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_188,local_190,0);
  local_198 = (void *)MinMaxSlider_get_dragElement_mAD64ED89C1932B20A2810795B5136DF70BCA90E7_inline
                                ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                                 (MethodInfo *)0x0);
  local_1a0 = MinMaxSlider_get_dragMinThumb_mB816F10C4B631954C399C052E91E59AD5201EFE2_inline
                        ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                         (MethodInfo *)0x0);
  NullCheck(local_198);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_198,local_1a0,0);
  local_1a8 = (void *)MinMaxSlider_get_dragElement_mAD64ED89C1932B20A2810795B5136DF70BCA90E7_inline
                                ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                                 (MethodInfo *)0x0);
  local_1b0 = MinMaxSlider_get_dragMaxThumb_m73F20516C2772D73C3D48D3D5E56A80BEEDEB883_inline
                        ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                         (MethodInfo *)0x0);
  NullCheck(local_1a8);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_1a8,local_1b0,0);
  local_1b8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (local_1b8,local_28,
             *(undefined8 *)
              PTR_MinMaxSlider_SetSliderValueFromClick_mF9D57F90A44C59AAC865BC817B772A285864FA8E_RuntimeMethod_var_048dc580
             ,0);
  local_1c0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (local_1c0,local_28,
             *(undefined8 *)
              PTR_MinMaxSlider_SetSliderValueFromDrag_mD421F9F3F18595C77CF9B42951E02EB446E238D4_RuntimeMethod_var_048dc588
             ,0);
  local_1c8 = (ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3 *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          PTR_ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3_il2cpp_TypeInfo_var_048dc578
                        );
  ClampedDragger_1__ctor_m63E75D205DBC0793EC7958E05CD905C93D08DEB9
            (local_1c8,(BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA *)0x0,local_1b8,
             local_1c0,
             *(MethodInfo **)
              PTR_ClampedDragger_1__ctor_m63E75D205DBC0793EC7958E05CD905C93D08DEB9_RuntimeMethod_var_048dc570
            );
  MinMaxSlider_set_clampedDragger_m87253191753CBB4895B40E2F2BFCA81D0F424D69_inline
            ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,local_1c8,
             (MethodInfo *)0x0);
  local_1d0 = BaseField_1_get_visualInput_mB67A705CA11702E37CE3B69FCB2EDA51A7F9C5BF
                        (local_28,*(MethodInfo **)puVar3);
  local_1d8 = MinMaxSlider_get_clampedDragger_m7A2E1EEF98980C539031A1D3B44DB426E3EFF88B_inline
                        ((MinMaxSlider_t61CC3B1523FCBE362A1ECD7D7D96C9E27F7D22D4 *)local_28,
                         (MethodInfo *)0x0);
  VisualElementExtensions_AddManipulator_m3579CA75D8F76245DC3B7C9F5FCB9B769D69E27D
            (local_1d0,local_1d8,0);
  local_1dc = local_3c;
  *(undefined4 *)(local_28 + 0x494) = local_3c;
  local_1e0 = local_40;
  *(undefined4 *)(local_28 + 0x498) = local_40;
  local_1e4 = local_34;
  local_1e8 = local_38;
  local_1f0 = 0;
  Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
            ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 *)&local_1f0,local_34,local_38,
             (MethodInfo *)0x0);
  local_208 = (undefined4)local_1f0;
  uStack_204 = (undefined4)((ulong)local_1f0 >> 0x20);
  uVar9 = MinMaxSlider_ClampValues_m86382047C10DC7B30A46EE9FBD4AE6B831ABB343(local_208,local_28,0);
  BaseField_1_set_rawValue_m060DFBCFE636B2EA5EB4876E907262C2A2C5538B
            (uVar9,uStack_204,local_28,
             *(undefined8 *)
              PTR_BaseField_1_set_rawValue_m060DFBCFE636B2EA5EB4876E907262C2A2C5538B_RuntimeMethod_var_048dc560
            );
  MinMaxSlider_UpdateDragElementPosition_m76F28F6F974E1B66489983FCE9CF6C471333AAB8(local_28,0);
  return;
}


