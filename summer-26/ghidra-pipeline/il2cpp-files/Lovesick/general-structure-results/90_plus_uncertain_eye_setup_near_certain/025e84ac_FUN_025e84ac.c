/*
FUNCTION_NAME: FUN_025e84ac
ENTRY_POINT: 025e84ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_025e84ac(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0378328c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_14336);
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
    DAT_0378328c = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lVar7 = param_2[6];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = StringLiteral_14336;
  uVar6 = FUN_02681b9c(lVar7,0,0);
  lVar7 = *(long *)(param_1 + 0x60);
  if ((uVar6 & 1) == 0) {
    if ((lVar7 != 0) &&
       (lVar7 = FUN_01299a34(lVar7,*(undefined8 *)StringLiteral_14042),
       puVar5 = Method_UnityEngine_XR_ARFoundation_ARCameraBackground_OnOcclusionFrameReceived__,
       puVar4 = System_Xml_Serialization_XmlMembersMapping_TypeInfo,
       puVar3 = System_Data_SqlTypes_SqlDateTime_TypeInfo, lVar7 != 0)) {
      FUN_011dcc00(lVar7,&local_58,*(undefined8 *)Method_Newtonsoft_Json_JsonWriter_WriteValue__);
      while( true ) {
        uVar6 = FUN_012c3588(&local_58,*(undefined8 *)puVar5);
        if ((uVar6 & 1) == 0) {
          FUN_012c3584(&local_58,*(undefined8 *)puVar3);
          return;
        }
        lVar7 = FUN_00ccba28(&local_58,*(undefined8 *)puVar4);
        local_60 = param_2[6];
        lStack_78 = param_2[3];
        local_80 = param_2[2];
        lStack_68 = param_2[5];
        lStack_70 = param_2[4];
        lStack_88 = param_2[1];
        local_90 = *param_2;
        if (lVar7 == 0) break;
        local_150 = local_90;
        lStack_148 = lStack_88;
        lStack_140 = local_80;
        lStack_138 = lStack_78;
        local_130 = lStack_70;
        lStack_128 = lStack_68;
        local_120 = local_60;
        FUN_0124d0ac(lVar7,&local_150,*(undefined8 *)puVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else if (lVar7 != 0) {
    uVar6 = FUN_0129aa60(lVar7,param_2[6],
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Item__);
    if ((uVar6 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x60);
      lVar9 = param_2[6];
      local_60 = 0;
      lStack_78 = 0;
      local_80 = 0;
      lStack_68 = 0;
      lStack_70 = 0;
      lStack_88 = 0;
      local_90 = 0;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<InternedString>_Dispose__
                                );
      if (lVar7 == 0) goto LAB_025e8790;
      lStack_c8 = lStack_88;
      local_d0 = local_90;
      lStack_b8 = lStack_78;
      lStack_c0 = local_80;
      lStack_a8 = lStack_68;
      local_b0 = lStack_70;
      local_a0 = local_60;
      FUN_01250954(lVar7,&local_d0,1,0,0,
                   *(undefined8 *)
                    UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                  );
      if (lVar8 == 0) goto LAB_025e8790;
      FUN_01299e64(lVar8,lVar9,lVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_133__);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_01299bc0(*(long *)(param_1 + 0x60),param_2[6],&local_90,
                   *(undefined8 *)
                    Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>__ctor__
                  );
      lVar7 = local_90;
      lStack_f8 = param_2[3];
      lStack_100 = param_2[2];
      lStack_e8 = param_2[5];
      local_f0 = param_2[4];
      local_e0 = param_2[6];
      lStack_108 = param_2[1];
      local_110 = *param_2;
      bVar1 = local_90 != 0;
      local_90 = local_110;
      lStack_88 = lStack_108;
      local_80 = lStack_100;
      lStack_78 = lStack_f8;
      lStack_70 = local_f0;
      lStack_68 = lStack_e8;
      local_60 = local_e0;
      if (bVar1) {
        FUN_0124d0ac(lVar7,&local_110,*(undefined8 *)puVar2);
        return;
      }
    }
  }
LAB_025e8790:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


