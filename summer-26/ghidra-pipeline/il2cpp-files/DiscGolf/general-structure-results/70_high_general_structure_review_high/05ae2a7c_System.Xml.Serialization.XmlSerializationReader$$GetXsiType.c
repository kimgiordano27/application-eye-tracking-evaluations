/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializationReader$$GetXsiType
ENTRY_POINT: 05ae2a7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_13;strong_file_logging_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_3
*/


void System_Xml_Serialization_XmlSerializationReader__GetXsiType(void)

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
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  long in_stack_000000c0;
  
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
              );
  *(undefined1 *)(unaff_x20 + 0xe93) = 1;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = (undefined8 *)0x0;
  in_stack_000000c0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = (undefined8 *)0x0;
  in_stack_00000088 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000070 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000050 = 0;
  if (*(int *)(unaff_x19 + 0x5c) == 0) {
    if (unaff_x22 == 0) goto LAB_05ae2fc0;
    *(undefined4 *)(unaff_x19 + 0x5c) = *(undefined4 *)(unaff_x22 + 0x5c);
  }
  else {
    if (unaff_x22 == 0) goto LAB_05ae2fc0;
    if (*(int *)(unaff_x19 + 0x5c) != *(int *)(unaff_x22 + 0x5c)) {
      if (unaff_x21 == 0) {
        return;
      }
      uVar14 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                                 );
      FUN_05b06b24(uVar10,*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                   ,uVar14,0);
      uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__);
      FUN_05afc4dc(uVar14,uVar10,0);
                    /* WARNING: Could not recover jumptable at 0x05ae2bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
      return;
    }
  }
  if ((*(long *)(unaff_x22 + 0x48) != 0) &&
     (lVar11 = FUN_04e64d30(*(long *)(unaff_x22 + 0x48),
                            *(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionStrengthFilter>_get_registeredSnapshot__
                           ),
     puVar9 = Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__,
     puVar8 = Method_UnityEngine_UIElements_BaseSlider<int>_GetClosestPowerOfTen__,
     puVar7 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
     puVar6 = 
     Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount__
     , puVar5 = 
       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractable>_get_registeredSnapshot__
     , puVar4 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__,
     puVar3 = Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__,
     puVar2 = 
     Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__,
     puVar1 = Unity_Netcode_NetworkVariable<int>_TypeInfo, lVar11 != 0)) {
    FUN_03e13998(&stack0x00000018,lVar11,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__);
    in_stack_000000c0 = in_stack_00000028;
    in_stack_000000b8 = in_stack_00000020;
    in_stack_000000b0 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x000000b0;
    while (uVar12 = FUN_0522adfc(&stack0x000000b0,*(undefined8 *)puVar7), lVar11 = in_stack_000000c0
          , (uVar12 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar12 = FUN_04e65274(*(long *)(unaff_x19 + 0x48),in_stack_000000c0,*(undefined8 *)puVar1);
      if ((uVar12 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e65070(*(long *)(unaff_x19 + 0x48),lVar11,1,*(undefined8 *)puVar5);
      }
    }
    FUN_0522adf8(&stack0x000000b0,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRSelectFilter>_get_registeredSnapshot__
                );
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_registeredSnapshot__
    ;
    if (*(long *)(unaff_x22 + 0x10) != 0) {
      FUN_04e93a24(&stack0x00000018,*(long *)(unaff_x22 + 0x10),
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_registeredSnapshot__
                  );
      in_stack_000000a0 = in_stack_00000038;
      in_stack_00000088 = in_stack_00000020;
      in_stack_00000080 = in_stack_00000018;
      in_stack_00000098 = in_stack_00000030;
      in_stack_00000090 = in_stack_00000028;
      in_stack_00000018 = 0;
      in_stack_00000020 = &stack0x00000080;
      while (uVar12 = FUN_05232904(&stack0x00000080,*(undefined8 *)puVar8),
            uVar10 = in_stack_00000098, lVar11 = in_stack_00000090, (uVar12 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar12 = FUN_04e937e4(*(long *)(unaff_x19 + 0x10),in_stack_00000090,*(undefined8 *)puVar6);
        if ((uVar12 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e935f0(*(long *)(unaff_x19 + 0x10),lVar11,uVar10,*(undefined8 *)puVar2);
        }
      }
      FUN_05232a24(&stack0x00000080,*(undefined8 *)puVar1);
      if (*(long *)(unaff_x22 + 0x60) != 0) {
        FUN_04e93a24(&stack0x00000018,*(long *)(unaff_x22 + 0x60),
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_registeredSnapshot__
                    );
        in_stack_000000a0 = in_stack_00000038;
        in_stack_00000088 = in_stack_00000020;
        in_stack_00000080 = in_stack_00000018;
        in_stack_00000098 = in_stack_00000030;
        in_stack_00000090 = in_stack_00000028;
        in_stack_00000018 = 0;
        in_stack_00000020 = &stack0x00000080;
        while (uVar12 = FUN_05232904(&stack0x00000080,*(undefined8 *)puVar8),
              uVar10 = in_stack_00000098, lVar11 = in_stack_00000090, (uVar12 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar12 = FUN_04e937e4(*(long *)(unaff_x19 + 0x60),in_stack_00000090,*(undefined8 *)puVar6)
          ;
          if ((uVar12 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e935f0(*(long *)(unaff_x19 + 0x60),lVar11,uVar10,*(undefined8 *)puVar2);
          }
        }
        FUN_05232a24(&stack0x00000080,*(undefined8 *)puVar1);
        puVar1 = 
        Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
        ;
        if ((*(long *)(unaff_x22 + 0x50) != 0) &&
           (lVar11 = FUN_04e93414(*(long *)(unaff_x22 + 0x50),
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__
                                 ), lVar11 != 0)) {
          FUN_049cf0ac(&stack0x00000018,lVar11,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
          in_stack_00000070 = in_stack_00000028;
          in_stack_00000068 = in_stack_00000020;
          in_stack_00000060 = in_stack_00000018;
          in_stack_00000018 = 0;
          in_stack_00000020 = &stack0x00000060;
          while (uVar12 = FUN_05232ed8(&stack0x00000060,*(undefined8 *)puVar4),
                lVar11 = in_stack_00000070, (uVar12 & 1) != 0) {
            if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar12 = FUN_04e937e4(*(long *)(unaff_x19 + 0x50),
                                  *(undefined8 *)(in_stack_00000070 + 0x10),*(undefined8 *)puVar3);
            if ((uVar12 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e935f0(*(long *)(unaff_x19 + 0x50),*(undefined8 *)(lVar11 + 0x10),lVar11,
                           *(undefined8 *)puVar1);
            }
          }
          FUN_05232ed4(&stack0x00000060,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__);
          lVar11 = FUN_05ae2288(unaff_x22);
          if ((lVar11 != 0) &&
             (lVar11 = FUN_04e93414(lVar11,*(undefined8 *)
                                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                                   ),
             puVar2 = 
             Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>_Init__
             , puVar1 = 
               Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
             , lVar11 != 0)) {
            FUN_049cf0ac(&stack0x00000018,lVar11,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__);
            in_stack_00000050 = in_stack_00000028;
            in_stack_00000048 = in_stack_00000020;
            in_stack_00000040 = in_stack_00000018;
            in_stack_00000018 = 0;
            in_stack_00000020 = &stack0x00000040;
            while( true ) {
              uVar12 = FUN_05232ed8(&stack0x00000040,*(undefined8 *)puVar9);
              lVar11 = in_stack_00000050;
              if ((uVar12 & 1) == 0) {
                FUN_05232ed4(&stack0x00000040,
                             *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>__ctor__);
                return;
              }
              lVar13 = FUN_05ae2288();
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (lVar13 == 0) break;
              uVar12 = FUN_04e937e4(lVar13,*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10),
                                    *(undefined8 *)puVar2);
              if ((uVar12 & 1) == 0) {
                lVar13 = FUN_05ae2288();
                if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e935f0(lVar13,*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10),lVar11,
                             *(undefined8 *)puVar1);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
      }
    }
  }
LAB_05ae2fc0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


