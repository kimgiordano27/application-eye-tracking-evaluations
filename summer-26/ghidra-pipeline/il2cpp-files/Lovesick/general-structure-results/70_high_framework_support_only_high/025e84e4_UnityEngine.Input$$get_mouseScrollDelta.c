/*
FUNCTION_NAME: UnityEngine.Input$$get_mouseScrollDelta
ENTRY_POINT: 025e84e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Input__get_mouseScrollDelta(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<InternedString>_Dispose__);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Item__);
  thunk_FUN_00d48444(
                    Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>__ctor__
                    );
  thunk_FUN_00d48444(StringLiteral_14042);
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_133__);
  thunk_FUN_00d48444(System_Data_SqlTypes_SqlDateTime_TypeInfo);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_ARFoundation_ARCameraBackground_OnOcclusionFrameReceived__
                    );
  thunk_FUN_00d48444(System_Xml_Serialization_XmlMembersMapping_TypeInfo);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonWriter_WriteValue__);
  *(undefined1 *)(unaff_x22 + 0x28c) = 1;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  in_stack_000000f8 = 0;
  lVar6 = unaff_x19[6];
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = StringLiteral_14336;
  uVar5 = FUN_02681b9c(lVar6,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x60);
  if ((uVar5 & 1) == 0) {
    if ((lVar6 != 0) &&
       (lVar6 = FUN_01299a34(lVar6,*(undefined8 *)StringLiteral_14042),
       puVar4 = Method_UnityEngine_XR_ARFoundation_ARCameraBackground_OnOcclusionFrameReceived__,
       puVar3 = System_Xml_Serialization_XmlMembersMapping_TypeInfo,
       puVar2 = System_Data_SqlTypes_SqlDateTime_TypeInfo, lVar6 != 0)) {
      FUN_011dcc00(lVar6,&stack0x000000f8,
                   *(undefined8 *)Method_Newtonsoft_Json_JsonWriter_WriteValue__);
      while( true ) {
        uVar5 = FUN_012c3588(&stack0x000000f8,*(undefined8 *)puVar4);
        if ((uVar5 & 1) == 0) {
          FUN_012c3584(&stack0x000000f8,*(undefined8 *)puVar2);
          return;
        }
        lVar6 = FUN_00ccba28(&stack0x000000f8,*(undefined8 *)puVar3);
        in_stack_000000f0 = unaff_x19[6];
        in_stack_000000d8 = unaff_x19[3];
        in_stack_000000d0 = unaff_x19[2];
        in_stack_000000e8 = unaff_x19[5];
        in_stack_000000e0 = unaff_x19[4];
        in_stack_000000c8 = unaff_x19[1];
        in_stack_000000c0 = *unaff_x19;
        if (lVar6 == 0) break;
        FUN_0124d0ac();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else if (lVar6 != 0) {
    uVar5 = FUN_0129aa60(lVar6,unaff_x19[6],
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Item__);
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(unaff_x20 + 0x60);
      lVar8 = unaff_x19[6];
      in_stack_000000f0 = 0;
      in_stack_000000d8 = 0;
      in_stack_000000d0 = 0;
      in_stack_000000e8 = 0;
      in_stack_000000e0 = 0;
      in_stack_000000c8 = 0;
      in_stack_000000c0 = 0;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<InternedString>_Dispose__
                                );
      if (lVar6 == 0) goto LAB_025e8790;
      in_stack_00000088 = in_stack_000000c8;
      in_stack_00000080 = in_stack_000000c0;
      in_stack_00000098 = in_stack_000000d8;
      in_stack_00000090 = in_stack_000000d0;
      in_stack_000000a8 = in_stack_000000e8;
      in_stack_000000a0 = in_stack_000000e0;
      in_stack_000000b0 = in_stack_000000f0;
      FUN_01250954(lVar6,&stack0x00000080,1,0,0,
                   *(undefined8 *)
                    UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                  );
      if (lVar7 == 0) goto LAB_025e8790;
      FUN_01299e64(lVar7,lVar8,lVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_133__);
    }
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      FUN_01299bc0(*(long *)(unaff_x20 + 0x60),unaff_x19[6],&stack0x000000c0,
                   *(undefined8 *)
                    Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>__ctor__
                  );
      lVar6 = in_stack_000000c0;
      in_stack_000000d8 = unaff_x19[3];
      in_stack_000000d0 = unaff_x19[2];
      in_stack_000000e8 = unaff_x19[5];
      in_stack_000000e0 = unaff_x19[4];
      in_stack_000000f0 = unaff_x19[6];
      in_stack_000000c8 = unaff_x19[1];
      lVar7 = *unaff_x19;
      bVar1 = in_stack_000000c0 != 0;
      in_stack_000000c0 = lVar7;
      if (bVar1) {
        in_stack_00000040 = lVar7;
        in_stack_00000048 = in_stack_000000c8;
        in_stack_00000050 = in_stack_000000d0;
        in_stack_00000058 = in_stack_000000d8;
        in_stack_00000060 = in_stack_000000e0;
        in_stack_00000068 = in_stack_000000e8;
        in_stack_00000070 = in_stack_000000f0;
        FUN_0124d0ac(lVar6,&stack0x00000040,*(undefined8 *)puVar2);
        return;
      }
    }
  }
LAB_025e8790:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


