/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_notification_t_session_handle_set
ENTRY_POINT: 0788bcd4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_8;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


/* WARNING: Removing unreachable block (ram,0x0788ca6c) */
/* WARNING: Removing unreachable block (ram,0x0788ca70) */
/* WARNING: Removing unreachable block (ram,0x0788cc48) */
/* WARNING: Removing unreachable block (ram,0x0788cb68) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_notification_t_session_handle_set
               (undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar17;
  code *pcVar18;
  int *piVar19;
  long *unaff_x20;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined1 auVar20 [16];
  long in_stack_00000010;
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
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  ulong in_stack_000000f0;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  
  _in_stack_00000100 = (*(code *)*param_1)();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar7 = FUN_0584b040(&stack0x00000100,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
  puVar3 = UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo;
  puVar2 = UnityEngine_Rendering_ListChangedEventHandler<Volume>_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo);
    FUN_05f6dacc(lVar8,*(undefined8 *)puVar2);
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
    FUN_05f6dacc(lVar9,*(undefined8 *)puVar2);
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
    FUN_05f6dacc(lVar10,*(undefined8 *)puVar2);
    lVar17 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar7 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x25) {
          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
          goto LAB_0788bdc0;
        }
        uVar7 = uVar7 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788bdc0:
    auVar20 = (*(code *)*puVar11)();
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      _in_stack_00000100 = auVar20;
      thunk_FUN_03ae8be4(*unaff_x27);
      auVar20 = _in_stack_00000100;
    }
    if (auVar20._0_8_ == 0) {
      lVar8 = *(long *)(unaff_x23 + 0x30);
      if (lVar8 == 0) {
        return;
      }
      pcVar18 = *(code **)(lVar8 + 0x18);
      uVar16 = *(undefined8 *)(lVar8 + 0x40);
      lVar10 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar20._8_8_;
      _in_stack_00000100 = auVar1 << 0x40;
      goto LAB_0788cc0c;
    }
    lVar17 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar7 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x25) {
          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
          goto LAB_0788be58;
        }
        uVar7 = uVar7 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar7 != 0);
    }
    _in_stack_00000100 = auVar20;
    puVar11 = (undefined8 *)FUN_03ac43c4();
    auVar20 = _in_stack_00000100;
LAB_0788be58:
    _in_stack_00000100 = auVar20;
    auVar20 = (*(code *)*puVar11)();
    _in_stack_00000100 = auVar20;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x27);
    }
    if (in_stack_00000100 == 0) goto LAB_0788cc50;
    lVar17 = FUN_05f6e50c(in_stack_00000100,
                          *(undefined8 *)UnityEngine_Rendering_ListPool<Camera>_TypeInfo);
    puVar5 = UnityEngine_Rendering_ListPool<int>_TypeInfo;
    puVar4 = UnityEngine_Rendering_ListPool<ValueTuple<HDProbe_RenderData,_HDProbe>>_TypeInfo;
    puVar3 = UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo;
    puVar2 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
    if (lVar17 == 0) goto LAB_0788cc50;
    FUN_04bac724(&stack0x00000020,lVar17,
                 *(undefined8 *)UnityEngine_Rendering_ListPool<RendererListHandle>_TypeInfo);
    in_stack_000000f0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x000000e0;
    while( true ) {
      uVar12 = FUN_06289758(&stack0x000000e0,*(undefined8 *)puVar5);
      uVar7 = in_stack_000000f0;
      if ((uVar12 & 1) == 0) break;
      lVar17 = *unaff_x20;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x25) {
            puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
            goto LAB_0788bf4c;
          }
          uVar12 = uVar12 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar12 != 0);
      }
      puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788bf4c:
      auVar20 = (*(code *)*puVar11)();
      _in_stack_00000100 = auVar20;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x27);
      }
      uVar12 = FUN_0584b198(&stack0x00000100,*unaff_x29);
      if ((uVar12 & 1) == 0) {
        lVar17 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x25) {
              puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
              goto LAB_0788bfd0;
            }
            uVar12 = uVar12 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788bfd0:
        auVar20 = (*(code *)*puVar11)();
        _in_stack_00000100 = auVar20;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar20 = FUN_05f6e7c4(in_stack_00000100,uVar7,*(undefined8 *)puVar4);
        _in_stack_000000d0 = auVar20;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        uVar12 = FUN_0584b198(&stack0x000000d0,
                              *(undefined8 *)
                               System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo
                             );
        if ((uVar12 & 1) != 0) goto LAB_0788c038;
        lVar17 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x25) {
              puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
              goto LAB_0788c130;
            }
            uVar12 = uVar12 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c130:
        auVar20 = (*(code *)*puVar11)();
        _in_stack_00000100 = auVar20;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x27);
        }
        uVar12 = FUN_0584b040(&stack0x00000100,
                              *(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
        if ((uVar12 & 1) == 0) {
          lVar17 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar12 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *unaff_x25) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                goto LAB_0788c1bc;
              }
              uVar12 = uVar12 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar12 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c1bc:
          auVar20 = (*(code *)*puVar11)();
          _in_stack_00000100 = auVar20;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x27);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar20 = FUN_05f6e7c4(in_stack_00000100,uVar7,*(undefined8 *)puVar4);
          _in_stack_000000d0 = auVar20;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar2);
          }
          uVar12 = FUN_0584b040(&stack0x000000d0,
                                *(undefined8 *)
                                 System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                               );
          if ((uVar12 & 1) != 0) goto LAB_0788c224;
          lVar17 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar12 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *unaff_x25) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                goto LAB_0788c31c;
              }
              uVar12 = uVar12 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar12 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c31c:
          auVar20 = (*(code *)*puVar11)();
          _in_stack_00000100 = auVar20;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x27);
          }
          uVar12 = FUN_0584b0bc(&stack0x00000100,
                                *(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
          if ((uVar12 & 1) != 0) {
            lVar17 = *unaff_x20;
            uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar12 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *unaff_x25) {
                  puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                  goto LAB_0788c3a8;
                }
                uVar12 = uVar12 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar12 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c3a8:
            auVar20 = (*(code *)*puVar11)();
            _in_stack_00000100 = auVar20;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*unaff_x27);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar20 = FUN_05f6e7c4(in_stack_00000100,uVar7,*(undefined8 *)puVar4);
            _in_stack_000000d0 = auVar20;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar2);
            }
            uVar12 = FUN_0584b0bc(&stack0x000000d0,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo);
            if ((uVar12 & 1) != 0) {
              lVar17 = *unaff_x20;
              uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar12 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *unaff_x25) {
                    puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                    goto LAB_0788c460;
                  }
                  uVar12 = uVar12 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar12 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c460:
              auVar20 = (*(code *)*puVar11)();
              _in_stack_00000100 = auVar20;
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*unaff_x27);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar20 = FUN_05f6e7c4(in_stack_00000100,uVar7,*(undefined8 *)puVar4);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0(0,auVar20._8_8_,auVar20._0_8_);
              }
              FUN_05f6e848(lVar8,uVar7,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)puVar3);
            }
          }
        }
        else {
LAB_0788c224:
          lVar17 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar12 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *unaff_x25) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                goto LAB_0788c2b4;
              }
              uVar12 = uVar12 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar12 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c2b4:
          auVar20 = (*(code *)*puVar11)();
          _in_stack_00000100 = auVar20;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x27);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar20 = FUN_05f6e7c4(in_stack_00000100,uVar7,*(undefined8 *)puVar4);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6e848(lVar9,uVar7,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)puVar3);
        }
      }
      else {
LAB_0788c038:
        lVar17 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x25) {
              puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 7) * 0x10 + 0x138);
              goto LAB_0788c0c8;
            }
            uVar12 = uVar12 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c0c8:
        auVar20 = (*(code *)*puVar11)();
        _in_stack_00000100 = auVar20;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar20 = FUN_05f6e7c4(in_stack_00000100,uVar7,*(undefined8 *)puVar4);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848(lVar10,uVar7,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)puVar3);
      }
    }
    FUN_06289754(&stack0x000000e0,*(undefined8 *)UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo
                );
    puVar2 = UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo;
    if (lVar8 == 0) goto LAB_0788cc50;
    iVar6 = FUN_05f6e4fc(lVar8,*(undefined8 *)
                                UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
    if ((0 < iVar6) && (lVar17 = *(long *)(in_stack_00000010 + 0x28), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar8,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar9 == 0) goto LAB_0788cc50;
    iVar6 = FUN_05f6e4fc(lVar9,*(undefined8 *)puVar2);
    if ((0 < iVar6) && (lVar8 = *(long *)(in_stack_00000010 + 0x30), lVar8 != 0)) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),lVar9,*(undefined8 *)(lVar8 + 0x28))
      ;
    }
    if (lVar10 == 0) goto LAB_0788cc50;
    iVar6 = FUN_05f6e4fc(lVar10,*(undefined8 *)puVar2);
    if ((0 < iVar6) && (lVar8 = *(long *)(in_stack_00000010 + 0x38), lVar8 != 0)) {
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),lVar10,*(undefined8 *)(lVar8 + 0x28));
    }
  }
  lVar8 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar7 != 0) {
    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x25) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar19 + 10) * 0x10 + 0x138);
        goto LAB_0788c5c4;
      }
      uVar7 = uVar7 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c5c4:
  (*(code *)*puVar11)();
  if ((extraout_x1 & 0xff00) == 0) {
    lVar8 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x25) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar19 + 10) * 0x10 + 0x138);
          goto LAB_0788c628;
        }
        uVar7 = uVar7 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c628:
    (*(code *)*puVar11)();
    if ((extraout_x1_00 & 0xff) == 0) {
      return;
    }
  }
  puVar3 = UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo;
  puVar2 = UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo;
  lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
  FUN_05ed0550(lVar8,*(undefined8 *)puVar2);
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_05ed0550(lVar9,*(undefined8 *)puVar2);
  lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_05ed0550(lVar10,*(undefined8 *)puVar2);
  lVar17 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar7 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x25) {
        puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 10) * 0x10 + 0x138);
        goto LAB_0788c6d8;
      }
      uVar7 = uVar7 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_03ac43c4();
LAB_0788c6d8:
  lVar17 = (*(code *)*puVar11)();
  puVar5 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar4 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar3 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
  puVar11 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
  if (lVar17 != 0) {
    FUN_05ed172c(&stack0x00000020,lVar17,
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
      uVar12 = FUN_062727f4(&stack0x000000a0,*puVar11);
      lVar15 = in_stack_000000b8;
      uVar7 = in_stack_000000b0;
      lVar17 = in_stack_00000050;
      if ((uVar12 & 1) == 0) break;
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
        lVar17 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar17 == 0) goto LAB_0788ca18;
        lVar17 = *(long *)(lVar15 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6ec70(&stack0x00000020,lVar17,
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
          uVar13 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar3);
          uVar16 = in_stack_00000090;
          lVar17 = in_stack_00000088;
          uVar12 = in_stack_00000080;
          puVar11 = (undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
          if ((uVar13 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar13 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar4);
          if ((uVar13 & 1) == 0) {
            in_stack_00000060 = lVar17;
            in_stack_00000068 = uVar16;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_0584b040(&stack0x00000060,
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                 );
            if ((uVar13 & 1) == 0) {
              in_stack_00000060 = lVar17;
              in_stack_00000068 = uVar16;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_0584b0bc(&stack0x00000060,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
              if ((uVar13 & 1) != 0) {
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar13 = FUN_05ed14e4(lVar8,uVar7 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                     );
                if ((uVar13 & 1) == 0) {
                  uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                             );
                  FUN_05f6dacc(uVar14,*(undefined8 *)
                                       UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                              );
                  FUN_05ed12f0(lVar8,uVar7 & 0xffffffff,uVar14,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                              );
                }
                lVar15 = FUN_05ed1250(lVar8,uVar7 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6e848(lVar15,uVar12,lVar17,uVar16,*(undefined8 *)puVar5);
              }
            }
            else {
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar13 = FUN_05ed14e4(lVar9,uVar7 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                   );
              if ((uVar13 & 1) == 0) {
                uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                             UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                           );
                FUN_05f6dacc(uVar14,*(undefined8 *)
                                     UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                            );
                FUN_05ed12f0(lVar9,uVar7 & 0xffffffff,uVar14,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            );
              }
              lVar15 = FUN_05ed1250(lVar9,uVar7 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848(lVar15,uVar12,lVar17,uVar16,*(undefined8 *)puVar5);
            }
          }
          else {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar13 = FUN_05ed14e4(lVar10,uVar7 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                 );
            if ((uVar13 & 1) == 0) {
              uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar14,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(lVar10,uVar7 & 0xffffffff,uVar14,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar15 = FUN_05ed1250(lVar10,uVar7 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar15,uVar12,lVar17,uVar16,*(undefined8 *)puVar5);
          }
        }
        FUN_06289384(&stack0x00000070,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
      }
    }
    FUN_06272918(in_stack_00000058,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    puVar2 = UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo;
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar17);
    }
    if (lVar8 != 0) {
      iVar6 = FUN_05ed0f88(lVar8,*(undefined8 *)
                                  UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo)
      ;
      if ((0 < iVar6) && (lVar17 = *(long *)(in_stack_00000010 + 0x40), lVar17 != 0)) {
        (**(code **)(lVar17 + 0x18))
                  (*(undefined8 *)(lVar17 + 0x40),lVar8,*(undefined8 *)(lVar17 + 0x28));
      }
      if (lVar9 != 0) {
        iVar6 = FUN_05ed0f88(lVar9,*(undefined8 *)puVar2);
        if ((0 < iVar6) && (lVar8 = *(long *)(in_stack_00000010 + 0x48), lVar8 != 0)) {
          (**(code **)(lVar8 + 0x18))
                    (*(undefined8 *)(lVar8 + 0x40),lVar9,*(undefined8 *)(lVar8 + 0x28));
        }
        if (lVar10 != 0) {
          iVar6 = FUN_05ed0f88(lVar10,*(undefined8 *)puVar2);
          if (iVar6 < 1) {
            return;
          }
          lVar8 = *(long *)(in_stack_00000010 + 0x50);
          if (lVar8 == 0) {
            return;
          }
          pcVar18 = *(code **)(lVar8 + 0x18);
          uVar16 = *(undefined8 *)(lVar8 + 0x40);
LAB_0788cc0c:
          (*pcVar18)(uVar16,lVar10,*(undefined8 *)(lVar8 + 0x28));
          return;
        }
      }
    }
  }
LAB_0788cc50:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


