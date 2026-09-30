/*
FUNCTION_NAME: OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
ENTRY_POINT: 02da1470
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
               (long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  __1 *extraout_x1;
  Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *pDVar5;
  undefined1 auStack_5f8 [88];
  undefined1 auStack_5a0 [16];
  undefined1 local_590;
  void *local_548;
  void *local_540;
  byte local_532;
  byte local_531;
  undefined8 local_530;
  undefined1 auStack_528 [88];
  undefined8 local_4d0 [11];
  byte local_471;
  undefined8 local_470;
  undefined1 auStack_468 [88];
  undefined1 auStack_410 [8];
  undefined8 local_408;
  long local_3b8;
  undefined1 auStack_3b0 [88];
  long local_358 [13];
  undefined1 auStack_2f0 [96];
  undefined1 auStack_290 [96];
  Enumerator_t18CD92025777A3B55BFD2926965113BE92AB96DB *local_230;
  FinallyHelper<OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::__1,false>
  aFStack_228 [16];
  undefined1 auStack_218 [120];
  undefined1 auStack_1a0 [120];
  Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *local_128;
  void *local_120;
  ulong uStack_118;
  KeyValuePair_2_tC79C59082E4BB0A2F0216111C3B1199F6986DEC6 aKStack_110 [96];
  Enumerator_t18CD92025777A3B55BFD2926965113BE92AB96DB aEStack_b0 [120];
  undefined8 local_38;
  byte local_29;
  long local_28;
  
  puVar1 = 
  Method_System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_System_Collections_IEnumerator_Reset__
  ;
  local_29 = param_2 & 1;
  local_38 = param_3;
  local_28 = param_1;
  if ((OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Dynamic_ExpandoObject_MetaExpando_<>c__DisplayClass3_0_<BindInvokeMember>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Dynamic_ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Dynamic_ExpandoObject_ValueCollection_<GetEnumerator>d__15_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Services_Analytics_Internal_GeoAPI_WebRequestTaskWrapper_<>c__DisplayClass2_0_<GetAwaiter>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_<Build>b__4_0__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_<Build>b__4_1__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateMSAA>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::
    s_Il2CppMethodInitialized = 1;
  }
  memset(aEStack_b0,0,0x78);
  memset(aKStack_110,0,0x60);
  local_120 = (void *)0x0;
  uStack_118 = 0;
  local_128 = *(Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 **)(local_28 + 0xd8);
  NullCheck(local_128);
  Dictionary_2_GetEnumerator_mC2090C5D2614A47FB2E19B716A9484FC992B0126
            (local_128,
             *(MethodInfo **)
              Method_System_Dynamic_ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6_System_Collections_IEnumerator_Reset__
            );
  memcpy(auStack_1a0,auStack_218,0x78);
  memcpy(aEStack_b0,auStack_1a0,0x78);
  local_230 = aEStack_b0;
  il2cpp::utils::
  Finally<OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::__1>
            ((utils *)&local_230,extraout_x1);
  while (uVar4 = Enumerator_MoveNext_mCF96572801040FB4C552BB1594B30835288D5E9E
                           (aEStack_b0,
                            *(MethodInfo **)
                             Method_Unity_Services_Analytics_Internal_GeoAPI_WebRequestTaskWrapper_<>c__DisplayClass2_0_<GetAwaiter>b__0__
                           ), (uVar4 & 1) != 0) {
    Enumerator_get_Current_m486B23BCCA52487F3ED264E187D6665DE82613D2_inline
              (aEStack_b0,
               *(MethodInfo **)
                Method_UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_<Build>b__4_0__);
    memcpy(auStack_290,auStack_2f0,0x60);
    memcpy(aKStack_110,auStack_290,0x60);
    KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
              (aKStack_110,*(MethodInfo **)puVar1);
    memcpy(local_358,auStack_3b0,0x58);
    local_3b8 = local_358[0];
    if (local_358[0] != 0) {
      KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
                (aKStack_110,*(MethodInfo **)puVar1);
      memcpy(auStack_410,auStack_468,0x58);
      local_470 = local_408;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      local_471 = OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor__Invoke(local_470,0);
      local_471 = local_471 & 1;
      KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
                (aKStack_110,*(MethodInfo **)puVar1);
      memcpy(local_4d0,auStack_528,0x58);
      local_530 = local_4d0[0];
      local_531 = OVRPlugin_DestroyInsightTriangleMesh_m47FE862A94B72A6A0123B456373C6E96F424CA5A
                            (local_4d0[0],0);
      local_531 = local_531 & 1;
      local_532 = local_29 & 1;
      if (local_532 != 0) {
        local_540 = *(void **)(local_28 + 0xe0);
        il2cpp_codegen_initobj(&local_120,0x10);
        local_548 = (void *)KeyValuePair_2_get_Key_m4F7730517DB9A039D81424D051239AAAEF88DF6B_inline
                                      (aKStack_110,
                                       *(MethodInfo **)
                                        Method_UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_<Build>b__4_1__
                                      );
        local_120 = local_548;
        Il2CppCodeGenWriteBarrier(&local_120,local_548);
        KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
                  (aKStack_110,*(MethodInfo **)puVar1);
        memcpy(auStack_5a0,auStack_5f8,0x58);
        pvVar2 = local_120;
        uStack_118 = CONCAT71(uStack_118._1_7_,local_590) & 0xffffffffffffff01;
        uVar3 = uStack_118;
        NullCheck(local_540);
        List_1_Add_m9343133A0BBC243F36C058299EF7BF2A09BB84AC_inline
                  (local_540,pvVar2,uVar3,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateMSAA>b__0__
                  );
      }
    }
  }
  il2cpp::utils::
  FinallyHelper<OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::$_1,false>
  ::~FinallyHelper(aFStack_228);
  pDVar5 = *(Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 **)(local_28 + 0xd8);
  NullCheck(pDVar5);
  Dictionary_2_Clear_m9203852A0D46E7EA5D26231089086EC9C6BC8407
            (pDVar5,*(MethodInfo **)
                     Method_System_Dynamic_ExpandoObject_MetaExpando_<>c__DisplayClass3_0_<BindInvokeMember>b__0__
            );
  return;
}


