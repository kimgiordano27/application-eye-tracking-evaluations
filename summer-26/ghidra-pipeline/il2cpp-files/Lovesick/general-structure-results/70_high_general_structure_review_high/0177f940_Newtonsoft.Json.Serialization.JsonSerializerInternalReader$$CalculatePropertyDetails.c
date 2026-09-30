/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 0177f940
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  uint in_w8;
  uint uVar13;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  puVar1 = StringLiteral_13524;
  if (10 < in_w8) {
    unaff_x19[0xe] = *unaff_x22;
    lVar10 = *(long *)puVar1;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar10 == 0) goto LAB_01780028;
      in_w8 = *(uint *)(unaff_x19 + 3);
    }
    puVar2 = Method_System_Collections_Generic_List<XmlSchemaElement>__ctor__;
    if (in_w8 < 0xc) goto LAB_01780024;
    unaff_x19[0xf] = *(long *)puVar1;
    lVar10 = *(long *)puVar2;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar10 == 0) goto LAB_01780028;
      in_w8 = *(uint *)(unaff_x19 + 3);
    }
    puVar1 = Method_System_Net_HttpWebRequest_GetResponse__;
    if (in_w8 < 0xd) goto LAB_01780024;
    unaff_x19[0x10] = *(long *)puVar2;
    lVar10 = *(long *)puVar1;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar10 == 0) goto LAB_01780028;
      in_w8 = *(uint *)(unaff_x19 + 3);
    }
    puVar2 = Method_Meta_Voice_Audio_Decoding_AudioDecoderWav_SubArrayEquals<byte>__;
    if (in_w8 < 0xe) goto LAB_01780024;
    unaff_x19[0x11] = *(long *)puVar1;
    lVar10 = *(long *)puVar2;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar10 == 0) goto LAB_01780028;
      in_w8 = *(uint *)(unaff_x19 + 3);
    }
    puVar1 = Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Serialize__;
    if (in_w8 < 0xf) goto LAB_01780024;
    unaff_x19[0x12] = *(long *)puVar2;
    lVar10 = *(long *)puVar1;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar10 == 0) goto LAB_01780028;
      in_w8 = *(uint *)(unaff_x19 + 3);
    }
    if (0xf < in_w8) {
      unaff_x19[0x13] = *(long *)puVar1;
      *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
      plVar11 = (long *)FUN_00da4fb8(*unaff_x20,4);
      puVar1 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo;
      if (plVar11 == (long *)0x0) {
LAB_01780034:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*(long *)Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo != 0) &&
         (lVar10 = thunk_FUN_00d6225c(*(long *)
                                       Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                      ,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
      goto LAB_01780028;
      puVar2 = Method_UnityEngine_Playables_ScriptPlayable<SubtitleBehavior>_Create__;
      uVar13 = *(uint *)(plVar11 + 3);
      if (uVar13 != 0) {
        plVar11[4] = *(long *)puVar1;
        lVar10 = *(long *)puVar2;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar10 == 0) goto LAB_01780028;
          uVar13 = *(uint *)(plVar11 + 3);
        }
        puVar1 = Method_UnityEngine_Component_GetComponentInParent<IXRInteractable>__;
        if (1 < uVar13) {
          plVar11[5] = *(long *)puVar2;
          lVar10 = *(long *)puVar1;
          if (lVar10 != 0) {
            lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar10 == 0) goto LAB_01780028;
            uVar13 = *(uint *)(plVar11 + 3);
          }
          puVar2 = StringLiteral_7823;
          if (2 < uVar13) {
            plVar11[6] = *(long *)puVar1;
            lVar10 = *(long *)puVar2;
            if (lVar10 != 0) {
              lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar10 == 0) goto LAB_01780028;
              uVar13 = *(uint *)(plVar11 + 3);
            }
            if (3 < uVar13) {
              plVar11[7] = *(long *)puVar2;
              *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = plVar11;
              plVar11 = (long *)FUN_00da4fb8(*unaff_x20,0xc);
              puVar1 = PTR_DAT_033f6468;
              if (plVar11 == (long *)0x0) goto LAB_01780034;
              if ((*(long *)PTR_DAT_033f6468 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6468,
                                              *(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
              goto LAB_01780028;
              puVar2 = Method_System_Collections_Generic_List<SimpleTuple<int,_int>>_Add__;
              uVar13 = *(uint *)(plVar11 + 3);
              if (uVar13 != 0) {
                plVar11[4] = *(long *)puVar1;
                lVar10 = *(long *)puVar2;
                if (lVar10 != 0) {
                  lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                  if (lVar10 == 0) goto LAB_01780028;
                  uVar13 = *(uint *)(plVar11 + 3);
                }
                puVar1 = StringLiteral_5882;
                if (1 < uVar13) {
                  plVar11[5] = *(long *)puVar2;
                  lVar10 = *(long *)puVar1;
                  if (lVar10 != 0) {
                    lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                    if (lVar10 == 0) goto LAB_01780028;
                    uVar13 = *(uint *)(plVar11 + 3);
                  }
                  puVar2 = 
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__;
                  if (2 < uVar13) {
                    plVar11[6] = *(long *)puVar1;
                    lVar10 = *(long *)puVar2;
                    if (lVar10 != 0) {
                      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                      if (lVar10 == 0) goto LAB_01780028;
                      uVar13 = *(uint *)(plVar11 + 3);
                    }
                    puVar1 = Method_OVRNativeList<OVRLocatable>_get_Count__;
                    if (3 < uVar13) {
                      plVar11[7] = *(long *)puVar2;
                      lVar10 = *(long *)puVar1;
                      if (lVar10 != 0) {
                        lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                        if (lVar10 == 0) goto LAB_01780028;
                        uVar13 = *(uint *)(plVar11 + 3);
                      }
                      puVar2 = StringLiteral_12159;
                      if (4 < uVar13) {
                        plVar11[8] = *(long *)puVar1;
                        lVar10 = *(long *)puVar2;
                        if (lVar10 != 0) {
                          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                          if (lVar10 == 0) goto LAB_01780028;
                          uVar13 = *(uint *)(plVar11 + 3);
                        }
                        puVar1 = 
                        Method_System_Collections_Generic_KeyValuePair<int,_Panel>_get_Value__;
                        if (5 < uVar13) {
                          plVar11[9] = *(long *)puVar2;
                          lVar10 = *(long *)puVar1;
                          if (lVar10 != 0) {
                            lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                            if (lVar10 == 0) goto LAB_01780028;
                            uVar13 = *(uint *)(plVar11 + 3);
                          }
                          puVar2 = 
                          Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_set_Selector__
                          ;
                          if (6 < uVar13) {
                            plVar11[10] = *(long *)puVar1;
                            lVar10 = *(long *)puVar2;
                            if (lVar10 != 0) {
                              lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                              if (lVar10 == 0) goto LAB_01780028;
                              uVar13 = *(uint *)(plVar11 + 3);
                            }
                            puVar1 = StringLiteral_13435;
                            if (7 < uVar13) {
                              plVar11[0xb] = *(long *)puVar2;
                              lVar10 = *(long *)puVar1;
                              if (lVar10 != 0) {
                                lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40))
                                ;
                                if (lVar10 == 0) goto LAB_01780028;
                                uVar13 = *(uint *)(plVar11 + 3);
                              }
                              puVar2 = 
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<VRequest_<DecodeFile>d__107>__
                              ;
                              if (8 < uVar13) {
                                plVar11[0xc] = *(long *)puVar1;
                                lVar10 = *(long *)puVar2;
                                if (lVar10 != 0) {
                                  lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                      (*plVar11 + 0x40));
                                  if (lVar10 == 0) goto LAB_01780028;
                                  uVar13 = *(uint *)(plVar11 + 3);
                                }
                                puVar1 = Method_System_ReadOnlyMemory<char>__ctor__;
                                if (9 < uVar13) {
                                  plVar11[0xd] = *(long *)puVar2;
                                  lVar10 = *(long *)puVar1;
                                  if (lVar10 != 0) {
                                    lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                        (*plVar11 + 0x40));
                                    if (lVar10 == 0) goto LAB_01780028;
                                    uVar13 = *(uint *)(plVar11 + 3);
                                  }
                                  puVar2 = StringLiteral_12076;
                                  if (10 < uVar13) {
                                    plVar11[0xe] = *(long *)puVar1;
                                    lVar10 = *(long *)puVar2;
                                    if (lVar10 != 0) {
                                      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                          (*plVar11 + 0x40));
                                      if (lVar10 == 0) goto LAB_01780028;
                                      uVar13 = *(uint *)(plVar11 + 3);
                                    }
                                    if (0xb < uVar13) {
                                      plVar11[0xf] = *(long *)puVar2;
                                      *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) = plVar11;
                                      plVar11 = (long *)FUN_00da4fb8(*unaff_x20,5);
                                      puVar1 = StringLiteral_3923;
                                      if (plVar11 == (long *)0x0) goto LAB_01780034;
                                      if ((*(long *)StringLiteral_3923 != 0) &&
                                         (lVar10 = thunk_FUN_00d6225c(*(long *)StringLiteral_3923,
                                                                      *(undefined8 *)
                                                                       (*plVar11 + 0x40)),
                                         lVar10 == 0)) {
LAB_01780028:
                                        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar12,0);
                                      }
                                      puVar2 = 
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncInternal>d__37>__
                                      ;
                                      uVar13 = *(uint *)(plVar11 + 3);
                                      if (uVar13 != 0) {
                                        plVar11[4] = *(long *)puVar1;
                                        lVar10 = *(long *)puVar2;
                                        if (lVar10 != 0) {
                                          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                              (*plVar11 + 0x40));
                                          if (lVar10 == 0) goto LAB_01780028;
                                          uVar13 = *(uint *)(plVar11 + 3);
                                        }
                                        puVar1 = 
                                        Method_Unity_Collections_NativeArray_Enumerator<MeshTransform>_get_Current__
                                        ;
                                        if (1 < uVar13) {
                                          plVar11[5] = *(long *)puVar2;
                                          lVar10 = *(long *)puVar1;
                                          if (lVar10 != 0) {
                                            lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                                (*plVar11 + 0x40));
                                            if (lVar10 == 0) goto LAB_01780028;
                                            uVar13 = *(uint *)(plVar11 + 3);
                                          }
                                          puVar2 = Method_System_Array_Empty<Exception>__;
                                          if (2 < uVar13) {
                                            plVar11[6] = *(long *)puVar1;
                                            lVar10 = *(long *)puVar2;
                                            if (lVar10 != 0) {
                                              lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                                  (*plVar11 + 0x40))
                                              ;
                                              if (lVar10 == 0) goto LAB_01780028;
                                              uVar13 = *(uint *)(plVar11 + 3);
                                            }
                                            puVar1 = Method_STMRubyText_Event__;
                                            if (3 < uVar13) {
                                              plVar11[7] = *(long *)puVar2;
                                              lVar10 = *(long *)puVar1;
                                              if (lVar10 != 0) {
                                                lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                                    (*plVar11 + 0x40
                                                                                    ));
                                                if (lVar10 == 0) goto LAB_01780028;
                                                uVar13 = *(uint *)(plVar11 + 3);
                                              }
                                              if (4 < uVar13) {
                                                plVar11[8] = *(long *)puVar1;
                                                puVar9 = StringLiteral_10051;
                                                puVar8 = StringLiteral_8260;
                                                puVar7 = 
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                                ;
                                                puVar4 = 
                                                UnityEngine_Rendering_AtlasAllocator_TypeInfo;
                                                puVar2 = System_Action<VisualElement,_int>_TypeInfo;
                                                puVar1 = PTR_DAT_033f7460;
                                                *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                                     plVar11;
                                                puVar6 = 
                                                Method_System_Collections_Generic_List<MedleySmackAJackClown>_Contains__
                                                ;
                                                puVar5 = 
                                                System_Net_ServicePointScheduler_ConnectionGroup_TypeInfo
                                                ;
                                                puVar3 = 
                                                System_Collections_Generic_IEnumerator<InputEventPtr>_TypeInfo
                                                ;
                                                uVar12 = FUN_00da4fb8(*(undefined8 *)puVar7,0x100);
                                                FUN_016a34e8(uVar12,*(undefined8 *)puVar2,0);
                                                *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28)
                                                     = uVar12;
                                                uVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,0x1e);
                                                FUN_016a34e8(uVar12,*(undefined8 *)puVar9,0);
                                                *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30)
                                                     = uVar12;
                                                uVar12 = FUN_00da4fb8(*(undefined8 *)puVar8,0xf);
                                                FUN_016a34e8(uVar12,*(undefined8 *)puVar1,0);
                                                *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38)
                                                     = uVar12;
                                                uVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,0x2a);
                                                FUN_016a34e8(uVar12,*(undefined8 *)puVar6,0);
                                                *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40)
                                                     = uVar12;
                                                uVar12 = FUN_00da4fb8(*(undefined8 *)puVar5,0x15);
                                                FUN_016a34e8(uVar12,*(undefined8 *)puVar3,0);
                                                *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48)
                                                     = uVar12;
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01780024:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


