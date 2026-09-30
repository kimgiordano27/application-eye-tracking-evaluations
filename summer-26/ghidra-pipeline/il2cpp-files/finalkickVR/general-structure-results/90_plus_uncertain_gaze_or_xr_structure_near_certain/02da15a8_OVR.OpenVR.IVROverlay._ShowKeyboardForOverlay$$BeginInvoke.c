/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._ShowKeyboardForOverlay$$BeginInvoke
ENTRY_POINT: 02da15a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVR_OpenVR_IVROverlay__ShowKeyboardForOverlay__BeginInvoke(undefined8 param_1,__1 *param_2)

{
  uint uVar1;
  Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *pDVar2;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_stack_00000058;
  undefined4 uStack000000000000006c;
  byte in_stack_00000110;
  void *in_stack_00000158;
  void *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_00000298;
  long in_stack_00000348;
  
  il2cpp::utils::
  Finally<OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::__1>
            ((utils *)&stack0x00000470,param_2);
  while (uVar1 = Enumerator_MoveNext_mCF96572801040FB4C552BB1594B30835288D5E9E
                           ((Enumerator_t18CD92025777A3B55BFD2926965113BE92AB96DB *)
                            (unaff_x29 + -0x90),
                            *(MethodInfo **)
                             Method_Unity_Services_Analytics_Internal_GeoAPI_WebRequestTaskWrapper_<>c__DisplayClass2_0_<GetAwaiter>b__0__
                           ), (uVar1 & 1) != 0) {
    Enumerator_get_Current_m486B23BCCA52487F3ED264E187D6665DE82613D2_inline
              ((Enumerator_t18CD92025777A3B55BFD2926965113BE92AB96DB *)(unaff_x29 + -0x90),
               *(MethodInfo **)
                Method_UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_<Build>b__4_0__);
    memcpy(&stack0x00000410,&stack0x000003b0,0x60);
    memcpy((KeyValuePair_2_tC79C59082E4BB0A2F0216111C3B1199F6986DEC6 *)(unaff_x29 + -0xf0),
           &stack0x00000410,0x60);
    KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
              ((KeyValuePair_2_tC79C59082E4BB0A2F0216111C3B1199F6986DEC6 *)(unaff_x29 + -0xf0),
               (MethodInfo *)*in_stack_00000058);
    memcpy(&stack0x00000348,&stack0x000002f0,0x58);
    if (in_stack_00000348 != 0) {
      KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
                ((KeyValuePair_2_tC79C59082E4BB0A2F0216111C3B1199F6986DEC6 *)(unaff_x29 + -0xf0),
                 (MethodInfo *)*in_stack_00000058);
      memcpy(&stack0x00000290,&stack0x00000238,0x58);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor__Invoke(in_stack_00000298,0);
      KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
                ((KeyValuePair_2_tC79C59082E4BB0A2F0216111C3B1199F6986DEC6 *)(unaff_x29 + -0xf0),
                 (MethodInfo *)*in_stack_00000058);
      memcpy(&stack0x000001d0,&stack0x00000178,0x58);
      in_stack_00000170 = in_stack_000001d0;
      in_stack_00000168._7_1_ =
           OVRPlugin_DestroyInsightTriangleMesh_m47FE862A94B72A6A0123B456373C6E96F424CA5A
                     (in_stack_000001d0,0);
      in_stack_00000168._7_1_ = in_stack_00000168._7_1_ & 1;
      in_stack_00000168._6_1_ = *(byte *)(unaff_x29 + -9) & 1;
      if (in_stack_00000168._6_1_ != 0) {
        in_stack_00000160 = *(void **)(*(long *)(unaff_x29 + -8) + 0xe0);
        il2cpp_codegen_initobj((void *)(unaff_x29 + -0x100),0x10);
        in_stack_00000158 =
             (void *)KeyValuePair_2_get_Key_m4F7730517DB9A039D81424D051239AAAEF88DF6B_inline
                               ((KeyValuePair_2_tC79C59082E4BB0A2F0216111C3B1199F6986DEC6 *)
                                (unaff_x29 + -0xf0),
                                *(MethodInfo **)
                                 Method_UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_<Build>b__4_1__
                               );
        *(void **)(unaff_x29 + -0x100) = in_stack_00000158;
        Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x100),in_stack_00000158);
        KeyValuePair_2_get_Value_mCEF5A6EADBCD0831BB14E8CBF46AC86EB1BCE181_inline
                  ((KeyValuePair_2_tC79C59082E4BB0A2F0216111C3B1199F6986DEC6 *)(unaff_x29 + -0xf0),
                   (MethodInfo *)*in_stack_00000058);
        memcpy(&stack0x00000100,&stack0x000000a8,0x58);
        *(byte *)(unaff_x29 + -0xf8) = in_stack_00000110 & 1;
        uVar4 = *(undefined8 *)(unaff_x29 + -0xf8);
        uVar3 = *(undefined8 *)(unaff_x29 + -0x100);
        NullCheck(in_stack_00000160);
        List_1_Add_m9343133A0BBC243F36C058299EF7BF2A09BB84AC_inline
                  (in_stack_00000160,uVar3,uVar4,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateMSAA>b__0__
                  );
      }
    }
  }
  uStack000000000000006c = 4;
  il2cpp::utils::
  FinallyHelper<OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::$_1,false>
  ::~FinallyHelper((FinallyHelper<OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68::__1,false>
                    *)&stack0x00000478);
  pDVar2 = *(Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 **)
            (*(long *)(unaff_x29 + -8) + 0xd8);
  NullCheck(pDVar2);
  Dictionary_2_Clear_m9203852A0D46E7EA5D26231089086EC9C6BC8407
            (pDVar2,*(MethodInfo **)
                     Method_System_Dynamic_ExpandoObject_MetaExpando_<>c__DisplayClass3_0_<BindInvokeMember>b__0__
            );
  return;
}


