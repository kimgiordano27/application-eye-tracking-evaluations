/*
FUNCTION_NAME: FUN_03380fdc
ENTRY_POINT: 03380fdc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x033818dc) */

undefined4 FUN_03380fdc(long param_1)

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
  undefined4 uVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_04832190 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInChildren<Renderer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPersistentCanvas>__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<Dropdown>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<MeshFilter>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03380f68 with catch @ 03381060
                       try { // try from 03381060 to 03481077 has its CatchHandler @ 03380f20 */
    thunk_FUN_01efb3a4(Method_Scene_GameUIController_<Start>b__30_0__);
    thunk_FUN_01efb3a4(Method_UI_GameoverPanel_<Hide>b__11_0__);
    thunk_FUN_01efb3a4(Method_UI_GameoverPanel_<Show>b__9_0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__);
    thunk_FUN_01efb3a4(Method_UI_GameoverPanel_<Show>b__9_1__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<Camera>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<Canvas>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRHand>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Gamepad_get_Item__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerToggle>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__);
    thunk_FUN_01efb3a4(Method_DefaultNamespace_UI_GameplayUI_Refresh__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_GenericCollectionFormatter_CanFormat__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__);
    DAT_04832190 = 1;
  }
  puVar7 = Method_Sirenix_Serialization_GenericCollectionFormatter_CanFormat__;
  puVar6 = Method_UI_GameoverPanel_<Show>b__9_1__;
  puVar5 = Method_UI_GameoverPanel_<Hide>b__11_0__;
  puVar4 = 
  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__;
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    return 1;
  }
  FUN_030f35d0(&local_98,*(long *)(param_1 + 0x38),
               *(undefined8 *)Method_UnityEngine_InputSystem_Gamepad_get_Item__);
  local_70 = local_88;
  uVar14 = 1;
  uStack_78 = uStack_90;
  local_80 = local_98;
System_Runtime_Serialization_SerializationEvents__AddOnDelegate:
  uVar9 = FUN_02c7ab6c(&local_80,*(undefined8 *)puVar5);
  lVar12 = local_70;
  if ((uVar9 & 1) != 0) {
    lVar10 = FUN_0337ff40(param_1,local_70);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar15 = *(long **)(lVar10 + 0x10);
    uVar19 = *(undefined8 *)(lVar10 + 0x18);
    uVar9 = FUN_034a66c0(plVar15,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar19 = FUN_03405678(*(undefined8 *)
                             Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__,
                            *(undefined8 *)(lVar12 + 0x10),0);
      FUN_033a19f0(uVar19,0);
      uVar14 = 0;
      goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
    }
    uVar18 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_03579868(uVar18,0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar18,uVar18);
    }
    lVar10 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar18,0,*(undefined8 *)(*plVar15 + 0x210));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
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
          *(undefined8 *)(lVar10 + 0x10) = uVar19;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x10),uVar19);
          *(long *)(lVar10 + 0x18) = (long)plVar15;
          thunk_FUN_01f51358((long *)(lVar10 + 0x18),plVar15);
          uVar19 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar19 = FUN_03579868(uVar19,0);
          *(undefined8 *)(lVar10 + 0x38) = uVar19;
          thunk_FUN_01f51358();
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = FUN_02b6b4d8(*(long *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x20),
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPersistentCanvas>__
                              );
          if ((uVar9 & 1) == 0) {
            lVar20 = *(long *)(param_1 + 0x40);
            uVar18 = *(undefined8 *)(lVar12 + 0x20);
            uVar19 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__
                                       );
            FUN_030f2380(uVar19,*(undefined8 *)
                                 Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02b6b2e4(lVar20,uVar18,uVar19,
                         *(undefined8 *)
                          Method_UnityEngine_GameObject_GetComponentsInChildren<Renderer>__);
          }
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = FUN_02b6b264(*(long *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x20),
                                *(undefined8 *)
                                 Method_UnityEngine_GameObject_GetComponent<Dropdown>__);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar20 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)Method_UnityEngine_GameObject_GetComponent<OVRHand>__;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            plVar15 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
            *plVar15 = lVar10;
            thunk_FUN_01f51358(plVar15,lVar10);
          }
          else {
            FUN_030f2bb4(lVar12,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
        }
      }
      FUN_033a19f0(*(undefined8 *)puVar7,0);
      goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
    }
    uVar19 = FUN_03406290(*(undefined8 *)
                           Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                          ,plVar15,0);
    FUN_033a19f0(uVar19,0);
    uVar14 = 0;
    goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
  }
  FUN_02c7ab68(&local_80,*(undefined8 *)Method_Scene_GameUIController_<Start>b__30_0__);
  puVar3 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar19 = FUN_02b6b184(*(long *)(param_1 + 0x40),
                          *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<MeshFilter>__);
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
      uVar18 = **(undefined8 **)(lVar12 + 0xb8);
      lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                 );
      FUN_02e6c0a0(lVar10,uVar18,
                   *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__,0);
      plVar15 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *plVar15 = lVar10;
      thunk_FUN_01f51358(plVar15,lVar10);
    }
    plVar15 = (long *)FUN_0230b6f4(uVar19,lVar10,
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__);
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
            puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_033815e0;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_01ecb238(plVar15,*(long *)
                                      Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__,
                             0);
LAB_033815e0:
      plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
      puVar8 = Method_DefaultNamespace_UI_GameplayUI_Refresh__;
      puVar7 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
      puVar6 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
      puVar5 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03381668;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar4,0);
LAB_03381668:
        uVar9 = (*(code *)*puVar13)(plVar15,puVar13[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar15 == (long *)0x0) {
            return uVar14;
          }
          lVar12 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 == 0) goto LAB_0338179c;
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03381784;
        }
        lVar12 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_033816c4;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar6,0);
LAB_033816c4:
        lVar12 = (*(code *)*puVar13)(plVar15,puVar13[1]);
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar10);
          lVar10 = *(long *)puVar3;
        }
        lVar20 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar20 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          uVar19 = **(undefined8 **)(lVar10 + 0xb8);
          lVar20 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
          FUN_02a487e4(lVar20,uVar19,*(undefined8 *)puVar8,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
          *plVar11 = lVar20;
          thunk_FUN_01f51358(plVar11,lVar20);
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_030f459c(lVar12,lVar20,*(undefined8 *)puVar7);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_03381784:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_033817b8;
    }
  }
LAB_0338179c:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_033817b8:
  (*(code *)*puVar13)(plVar15,puVar13[1]);
  return uVar14;
}


