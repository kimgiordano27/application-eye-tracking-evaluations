/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_message_t_session_handle_set
ENTRY_POINT: 0788c664
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0788ca6c) */
/* WARNING: Removing unreachable block (ram,0x0788ca70) */
/* WARNING: Removing unreachable block (ram,0x0788cc48) */
/* WARNING: Removing unreachable block (ram,0x0788cb68) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_message_t_session_handle_set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x25;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  ulong in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  lVar7 = thunk_FUN_03ac74bc();
  FUN_05ed0550(lVar7,*unaff_x21);
  lVar8 = thunk_FUN_03ac74bc(*unaff_x19);
  FUN_05ed0550(lVar8,*unaff_x21);
  lVar14 = *unaff_x20;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 10) * 0x10 + 0x138);
        goto LAB_0788c6d8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c6d8:
  lVar14 = (*(code *)*puVar9)();
  puVar4 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar3 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
  puVar9 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  puVar1 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
  if (lVar14 != 0) {
    FUN_05ed172c(&stack0x00000020,lVar14,
                 *(undefined8 *)
                  System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
    in_stack_000000c0 = in_stack_00000040;
    in_stack_00000058 = &stack0x000000a0;
    in_stack_000000a8 = in_stack_00000028;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while (uVar10 = FUN_062727f4(&stack0x000000a0,*puVar9), lVar13 = in_stack_000000b8,
          uVar15 = in_stack_000000b0, lVar14 = in_stack_00000050, (uVar10 & 1) != 0) {
      if (in_stack_000000b8 == 0) {
LAB_0788ca18:
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05ed12f0(lVar7,uVar15 & 0xffffffff,0,
                     *(undefined8 *)
                      UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
      }
      else {
        lVar14 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar14 == 0) goto LAB_0788ca18;
        lVar14 = *(long *)(lVar13 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6ec70(&stack0x00000020,lVar14,
                     *(undefined8 *)
                      System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
        in_stack_00000070 = in_stack_00000020;
        in_stack_00000020 = 0;
        in_stack_00000078 = in_stack_00000028;
        in_stack_00000088 = in_stack_00000038;
        in_stack_00000080 = in_stack_00000030;
        in_stack_00000098 = in_stack_00000048;
        in_stack_00000090 = in_stack_00000040;
        in_stack_00000028 = &stack0x00000070;
        while (uVar11 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar2),
              uVar5 = in_stack_00000090, lVar14 = in_stack_00000088, uVar10 = in_stack_00000080,
              puVar9 = (undefined8 *)
                       System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo,
              (uVar11 & 1) != 0) {
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar11 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar11 & 1) == 0) {
            in_stack_00000060 = lVar14;
            in_stack_00000068 = uVar5;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar11 = FUN_0584b040(&stack0x00000060,
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                 );
            if ((uVar11 & 1) == 0) {
              in_stack_00000060 = lVar14;
              in_stack_00000068 = uVar5;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar11 = FUN_0584b0bc(&stack0x00000060,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
              if ((uVar11 & 1) != 0) {
                if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar11 = FUN_05ed14e4(in_stack_00000018,uVar15 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                     );
                if ((uVar11 & 1) == 0) {
                  uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                             );
                  FUN_05f6dacc(uVar12,*(undefined8 *)
                                       UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                              );
                  FUN_05ed12f0(in_stack_00000018,uVar15 & 0xffffffff,uVar12,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                              );
                }
                lVar13 = FUN_05ed1250(in_stack_00000018,uVar15 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6e848(lVar13,uVar10,lVar14,uVar5,*(undefined8 *)puVar4);
              }
            }
            else {
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar11 = FUN_05ed14e4(lVar7,uVar15 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                   );
              if ((uVar11 & 1) == 0) {
                uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                             UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                           );
                FUN_05f6dacc(uVar12,*(undefined8 *)
                                     UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                            );
                FUN_05ed12f0(lVar7,uVar15 & 0xffffffff,uVar12,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            );
              }
              lVar13 = FUN_05ed1250(lVar7,uVar15 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848(lVar13,uVar10,lVar14,uVar5,*(undefined8 *)puVar4);
            }
          }
          else {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar11 = FUN_05ed14e4(lVar8,uVar15 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                 );
            if ((uVar11 & 1) == 0) {
              uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar12,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(lVar8,uVar15 & 0xffffffff,uVar12,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar13 = FUN_05ed1250(lVar8,uVar15 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar13,uVar10,lVar14,uVar5,*(undefined8 *)puVar4);
          }
        }
        FUN_06289384(&stack0x00000070,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
      }
    }
    FUN_06272918(in_stack_00000058,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    puVar1 = UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo;
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar14);
    }
    if (in_stack_00000018 != 0) {
      iVar6 = FUN_05ed0f88(in_stack_00000018,
                           *(undefined8 *)
                            UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo);
      if ((0 < iVar6) && (lVar14 = *(long *)(in_stack_00000010 + 0x40), lVar14 != 0)) {
        (**(code **)(lVar14 + 0x18))
                  (*(undefined8 *)(lVar14 + 0x40),in_stack_00000018,*(undefined8 *)(lVar14 + 0x28));
      }
      if (lVar7 != 0) {
        iVar6 = FUN_05ed0f88(lVar7,*(undefined8 *)puVar1);
        if ((0 < iVar6) && (lVar14 = *(long *)(in_stack_00000010 + 0x48), lVar14 != 0)) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),lVar7,*(undefined8 *)(lVar14 + 0x28));
        }
        if (lVar8 != 0) {
          iVar6 = FUN_05ed0f88(lVar8,*(undefined8 *)puVar1);
          if ((0 < iVar6) && (lVar7 = *(long *)(in_stack_00000010 + 0x50), lVar7 != 0)) {
            (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),lVar8,*(undefined8 *)(lVar7 + 0x28));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


