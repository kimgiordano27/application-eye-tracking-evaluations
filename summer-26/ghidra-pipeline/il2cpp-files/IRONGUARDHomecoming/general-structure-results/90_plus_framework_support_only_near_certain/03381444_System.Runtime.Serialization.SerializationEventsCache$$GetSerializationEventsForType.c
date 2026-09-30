/*
FUNCTION_NAME: System.Runtime.Serialization.SerializationEventsCache$$GetSerializationEventsForType
ENTRY_POINT: 03381444
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033818dc) */

uint System_Runtime_Serialization_SerializationEventsCache__GetSerializationEventsForType
               (long param_1,long param_2)

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
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 uVar16;
  long unaff_x21;
  long lVar17;
  undefined8 uVar18;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000030;
  
  do {
    FUN_030f2bb4(param_2,unaff_x21,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
System_Runtime_Serialization_SerializationEvents__AddOnDelegate:
    uVar9 = FUN_02c7ab6c(&stack0x00000020,*unaff_x27);
    lVar13 = in_stack_00000030;
    if ((uVar9 & 1) == 0) {
      FUN_02c7ab68(&stack0x00000020,*(undefined8 *)Method_Scene_GameUIController_<Start>b__30_0__);
      puVar7 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        uVar18 = FUN_02b6b184(*(long *)(unaff_x19 + 0x40),
                              *(undefined8 *)
                               Method_UnityEngine_GameObject_GetComponent<MeshFilter>__);
        lVar13 = *(long *)puVar7;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar13);
          lVar13 = *(long *)puVar7;
        }
        lVar10 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
        if (lVar10 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar13);
            lVar13 = *(long *)puVar7;
          }
          uVar16 = **(undefined8 **)(lVar13 + 0xb8);
          lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                     );
          FUN_02e6c0a0(lVar10,uVar16,
                       *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__,0
                      );
          plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
          *plVar14 = lVar10;
          thunk_FUN_01f51358(plVar14,lVar10);
        }
        plVar14 = (long *)FUN_0230b6f4(uVar18,lVar10,
                                       *(undefined8 *)
                                        Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                      );
        if (plVar14 != (long *)0x0) {
          lVar13 = *plVar14;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 == 0) goto LAB_033815bc;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          break;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = FUN_0337ff40();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar14 = *(long **)(lVar10 + 0x10);
    uVar18 = *(undefined8 *)(lVar10 + 0x18);
    uVar9 = FUN_034a66c0(plVar14,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar18 = FUN_03405678(*(undefined8 *)
                             Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__,
                            *(undefined8 *)(lVar13 + 0x10),0);
      FUN_033a19f0(uVar18,0);
LAB_033811f0:
      in_stack_00000000._4_4_ = 0;
      goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
    }
    uVar16 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar16 = FUN_03579868(uVar16,0);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar16,uVar16);
    }
    lVar10 = (**(code **)(*plVar14 + 0x208))(plVar14,uVar16,0,*(undefined8 *)(*plVar14 + 0x210));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar10 + 0x18) == 0) {
      uVar18 = FUN_03406290(*(undefined8 *)
                             Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                            ,plVar14,0);
      FUN_033a19f0(uVar18,0);
      goto LAB_033811f0;
    }
    plVar11 = (long *)FUN_022f69fc(lVar10,*unaff_x25);
    if (plVar11 == (long *)0x0) {
LAB_033812c4:
      FUN_033a19f0(*unaff_x26,0);
      goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
    }
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24))
    goto LAB_033812c4;
    unaff_x21 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_UnityEngine_GameObject_TryGetComponent<Canvas>__);
    FUN_0337f95c();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(unaff_x21 + 0x10) = uVar18;
    thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x10),uVar18);
    *(long *)(unaff_x21 + 0x18) = (long)plVar14;
    thunk_FUN_01f51358((long *)(unaff_x21 + 0x18),plVar14);
    uVar18 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_03579868(uVar18,0);
    *(undefined8 *)(unaff_x21 + 0x38) = uVar18;
    thunk_FUN_01f51358();
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
      lVar10 = *(long *)(unaff_x19 + 0x40);
      uVar16 = *(undefined8 *)(lVar13 + 0x20);
      uVar18 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__
                                 );
      FUN_030f2380(uVar18,*(undefined8 *)Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__)
      ;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b6b2e4(lVar10,uVar16,uVar18,
                   *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInChildren<Renderer>__)
      ;
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_2 = FUN_02b6b264(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar13 + 0x20),
                           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Dropdown>__);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *(long *)(param_2 + 0x10);
    lVar10 = *(long *)Method_UnityEngine_GameObject_GetComponent<OVRHand>__;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      plVar14 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
      *plVar14 = unaff_x21;
      thunk_FUN_01f51358(plVar14,unaff_x21);
      goto System_Runtime_Serialization_SerializationEvents__AddOnDelegate;
    }
    param_1 = *(long *)(lVar10 + 0x20);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033815e0;
    }
  }
LAB_033815bc:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar14,*(long *)
                                  Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__,0);
LAB_033815e0:
  plVar14 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
  puVar8 = Method_DefaultNamespace_UI_GameplayUI_Refresh__;
  puVar6 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
  puVar5 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
  puVar4 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar13 = *plVar14;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03381668;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_03381668:
    uVar9 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar14 == (long *)0x0) goto LAB_033817c4;
      lVar13 = *plVar14;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 == 0) goto LAB_0338179c;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar14;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033816c4;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar5,0);
LAB_033816c4:
    lVar13 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    lVar10 = *(long *)puVar7;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar7;
    }
    lVar17 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
    if (lVar17 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar10);
        lVar10 = *(long *)puVar7;
      }
      uVar18 = **(undefined8 **)(lVar10 + 0xb8);
      lVar17 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
      FUN_02a487e4(lVar17,uVar18,*(undefined8 *)puVar8,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
      *plVar11 = lVar17;
      thunk_FUN_01f51358(plVar11,lVar17);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_030f459c(lVar13,lVar17,*(undefined8 *)puVar6);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033817b8;
    }
  }
LAB_0338179c:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar14,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_033817b8:
  (*(code *)*puVar12)(plVar14,puVar12[1]);
LAB_033817c4:
  return in_stack_00000000._4_4_ & 1;
}


