/*
FUNCTION_NAME: UnityEngine.UIElements.DynamicAtlas$$OnUpdateDynamicTextures
ENTRY_POINT: 0401ee84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0401f7a4) */

undefined8 UnityEngine_UIElements_DynamicAtlas__OnUpdateDynamicTextures(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x19 + 0x57c) = 1;
  puVar4 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  puVar8 = (undefined8 *)PTR_DAT_04585fe0;
  if (unaff_x20 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
       (plVar6 = unaff_x20,
       *(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) !=
       *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__)) {
      plVar6 = (long *)thunk_FUN_01ecaf38();
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar6 == (long *)0x0) {
LAB_0401f7c8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_035849ac(plVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar13 = *(undefined8 *)
                Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
      puVar8 = (undefined8 *)PTR_DAT_04586000;
      if ((uVar7 & 1) == 0) {
        bVar2 = *(byte *)(*(long *)StringLiteral_59 + 0x130);
        if ((bVar2 <= *(byte *)(*unaff_x20 + 0x130)) &&
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)StringLiteral_59)) {
          if ((unaff_x20[2] != 0) && (lVar11 = *(long *)(unaff_x20[2] + 0x18), lVar11 != 0)) {
            uVar13 = *(undefined8 *)(lVar11 + 0x18);
            plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                               );
            FUN_0402bc04(plVar6,uVar13);
            lVar14 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__
            ;
            lVar11 = *(long *)(lVar14 + 0x38);
            if (lVar11 == 0) {
              FUN_01ecafa0(lVar14);
              lVar11 = *(long *)(lVar14 + 0x38);
            }
            lVar11 = *(long *)(lVar11 + 0x10);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01ecaf44();
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01ecaf44();
            }
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar13 = FUN_021580ac(plVar6,*(undefined8 *)PTR_DAT_04585ff0,
                                  **(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_04585fd0);
            uVar13 = FUN_0340ebc0(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__,
                                  uVar13,*(undefined8 *)StringLiteral_7756,0);
            lVar11 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0401f578;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_01ecb238(plVar6,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_0401f578:
            (*(code *)*puVar8)(plVar6,puVar8[1]);
            return uVar13;
          }
          goto LAB_0401f7c8;
        }
        uVar13 = *(undefined8 *)PTR_DAT_04585fd8;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
        puVar8 = (undefined8 *)PTR_DAT_04586010;
        if ((uVar7 & 1) == 0) {
          uVar13 = *(undefined8 *)
                    Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
          puVar8 = (undefined8 *)PTR_DAT_04585ff8;
          if ((uVar7 & 1) == 0) {
            uVar13 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar13 = FUN_03579868(uVar13,0);
            uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
            puVar3 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
            if ((uVar7 & 1) == 0) {
              uVar13 = *(undefined8 *)
                        Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar9 = (long *)FUN_03579868(uVar13,0);
              lVar11 = *(long *)puVar4;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar11);
              }
              if (plVar9 != (long *)0x0) {
                uVar7 = (**(code **)(*plVar9 + 0x2a8))
                                  (plVar9,plVar6,*(undefined8 *)(*plVar9 + 0x2b0));
                if ((uVar7 & 1) == 0) {
                  lVar11 = FUN_01f08890(*(undefined8 *)
                                         Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                        ,6);
                  if (lVar11 != 0) {
                    if (*(int *)(lVar11 + 0x18) != 0) {
                      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_04586008;
                      thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x20));
                      uVar13 = (**(code **)(*plVar6 + 0x168))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x170));
                      if (1 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x28) = uVar13;
                        thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28),uVar13);
                        uVar13 = thunk_FUN_01efb3a4(PTR_DAT_04586030);
                        if (2 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x30) = uVar13;
                          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x30),uVar13);
                          uVar13 = (**(code **)(*unaff_x20 + 0x168))();
                          if (3 < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x38) = uVar13;
                            thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x38),uVar13);
                            uVar13 = thunk_FUN_01efb3a4(
                                                  Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__
                                                  );
                            if (4 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x40) = uVar13;
                              thunk_FUN_01f51358();
                              puVar1 = PTR_DAT_04583f10;
                              if (plVar6 != unaff_x20) {
                                puVar1 = Method_DebugUISample_<Start>b__2_0__;
                              }
                              uVar13 = thunk_FUN_01efb3a4(puVar1);
                              FUN_01bc50c0(lVar11);
                              FUN_01bc5408(lVar11,5,uVar13);
                              uVar13 = FUN_0340efe8(lVar11,0);
                              thunk_FUN_01efb3a4(
                                                Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__
                                                );
                              uVar10 = thunk_FUN_01f117cc();
                              Oculus_Interaction_Input_SyntheticHand__SetJointFreedom
                                        (uVar10,uVar13,0);
                              uVar13 = thunk_FUN_01efb3a4(PTR_DAT_04586028);
                    /* WARNING: Subroutine does not return */
                              FUN_01f08910(uVar10,uVar13);
                            }
                          }
                        }
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                }
                else {
                  iVar5 = (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
                  if (iVar5 != 1) {
                    thunk_FUN_01efb3a4(
                                      Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__
                                      );
                    uVar13 = thunk_FUN_01f117cc();
                    uVar10 = thunk_FUN_01efb3a4(PTR_DAT_04586020);
                    Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar13,uVar10,0);
                    uVar10 = thunk_FUN_01efb3a4(PTR_DAT_04586028);
                    /* WARNING: Subroutine does not return */
                    FUN_01f08910(uVar13,uVar10);
                  }
                  plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__
                                                  );
                  FUN_03416d98(plVar9,0);
                  if (plVar9 != (long *)0x0) {
                    FUN_03419060(plVar9,0x5b,0);
                    (**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
                    uVar13 = FUN_0401ec54();
                    FUN_03418748(plVar9,uVar13,0);
                    /* WARNING: Could not recover jumptable at 0x0401f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar13 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170))
                    ;
                    return uVar13;
                  }
                }
              }
              goto LAB_0401f7c8;
            }
            puVar8 = (undefined8 *)PTR_DAT_04585fe0;
            if (plVar6 != unaff_x20) {
              bVar2 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                               + 0x130);
              if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)
                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                 )) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              lVar14 = *(long *)
                        Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
              lVar11 = *(long *)(lVar14 + 0x38);
              if (lVar11 == 0) {
                FUN_01ecafa0(lVar14);
                lVar11 = *(long *)(lVar14 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01ecaf44();
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              plVar6 = (long *)FUN_021580ac();
              lVar14 = *(long *)puVar3;
              lVar11 = *(long *)(lVar14 + 0x38);
              if (lVar11 == 0) {
                FUN_01ecafa0(lVar14);
                lVar11 = *(long *)(lVar14 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01ecaf44();
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01ecaf44();
              }
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar13 = FUN_021580ac(plVar6,*(undefined8 *)PTR_DAT_04585ff0,
                                    **(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_04585fd0
                                   );
              uVar13 = FUN_0340ebc0(*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__,
                                    uVar13,*(undefined8 *)StringLiteral_7756,0);
              lVar11 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0401f5ec;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)
                       FUN_01ecb238(plVar6,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                    ,0);
LAB_0401f5ec:
              (*(code *)*puVar8)(plVar6,puVar8[1]);
              return uVar13;
            }
          }
        }
      }
    }
    else {
      uVar13 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
      puVar8 = (undefined8 *)StringLiteral_6151;
      if ((uVar7 & 1) == 0) {
        uVar13 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
        puVar8 = (undefined8 *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_101__;
        if ((uVar7 & 1) == 0) {
          uVar13 = *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
          if ((uVar7 & 1) == 0) {
            uVar13 = *(undefined8 *)
                      Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
            ;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar13 = FUN_03579868(uVar13,0);
            uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
            puVar8 = (undefined8 *)StringLiteral_12762;
            if ((uVar7 & 1) == 0) {
              uVar13 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar13 = FUN_03579868(uVar13,0);
              uVar7 = (**(code **)(*plVar6 + 0x948))(plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950))
              ;
              puVar8 = (undefined8 *)Method_System_Threading_SemaphoreSlim_Release__;
              if ((uVar7 & 1) == 0) {
                uVar13 = *(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar13 = FUN_03579868(uVar13,0);
                uVar7 = (**(code **)(*plVar6 + 0x948))
                                  (plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
                puVar8 = (undefined8 *)
                         Method_System_Security_Cryptography_RNGCryptoServiceProvider_Check__;
                if ((uVar7 & 1) == 0) {
                  uVar13 = *(undefined8 *)
                            Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                  ;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar13 = FUN_03579868(uVar13,0);
                  uVar7 = (**(code **)(*plVar6 + 0x948))
                                    (plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
                  puVar8 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_u64__;
                  if ((uVar7 & 1) == 0) {
                    uVar13 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar13 = FUN_03579868(uVar13,0);
                    uVar7 = (**(code **)(*plVar6 + 0x948))
                                      (plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
                    puVar8 = (undefined8 *)
                             Method_System_Text_RegularExpressions_RegexReplacement_Replace__;
                    if ((uVar7 & 1) == 0) {
                      uVar13 = *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                      ;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar13 = FUN_03579868(uVar13,0);
                      uVar7 = (**(code **)(*plVar6 + 0x948))
                                        (plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x950));
                      puVar8 = (undefined8 *)
                               Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__
                      ;
                      if ((uVar7 & 1) != 0) {
                        puVar8 = (undefined8 *)StringLiteral_6212;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403f2cc(*(undefined8 *)PTR_DAT_04586018,0);
            puVar8 = (undefined8 *)StringLiteral_12762;
          }
        }
      }
    }
  }
  return *puVar8;
}


