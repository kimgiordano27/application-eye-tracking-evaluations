/*
FUNCTION_NAME: Oculus.Interaction.Demo.WaterSpray.<StampRoutine>d__35$$System.IDisposable.Dispose
ENTRY_POINT: 02a71754
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_19;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_known_unity_or_il2cpp_false_positive_family
*/


undefined8 Oculus_Interaction_Demo_WaterSpray_<StampRoutine>d__35__System_IDisposable_Dispose(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Il2CppClass *pIVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Exception_t *pEVar10;
  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *pLVar11;
  MethodInfo *pMVar12;
  Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 *pSVar13;
  void *pvVar14;
  long lVar15;
  JsonArrayContract_tC43D0F0F57E8E29E041F9679010D7824E2C3AF90 *pJVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  Il2CppObject *pIVar19;
  Il2CppObject *pIVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x29;
  undefined8 uStack0000000000000088;
  undefined8 *in_stack_00000108;
  undefined8 *in_stack_00000110;
  undefined8 *in_stack_00000118;
  undefined8 *in_stack_00000120;
  undefined8 *in_stack_00000128;
  byte bStack000000000000016e;
  byte bStack000000000000016f;
  undefined4 uStack00000000000001a4;
  Il2CppObject *in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 *in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined4 in_stack_00000364;
  undefined8 in_stack_00000368;
  
  uStack0000000000000088 = 0;
  JsonReader_GetPosition_mE60B167F7C9B4F39E14DEA98613049443F3C1968
            (&stack0x00000328,in_stack_00000368,in_stack_00000364);
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000330;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000328;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000338;
  uVar17 = *(undefined8 *)(unaff_x29 + -0x10);
  uVar18 = *(undefined8 *)(unaff_x29 + -0x20);
  pIVar6 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                     );
  uVar7 = Box(pIVar6,&stack0x000002f8);
  pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x18);
  pIVar20 = *(Il2CppObject **)(unaff_x29 + -0x18);
  NullCheck(pIVar20);
  uVar8 = VirtualFuncInvoker0<String_t*>::Invoke(0x14,pIVar20);
  uVar21 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar22 = *(undefined8 *)(unaff_x29 + -8);
  pIVar6 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Security_Cryptography_SymmetricAlgorithm_set_Padding__)
  ;
  uVar9 = IsInst(pIVar19,pIVar6);
  bVar1 = JsonSerializerInternalBase_IsErrorHandled_m03744F32BCD5F528B09B5324219085C2CCF59C91
                    (uVar22,uVar17,uVar18,uVar7,uVar9,uVar8,uVar21,uStack0000000000000088);
  if ((bVar1 & 1) == 0) {
    pEVar10 = (Exception_t *)
              il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
                        ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xd0));
    il2cpp_codegen_rethrow_exception(pEVar10);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x29 + -0x18);
    uVar8 = *(undefined8 *)(unaff_x29 + -8);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x70),1);
    JsonSerializerInternalReader_HandleError_m40720759FE1F8D2FE07B25EE5A8102F06A7F9F98
              (uVar8,uVar7,1,uVar2,0);
    pMVar12 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_Collections_Generic_List<InputActionMap>__ctor__);
    bVar1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                      ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)(unaff_x29 + -0x58),
                       pMVar12);
    if ((bVar1 & 1) != 0) {
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x58);
      *(int *)(unaff_x29 + -0xac) = (int)((ulong)*(undefined8 *)(unaff_x29 + -0xa0) >> 0x20);
      pMVar12 = (MethodInfo *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_List<InputActionMap>_get_Count__);
      iVar5 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline
                        ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)(unaff_x29 + -0xa8)
                         ,pMVar12);
      iVar3 = *(int *)(unaff_x29 + -0xac);
      pMVar12 = (MethodInfo *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)Method_System_Collections_Generic_List<InputActionMap>__ctor__);
      bVar1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                        ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)(unaff_x29 + -0xa8)
                         ,pMVar12);
      if ((iVar5 == iVar3 & bVar1 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x29 + -0x18);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x88);
        uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst__
                          );
        pEVar10 = (Exception_t *)
                  JsonSerializationException_Create_mB3994D6FE53F3F8140BF01F6F123A356C4217472
                            (uVar8,uVar7,uVar9,0);
        il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
                  ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xd0));
        pMVar12 = (MethodInfo *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_UnityEngine_Experimental_Rendering_XRSystem_RefreshDeviceInfo__)
        ;
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar12);
      }
    }
    uVar7 = *(undefined8 *)(unaff_x29 + -0xa0);
    pMVar12 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_Collections_Generic_List<InputActionMap>_get_Item__)
    ;
    Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703
              ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)(unaff_x29 + -0x58),
               (int)((ulong)uVar7 >> 0x20),pMVar12);
  }
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xd0));
  while (bStack000000000000016f = *(byte *)(unaff_x29 + -0x69) & 1, bStack000000000000016f == 0) {
    pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x18);
    NullCheck(pIVar19);
    uVar2 = VirtualFuncInvoker0<int>::Invoke(0x13,pIVar19);
    *(undefined4 *)(unaff_x29 + -0x70) = uVar2;
    pSVar13 = *(Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 **)(unaff_x29 + -0x60);
    NullCheck(pSVar13);
    iVar3 = Stack_1_get_Count_mA93990BCA03A1F82A1E08C8A314B48B4BBCFB010_inline
                      (pSVar13,(MethodInfo *)*in_stack_00000128);
    if (iVar3 == *(int *)(unaff_x29 + -0x3c)) {
      pvVar14 = *(void **)(unaff_x29 + -0x18);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x48);
      lVar15 = *(long *)(unaff_x29 + -0x50);
      NullCheck(pvVar14);
      uVar4 = JsonReader_ReadForType_m6F484EDB33D339FBCDC478E106012393E89958CE
                        (pvVar14,uVar7,lVar15 != 0,0);
      if ((uVar4 & 1) == 0) break;
      pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x18);
      NullCheck(pIVar19);
      uVar2 = VirtualFuncInvoker0<int>::Invoke(0x10,pIVar19);
      *(undefined4 *)(unaff_x29 + -0x7c) = uVar2;
      if (*(int *)(unaff_x29 + -0x7c) != 5) {
        if (*(int *)(unaff_x29 + -0x7c) == 0xe) {
          pSVar13 = *(Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 **)(unaff_x29 + -0x60);
          NullCheck(pSVar13);
          Stack_1_Pop_mAAD991F9985001683B85D0CD24351BA82B8C4C69
                    (pSVar13,(MethodInfo *)*in_stack_00000118);
          pSVar13 = *(Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 **)(unaff_x29 + -0x60);
          NullCheck(pSVar13);
          uVar7 = Stack_1_Peek_m4408A74E58791870C7EB930BB2C47A456153C105
                            (pSVar13,(MethodInfo *)*in_stack_00000110);
          *(undefined8 *)(unaff_x29 + -0x68) = uVar7;
          il2cpp_codegen_initobj((void *)(unaff_x29 + -0x58),8);
        }
        else {
          if (*(long *)(unaff_x29 + -0x50) == 0) {
LAB_02a71608:
            uVar8 = *(undefined8 *)(unaff_x29 + -0x18);
            pJVar16 = *(JsonArrayContract_tC43D0F0F57E8E29E041F9679010D7824E2C3AF90 **)
                       (unaff_x29 + -0x20);
            NullCheck(pJVar16);
            uVar7 = JsonArrayContract_get_CollectionItemType_m323C31B1A257D6EDD322D46EB8B8E168AA24C90F_inline
                              (pJVar16,(MethodInfo *)0x0);
            uVar7 = JsonSerializerInternalReader_CreateValueInternal_m2951B28851F7EF17051BC3178678ECE5664BFAAD
                              (*(undefined8 *)(unaff_x29 + -8),uVar8,uVar7,
                               *(undefined8 *)(unaff_x29 + -0x48),0,
                               *(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28)
                              );
            *(undefined8 *)(unaff_x29 + -0x78) = uVar7;
          }
          else {
            pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x50);
            NullCheck(pIVar19);
            uVar4 = VirtualFuncInvoker0<bool>::Invoke(7,pIVar19);
            if ((uVar4 & 1) == 0) goto LAB_02a71608;
            uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
            uVar9 = *(undefined8 *)(unaff_x29 + -0x18);
            pJVar16 = *(JsonArrayContract_tC43D0F0F57E8E29E041F9679010D7824E2C3AF90 **)
                       (unaff_x29 + -0x20);
            NullCheck(pJVar16);
            uVar7 = JsonArrayContract_get_CollectionItemType_m323C31B1A257D6EDD322D46EB8B8E168AA24C90F_inline
                              (pJVar16,(MethodInfo *)0x0);
            uVar7 = JsonSerializerInternalReader_DeserializeConvertable_mC9BACED43FB0B34DC6E93F74289F0CEA2B426FB5
                              (*(undefined8 *)(unaff_x29 + -8),uVar8,uVar9,uVar7,0);
            *(undefined8 *)(unaff_x29 + -0x78) = uVar7;
          }
          pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x68);
          pIVar20 = *(Il2CppObject **)(unaff_x29 + -0x78);
          NullCheck(pIVar19);
          InterfaceFuncInvoker1<int,Il2CppObject*>::Invoke
                    (2,(Il2CppClass *)*in_stack_00000108,pIVar19,pIVar20);
        }
      }
    }
    else {
      pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x18);
      NullCheck(pIVar19);
      bVar1 = VirtualFuncInvoker0<bool>::Invoke(0x15,pIVar19);
      if ((bVar1 & 1) == 0) break;
      pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x18);
      NullCheck(pIVar19);
      uVar2 = VirtualFuncInvoker0<int>::Invoke(0x10,pIVar19);
      *(undefined4 *)(unaff_x29 + -0x7c) = uVar2;
      if (*(int *)(unaff_x29 + -0x7c) == 2) {
        pLVar11 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *)
                  il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_ContainsKey__
                            );
        List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690
                  (pLVar11,*(MethodInfo **)
                            Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_Add__
                  );
        *(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D **)(unaff_x29 + -0xb8) = pLVar11;
        pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x68);
        pIVar20 = *(Il2CppObject **)(unaff_x29 + -0xb8);
        NullCheck(pIVar19);
        InterfaceFuncInvoker1<int,Il2CppObject*>::Invoke
                  (2,(Il2CppClass *)*in_stack_00000108,pIVar19,pIVar20);
        pSVar13 = *(Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 **)(unaff_x29 + -0x60);
        pIVar19 = *(Il2CppObject **)(unaff_x29 + -0xb8);
        NullCheck(pSVar13);
        Stack_1_Push_mABB53F24B3BA3251B057E139E495AD6043D1C042
                  (pSVar13,pIVar19,(MethodInfo *)*in_stack_00000120);
        in_stack_000001e8 = *(undefined8 *)(unaff_x29 + -0xb8);
        *(undefined8 *)(unaff_x29 + -0x68) = in_stack_000001e8;
      }
      else if (*(int *)(unaff_x29 + -0x7c) != 5) {
        if (*(int *)(unaff_x29 + -0x7c) != 0xe) {
          in_stack_000001b0 = *(undefined8 *)(unaff_x29 + -0x18);
          in_stack_000001a8 = *(Il2CppObject **)(unaff_x29 + -0x18);
          NullCheck(in_stack_000001a8);
          uStack00000000000001a4 = VirtualFuncInvoker0<int>::Invoke(0x10,in_stack_000001a8);
          *(undefined4 *)(unaff_x29 + -0xbc) = uStack00000000000001a4;
          pIVar6 = (Il2CppClass *)
                   il2cpp_codegen_initialize_runtime_metadata_inline
                             ((ulong *)
                              Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerInput_SpeakClick__);
          Il2CppFakeBox<int>::Il2CppFakeBox
                    ((Il2CppFakeBox<int> *)&stack0x00000188,pIVar6,(int *)(unaff_x29 + -0xbc));
          uVar7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                            ((Il2CppFakeBox<int> *)&stack0x00000188);
          uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_set_enabled__
                            );
          uVar7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(uVar8,uVar7,0);
          pEVar10 = (Exception_t *)
                    JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239
                              (in_stack_000001b0,uVar7,0);
          pMVar12 = (MethodInfo *)
                    il2cpp_codegen_initialize_runtime_metadata_inline
                              ((ulong *)
                               Method_UnityEngine_Experimental_Rendering_XRSystem_RefreshDeviceInfo__
                              );
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar12);
        }
        in_stack_000001e0 =
             *(Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 **)(unaff_x29 + -0x60);
        NullCheck(in_stack_000001e0);
        in_stack_000001d8 =
             Stack_1_Pop_mAAD991F9985001683B85D0CD24351BA82B8C4C69
                       (in_stack_000001e0,(MethodInfo *)*in_stack_00000118);
        in_stack_000001d0 =
             *(Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 **)(unaff_x29 + -0x60);
        NullCheck(in_stack_000001d0);
        in_stack_000001c8._4_4_ =
             Stack_1_get_Count_mA93990BCA03A1F82A1E08C8A314B48B4BBCFB010_inline
                       (in_stack_000001d0,(MethodInfo *)*in_stack_00000128);
        if (in_stack_000001c8._4_4_ < 1) {
          *(undefined1 *)(unaff_x29 + -0x69) = 1;
        }
        else {
          in_stack_000001c0 =
               *(Stack_1_t55D070B239BC51E3A542E4D074FCFB2701A2B4C1 **)(unaff_x29 + -0x60);
          NullCheck(in_stack_000001c0);
          in_stack_000001b8 =
               Stack_1_Peek_m4408A74E58791870C7EB930BB2C47A456153C105
                         (in_stack_000001c0,(MethodInfo *)*in_stack_00000110);
          *(undefined8 *)(unaff_x29 + -0x68) = in_stack_000001b8;
        }
      }
    }
  }
  bStack000000000000016e = *(byte *)(unaff_x29 + -0x69) & 1;
  if (bStack000000000000016e == 0) {
    JsonSerializerInternalReader_ThrowUnexpectedEndException_m2081CD321452B270E11B702FDA9D76B8C2B2A9E1
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x10),
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_XRGazeAssistance_OnBeforeRender__,0);
  }
  JsonSerializerInternalReader_OnDeserialized_m6130B5B232E4A3D0217AE876B4E06C2375832FDE
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x18),
             *(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x10),0);
  return *(undefined8 *)(unaff_x29 + -0x10);
}


