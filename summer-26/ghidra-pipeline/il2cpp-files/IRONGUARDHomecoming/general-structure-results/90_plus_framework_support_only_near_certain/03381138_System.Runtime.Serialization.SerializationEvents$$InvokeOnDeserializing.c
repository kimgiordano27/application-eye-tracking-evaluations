/*
FUNCTION_NAME: System.Runtime.Serialization.SerializationEvents$$InvokeOnDeserializing
ENTRY_POINT: 03381138
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x033818dc) */

uint System_Runtime_Serialization_SerializationEvents__InvokeOnDeserializing(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  uint uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xb38));
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__);
  thunk_FUN_01efb3a4(Method_DefaultNamespace_UI_GameplayUI_Refresh__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__)
  ;
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_GenericCollectionFormatter_CanFormat__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__);
  *(undefined1 *)(unaff_x20 + 400) = 1;
  puVar7 = Method_Sirenix_Serialization_GenericCollectionFormatter_CanFormat__;
  puVar6 = Method_UI_GameoverPanel_<Show>b__9_1__;
  puVar5 = Method_UI_GameoverPanel_<Hide>b__11_0__;
  puVar4 = 
  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__;
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x38),
                 *(undefined8 *)Method_UnityEngine_InputSystem_Gamepad_get_Item__);
    in_stack_00000030 = in_stack_00000018;
    uStack0000000000000004 = 1;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
System_Runtime_Serialization_SerializationEvents__AddOnDelegate:
    uVar9 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar5);
    lVar12 = in_stack_00000030;
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_0337ff40();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar14 = *(long **)(lVar10 + 0x10);
      uVar18 = *(undefined8 *)(lVar10 + 0x18);
      uVar9 = FUN_034a66c0(plVar14,0,0);
      if ((uVar9 & 1) == 0) {
        uVar17 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar17 = FUN_03579868(uVar17,0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar17,uVar17);
        }
        lVar10 = (**(code **)(*plVar14 + 0x208))(plVar14,uVar17,0,*(undefined8 *)(*plVar14 + 0x210))
        ;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar10 + 0x18) == 0) {
          uVar18 = FUN_03406290(*(undefined8 *)
                                 Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                                ,plVar14,0);
          FUN_033a19f0(uVar18,0);
          uStack0000000000000004 = 0;
          goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
        }
        plVar11 = (long *)FUN_022f69fc(lVar10,*(undefined8 *)puVar4);
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6)) {
            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_GameObject_TryGetComponent<Canvas>__);
            FUN_0337f95c();
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(undefined8 *)(lVar10 + 0x10) = uVar18;
            thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x10),uVar18);
            *(long *)(lVar10 + 0x18) = (long)plVar14;
            thunk_FUN_01f51358((long *)(lVar10 + 0x18),plVar14);
            uVar18 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar18 = FUN_03579868(uVar18,0);
            *(undefined8 *)(lVar10 + 0x38) = uVar18;
            thunk_FUN_01f51358();
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar9 = FUN_02b6b4d8(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar12 + 0x20),
                                 *(undefined8 *)
                                  Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPersistentCanvas>__
                                );
            if ((uVar9 & 1) == 0) {
              lVar19 = *(long *)(unaff_x19 + 0x40);
              uVar17 = *(undefined8 *)(lVar12 + 0x20);
              uVar18 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__
                                         );
              FUN_030f2380(uVar18,*(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_02b6b2e4(lVar19,uVar17,uVar18,
                           *(undefined8 *)
                            Method_UnityEngine_GameObject_GetComponentsInChildren<Renderer>__);
            }
            if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = FUN_02b6b264(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar12 + 0x20),
                                  *(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponent<Dropdown>__);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar19 = *(long *)(lVar12 + 0x10);
            lVar15 = *(long *)Method_UnityEngine_GameObject_GetComponent<OVRHand>__;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              plVar14 = (long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
              *plVar14 = lVar10;
              thunk_FUN_01f51358(plVar14,lVar10);
            }
            else {
              FUN_030f2bb4(lVar12,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
          }
        }
        FUN_033a19f0(*(undefined8 *)puVar7,0);
        goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar18 = FUN_03405678(*(undefined8 *)
                             Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__,
                            *(undefined8 *)(lVar12 + 0x10),0);
      FUN_033a19f0(uVar18,0);
      uStack0000000000000004 = 0;
      goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
    }
    FUN_02c7ab68(&stack0x00000020,*(undefined8 *)Method_Scene_GameUIController_<Start>b__30_0__);
    puVar3 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      uVar18 = FUN_02b6b184(*(long *)(unaff_x19 + 0x40),
                            *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<MeshFilter>__)
      ;
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar12);
        lVar12 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
      if (lVar10 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar12);
          lVar12 = *(long *)puVar3;
        }
        uVar17 = **(undefined8 **)(lVar12 + 0xb8);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                   );
        FUN_02e6c0a0(lVar10,uVar17,
                     *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        *plVar14 = lVar10;
        thunk_FUN_01f51358(plVar14,lVar10);
      }
      plVar14 = (long *)FUN_0230b6f4(uVar18,lVar10,
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__)
      ;
      if (plVar14 != (long *)0x0) {
        lVar12 = *plVar14;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_033815e0;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar14,*(long *)
                                        Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__
                               ,0);
LAB_033815e0:
        plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
        puVar8 = Method_DefaultNamespace_UI_GameplayUI_Refresh__;
        puVar7 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
        puVar6 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
        puVar5 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar12 = *plVar14;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_03381668;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar4,0);
LAB_03381668:
          uVar9 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar14 == (long *)0x0) goto LAB_033817cc;
            lVar12 = *plVar14;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 == 0) goto LAB_0338179c;
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_03381784;
          }
          lVar12 = *plVar14;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_033816c4;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar6,0);
LAB_033816c4:
          lVar12 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          lVar19 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
          if (lVar19 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar10);
              lVar10 = *(long *)puVar3;
            }
            uVar18 = **(undefined8 **)(lVar10 + 0xb8);
            lVar19 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_02a487e4(lVar19,uVar18,*(undefined8 *)puVar8,0);
            plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
            *plVar11 = lVar19;
            thunk_FUN_01f51358(plVar11,lVar19);
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_030f459c(lVar12,lVar19,*(undefined8 *)puVar7);
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uStack0000000000000004 = 1;
  goto LAB_033817cc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_03381784:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033817b8;
    }
  }
LAB_0338179c:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar14,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_033817b8:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_033817cc:
  return uStack0000000000000004 & 1;
}


