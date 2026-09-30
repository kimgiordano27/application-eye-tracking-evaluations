/*
FUNCTION_NAME: IMGUIContainer__ctor_m2700E6D656455D1D78D9A4AFEBADC1168D49198E
ENTRY_POINT: 045cc778
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void IMGUIContainer__ctor_m2700E6D656455D1D78D9A4AFEBADC1168D49198E
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_5,undefined8 param_6,
               undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B *pAVar8;
  Il2CppObject *pIVar9;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 local_30;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar2 = PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
  ;
  puVar1 = PTR_Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B_il2cpp_TypeInfo_var_048d9670;
  local_38 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  if ((IMGUIContainer__ctor_m2700E6D656455D1D78D9A4AFEBADC1168D49198E::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B_il2cpp_TypeInfo_var_048d9670);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput_ActionEvent>_ToArray__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IMGUIContainer_OnGenerateVisualContent_m7FC27DE2A87FBAF5D7B20B246829C9789042CC49_RuntimeMethod_var_048de778
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    IMGUIContainer__ctor_m2700E6D656455D1D78D9A4AFEBADC1168D49198E::s_Il2CppMethodInitialized = 1;
  }
  local_28[0x3ec] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x0;
  local_28[0x3ed] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x0;
  local_28[0x3ee] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x1;
  *(undefined8 *)(local_28 + 0x3f0) = 0;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x3f0),(void *)0x0);
  local_60 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(0);
  uStack_48 = CONCAT44(param_4,param_3);
  local_50 = CONCAT44(param_2,local_60);
  *(undefined8 *)(local_28 + 0x400) = uStack_48;
  *(undefined8 *)(local_28 + 0x3f8) = local_50;
  uStack_5c = param_2;
  uStack_58 = param_3;
  uStack_54 = param_4;
  Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline((MethodInfo *)0x0);
  memcpy(auStack_a0,auStack_e0,0x40);
  memcpy(local_28 + 0x408,auStack_a0,0x40);
  local_28[0x44c] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x0;
  local_28[0x44d] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput_ActionEvent>_ToArray__
            );
  pvVar5 = (void *)FocusChangeDirection_get_unspecified_m9FB894AACF20C8B223620A79F72B64B674DA4E96_inline
                             ((MethodInfo *)0x0);
  *(void **)(local_28 + 0x450) = pvVar5;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x450),pvVar5);
  local_28[0x458] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x0;
  *(undefined4 *)(local_28 + 0x45c) = 0;
  local_28[0x460] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_28,0);
  local_28[0x10] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x1;
  uVar4 = VisualElement_get_eventCallbackCategories_m5504E18E41DEAEF1EC1A3B032A7989EAA8ABBF0B_inline
                    (local_28,(MethodInfo *)0x0);
  VisualElement_set_eventCallbackCategories_mCF66FA7CF9D52E308FDB7472F2EC3FD4424D145F
            (local_28,uVar4 | 0x16036,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_28,*puVar6,0);
  IMGUIContainer_set_onGUIHandler_mB08A4DDA7AE1A37E6BE5FAF1002DF87C1E291966(local_28,local_30,0);
  IMGUIContainer_set_contextType_m937F47F6F399E6A209CFB3A25DDE6BCB0A2FB17F_inline
            ((IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26 *)local_28,1,
             (MethodInfo *)0x0);
  Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
            ((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)local_28,true,(MethodInfo *)0x0)
  ;
  VisualElement_set_requireMeasureFunction_mE3D5BF29B294B0BBB7422D53743A5A5B6E35178B(local_28,1,0);
  uVar7 = VisualElement_get_generateVisualContent_m11390D5634144E49934046B08681F7B7F0A94986_inline
                    (local_28,(MethodInfo *)0x0);
  pAVar8 = (Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B *)
           il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action_1__ctor_m5C07588C369385A2FE8666A6C07F46762049C6AC
            (pAVar8,(Il2CppObject *)local_28,
             *(long *)
              PTR_IMGUIContainer_OnGenerateVisualContent_m7FC27DE2A87FBAF5D7B20B246829C9789042CC49_RuntimeMethod_var_048de778
             ,(MethodInfo *)0x0);
  pIVar9 = (Il2CppObject *)
           Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar7,pAVar8,0);
  pVVar3 = local_28;
  pAVar8 = (Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B *)
           Castclass(pIVar9,*(Il2CppClass **)puVar1);
  VisualElement_set_generateVisualContent_m1D95FEC130DF500C82FAAC2537BBF7FEE2519C15_inline
            (pVVar3,pAVar8,(MethodInfo *)0x0);
  return;
}


