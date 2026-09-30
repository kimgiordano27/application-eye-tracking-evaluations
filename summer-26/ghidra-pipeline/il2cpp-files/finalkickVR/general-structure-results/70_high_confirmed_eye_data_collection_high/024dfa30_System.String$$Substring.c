/*
FUNCTION_NAME: System.String$$Substring
ENTRY_POINT: 024dfa30
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_13;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void System_String__Substring(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  Il2CppArray *this;
  void *pvVar3;
  Il2CppObject *pIVar4;
  long in_x9;
  long unaff_x29;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  MethodInfo *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined4 uStack000000000000006c;
  
  *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(in_x9 + 0x28);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x140);
  NullCheck(*(void **)(param_1 + 0xf8));
  in_stack_00000060[0x1e] = *(undefined8 *)(in_stack_00000060[0x1f] + 0x20);
  NullCheck((void *)in_stack_00000060[0x1e]);
  uVar5 = ConduitActionAttribute_get_MinConfidence_m1AB668B87682791F5BA553EA0751A0E956D3B453_inline
                    ((ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A *)
                     in_stack_00000060[0x1e],in_stack_00000058);
  *(undefined4 *)(unaff_x29 + -100) = uVar5;
  if (*(float *)(unaff_x29 + -100) <= *(float *)(unaff_x29 + -0x4c)) {
    in_stack_00000060[0x1c] = in_stack_00000060[0x27];
    NullCheck((void *)in_stack_00000060[0x1c]);
    *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(in_stack_00000060[0x1c] + 0x28);
    in_stack_00000060[0x1a] = in_stack_00000060[0x28];
    NullCheck((void *)in_stack_00000060[0x1a]);
    in_stack_00000060[0x19] = *(undefined8 *)(in_stack_00000060[0x1a] + 0x20);
    NullCheck((void *)in_stack_00000060[0x19]);
    uVar5 = ConduitActionAttribute_get_MaxConfidence_m9CF249D68A9DE82992CE6462330CD8773B62160A_inline
                      ((ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A *)
                       in_stack_00000060[0x19],(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0x8c) = uVar5;
    if (*(float *)(unaff_x29 + -0x74) <= *(float *)(unaff_x29 + -0x8c)) {
      in_stack_00000060[0x17] = in_stack_00000060[0x28];
      NullCheck((void *)in_stack_00000060[0x17]);
      in_stack_00000060[0x16] = *(undefined8 *)(in_stack_00000060[0x17] + 0x10);
      uVar2 = VoiceService_GetObjectsOfType_m363D7BF0005C430CE0B6E743C943B87C05857CDA
                        (in_stack_00000060[0x29],in_stack_00000060[0x16],0);
      in_stack_00000060[0x15] = uVar2;
      NullCheck((void *)in_stack_00000060[0x15]);
      auVar6 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                         (0,*(Il2CppClass **)
                             Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_DiscriminatedUnionConverter_Union>_Get__
                          ,(Il2CppObject *)in_stack_00000060[0x15]);
      in_stack_00000060[0x14] = auVar6._0_8_;
      in_stack_00000060[0x24] = in_stack_00000060[0x14];
      in_stack_00000060[0x11] = unaff_x29 + -0x30;
      il2cpp::utils::
      Finally<VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::__4>
                ((utils *)(unaff_x29 + -200),auVar6._8_8_);
      while( true ) {
        pIVar4 = (Il2CppObject *)in_stack_00000060[0x24];
        NullCheck(pIVar4);
        uVar1 = InterfaceFuncInvoker0<bool>::Invoke
                          (0,*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                           ,pIVar4);
        if ((uVar1 & 1) == 0) break;
        in_stack_00000060[0x10] = in_stack_00000060[0x24];
        NullCheck((void *)in_stack_00000060[0x10]);
        uVar2 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                          (0,*(Il2CppClass **)
                              Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                           ,(Il2CppObject *)in_stack_00000060[0x10]);
        in_stack_00000060[0xd] = uVar2;
        in_stack_00000060[0x23] = in_stack_00000060[0xd];
        in_stack_00000060[0xc] = in_stack_00000060[0x28];
        NullCheck((void *)in_stack_00000060[0xc]);
        in_stack_00000060[0xb] = *(undefined8 *)(in_stack_00000060[0xc] + 0x18);
        NullCheck((void *)in_stack_00000060[0xb]);
        uVar2 = VirtualFuncInvoker0<ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*>
                ::Invoke(0x12,(Il2CppObject *)in_stack_00000060[0xb]);
        in_stack_00000060[10] = uVar2;
        in_stack_00000060[0x22] = in_stack_00000060[10];
        in_stack_00000060[9] = in_stack_00000060[0x22];
        NullCheck((void *)in_stack_00000060[9]);
        if (*(long *)(in_stack_00000060[9] + 0x18) == 0) {
          in_stack_00000060[8] = in_stack_00000060[0x28];
          NullCheck((void *)in_stack_00000060[8]);
          in_stack_00000060[7] = *(undefined8 *)(in_stack_00000060[8] + 0x18);
          in_stack_00000060[6] = in_stack_00000060[0x23];
          uVar2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                            (*(MethodInfo **)
                              Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__);
          in_stack_00000060[5] = uVar2;
          NullCheck((void *)in_stack_00000060[7]);
          uVar2 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826
                            (in_stack_00000060[7],in_stack_00000060[6],in_stack_00000060[5],0);
          in_stack_00000060[4] = uVar2;
        }
        else {
          in_stack_00000060[3] = in_stack_00000060[0x22];
          NullCheck((void *)in_stack_00000060[3]);
          uVar2 = ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C::GetAt
                            ((ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C *)
                             in_stack_00000060[3],0);
          in_stack_00000060[1] = uVar2;
          NullCheck((void *)in_stack_00000060[1]);
          uVar2 = VirtualFuncInvoker0<Type_t*>::Invoke(0xb,(Il2CppObject *)in_stack_00000060[1]);
          *in_stack_00000060 = uVar2;
          uVar2 = *(undefined8 *)Method_System_Nullable<Decimal>__ctor__;
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
          uVar2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar2,0);
          uVar1 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172
                            (*in_stack_00000060,uVar2,0);
          if (((uVar1 & 1) == 0) &&
             (pvVar3 = (void *)in_stack_00000060[0x22], NullCheck(pvVar3),
             (int)*(undefined8 *)((long)pvVar3 + 0x18) < 3)) {
            pvVar3 = (void *)in_stack_00000060[0x22];
            NullCheck(pvVar3);
            if ((int)*(undefined8 *)((long)pvVar3 + 0x18) == 1) {
              pvVar3 = (void *)in_stack_00000060[0x28];
              NullCheck(pvVar3);
              pvVar3 = *(void **)((long)pvVar3 + 0x18);
              uVar2 = in_stack_00000060[0x23];
              this = (Il2CppArray *)
                     SZArrayNew(*(Il2CppClass **)
                                 Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                                ,1);
              pIVar4 = (Il2CppObject *)in_stack_00000060[0x26];
              NullCheck(this);
              ArrayElementTypeCheck(this,pIVar4);
              ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                        ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar4);
              NullCheck(pvVar3);
              MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(pvVar3,uVar2,this,0);
            }
          }
          else {
            VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1
                      (*(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_Invoke__,0);
          }
        }
      }
      uStack000000000000006c = 2;
      il2cpp::utils::
      FinallyHelper<VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::$_4,false>
      ::~FinallyHelper((FinallyHelper<VoiceService_ExecuteRegisteredMatch_m079A07043AD4B3285B5080A0586D25CF85E2D7E5::__4,false>
                        *)(unaff_x29 + -0xc0));
    }
  }
  return;
}


