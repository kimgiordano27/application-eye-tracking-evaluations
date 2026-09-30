/*
FUNCTION_NAME: System.Runtime.Serialization.DeserializationEventHandler$$Invoke
ENTRY_POINT: 033806e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 133
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03380efc) */

undefined4 System_Runtime_Serialization_DeserializationEventHandler__Invoke(void)

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
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  long lVar20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_GameObject_AddComponent<CanvasRenderTexture_TransformChangeListener>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Dropdown_DropdownItem>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<Camera>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<Canvas>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRHand>__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_GameObject_AddComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerToggle>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<ShouldHideHandOnGrab>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<TagSet>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__)
  ;
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__);
  *(undefined1 *)(unaff_x20 + 399) = 1;
  puVar7 = Method_UnityEngine_GameObject_GetComponentsInChildren<OVRCameraRig>__;
  puVar6 = Method_UnityEngine_GameObject_GetComponent<OVRHand>__;
  puVar5 = Method_UnityEngine_GameObject_GetComponent<Dropdown>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<CanvasRenderTexture_TransformChangeListener>__
  ;
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x30),
                 *(undefined8 *)
                  Method_UnityEngine_GameObject_AddComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                );
    in_stack_00000030 = in_stack_00000018;
    uVar15 = 1;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    while (uVar9 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar4), lVar13 = in_stack_00000030,
          (uVar9 & 1) != 0) {
      lVar10 = FUN_0337ff40();
      if (lVar10 == 0) {
        FUN_02c7ab68(&stack0x00000020,
                     *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitDictation>__);
        return 0;
      }
      plVar16 = *(long **)(lVar10 + 0x10);
      uVar12 = *(undefined8 *)(lVar10 + 0x18);
      uVar9 = FUN_034a66c0(plVar16,0,0);
      if ((uVar9 & 1) == 0) {
        uVar19 = *(undefined8 *)puVar7;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar19 = FUN_03579868(uVar19,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar19,uVar19);
        }
        lVar10 = (**(code **)(*plVar16 + 0x208))(plVar16,uVar19,0,*(undefined8 *)(*plVar16 + 0x210))
        ;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar10 + 0x18) == 0) {
          uVar12 = FUN_03406290(*(undefined8 *)
                                 Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                                ,plVar16,0);
          FUN_033a19f0(uVar12,0);
          uVar15 = 0;
        }
        else {
          plVar11 = (long *)FUN_022f69fc(lVar10,*(undefined8 *)
                                                 Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                        );
          if (plVar11 == (long *)0x0) {
LAB_03380914:
            plVar11 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)
                               Method_UnityEngine_GameObject_GetComponentsInChildren<OVRPlayerController>__
                             + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_03380914;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_UnityEngine_GameObject_GetComponentsInChildren<OVRPlayerController>__) {
              plVar11 = (long *)0x0;
            }
          }
          lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_GameObject_TryGetComponent<Canvas>__);
          FUN_0337f95c();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(undefined8 *)(lVar10 + 0x10) = uVar12;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x10),uVar12);
          *(long *)(lVar10 + 0x18) = (long)plVar16;
          thunk_FUN_01f51358((long *)(lVar10 + 0x18),plVar16);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(long *)(lVar10 + 0x20) = plVar11[3];
          *(char *)(lVar10 + 0x28) = (char)plVar11[5];
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = FUN_02b6b4d8(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar13 + 0x20),
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPersistentCanvas>__
                              );
          if ((uVar9 & 1) == 0) {
            lVar20 = *(long *)(unaff_x19 + 0x40);
            uVar19 = *(undefined8 *)(lVar13 + 0x20);
            uVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__
                                       );
            FUN_030f2380(uVar12,*(undefined8 *)
                                 Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02b6b2e4(lVar20,uVar19,uVar12,
                         *(undefined8 *)
                          Method_UnityEngine_GameObject_GetComponentsInChildren<Renderer>__);
          }
          if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = FUN_02b6b264(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar13 + 0x20),
                                *(undefined8 *)puVar5);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar20 = *(long *)(lVar13 + 0x10);
          lVar17 = *(long *)puVar6;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
            *plVar16 = lVar10;
            thunk_FUN_01f51358(plVar16,lVar10);
          }
          else {
            FUN_030f2bb4(lVar13,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      else {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = FUN_03405678(*(undefined8 *)
                               Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__,
                              *(undefined8 *)(lVar13 + 0x10),0);
        FUN_033a19f0(uVar12,0);
        uVar15 = 0;
      }
    }
    FUN_02c7ab68(&stack0x00000020,
                 *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitDictation>__);
    puVar3 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      uVar12 = FUN_02b6b184(*(long *)(unaff_x19 + 0x40),
                            *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<MeshFilter>__)
      ;
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar13);
        lVar13 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
      if (lVar10 == 0) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar13);
          lVar13 = *(long *)puVar3;
        }
        uVar19 = **(undefined8 **)(lVar13 + 0xb8);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                   );
        FUN_02e6c0a0(lVar10,uVar19,
                     *(undefined8 *)
                      Method_UnityEngine_GameObject_TryGetComponent<ShouldHideHandOnGrab>__,0);
        plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar16 = lVar10;
        thunk_FUN_01f51358(plVar16,lVar10);
      }
      plVar16 = (long *)FUN_0230b6f4(uVar12,lVar10,
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__)
      ;
      if (plVar16 != (long *)0x0) {
        lVar13 = *plVar16;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
              puVar14 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03380c04;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar14 = (undefined8 *)
                  FUN_01ecb238(plVar16,*(long *)
                                        Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__
                               ,0);
LAB_03380c04:
        plVar16 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
        puVar8 = Method_UnityEngine_GameObject_TryGetComponent<TagSet>__;
        puVar7 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
        puVar6 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
        puVar5 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar13 = *plVar16;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar14 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03380c8c;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar4,0);
LAB_03380c8c:
          uVar9 = (*(code *)*puVar14)(plVar16,puVar14[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar16 == (long *)0x0) {
              return uVar15;
            }
            lVar13 = *plVar16;
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar9 == 0) goto LAB_03380dc0;
            piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_03380da8;
          }
          lVar13 = *plVar16;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar14 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03380ce8;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar6,0);
LAB_03380ce8:
          lVar13 = (*(code *)*puVar14)(plVar16,puVar14[1]);
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          lVar20 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar20 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar10);
              lVar10 = *(long *)puVar3;
            }
            uVar12 = **(undefined8 **)(lVar10 + 0xb8);
            lVar20 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_02a487e4(lVar20,uVar12,*(undefined8 *)puVar8,0);
            plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar11 = lVar20;
            thunk_FUN_01f51358(plVar11,lVar20);
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_030f459c(lVar13,lVar20,*(undefined8 *)puVar7);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_03380da8:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar14 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03380ddc;
    }
  }
LAB_03380dc0:
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar16,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03380ddc:
  (*(code *)*puVar14)(plVar16,puVar14[1]);
  return uVar15;
}


