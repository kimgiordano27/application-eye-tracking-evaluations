/*
FUNCTION_NAME: BaseSlider_1__ctor_mC58F6023BE2FB9AB315CF345356B14AB9A274A15_gshared
ENTRY_POINT: 02299f94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 134
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


void BaseSlider_1__ctor_mC58F6023BE2FB9AB315CF345356B14AB9A274A15_gshared
               (float param_1,BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *param_2,
               String_t *param_3,undefined8 ****param_4,undefined8 ****param_5,int param_6,
               long param_7)

{
  Il2CppClass *pIVar1;
  undefined8 uVar2;
  MethodInfo *pMVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *local_4c0;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_4b8;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_4b0;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_4a8;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_4a0;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_498;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *local_490;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_488;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_480;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_478;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_470;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_468;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_460;
  int local_454;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_450;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_448;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_440;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_438;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_430;
  int local_424;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_420;
  undefined8 *local_418;
  undefined4 local_40c;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_408;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_400;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_3f8;
  undefined8 *local_3f0;
  int local_3e4;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_3e0;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *local_3d8;
  undefined8 *local_3d0;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_3c8;
  int local_3bc;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_3b8;
  int local_3ac;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_3a8;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_3a0;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_398;
  undefined8 *local_390;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_388;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_380;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_378;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_370;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_368;
  ClampedDragger_1_t973E90F6E05885A35FDE10C29188A3EE27255F64 *local_360;
  ClampedDragger_1_t973E90F6E05885A35FDE10C29188A3EE27255F64 *local_358;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_350;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_348;
  int local_33c;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_338;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_330;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_328;
  EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C *local_320;
  Il2CppObject *local_318;
  EventCallback_1_tF39C691B05308835A836D33741E4656809B44C3C *local_310;
  int local_304;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_300;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_2f8;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_2f0;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_2e8;
  int local_2dc;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_2d8;
  MethodInfo *local_2d0;
  void *local_2c8;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_2c0;
  undefined8 ***local_2b8;
  void *local_2b0;
  undefined8 *local_2a8;
  void *local_2a0;
  BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *local_298;
  undefined8 ***local_290;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_288;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_280;
  int local_274;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_270;
  String_t *local_268;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_260;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_258;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_250;
  int local_244;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_240;
  int local_234;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_230;
  int local_224;
  undefined8 *local_220;
  undefined8 local_218;
  void *local_210;
  undefined8 local_208;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_200;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_1f8;
  EventCallback_1_tF39C691B05308835A836D33741E4656809B44C3C *local_1f0;
  EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  ClampedDragger_1_t973E90F6E05885A35FDE10C29188A3EE27255F64 *local_1c8;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_1c0;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *local_190;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *local_188;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_180;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_178;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_170;
  undefined8 local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_148;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_118;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_110;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_108;
  undefined8 local_100;
  void *local_f8;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *local_f0;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *local_e8;
  undefined8 local_e0;
  void *local_d8;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_d0;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_c8;
  float local_c0;
  int local_bc;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  String_t *local_90;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_88;
  void *local_80;
  undefined8 *local_78;
  void *local_70;
  undefined8 *local_68;
  uint local_5c;
  long local_58;
  float local_50;
  int local_4c;
  undefined8 ***local_48;
  undefined8 ***local_40;
  String_t *local_38;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  local_58 = param_7;
  local_50 = param_1;
  local_4c = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  if ((BaseSlider_1__ctor_mC58F6023BE2FB9AB315CF345356B14AB9A274A15_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpLinkTagEvent>_Init__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_Awake__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_add_WhenPointerEventRaised__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_get_PointableElement__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_remove_WhenPointerEventRaised__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
              );
    BaseSlider_1__ctor_mC58F6023BE2FB9AB315CF345356B14AB9A274A15_gshared::s_Il2CppMethodInitialized
         = 1;
  }
  local_224 = 1;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),1);
  local_5c = il2cpp_codegen_sizeof(pIVar1);
  local_68 = (undefined8 *)((long)&local_4c0 - ((ulong)local_5c + 0xf & 0x1fffffff0));
  local_70 = (void *)((long)local_68 - ((ulong)local_5c + 0xf & 0x1fffffff0));
  local_78 = (undefined8 *)((long)local_70 - ((ulong)local_5c + 0xf & 0x1fffffff0));
  local_80 = (void *)((long)local_78 - ((ulong)local_5c + 0xf & 0x1fffffff0));
  local_240 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_88 = (FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *)0x0;
  local_288 = local_30;
  local_274 = 0;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0);
  uVar2 = il2cpp_rgctx_field(pIVar1,9);
  il2cpp_codegen_write_instance_field_data<bool>(local_288,uVar2,local_274);
  local_280 = local_30;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_274);
  uVar2 = il2cpp_rgctx_field(pIVar1,10);
  il2cpp_codegen_write_instance_field_data<bool>(local_280,uVar2,local_224);
  local_270 = local_30;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_274);
  uVar2 = il2cpp_rgctx_field(pIVar1,0xe);
  il2cpp_codegen_write_instance_field_data<bool>(local_270,uVar2,local_274);
  local_90 = local_38;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x17);
  il2cpp_codegen_runtime_class_init_inline(pIVar1);
  local_260 = local_30;
  local_268 = local_90;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x18);
  BaseField_1__ctor_m69F5F9BA9F0968A515082361B195B40C42FC02E3(local_260,local_268,local_240,pMVar3);
  local_244 = 0x16;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x16);
  il2cpp_codegen_runtime_class_init_inline(pIVar1);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_244);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar1);
  local_98 = *puVar4;
  NullCheck(local_30);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_30,local_98,local_240);
  NullCheck(local_30);
  local_258 = local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x19);
  local_a0 = (void *)BaseField_1_get_labelElement_m6931D331B2E0F91AE24A1898F7859E4CB5A6C099_inline
                               (local_258,pMVar3);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_244);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_a8 = *(undefined8 *)(lVar5 + 8);
  NullCheck(local_a0);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_a0,local_a8,local_240);
  NullCheck(local_30);
  local_250 = local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x1a);
  local_b0 = (void *)BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                               (local_250,pMVar3);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_244);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_b8 = *(undefined8 *)(lVar5 + 0x10);
  NullCheck(local_b0);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_b0,local_b8,local_240);
  local_bc = local_4c;
  local_230 = local_30;
  local_234 = local_4c;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x1b);
  BaseSlider_1_set_direction_m2652FE7EB8E544F07495992F18DD55B389CDC029
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_230,local_234,pMVar3);
  local_c0 = local_50;
  VirtualActionInvoker1<float>::Invoke(0x7c,(Il2CppObject *)local_30,local_50);
  local_220 = local_68;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_224);
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar1);
  if ((uVar6 & 1) == 0) {
    local_290 = &local_40;
  }
  else {
    local_290 = local_40;
  }
  il2cpp_codegen_memcpy(local_220,local_290,(ulong)local_5c);
  local_298 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),1);
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar1);
  if ((uVar6 & 1) == 0) {
    local_2a0 = (void *)*local_68;
  }
  else {
    local_2a0 = (void *)il2cpp_codegen_memcpy(local_70,local_68,(ulong)local_5c);
  }
  local_2b0 = local_2a0;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x1d);
  BaseSlider_1_set_lowValue_m006FEBAAA1D97EFCEB7A253ADD60A743C6584772(local_298,local_2b0,pMVar3);
  local_2a8 = local_78;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),1);
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar1);
  if ((uVar6 & 1) == 0) {
    local_2b8 = &local_48;
  }
  else {
    local_2b8 = local_48;
  }
  il2cpp_codegen_memcpy(local_2a8,local_2b8,(ulong)local_5c);
  local_2c0 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),1);
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar1);
  if ((uVar6 & 1) == 0) {
    local_2c8 = (void *)*local_78;
  }
  else {
    local_2c8 = (void *)il2cpp_codegen_memcpy(local_80,local_78,(ulong)local_5c);
  }
  local_4c0 = local_2c8;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x1e);
  BaseSlider_1_set_highValue_m2B98CCB9B3B35244718227A3D529CF2D62DAD058(local_2c0,local_4c0,pMVar3);
  NullCheck(local_30);
  local_40c = 1;
  local_2d0 = (MethodInfo *)0x0;
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(local_30);
  local_418 = (undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_c8 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_c8,local_2d0);
  local_d0 = local_c8;
  NullCheck(local_c8);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_d0,*(undefined8 *)
                       Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_remove_WhenPointerEventRaised__
             ,local_2d0);
  local_4b0 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_4b8 = local_d0;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x1f);
  BaseSlider_1_set_dragContainer_m0DD3722333681AE90B24BE069727216B079A9B83_inline
            (local_4b0,local_4b8,pMVar3);
  local_4a8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_33c = 0x20;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x20);
  local_d8 = (void *)BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                               (local_4a8,pMVar3);
  local_3bc = 0x16;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x16);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_e0 = *(undefined8 *)(lVar5 + 0x28);
  NullCheck(local_d8);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_d8,local_e0,local_2d0);
  local_4a0 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_33c);
  local_e8 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
             BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                       (local_4a0,pMVar3);
  local_3f0 = (undefined8 *)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__;
  local_490 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__
                        );
  local_498 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_3e4 = 0x21;
  local_f0 = local_490;
  lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x21);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (local_490,(Il2CppObject *)local_498,lVar5,local_2d0);
  NullCheck(local_e8);
  local_3d0 = (undefined8 *)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__;
  local_304 = 0;
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (local_e8,local_f0,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
  NullCheck(local_30);
  local_488 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x1a);
  local_f8 = (void *)BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                               ((BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *)local_488,
                                pMVar3);
  local_480 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_33c);
  local_100 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                        (local_480,pMVar3);
  NullCheck(local_f8);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_f8,local_100,local_2d0);
  local_108 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
              il2cpp_codegen_object_new((Il2CppClass *)*local_418);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_108,local_2d0);
  local_110 = local_108;
  NullCheck(local_108);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_110,
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
             ,local_2d0);
  local_118 = local_110;
  NullCheck(local_110);
  VisualElement_set_usageHints_mD317223075C8C708C1DB66CF90E81C5F9DE4C5B0(local_118,8,local_2d0);
  local_470 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_478 = local_118;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x22);
  BaseSlider_1_set_trackElement_mBA9AF3EACA73C10AD02324056C04778978539545_inline
            (local_470,local_478,pMVar3);
  local_468 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_454 = 0x23;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x23);
  local_120 = (void *)BaseSlider_1_get_trackElement_mE54F1716397F79773786BE2C6E0CAE3AF2FFD3FC_inline
                                (local_468,pMVar3);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_3bc);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_128 = *(undefined8 *)(lVar5 + 0x30);
  NullCheck(local_120);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_120,local_128,local_2d0);
  local_460 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_33c);
  local_130 = (void *)BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                                (local_460,pMVar3);
  local_450 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_454);
  local_138 = BaseSlider_1_get_trackElement_mE54F1716397F79773786BE2C6E0CAE3AF2FFD3FC_inline
                        (local_450,pMVar3);
  NullCheck(local_130);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_130,local_138,local_2d0);
  local_140 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
              il2cpp_codegen_object_new((Il2CppClass *)*local_418);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_140,local_2d0);
  local_148 = local_140;
  NullCheck(local_140);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_148,
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_add_WhenPointerEventRaised__
             ,local_2d0);
  local_440 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_448 = local_148;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x24);
  BaseSlider_1_set_dragBorderElement_m96F851BFF940904402E2EF4CFC77F1CE1ECC1FAA_inline
            (local_440,local_448,pMVar3);
  local_438 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_424 = 0x25;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x25);
  local_150 = (void *)BaseSlider_1_get_dragBorderElement_m39041CF5BB090006F850CE3D165FE0358E7F9BD0_inline
                                (local_438,pMVar3);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_3bc);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_158 = *(undefined8 *)(lVar5 + 0x40);
  NullCheck(local_150);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_150,local_158,local_2d0);
  local_430 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_33c);
  local_160 = (void *)BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                                (local_430,pMVar3);
  local_420 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_424);
  local_168 = BaseSlider_1_get_dragBorderElement_m39041CF5BB090006F850CE3D165FE0358E7F9BD0_inline
                        (local_420,pMVar3);
  NullCheck(local_160);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_160,local_168,local_2d0);
  local_170 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
              il2cpp_codegen_object_new((Il2CppClass *)*local_418);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_170,local_2d0);
  local_178 = local_170;
  NullCheck(local_170);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (local_178,
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_get_PointableElement__
             ,local_2d0);
  local_180 = local_178;
  NullCheck(local_178);
  VisualElement_set_usageHints_mD317223075C8C708C1DB66CF90E81C5F9DE4C5B0
            (local_180,local_40c,local_2d0);
  local_400 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_408 = local_180;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x26);
  BaseSlider_1_set_dragElement_m7C1EAC49E11A2BFC78CACAB3829FE68D541DBC27_inline
            (local_400,local_408,pMVar3);
  local_3f8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_3ac = 0x27;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x27);
  local_188 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
              BaseSlider_1_get_dragElement_m075CD1029F96F95EE53EC3C01891323774E7E9B0_inline
                        (local_3f8,pMVar3);
  local_3d8 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
              il2cpp_codegen_object_new((Il2CppClass *)*local_3f0);
  local_3e0 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_190 = local_3d8;
  lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_3e4);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (local_3d8,(Il2CppObject *)local_3e0,lVar5,local_2d0);
  NullCheck(local_188);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (local_188,local_190,local_304,(MethodInfo *)*local_3d0);
  local_3c8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_3ac);
  local_198 = (void *)BaseSlider_1_get_dragElement_m075CD1029F96F95EE53EC3C01891323774E7E9B0_inline
                                (local_3c8,pMVar3);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_3bc);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_1a0 = *(undefined8 *)(lVar5 + 0x38);
  NullCheck(local_198);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_198,local_1a0,local_2d0);
  local_3b8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_33c);
  local_1a8 = (void *)BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                                (local_3b8,pMVar3);
  local_3a8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_3ac);
  local_1b0 = BaseSlider_1_get_dragElement_m075CD1029F96F95EE53EC3C01891323774E7E9B0_inline
                        (local_3a8,pMVar3);
  NullCheck(local_1a8);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(local_1a8,local_1b0,local_2d0);
  local_390 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  local_398 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                        );
  local_3a0 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_1b8 = local_398;
  uVar2 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x28);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(local_398,local_3a0,uVar2,local_2d0);
  local_380 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
              il2cpp_codegen_object_new((Il2CppClass *)*local_390);
  local_388 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_1c0 = local_380;
  uVar2 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x29);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(local_380,local_388,uVar2,local_2d0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0xe);
  local_360 = (ClampedDragger_1_t973E90F6E05885A35FDE10C29188A3EE27255F64 *)
              il2cpp_codegen_object_new(pIVar1);
  local_378 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_370 = local_1b8;
  local_368 = local_1c0;
  local_1c8 = local_360;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x2a);
  ClampedDragger_1__ctor_mB6000EF6E44DD4ED0BBF02BAAD1EC9EF50FF73B8
            (local_360,local_378,local_370,local_368,pMVar3);
  local_350 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_358 = local_1c8;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x2b);
  BaseSlider_1_set_clampedDragger_m9216151AD4BBEEB4BA6B00F05FFB7F04179DEA49_inline
            (local_350,local_358,pMVar3);
  local_348 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_33c);
  local_1d0 = (void *)BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                                (local_348,pMVar3);
  NullCheck(local_1d0);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0
            (local_1d0,local_304,local_2d0);
  local_338 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_33c);
  local_1d8 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                        (local_338,pMVar3);
  local_330 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x2c);
  local_1e0 = BaseSlider_1_get_clampedDragger_m81DB5D2B7DB0C58573FB05D6A6B79C14A1C4D529_inline
                        (local_330,pMVar3);
  VisualElementExtensions_AddManipulator_m3579CA75D8F76245DC3B7C9F5FCB9B769D69E27D
            (local_1d8,local_1e0,local_2d0);
  local_320 = (EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_Awake__
                        );
  local_328 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_1e8 = local_320;
  lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x2d);
  EventCallback_1__ctor_m9784A8620A12F32140DB764C2DAC0CD4AE9A91CF
            (local_320,(Il2CppObject *)local_328,lVar5,local_2d0);
  NullCheck(local_30);
  CallbackEventHandler_RegisterCallback_TisKeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C_m046581E97BE6F7CECB84314566EB164BC15C9A66
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)local_30,local_1e8,
             local_304,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerUpLinkTagEvent>_Init__);
  local_310 = (EventCallback_1_tF39C691B05308835A836D33741E4656809B44C3C *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                        );
  local_318 = (Il2CppObject *)local_30;
  local_1f0 = local_310;
  lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x2e);
  EventCallback_1__ctor_m3614A719AC839708929B273F4E694C78B0825BF2
            (local_310,local_318,lVar5,local_2d0);
  NullCheck(local_30);
  CallbackEventHandler_RegisterCallback_TisNavigationMoveEvent_t70F4AAAE0B5287449430A2A7A2DC78A2AF1364DF_m7E875C04D0CAF6D09162404E056A982D2361AA56
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)local_30,local_1f0,
             local_304,
             *(MethodInfo **)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
            );
  local_300 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0xd);
  BaseSlider_1_UpdateTextFieldVisibility_m7D9697F95D96F22D07E12DBE998ECC3A322AA2C7(local_300,pMVar3)
  ;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x2f);
  local_2f0 = (FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *)
              il2cpp_codegen_object_new(pIVar1);
  local_2f8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_1f8 = local_2f0;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x30);
  FieldMouseDragger_1__ctor_m2C8A088664476F3D34682BF71DD9B74187D284F8
            (local_2f0,(Il2CppObject *)local_2f8,pMVar3);
  local_88 = local_1f8;
  local_200 = local_1f8;
  NullCheck(local_30);
  local_2e8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  local_2dc = 0x19;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x19);
  local_208 = BaseField_1_get_labelElement_m6931D331B2E0F91AE24A1898F7859E4CB5A6C099_inline
                        ((BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *)local_2e8,pMVar3);
  NullCheck(local_200);
  BaseFieldMouseDragger_SetDragZone_mA2AD28007BAB5E6A75EEC40C3FBA69A42AA5A0DF
            (local_200,local_208,local_2d0);
  NullCheck(local_30);
  local_2d8 = (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)local_30;
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),local_2dc);
  local_210 = (void *)BaseField_1_get_labelElement_m6931D331B2E0F91AE24A1898F7859E4CB5A6C099_inline
                                ((BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *)local_2d8,
                                 pMVar3);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_58 + 0x20) + 0xc0),0x17);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_218 = *(undefined8 *)(lVar5 + 0x20);
  NullCheck(local_210);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_210,local_218,local_2d0);
  lVar5 = tpidr_el0;
  lVar5 = *(long *)(lVar5 + 0x28) - local_28;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


