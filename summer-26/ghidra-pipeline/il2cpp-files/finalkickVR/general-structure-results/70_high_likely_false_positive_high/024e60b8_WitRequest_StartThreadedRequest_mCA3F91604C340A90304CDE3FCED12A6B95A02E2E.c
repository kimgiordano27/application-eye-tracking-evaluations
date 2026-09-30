/*
FUNCTION_NAME: WitRequest_StartThreadedRequest_mCA3F91604C340A90304CDE3FCED12A6B95A02E2E
ENTRY_POINT: 024e60b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;functionality_data_collection_or_telemetry_hits_21
*/


void WitRequest_StartThreadedRequest_mCA3F91604C340A90304CDE3FCED12A6B95A02E2E
               (WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900 *param_1,void *param_2,
               Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 *param_3,undefined8 param_4)

{
  WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900 *pWVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  String_t *pSVar6;
  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 *pDVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C *pAVar14;
  undefined8 uVar15;
  __8 *extraout_x1;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  undefined8 uVar18;
  undefined8 *local_1d0;
  FinallyHelper<WitRequest_StartThreadedRequest_mCA3F91604C340A90304CDE3FCED12A6B95A02E2E::__8,false>
  aFStack_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342 *local_188;
  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 *local_180;
  byte local_171;
  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 *local_170;
  undefined8 local_168;
  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 *local_160;
  void *local_158;
  byte local_149;
  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 *local_148;
  void *local_140;
  String_t *local_138;
  Il2CppObject *local_130;
  Il2CppObject *local_128;
  String_t *local_120;
  byte local_111;
  undefined8 local_110;
  Il2CppObject *local_108;
  byte local_f9;
  void *local_f8;
  Il2CppObject *local_f0;
  String_t *local_e8;
  Il2CppObject *local_e0;
  Il2CppObject *local_d8;
  long local_d0;
  long local_c8;
  String_t *local_c0;
  Il2CppObject *local_b8;
  long local_b0;
  HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9 *local_a8;
  Il2CppObject *local_a0;
  undefined8 local_98;
  void *local_90;
  Il2CppObject *local_88;
  String_t *local_80;
  Il2CppObject *local_78;
  Il2CppObject *local_70;
  String_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 *local_38;
  void *local_30;
  WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900 *local_28;
  
  puVar5 = Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
  ;
  puVar4 = Method_Unity_Collections_NativeArray<int3>_get_IsCreated__;
  puVar3 = Method_UnityEngine_InputSystem_InputControl<TouchState>_get_value__;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<IEventDispatchingStrategy>_Dispose__;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((WitRequest_StartThreadedRequest_mCA3F91604C340A90304CDE3FCED12A6B95A02E2E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<IDebugDisplaySettingsData>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlFactory<PopupWindow,_PopupWindow_UxmlTraits>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollViewMode>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlFactory<ProgressBar,_AbstractProgressBar_UxmlTraits>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlFactory<RadioButton,_RadioButton_UxmlTraits>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlFactory<RadioButtonGroup,_RadioButtonGroup_UxmlTraits>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    WitRequest_StartThreadedRequest_mCA3F91604C340A90304CDE3FCED12A6B95A02E2E::
    s_Il2CppMethodInitialized = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = (String_t *)0x0;
  local_70 = (Il2CppObject *)0x0;
  local_78 = (Il2CppObject *)0x0;
  local_80 = (String_t *)0x0;
  local_88 = (Il2CppObject *)0x0;
  local_90 = local_30;
  NullCheck(local_30);
  local_98 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(local_90,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_UIElements_UxmlFactory<RadioButton,_RadioButton_UxmlTraits>__ctor__
            );
  local_a0 = (Il2CppObject *)WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(local_98,0)
  ;
  uVar12 = IsInstClass(local_a0,*(Il2CppClass **)puVar4);
  *(undefined8 *)(local_28 + 0xb0) = uVar12;
  pWVar1 = local_28 + 0xb0;
  pvVar13 = (void *)IsInstClass(local_a0,*(Il2CppClass **)puVar4);
  Il2CppCodeGenWriteBarrier((void **)pWVar1,pvVar13);
  local_a8 = *(HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9 **)(local_28 + 0xb0);
  NullCheck(local_a8);
  HttpWebRequest_set_KeepAlive_mF8D4C5D79359F77F6612FC9087EB8575BC31280E_inline
            (local_a8,false,(MethodInfo *)0x0);
  local_b0 = *(long *)(local_28 + 0x98);
  if (local_b0 != 0) {
    local_b8 = *(Il2CppObject **)(local_28 + 0xb0);
    local_c0 = *(String_t **)(local_28 + 0x98);
    NullCheck(local_b8);
    VirtualActionInvoker1<String_t*>::Invoke(10,local_b8,local_c0);
  }
  local_c8 = *(long *)(local_28 + 0x90);
  if (local_c8 != 0) {
    local_d0 = *(long *)(local_28 + 0x98);
    if (local_d0 == 0) {
      local_d8 = *(Il2CppObject **)(local_28 + 0xb0);
      NullCheck(local_d8);
      VirtualActionInvoker1<String_t*>::Invoke(10,local_d8,*(String_t **)puVar5);
    }
    local_e0 = *(Il2CppObject **)(local_28 + 0xb0);
    local_e8 = *(String_t **)(local_28 + 0x90);
    NullCheck(local_e0);
    VirtualActionInvoker1<String_t*>::Invoke(0x11,local_e0,local_e8);
    local_f0 = *(Il2CppObject **)(local_28 + 0xb0);
    local_f8 = *(void **)(local_28 + 0x88);
    NullCheck(local_f8);
    NullCheck(local_f0);
    VirtualActionInvoker1<long>::Invoke
              (0xf,local_f0,(long)(int)*(undefined8 *)((long)local_f8 + 0x18));
  }
  local_f9 = WitRequest_get_IsPost_m952C3BE30455E873E3149F27AC51277FCC698AE6_inline
                       (local_28,(MethodInfo *)0x0);
  local_f9 = local_f9 & 1;
  if (local_f9 != 0) {
    local_108 = *(Il2CppObject **)(local_28 + 0xb0);
    local_110 = *(undefined8 *)(local_28 + 0x98);
    local_111 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(local_110,0);
    local_111 = local_111 & 1;
    if (local_111 == 0) {
      local_78 = local_108;
      local_120 = *(String_t **)(local_28 + 0x98);
      local_80 = local_120;
    }
    else {
      local_70 = local_108;
      local_80 = *(String_t **)puVar5;
    }
    local_88 = local_108;
    NullCheck(local_108);
    VirtualActionInvoker1<String_t*>::Invoke(10,local_88,local_80);
    local_128 = *(Il2CppObject **)(local_28 + 0xb0);
    local_130 = (Il2CppObject *)
                WitRequest_get_AudioEncoding_m3825FDD8CC21AB2E676CB328480407FD450EAE31_inline
                          (local_28,(MethodInfo *)0x0);
    NullCheck(local_130);
    local_138 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,local_130);
    NullCheck(local_128);
    VirtualActionInvoker1<String_t*>::Invoke(0x11,local_128,local_138);
    local_140 = *(void **)(local_28 + 0xb0);
    NullCheck(local_140);
    HttpWebRequest_set_SendChunked_m5B227DE6AC5E5F904BD5146043A4AB80F9671491(local_140,1,0);
  }
  local_148 = local_38;
  NullCheck(local_38);
  local_149 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F
                        (local_148,*(String_t **)puVar3,
                         *(MethodInfo **)
                          Method_System_Collections_Generic_HashSet_Enumerator<IDebugDisplaySettingsData>_get_Current__
                        );
  local_149 = local_149 & 1;
  if (local_149 != 0) {
    local_158 = *(void **)(local_28 + 0xb0);
    local_160 = local_38;
    NullCheck(local_38);
    local_168 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB
                          (local_160,*(String_t **)puVar3,*(MethodInfo **)puVar2);
    NullCheck(local_158);
    HttpWebRequest_set_UserAgent_mF44CBC379376E5598E1C73FD7F1E3B949383F834(local_158,local_168,0);
    local_170 = local_38;
    NullCheck(local_38);
    local_171 = Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC
                          (local_170,*(String_t **)puVar3,
                           *(MethodInfo **)
                            Method_UnityEngine_UIElements_UxmlFactory<PopupWindow,_PopupWindow_UxmlTraits>__ctor__
                          );
    local_171 = local_171 & 1;
  }
  local_180 = local_38;
  NullCheck(local_38);
  local_188 = (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342 *)
              Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9
                        (local_180,
                         *(MethodInfo **)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollViewMode>__ctor__
                        );
  NullCheck(local_188);
  KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22
            (local_188,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__);
  uStack_198 = uStack_1b0;
  local_1a0 = local_1b8;
  local_190 = local_1a8;
  local_1d0 = &local_60;
  local_50 = local_1a8;
  il2cpp::utils::
  Finally<WitRequest_StartThreadedRequest_mCA3F91604C340A90304CDE3FCED12A6B95A02E2E::__8>
            ((utils *)&local_1d0,extraout_x1);
  while (uVar9 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283
                           ((Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 *)&local_60,
                            *(MethodInfo **)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                           ), (uVar9 & 1) != 0) {
    local_68 = (String_t *)
               Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline
                         ((Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 *)&local_60,
                          *(MethodInfo **)
                           Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                         );
    pIVar16 = *(Il2CppObject **)(local_28 + 0xb0);
    NullCheck(pIVar16);
    pvVar13 = (void *)VirtualFuncInvoker0<WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8*>
                      ::Invoke(0xc,pIVar16);
    pDVar7 = local_38;
    pSVar6 = local_68;
    NullCheck(local_38);
    uVar12 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB
                       (pDVar7,pSVar6,*(MethodInfo **)puVar2);
    NullCheck(pvVar13);
    NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0(pvVar13,pSVar6,uVar12,0);
  }
  il2cpp::utils::
  FinallyHelper<WitRequest_StartThreadedRequest_mCA3F91604C340A90304CDE3FCED12A6B95A02E2E::$_8,false>
  ::~FinallyHelper(aFStack_1c8);
  pIVar16 = *(Il2CppObject **)(local_28 + 0xb0);
  iVar10 = WitRequest_get_TimeoutMs_m8499A8087ACFB63C3FD0C9B618E75CC77E58BF6E_inline
                     (local_28,(MethodInfo *)0x0);
  NullCheck(pIVar16);
  VirtualActionInvoker1<int>::Invoke(0x18,pIVar16,iVar10);
  VoiceServiceRequest_WatchMainThreadCallbacks_m4DCA4F78D38719A5A4D8666A40E0861E46921546(local_28,0)
  ;
  pIVar16 = *(Il2CppObject **)(local_28 + 0xb0);
  NullCheck(pIVar16);
  uVar12 = VirtualFuncInvoker0<String_t*>::Invoke(9,pIVar16);
  bVar8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                    (uVar12,*(undefined8 *)puVar5,0);
  if ((bVar8 & 1) == 0) {
    pIVar16 = *(Il2CppObject **)(local_28 + 0xb0);
    NullCheck(pIVar16);
    uVar12 = VirtualFuncInvoker0<String_t*>::Invoke(9,pIVar16);
    bVar8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                      (uVar12,*(undefined8 *)
                               Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                       ,0);
    if ((bVar8 & 1) == 0) {
      WitRequest_StartResponse_m3DFCA46054F25696F70437801119A63B68CCEF88(local_28,0);
      return;
    }
  }
  pIVar16 = *(Il2CppObject **)(local_28 + 0xb0);
  pAVar14 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__
                      );
  AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC
            (pAVar14,local_28,
             *(undefined8 *)
              Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__);
  pIVar17 = *(Il2CppObject **)(local_28 + 0xb0);
  NullCheck(pIVar16);
  pIVar16 = (Il2CppObject *)
            VirtualFuncInvoker2<Il2CppObject*,AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*,Il2CppObject*>
            ::Invoke(0x1c,pIVar16,pAVar14,pIVar17);
  NullCheck(pIVar16);
  uVar12 = InterfaceFuncInvoker0<WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8*>::Invoke
                     (1,*(Il2CppClass **)
                         Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__,
                      pIVar16);
  uVar15 = il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_UIElements_UxmlFactory<ProgressBar,_AbstractProgressBar_UxmlTraits>__ctor__
                     );
  WaitOrTimerCallback__ctor_m846D9468BFEEFAC9C4F4E56FA63276A6620C7175
            (uVar15,local_28,
             *(undefined8 *)
              Method_UnityEngine_UIElements_UxmlFactory<RadioButtonGroup,_RadioButtonGroup_UxmlTraits>__ctor__
             ,0);
  uVar18 = *(undefined8 *)(local_28 + 0xb0);
  uVar11 = WitRequest_get_TimeoutMs_m8499A8087ACFB63C3FD0C9B618E75CC77E58BF6E_inline
                     (local_28,(MethodInfo *)0x0);
  ThreadPool_RegisterWaitForSingleObject_m40964AF3AA4AEE22D1CCB45CBC8C2C130CEB9441
            (uVar12,uVar15,uVar18,uVar11,1,0);
  return;
}


