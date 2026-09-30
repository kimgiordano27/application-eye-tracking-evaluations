/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_message_t_session_handle_get
ENTRY_POINT: 0788c6fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0788ca6c) */
/* WARNING: Removing unreachable block (ram,0x0788ca70) */
/* WARNING: Removing unreachable block (ram,0x0788cc48) */
/* WARNING: Removing unreachable block (ram,0x0788cb68) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_message_t_session_handle_get
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long unaff_x21;
  long unaff_x22;
  long lVar11;
  long unaff_x26;
  undefined8 *puVar12;
  long unaff_x28;
  long *plVar13;
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
  
  puVar2 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar1 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar12 = *(undefined8 **)(unaff_x26 + 0x288);
  puVar10 = *(undefined8 **)(unaff_x19 + 0x290);
  plVar13 = *(long **)(unaff_x28 + 0x1f8);
  FUN_05ed172c(&stack0x00000020,param_2,*param_1);
  in_stack_000000c0 = in_stack_00000040;
  in_stack_00000058 = &stack0x000000a0;
  in_stack_000000a8 = in_stack_00000028;
  in_stack_000000a0 = in_stack_00000020;
  in_stack_000000b8 = in_stack_00000038;
  in_stack_000000b0 = in_stack_00000030;
  in_stack_00000050 = 0;
  do {
    while( true ) {
      uVar6 = FUN_062727f4(&stack0x000000a0,*puVar12);
      lVar9 = in_stack_000000b8;
      uVar4 = in_stack_000000b0;
      lVar11 = in_stack_00000050;
      if ((uVar6 & 1) == 0) {
        FUN_06272918(in_stack_00000058,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9b8(lVar11);
        }
        if (in_stack_00000018 != 0) {
          iVar5 = FUN_05ed0f88(in_stack_00000018,
                               *(undefined8 *)
                                UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo);
          if ((0 < iVar5) && (lVar11 = *(long *)(in_stack_00000010 + 0x40), lVar11 != 0)) {
            (**(code **)(lVar11 + 0x18))
                      (*(undefined8 *)(lVar11 + 0x40),in_stack_00000018,
                       *(undefined8 *)(lVar11 + 0x28));
          }
          if (unaff_x22 != 0) {
            iVar5 = FUN_05ed0f88();
            if ((0 < iVar5) && (lVar11 = *(long *)(in_stack_00000010 + 0x48), lVar11 != 0)) {
              (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40));
            }
            if (unaff_x21 != 0) {
              iVar5 = FUN_05ed0f88();
              if ((0 < iVar5) && (lVar11 = *(long *)(in_stack_00000010 + 0x50), lVar11 != 0)) {
                (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40));
              }
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (in_stack_000000b8 != 0) break;
LAB_0788ca18:
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05ed12f0();
    }
    lVar11 = *(long *)(in_stack_000000b8 + 0x38);
    if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (lVar11 == 0) goto LAB_0788ca18;
    lVar11 = *(long *)(lVar9 + 0x38);
    if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05f6ec70(&stack0x00000020,lVar11,
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
    while (uVar7 = FUN_06289248(&stack0x00000070,*puVar10), uVar3 = in_stack_00000090,
          lVar11 = in_stack_00000088, uVar6 = in_stack_00000080,
          puVar12 = (undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo,
          (uVar7 & 1) != 0) {
      in_stack_00000060 = in_stack_00000088;
      in_stack_00000068 = in_stack_00000090;
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar1);
      if ((uVar7 & 1) == 0) {
        in_stack_00000060 = lVar11;
        in_stack_00000068 = uVar3;
        if (*(int *)(*plVar13 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar7 = FUN_0584b040(&stack0x00000060,
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                            );
        if ((uVar7 & 1) == 0) {
          in_stack_00000060 = lVar11;
          in_stack_00000068 = uVar3;
          if (*(int *)(*plVar13 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar7 = FUN_0584b0bc(&stack0x00000060,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
          if ((uVar7 & 1) != 0) {
            if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar7 = FUN_05ed14e4(in_stack_00000018,uVar4 & 0xffffffff,
                                 *(undefined8 *)
                                  UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                );
            if ((uVar7 & 1) == 0) {
              uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                          UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar8,*(undefined8 *)
                                  UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(in_stack_00000018,uVar4 & 0xffffffff,uVar8,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar9 = FUN_05ed1250(in_stack_00000018,uVar4 & 0xffffffff,
                                 *(undefined8 *)
                                  UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar9,uVar6,lVar11,uVar3,*(undefined8 *)puVar2);
          }
        }
        else {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar7 = FUN_05ed14e4();
          if ((uVar7 & 1) == 0) {
            uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
            FUN_05f6dacc(uVar8,*(undefined8 *)
                                UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                        );
            FUN_05ed12f0();
          }
          lVar9 = FUN_05ed1250();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6e848(lVar9,uVar6,lVar11,uVar3,*(undefined8 *)puVar2);
        }
      }
      else {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar7 = FUN_05ed14e4();
        if ((uVar7 & 1) == 0) {
          uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
          FUN_05f6dacc(uVar8,*(undefined8 *)
                              UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo);
          FUN_05ed12f0();
        }
        lVar9 = FUN_05ed1250();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848(lVar9,uVar6,lVar11,uVar3,*(undefined8 *)puVar2);
      }
    }
    FUN_06289384(&stack0x00000070,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
  } while( true );
}


