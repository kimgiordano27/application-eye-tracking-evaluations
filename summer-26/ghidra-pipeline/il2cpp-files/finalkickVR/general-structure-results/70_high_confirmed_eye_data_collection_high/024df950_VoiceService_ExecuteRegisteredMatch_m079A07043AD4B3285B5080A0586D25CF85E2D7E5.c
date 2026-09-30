/*
FUNCTION_NAME: VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5
ENTRY_POINT: 024df950
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5
               (undefined8 param_1,void *param_2,void *param_3,Il2CppObject *param_4,
               undefined8 param_5)

{
  ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C *pPVar1;
  uint uVar2;
  ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C *pPVar3;
  undefined8 uVar4;
  Il2CppArray *this;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  Il2CppObject **local_e8;
  FinallyHelper<VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::__4,false>
  aFStack_e0 [16];
  Il2CppObject *local_d0;
  Il2CppObject *local_c8;
  undefined8 local_c0;
  void *local_b8;
  float local_ac;
  ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A *local_a8;
  void *local_a0;
  float local_94;
  void *local_90;
  float local_84;
  ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A *local_80;
  void *local_78;
  float local_6c;
  void *local_68;
  ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C *local_60;
  undefined8 local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  Il2CppObject *local_40;
  void *local_38;
  void *local_30;
  undefined8 local_28;
  
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_DiscriminatedUnionConverter_Union>_Get__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<Decimal>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_Invoke__);
    VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = (Il2CppObject *)0x0;
  local_58 = 0;
  local_60 = (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C *)0x0;
  local_68 = local_38;
  NullCheck(local_38);
  local_6c = *(float *)((long)local_68 + 0x28);
  local_78 = local_30;
  NullCheck(local_30);
  local_80 = *(ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A **)
              ((long)local_78 + 0x20);
  NullCheck(local_80);
  local_84 = (float)ConduitActionAttribute_get_MinConfidence_m1AB668B87682791F5BA553EA0751A0E956D3B453_inline
                              (local_80,(MethodInfo *)0x0);
  if (local_84 <= local_6c) {
    local_90 = local_38;
    NullCheck(local_38);
    local_94 = *(float *)((long)local_90 + 0x28);
    local_a0 = local_30;
    NullCheck(local_30);
    local_a8 = *(ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A **)
                ((long)local_a0 + 0x20);
    NullCheck(local_a8);
    local_ac = (float)ConduitActionAttribute_get_MaxConfidence_m9CF249D68A9DE82992CE6462330CD8773B62160A_inline
                                (local_a8,(MethodInfo *)0x0);
    if (local_94 <= local_ac) {
      local_b8 = local_30;
      NullCheck(local_30);
      local_c0 = *(undefined8 *)((long)local_b8 + 0x10);
      local_c8 = (Il2CppObject *)
                 VoiceService_GetObjectsOfType_m363D7BF0005C430CE0B6E743C943B87C05857CDA
                           (local_28,local_c0,0);
      NullCheck(local_c8);
      auVar8 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                         (0,*(Il2CppClass **)
                             Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_DiscriminatedUnionConverter_Union>_Get__
                          ,local_c8);
      local_d0 = auVar8._0_8_;
      local_e8 = &local_50;
      local_50 = local_d0;
      il2cpp::utils::
      Finally<VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::__4>
                ((utils *)&local_e8,auVar8._8_8_);
      while( true ) {
        pIVar6 = local_50;
        NullCheck(local_50);
        uVar2 = InterfaceFuncInvoker0<bool>::Invoke
                          (0,*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                           ,pIVar6);
        pIVar6 = local_50;
        if ((uVar2 & 1) == 0) break;
        NullCheck(local_50);
        local_58 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                             (0,*(Il2CppClass **)
                                 Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                              ,pIVar6);
        pvVar7 = local_30;
        NullCheck(local_30);
        pIVar6 = *(Il2CppObject **)((long)pvVar7 + 0x18);
        NullCheck(pIVar6);
        pPVar3 = (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C *)
                 VirtualFuncInvoker0<ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*>
                 ::Invoke(0x12,pIVar6);
        local_60 = pPVar3;
        NullCheck(pPVar3);
        pvVar7 = local_30;
        pPVar1 = local_60;
        if (*(long *)(pPVar3 + 0x18) == 0) {
          NullCheck(local_30);
          uVar4 = local_58;
          pvVar7 = *(void **)((long)pvVar7 + 0x18);
          uVar5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                            (*(MethodInfo **)
                              Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__);
          NullCheck(pvVar7);
          MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(pvVar7,uVar4,uVar5,0);
        }
        else {
          NullCheck(local_60);
          pIVar6 = (Il2CppObject *)
                   ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C::GetAt(pPVar1,0);
          NullCheck(pIVar6);
          uVar4 = VirtualFuncInvoker0<Type_t*>::Invoke(0xb,pIVar6);
          uVar5 = *(undefined8 *)Method_System_Nullable<Decimal>__ctor__;
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
          uVar5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar5,0);
          uVar2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(uVar4,uVar5,0);
          pPVar1 = local_60;
          if (((uVar2 & 1) == 0) &&
             (NullCheck(local_60), pPVar3 = local_60, (int)*(undefined8 *)(pPVar1 + 0x18) < 3)) {
            NullCheck(local_60);
            pvVar7 = local_30;
            if ((int)*(undefined8 *)(pPVar3 + 0x18) == 1) {
              NullCheck(local_30);
              uVar4 = local_58;
              pvVar7 = *(void **)((long)pvVar7 + 0x18);
              this = (Il2CppArray *)
                     SZArrayNew(*(Il2CppClass **)
                                 Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                                ,1);
              pIVar6 = local_40;
              NullCheck(this);
              ArrayElementTypeCheck(this,pIVar6);
              ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                        ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar6);
              NullCheck(pvVar7);
              MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(pvVar7,uVar4,this,0);
            }
          }
          else {
            VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1
                      (*(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_Invoke__,0);
          }
        }
      }
      il2cpp::utils::
      FinallyHelper<VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::$_4,false>
      ::~FinallyHelper(aFStack_e0);
    }
  }
  return;
}


