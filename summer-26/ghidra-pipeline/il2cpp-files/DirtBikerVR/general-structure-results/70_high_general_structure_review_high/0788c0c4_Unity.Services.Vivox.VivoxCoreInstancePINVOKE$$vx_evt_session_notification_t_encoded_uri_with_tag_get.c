/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_notification_t_encoded_uri_with_tag_get
ENTRY_POINT: 0788c0c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0788ca6c) */
/* WARNING: Removing unreachable block (ram,0x0788ca70) */
/* WARNING: Removing unreachable block (ram,0x0788cc48) */
/* WARNING: Removing unreachable block (ram,0x0788cb68) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_notification_t_encoded_uri_with_tag_get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar18 [16];
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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000f0;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  
code_r0x0788c0c4:
  puVar8 = (undefined8 *)(param_1 + 0x138);
  do {
    auVar18 = (*(code *)*puVar8)();
                    /* try { // try from 0788c0e0 to 0798c0ef has its CatchHandler @ 0788c41c */
    _in_stack_00000100 = auVar18;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x27);
    }
                    /* try { // try from 0788c0f0 to 0798c153 has its CatchHandler @ 0788b9d0 */
    if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05f6e7c4(in_stack_00000100,unaff_x24,*unaff_x19);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05f6e848();
LAB_0788bee8:
    uVar7 = FUN_06289758(&stack0x000000e0,*unaff_x26);
    unaff_x24 = in_stack_000000f0;
    if ((uVar7 & 1) == 0) {
      FUN_06289754(&stack0x000000e0,
                   *(undefined8 *)UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo);
      if (in_stack_00000018 == 0) goto LAB_0788cc50;
      iVar6 = FUN_05f6e4fc(in_stack_00000018,
                           *(undefined8 *)
                            UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
      if ((0 < iVar6) && (lVar15 = *(long *)(in_stack_00000010 + 0x28), lVar15 != 0)) {
        (**(code **)(lVar15 + 0x18))
                  (*(undefined8 *)(lVar15 + 0x40),in_stack_00000018,*(undefined8 *)(lVar15 + 0x28));
      }
      if (unaff_x22 == 0) goto LAB_0788cc50;
      iVar6 = FUN_05f6e4fc();
      if ((0 < iVar6) && (lVar15 = *(long *)(in_stack_00000010 + 0x30), lVar15 != 0)) {
        (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40));
      }
      if (unaff_x21 == 0) goto LAB_0788cc50;
      iVar6 = FUN_05f6e4fc();
      if ((0 < iVar6) && (lVar15 = *(long *)(in_stack_00000010 + 0x38), lVar15 != 0)) {
        (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40));
      }
      lVar15 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 == 0) goto LAB_0788c5a4;
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar15 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
          goto LAB_0788bf4c;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788bf4c:
    auVar18 = (*(code *)*puVar8)();
    _in_stack_00000100 = auVar18;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x27);
    }
    uVar7 = FUN_0584b198(&stack0x00000100,*unaff_x29);
    if ((uVar7 & 1) == 0) {
      lVar15 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x25) {
            puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
            goto LAB_0788bfd0;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788bfd0:
      auVar18 = (*(code *)*puVar8)();
      _in_stack_00000100 = auVar18;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x27);
      }
      if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      auVar18 = FUN_05f6e7c4(in_stack_00000100,unaff_x24,*unaff_x19);
      _in_stack_000000d0 = auVar18;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x23);
      }
      uVar7 = FUN_0584b198(&stack0x000000d0,
                           *(undefined8 *)
                            System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo
                          );
      if ((uVar7 & 1) != 0) goto LAB_0788c038;
      lVar15 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x25) {
            puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
            goto LAB_0788c130;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c130:
      auVar18 = (*(code *)*puVar8)();
      _in_stack_00000100 = auVar18;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x27);
      }
      uVar7 = FUN_0584b040(&stack0x00000100,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo)
      ;
      if ((uVar7 & 1) == 0) {
        lVar15 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
              goto LAB_0788c1bc;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c1bc:
        auVar18 = (*(code *)*puVar8)();
        _in_stack_00000100 = auVar18;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar18 = FUN_05f6e7c4(in_stack_00000100,unaff_x24,*unaff_x19);
        _in_stack_000000d0 = auVar18;
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x23);
        }
        uVar7 = FUN_0584b040(&stack0x000000d0,
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                            );
        if ((uVar7 & 1) != 0) goto LAB_0788c224;
        lVar15 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
              goto LAB_0788c31c;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c31c:
        auVar18 = (*(code *)*puVar8)();
        _in_stack_00000100 = auVar18;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x27);
        }
        uVar7 = FUN_0584b0bc(&stack0x00000100,
                             *(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
        if ((uVar7 & 1) != 0) {
          lVar15 = *unaff_x20;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x25) {
                puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
                goto LAB_0788c3a8;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c3a8:
          auVar18 = (*(code *)*puVar8)();
          _in_stack_00000100 = auVar18;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x27);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar18 = FUN_05f6e7c4(in_stack_00000100,unaff_x24,*unaff_x19);
          _in_stack_000000d0 = auVar18;
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x23);
          }
          uVar7 = FUN_0584b0bc(&stack0x000000d0,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo);
          if ((uVar7 & 1) != 0) {
            lVar15 = *unaff_x20;
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *unaff_x25) {
                  puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
                  goto LAB_0788c460;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c460:
            auVar18 = (*(code *)*puVar8)();
            _in_stack_00000100 = auVar18;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*unaff_x27);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar18 = FUN_05f6e7c4(in_stack_00000100,unaff_x24,*unaff_x19);
            if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0(0,auVar18._8_8_,auVar18._0_8_);
            }
            FUN_05f6e848(in_stack_00000018,unaff_x24,auVar18._0_8_,auVar18._8_8_,*unaff_x28);
          }
        }
      }
      else {
LAB_0788c224:
        lVar15 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 7) * 0x10 + 0x138);
              goto LAB_0788c2b4;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c2b4:
        auVar18 = (*(code *)*puVar8)();
        _in_stack_00000100 = auVar18;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e7c4(in_stack_00000100,unaff_x24,*unaff_x19);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848();
      }
      goto LAB_0788bee8;
    }
LAB_0788c038:
    param_1 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x25) {
          param_1 = param_1 + (long)(*piVar17 + 7) * 0x10;
          goto code_r0x0788c0c4;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4();
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar17 = piVar17 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar17 + -2) == *unaff_x25) {
      puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 10) * 0x10 + 0x138);
      goto LAB_0788c5c4;
    }
  }
LAB_0788c5a4:
  puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c5c4:
  (*(code *)*puVar8)();
  if ((extraout_x1 & 0xff00) == 0) {
    lVar15 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 10) * 0x10 + 0x138);
          goto LAB_0788c628;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c628:
    (*(code *)*puVar8)();
    if ((extraout_x1_00 & 0xff) == 0) {
      return;
    }
  }
  puVar2 = UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo;
  puVar1 = UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo;
  lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
  FUN_05ed0550(lVar15,*(undefined8 *)puVar1);
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_05ed0550(lVar9,*(undefined8 *)puVar1);
  lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_05ed0550(lVar10,*(undefined8 *)puVar1);
  lVar16 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar7 != 0) {
    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x25) {
        puVar8 = (undefined8 *)(lVar16 + (long)(*piVar17 + 10) * 0x10 + 0x138);
        goto LAB_0788c6d8;
      }
      uVar7 = uVar7 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788c6d8:
  lVar16 = (*(code *)*puVar8)();
  puVar4 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar3 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
  puVar8 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  puVar1 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
  if (lVar16 != 0) {
    FUN_05ed172c(&stack0x00000020,lVar16,
                 *(undefined8 *)
                  System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
    in_stack_000000c0 = in_stack_00000040;
    in_stack_00000058 = &stack0x000000a0;
    in_stack_000000a8 = in_stack_00000028;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while( true ) {
      uVar11 = FUN_062727f4(&stack0x000000a0,*puVar8);
      lVar14 = in_stack_000000b8;
      uVar7 = in_stack_000000b0;
      lVar16 = in_stack_00000050;
      if ((uVar11 & 1) == 0) break;
      if (in_stack_000000b8 == 0) {
LAB_0788ca18:
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05ed12f0(lVar9,uVar7 & 0xffffffff,0,
                     *(undefined8 *)
                      UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
      }
      else {
        lVar16 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar16 == 0) goto LAB_0788ca18;
        lVar16 = *(long *)(lVar14 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6ec70(&stack0x00000020,lVar16,
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
        while( true ) {
          uVar12 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar2);
          uVar5 = in_stack_00000090;
          lVar16 = in_stack_00000088;
          uVar11 = in_stack_00000080;
          puVar8 = (undefined8 *)
                   System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
          if ((uVar12 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar12 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar12 & 1) == 0) {
            in_stack_00000060 = lVar16;
            in_stack_00000068 = uVar5;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar12 = FUN_0584b040(&stack0x00000060,
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                 );
            if ((uVar12 & 1) == 0) {
              in_stack_00000060 = lVar16;
              in_stack_00000068 = uVar5;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar12 = FUN_0584b0bc(&stack0x00000060,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
              if ((uVar12 & 1) != 0) {
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar12 = FUN_05ed14e4(lVar15,uVar7 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                     );
                if ((uVar12 & 1) == 0) {
                  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                             );
                  FUN_05f6dacc(uVar13,*(undefined8 *)
                                       UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                              );
                  FUN_05ed12f0(lVar15,uVar7 & 0xffffffff,uVar13,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                              );
                }
                lVar14 = FUN_05ed1250(lVar15,uVar7 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6e848(lVar14,uVar11,lVar16,uVar5,*(undefined8 *)puVar4);
              }
            }
            else {
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar12 = FUN_05ed14e4(lVar9,uVar7 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                   );
              if ((uVar12 & 1) == 0) {
                uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                             UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                           );
                FUN_05f6dacc(uVar13,*(undefined8 *)
                                     UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                            );
                FUN_05ed12f0(lVar9,uVar7 & 0xffffffff,uVar13,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            );
              }
              lVar14 = FUN_05ed1250(lVar9,uVar7 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848(lVar14,uVar11,lVar16,uVar5,*(undefined8 *)puVar4);
            }
          }
          else {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar12 = FUN_05ed14e4(lVar10,uVar7 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                 );
            if ((uVar12 & 1) == 0) {
              uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar13,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(lVar10,uVar7 & 0xffffffff,uVar13,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar14 = FUN_05ed1250(lVar10,uVar7 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar14,uVar11,lVar16,uVar5,*(undefined8 *)puVar4);
          }
        }
        FUN_06289384(&stack0x00000070,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
      }
    }
    FUN_06272918(in_stack_00000058,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    puVar1 = UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo;
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar16);
    }
    if (lVar15 != 0) {
      iVar6 = FUN_05ed0f88(lVar15,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo
                          );
      if ((0 < iVar6) && (lVar16 = *(long *)(in_stack_00000010 + 0x40), lVar16 != 0)) {
        (**(code **)(lVar16 + 0x18))
                  (*(undefined8 *)(lVar16 + 0x40),lVar15,*(undefined8 *)(lVar16 + 0x28));
      }
      if (lVar9 != 0) {
        iVar6 = FUN_05ed0f88(lVar9,*(undefined8 *)puVar1);
        if ((0 < iVar6) && (lVar15 = *(long *)(in_stack_00000010 + 0x48), lVar15 != 0)) {
          (**(code **)(lVar15 + 0x18))
                    (*(undefined8 *)(lVar15 + 0x40),lVar9,*(undefined8 *)(lVar15 + 0x28));
        }
        if (lVar10 != 0) {
          iVar6 = FUN_05ed0f88(lVar10,*(undefined8 *)puVar1);
          if ((0 < iVar6) && (lVar15 = *(long *)(in_stack_00000010 + 0x50), lVar15 != 0)) {
            (**(code **)(lVar15 + 0x18))
                      (*(undefined8 *)(lVar15 + 0x40),lVar10,*(undefined8 *)(lVar15 + 0x28));
          }
          return;
        }
      }
    }
  }
LAB_0788cc50:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


