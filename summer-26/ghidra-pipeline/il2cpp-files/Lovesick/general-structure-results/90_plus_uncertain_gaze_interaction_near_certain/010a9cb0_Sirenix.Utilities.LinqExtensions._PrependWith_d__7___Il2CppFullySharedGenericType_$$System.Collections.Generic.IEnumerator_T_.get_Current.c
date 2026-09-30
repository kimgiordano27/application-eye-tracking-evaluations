/*
FUNCTION_NAME: Sirenix.Utilities.LinqExtensions.<PrependWith>d__7<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<T>.get_Current
ENTRY_POINT: 010a9cb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void Sirenix_Utilities_LinqExtensions_<PrependWith>d__7<__Il2CppFullySharedGenericType>__System_Collections_Generic_IEnumerator<T>_get_Current
               (void)

{
  void *pvVar1;
  byte bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  code *in_x9;
  undefined8 uVar15;
  void *unaff_x20;
  size_t unaff_x21;
  long unaff_x22;
  undefined8 uVar16;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  (*in_x9)();
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar15 = *(undefined8 *)(unaff_x29 + -0x70);
  uVar16 = *(undefined8 *)(*unaff_x26 + 8);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_01780344(uVar16,0);
  puVar5 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Xml_ValidateNames_SplitQName__);
  }
  uVar6 = FUN_0264bd00(uVar16,0);
  uVar16 = *(undefined8 *)(*unaff_x26 + 8);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  lVar7 = FUN_01780344(uVar16,0);
  if ((uVar6 & 1) != 0) {
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar7 == lVar8) {
      uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        lVar8 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0();
      if (plVar9 == (long *)0x0) goto LAB_010aaa48;
      if (*(long *)(*plVar9 + 0x40) ==
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) {
        puVar13 = (undefined4 *)thunk_FUN_00d624a0();
        FUN_026455e4(uVar16,uVar15,*puVar13,0);
        goto LAB_010aa770;
      }
LAB_010aaa44:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    uVar16 = *(undefined8 *)(*unaff_x26 + 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_01780344(uVar16,0);
    lVar8 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
    if (lVar7 == lVar8) {
      uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        lVar8 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0();
      if (plVar9 != (long *)0x0) {
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
        goto LAB_010aaa44;
        puVar12 = (undefined1 *)thunk_FUN_00d624a0();
        FUN_026454d4(uVar16,uVar15,*puVar12,0);
        goto LAB_010aa770;
      }
LAB_010aaa48:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar16 = *(undefined8 *)(*unaff_x26 + 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_01780344(uVar16,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
    if (lVar7 == lVar8) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)Method_System_Reflection_FieldInfo_GetFieldFromHandle__,0);
      uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        lVar8 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0();
      plVar3 = (long *)UnityEngine_Texture2D___TypeInfo;
    }
    else {
      uVar16 = *(undefined8 *)(*unaff_x26 + 8);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_01780344(uVar16,0);
      lVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
      if (lVar7 != lVar8) {
        uVar16 = *(undefined8 *)(*unaff_x26 + 8);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar7 = FUN_01780344(uVar16,0);
        lVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        if (lVar7 == lVar8) {
          uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
          lVar8 = *unaff_x26;
          lVar7 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
            lVar8 = *unaff_x26;
          }
          pvVar1 = *(void **)(unaff_x29 + -0x90);
          if (-1 < *(int *)(lVar7 + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x90);
          }
          memcpy(unaff_x20,pvVar1,unaff_x21);
          if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          plVar9 = (long *)thunk_FUN_00d61fa0();
          if (plVar9 == (long *)0x0) goto LAB_010aaa48;
          if (*(long *)(*plVar9 + 0x40) !=
              *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
          goto LAB_010aaa44;
          puVar10 = (undefined2 *)thunk_FUN_00d624a0();
          FUN_026452b4(uVar16,uVar15,*puVar10,0);
        }
        else {
          uVar16 = *(undefined8 *)(*unaff_x26 + 8);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar7 = FUN_01780344(uVar16,0);
          lVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
          if (lVar7 == lVar8) {
            uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
            lVar8 = *unaff_x26;
            lVar7 = *(long *)(lVar8 + 0x10);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c(lVar7);
              lVar8 = *unaff_x26;
            }
            pvVar1 = *(void **)(unaff_x29 + -0x90);
            if (-1 < *(int *)(lVar7 + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x90);
            }
            memcpy(unaff_x20,pvVar1,unaff_x21);
            if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0();
            if (plVar9 == (long *)0x0) goto LAB_010aaa48;
            if (*(long *)(*plVar9 + 0x40) !=
                *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
            goto LAB_010aaa44;
            puVar14 = (undefined8 *)thunk_FUN_00d624a0();
            FUN_026451a4(uVar16,uVar15,*puVar14,0);
          }
          else {
            uVar16 = *(undefined8 *)(*unaff_x26 + 8);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar7 = FUN_01780344(uVar16,0);
            lVar8 = FUN_01780344(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                 ,0);
            if (lVar7 == lVar8) {
              uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
              lVar8 = *unaff_x26;
              lVar7 = *(long *)(lVar8 + 0x10);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c(lVar7);
                lVar8 = *unaff_x26;
              }
              pvVar1 = *(void **)(unaff_x29 + -0x90);
              if (-1 < *(int *)(lVar7 + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x90);
              }
              memcpy(unaff_x20,pvVar1,unaff_x21);
              if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0();
              if (plVar9 == (long *)0x0) goto LAB_010aaa48;
              if (*(long *)(*plVar9 + 0x40) !=
                  *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
              goto LAB_010aaa44;
              puVar13 = (undefined4 *)thunk_FUN_00d624a0();
              FUN_02645094(*puVar13,uVar16,uVar15,0);
            }
            else {
              uVar16 = *(undefined8 *)(*unaff_x26 + 8);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar7 = FUN_01780344(uVar16,0);
              lVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
              if (lVar7 == lVar8) {
                uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
                lVar8 = *unaff_x26;
                lVar7 = *(long *)(lVar8 + 0x10);
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c(lVar7);
                  lVar8 = *unaff_x26;
                }
                pvVar1 = *(void **)(unaff_x29 + -0x90);
                if (-1 < *(int *)(lVar7 + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x90);
                }
                memcpy(unaff_x20,pvVar1,unaff_x21);
                if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
                  FUN_00d5941c();
                }
                plVar9 = (long *)thunk_FUN_00d61fa0();
                if (plVar9 == (long *)0x0) goto LAB_010aaa48;
                if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40))
                goto LAB_010aaa44;
                puVar14 = (undefined8 *)thunk_FUN_00d624a0();
                FUN_02644f84(*puVar14,uVar16,uVar15,0);
              }
              else {
                uVar16 = *(undefined8 *)(*unaff_x26 + 8);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar7 = FUN_01780344(uVar16,0);
                lVar8 = FUN_01780344(*(undefined8 *)
                                      Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                if (lVar7 == lVar8) {
                  uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
                  lVar8 = *unaff_x26;
                  lVar7 = *(long *)(lVar8 + 0x10);
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c(lVar7);
                    lVar8 = *unaff_x26;
                  }
                  pvVar1 = *(void **)(unaff_x29 + -0x90);
                  if (-1 < *(int *)(lVar7 + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + -0x90);
                  }
                  memcpy(unaff_x20,pvVar1,unaff_x21);
                  if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
                    FUN_00d5941c();
                  }
                  plVar9 = (long *)thunk_FUN_00d61fa0();
                  if (plVar9 == (long *)0x0) goto LAB_010aaa48;
                  if (*(long *)(*plVar9 + 0x40) !=
                      *(long *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0x40))
                  goto LAB_010aaa44;
                  puVar10 = (undefined2 *)thunk_FUN_00d624a0();
                  FUN_02644e74(uVar16,uVar15,*puVar10,0);
                }
              }
            }
          }
        }
        goto LAB_010aa770;
      }
      uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        lVar8 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0();
      plVar3 = (long *)StringLiteral_7239;
    }
    if (plVar9 == (long *)0x0) goto LAB_010aaa48;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*plVar3 + 0x40)) goto LAB_010aaa44;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    FUN_026453c4(uVar16,uVar15,*puVar12,0);
    goto LAB_010aa770;
  }
  lVar8 = FUN_01780344(*(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                       ,0);
  if (lVar7 == lVar8) {
    uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
    lVar8 = *unaff_x26;
    lVar7 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
      lVar8 = *unaff_x26;
    }
    pvVar1 = *(void **)(unaff_x29 + -0x90);
    if (-1 < *(int *)(lVar7 + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x90);
    }
    memcpy(unaff_x20,pvVar1,unaff_x21);
    if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0();
    if ((plVar9 != (long *)0x0) &&
       (*plVar9 !=
        *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar9);
    }
    FUN_02644d64(uVar16,uVar15,plVar9,0);
    goto LAB_010aa770;
  }
  uVar16 = *(undefined8 *)(*unaff_x26 + 8);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_01780344(uVar16,0);
  lVar8 = FUN_01780344(*(undefined8 *)
                        Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
  if (lVar7 == lVar8) {
    uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
    lVar8 = *unaff_x26;
    lVar7 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
      lVar8 = *unaff_x26;
    }
    pvVar1 = *(void **)(unaff_x29 + -0x90);
    if (-1 < *(int *)(lVar7 + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x90);
    }
    memcpy(unaff_x20,pvVar1,unaff_x21);
    if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    uVar6 = FUN_00da5124();
    if ((uVar6 & 1) != 0) {
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
        lVar8 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0();
      if (plVar9 == (long *)0x0) goto LAB_010aaa48;
      bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__ + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__)) goto LAB_010aaa44;
      lVar7 = plVar9[3];
      goto LAB_010aa694;
    }
LAB_010aa6a4:
    uVar11 = **(undefined8 **)
               (*(long *)
                 Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__ +
               0xb8);
  }
  else {
    uVar16 = *(undefined8 *)(*unaff_x26 + 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_01780344(uVar16,0);
    lVar8 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
    if (lVar7 == lVar8) {
      uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x10),0);
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        lVar8 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      uVar6 = FUN_00da5124();
      if ((uVar6 & 1) == 0) goto LAB_010aa6a4;
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
        lVar8 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0();
      if (plVar9 == (long *)0x0) goto LAB_010aaa48;
      bVar2 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                       + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__)
         ) goto LAB_010aaa44;
      lVar7 = plVar9[2];
LAB_010aa694:
      uVar11 = FUN_026480b0(lVar7,0);
    }
    else {
      uVar16 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_01780344(uVar16,0);
      uVar11 = FUN_01780344(*(undefined8 *)(*unaff_x26 + 8),0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar6 = FUN_0264bd14(uVar16,uVar11,0);
      lVar7 = *unaff_x26;
      if ((uVar6 & 1) == 0) {
        uVar15 = *(undefined8 *)(lVar7 + 8);
        lVar7 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar9 = (long *)FUN_01780344(uVar15,0);
        uVar15 = thunk_FUN_00d48444(PTR_DAT_033f4788);
        if (plVar9 == (long *)0x0) {
          uVar16 = 0;
        }
        else {
          uVar15 = thunk_FUN_00d48444(PTR_DAT_033f4788);
          uVar16 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        }
        uVar11 = thunk_FUN_00d48444(
                                   Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                   );
        uVar15 = FUN_01600424(uVar15,uVar16,uVar11,0);
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        uVar16 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017a9608(uVar16,uVar15,0);
        uVar15 = thunk_FUN_00d48444(PTR_DAT_033f6370);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar16,uVar15);
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
        lVar7 = *unaff_x26;
      }
      pvVar1 = *(void **)(unaff_x29 + -0x90);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x90);
      }
      memcpy(unaff_x20,pvVar1,unaff_x21);
      if ((*(byte *)(*(long *)(lVar7 + 0x10) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0();
      if (plVar9 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo +
                         300);
        if ((*(byte *)(*plVar9 + 300) < bVar2) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo))
        goto LAB_010aaa44;
      }
      uVar11 = thunk_FUN_0264d420(plVar9,0);
      uVar16 = FUN_026480b0(*(undefined8 *)(unaff_x22 + 0x18),0);
    }
  }
  FUN_02644c54(uVar16,uVar15,uVar11,0);
LAB_010aa770:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


