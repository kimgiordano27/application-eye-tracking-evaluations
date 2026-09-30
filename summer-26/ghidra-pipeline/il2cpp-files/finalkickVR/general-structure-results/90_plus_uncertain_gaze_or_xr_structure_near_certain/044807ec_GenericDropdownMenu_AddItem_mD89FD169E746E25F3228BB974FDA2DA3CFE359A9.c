/*
FUNCTION_NAME: GenericDropdownMenu_AddItem_mD89FD169E746E25F3228BB974FDA2DA3CFE359A9
ENTRY_POINT: 044807ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


MenuItem_tAD6168D43164235B4175072CB311D521AA55C5C5 *
GenericDropdownMenu_AddItem_mD89FD169E746E25F3228BB974FDA2DA3CFE359A9
          (long param_1,void *param_2,byte param_3,byte param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  List_1_t61096569E456190C1D695A123917128C0E1FB932 *pLVar9;
  undefined8 uVar10;
  int local_7c;
  MenuItem_tAD6168D43164235B4175072CB311D521AA55C5C5 *local_78;
  
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pointerId__;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  if ((GenericDropdownMenu_AddItem_mD89FD169E746E25F3228BB974FDA2DA3CFE359A9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pointerId__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>_get_Value__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_Add_m676B5E280EB360D5D1D8527F095A6EBB52A26A1B_RuntimeMethod_var_048d94e0);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_get_Count_mE1F64F80BE7E21C3993E3A376EB5D4CDAF9547A1_RuntimeMethod_var_048d94c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_get_Item_mE014623ADDD0C4D695142EEAB0BF328DD1056D57_RuntimeMethod_var_048d94c8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MenuItem_tAD6168D43164235B4175072CB311D521AA55C5C5_il2cpp_TypeInfo_var_048d94e8);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
              );
    GenericDropdownMenu_AddItem_mD89FD169E746E25F3228BB974FDA2DA3CFE359A9::s_Il2CppMethodInitialized
         = 1;
  }
  bVar3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
  if ((bVar3 & 1) == 0) {
    NullCheck(param_2);
    bVar3 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC
                      (param_2,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                       ,0);
    bVar3 = bVar3 & 1;
  }
  else {
    bVar3 = 1;
  }
  if (bVar3 == 0) {
    local_7c = 0;
    while( true ) {
      pLVar9 = *(List_1_t61096569E456190C1D695A123917128C0E1FB932 **)(param_1 + 0x10);
      NullCheck(pLVar9);
      iVar4 = List_1_get_Count_mE1F64F80BE7E21C3993E3A376EB5D4CDAF9547A1_inline
                        (pLVar9,*(MethodInfo **)
                                 PTR_List_1_get_Count_mE1F64F80BE7E21C3993E3A376EB5D4CDAF9547A1_RuntimeMethod_var_048d94c0
                        );
      if (iVar4 <= local_7c) break;
      pLVar9 = *(List_1_t61096569E456190C1D695A123917128C0E1FB932 **)(param_1 + 0x10);
      NullCheck(pLVar9);
      pvVar6 = (void *)List_1_get_Item_mE014623ADDD0C4D695142EEAB0BF328DD1056D57
                                 (pLVar9,local_7c,
                                  *(MethodInfo **)
                                   PTR_List_1_get_Item_mE014623ADDD0C4D695142EEAB0BF328DD1056D57_RuntimeMethod_var_048d94c8
                                 );
      NullCheck(pvVar6);
      bVar3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                        (param_2,*(undefined8 *)((long)pvVar6 + 0x10),0);
      if ((bVar3 & 1) != 0) {
        return (MenuItem_tAD6168D43164235B4175072CB311D521AA55C5C5 *)0x0;
      }
      local_7c = il2cpp_codegen_add<int,int>(local_7c,1);
    }
    pvVar6 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
    VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar6);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar10 = *(undefined8 *)(lVar7 + 8);
    NullCheck(pvVar6);
    VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar6,uVar10,0);
    NullCheck(pvVar6);
    VisualElement_SetEnabled_mE53446BEB2C83C4D350D9BEDDAADBE9A174EAA5B(pvVar6,param_4 & 1,0);
    NullCheck(pvVar6);
    VisualElement_set_userData_mBE9192EE3470BC5B061DFB86B7A38C97DB816F66(pvVar6,param_5,0);
    pvVar8 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
    VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar8,0);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    NullCheck(pvVar8);
    VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar8,uVar10,0);
    NullCheck(pvVar8);
    VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar8,1,0);
    NullCheck(pvVar6);
    VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar6,pvVar8,0);
    if ((param_3 & 1) != 0) {
      NullCheck(pvVar6);
      uVar5 = VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E(pvVar6);
      NullCheck(pvVar6);
      VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB(pvVar6,uVar5 | 8,0);
    }
    pvVar8 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_System_Nullable<InputUserAccountHandle>_get_Value__);
    Label__ctor_m83EBFB8426823A52FD005780264806926C731009(pvVar8,param_2);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar10 = *(undefined8 *)(lVar7 + 0x10);
    NullCheck(pvVar8);
    VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar8,uVar10,0);
    NullCheck(pvVar8);
    VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar8,1,0);
    NullCheck(pvVar6);
    VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar6,pvVar8,0);
    pvVar8 = *(void **)(param_1 + 0x28);
    NullCheck(pvVar8);
    VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar8,pvVar6,0);
    local_78 = (MenuItem_tAD6168D43164235B4175072CB311D521AA55C5C5 *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           PTR_MenuItem_tAD6168D43164235B4175072CB311D521AA55C5C5_il2cpp_TypeInfo_var_048d94e8
                         );
    MenuItem__ctor_m7757A16F162C3E2E84D5E39719825B254F35D052(local_78,0);
    NullCheck(local_78);
    *(void **)(local_78 + 0x10) = param_2;
    Il2CppCodeGenWriteBarrier((void **)(local_78 + 0x10),param_2);
    NullCheck(local_78);
    *(void **)(local_78 + 0x18) = pvVar6;
    Il2CppCodeGenWriteBarrier((void **)(local_78 + 0x18),pvVar6);
    pLVar9 = *(List_1_t61096569E456190C1D695A123917128C0E1FB932 **)(param_1 + 0x10);
    NullCheck(pLVar9);
    List_1_Add_m676B5E280EB360D5D1D8527F095A6EBB52A26A1B_inline
              (pLVar9,local_78,
               *(MethodInfo **)
                PTR_List_1_Add_m676B5E280EB360D5D1D8527F095A6EBB52A26A1B_RuntimeMethod_var_048d94e0)
    ;
  }
  else {
    GenericDropdownMenu_AddSeparator_m11D1084306510493D47C59C2BBD02F62AE4BD82F(param_1,param_2,0);
    local_78 = (MenuItem_tAD6168D43164235B4175072CB311D521AA55C5C5 *)0x0;
  }
  return local_78;
}


