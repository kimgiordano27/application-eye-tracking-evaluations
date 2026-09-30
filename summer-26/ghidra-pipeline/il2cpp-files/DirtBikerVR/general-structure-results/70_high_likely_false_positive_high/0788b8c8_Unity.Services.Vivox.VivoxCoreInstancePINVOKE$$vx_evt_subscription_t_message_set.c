/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_subscription_t_message_set
ENTRY_POINT: 0788b8c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


/* WARNING: Removing unreachable block (ram,0x0788ca6c) */
/* WARNING: Removing unreachable block (ram,0x0788ca70) */
/* WARNING: Removing unreachable block (ram,0x0788cc48) */
/* WARNING: Removing unreachable block (ram,0x0788cb68) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set(code *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  int *piVar21;
  long *unaff_x20;
  long unaff_x23;
  long *unaff_x25;
  undefined1 auVar22 [16];
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
  
  uVar9 = (*param_1)();
  if (((uVar9 & 1) != 0) && (lVar17 = *(long *)(unaff_x23 + 0x58), lVar17 != 0)) {
    (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
  }
  lVar17 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar9 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 9) * 0x10 + 0x138);
        goto LAB_0788b93c;
      }
      uVar9 = uVar9 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788b93c:
  (*(code *)*puVar10)();
  if ((extraout_x1 & 0xff) == 0) {
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 9) * 0x10 + 0x138);
          goto LAB_0788b9a0;
        }
        uVar9 = uVar9 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788b9a0:
    (*(code *)*puVar10)();
    if ((extraout_x1_00 & 0xff00) != 0) goto LAB_0788b9b4;
  }
  else {
LAB_0788b9b4:
    lVar17 = *(long *)(unaff_x23 + 0x18);
    if (lVar17 != 0) {
      lVar18 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar9 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar21 + 9) * 0x10 + 0x138);
            goto LAB_0788ba0c;
          }
          uVar9 = uVar9 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788ba0c:
      uVar11 = (*(code *)*puVar10)();
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar9 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 8) * 0x10 + 0x138);
        goto LAB_0788ba80;
      }
      uVar9 = uVar9 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788ba80:
  (*(code *)*puVar10)();
  if ((extraout_x1_01 & 0xff) == 0) {
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 8) * 0x10 + 0x138);
          goto LAB_0788bae4;
        }
        uVar9 = uVar9 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788bae4:
    (*(code *)*puVar10)();
    if ((extraout_x1_02 & 0xff00) != 0) goto LAB_0788baf8;
  }
  else {
LAB_0788baf8:
    lVar17 = *(long *)(unaff_x23 + 0x20);
    if (lVar17 != 0) {
      lVar18 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar9 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar21 + 8) * 0x10 + 0x138);
            goto LAB_0788bb50;
          }
          uVar9 = uVar9 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788bb50:
      uVar11 = (*(code *)*puVar10)();
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo;
  lVar17 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar9 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 7) * 0x10 + 0x138);
        goto LAB_0788bbcc;
      }
      uVar9 = uVar9 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788bbcc:
  puVar4 = System_Collections_Generic_LinkedList<WebOperation>_TypeInfo;
  _in_stack_00000100 = (*(code *)*puVar10)();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar9 = FUN_0584b198(&stack0x00000100,*(undefined8 *)puVar4);
  if ((uVar9 & 1) == 0) {
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_0788bc5c;
        }
        uVar9 = uVar9 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788bc5c:
    auVar22 = (*(code *)*puVar10)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0584b0bc(&stack0x00000100,*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo)
    ;
    if ((uVar9 & 1) != 0) goto LAB_0788bd24;
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto FUN_0788bce8;
        }
        uVar9 = uVar9 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4();
FUN_0788bce8:
    auVar22 = (*(code *)*puVar10)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0584b040(&stack0x00000100,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
    if ((uVar9 & 1) != 0) goto LAB_0788bd24;
  }
  else {
LAB_0788bd24:
    puVar5 = UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo;
    puVar3 = UnityEngine_Rendering_ListChangedEventHandler<Volume>_TypeInfo;
    lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo);
    FUN_05f6dacc(lVar17,*(undefined8 *)puVar3);
    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_05f6dacc(lVar18,*(undefined8 *)puVar3);
    lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_05f6dacc(lVar12,*(undefined8 *)puVar3);
    lVar19 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_0788bdc0;
        }
        uVar9 = uVar9 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788bdc0:
    auVar22 = (*(code *)*puVar10)();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      _in_stack_00000100 = auVar22;
      thunk_FUN_03ae8be4(*(long *)puVar2);
      auVar22 = _in_stack_00000100;
    }
    if (auVar22._0_8_ == 0) {
      lVar17 = *(long *)(unaff_x23 + 0x30);
      if (lVar17 == 0) {
        return;
      }
      pcVar20 = *(code **)(lVar17 + 0x18);
      uVar11 = *(undefined8 *)(lVar17 + 0x40);
      lVar18 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar22._8_8_;
      _in_stack_00000100 = auVar1 << 0x40;
      goto LAB_0788cc0c;
    }
    lVar19 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_0788be58;
        }
        uVar9 = uVar9 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar9 != 0);
    }
    _in_stack_00000100 = auVar22;
    puVar10 = (undefined8 *)FUN_03ac43c4();
    auVar22 = _in_stack_00000100;
LAB_0788be58:
    _in_stack_00000100 = auVar22;
    auVar22 = (*(code *)*puVar10)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar2);
    }
    if (in_stack_00000100 == 0) goto LAB_0788cc50;
    lVar19 = FUN_05f6e50c(in_stack_00000100,
                          *(undefined8 *)UnityEngine_Rendering_ListPool<Camera>_TypeInfo);
    puVar7 = UnityEngine_Rendering_ListPool<int>_TypeInfo;
    puVar6 = UnityEngine_Rendering_ListPool<ValueTuple<HDProbe_RenderData,_HDProbe>>_TypeInfo;
    puVar5 = UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo;
    puVar3 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
    if (lVar19 == 0) goto LAB_0788cc50;
    FUN_04bac724(&stack0x00000020,lVar19,
                 *(undefined8 *)UnityEngine_Rendering_ListPool<RendererListHandle>_TypeInfo);
    in_stack_000000f0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x000000e0;
    while( true ) {
      uVar13 = FUN_06289758(&stack0x000000e0,*(undefined8 *)puVar7);
      uVar9 = in_stack_000000f0;
      if ((uVar13 & 1) == 0) break;
      lVar19 = *unaff_x20;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
            goto LAB_0788bf4c;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788bf4c:
      auVar22 = (*(code *)*puVar10)();
      _in_stack_00000100 = auVar22;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar2);
      }
      uVar13 = FUN_0584b198(&stack0x00000100,*(undefined8 *)puVar4);
      if ((uVar13 & 1) == 0) {
        lVar19 = *unaff_x20;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_0788bfd0;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788bfd0:
        auVar22 = (*(code *)*puVar10)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar9,*(undefined8 *)puVar6);
        _in_stack_000000d0 = auVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        uVar13 = FUN_0584b198(&stack0x000000d0,
                              *(undefined8 *)
                               System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo
                             );
        if ((uVar13 & 1) != 0) goto LAB_0788c038;
        lVar19 = *unaff_x20;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_0788c130;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c130:
        auVar22 = (*(code *)*puVar10)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        uVar13 = FUN_0584b040(&stack0x00000100,
                              *(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
        if ((uVar13 & 1) == 0) {
          lVar19 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_0788c1bc;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c1bc:
          auVar22 = (*(code *)*puVar10)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar2);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar9,*(undefined8 *)puVar6);
          _in_stack_000000d0 = auVar22;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          uVar13 = FUN_0584b040(&stack0x000000d0,
                                *(undefined8 *)
                                 System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                               );
          if ((uVar13 & 1) != 0) goto LAB_0788c224;
          lVar19 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_0788c31c;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c31c:
          auVar22 = (*(code *)*puVar10)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar2);
          }
          uVar13 = FUN_0584b0bc(&stack0x00000100,
                                *(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
          if ((uVar13 & 1) != 0) {
            lVar19 = *unaff_x20;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *unaff_x25) {
                  puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                  goto LAB_0788c3a8;
                }
                uVar13 = uVar13 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c3a8:
            auVar22 = (*(code *)*puVar10)();
            _in_stack_00000100 = auVar22;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar2);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar9,*(undefined8 *)puVar6);
            _in_stack_000000d0 = auVar22;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar3);
            }
            uVar13 = FUN_0584b0bc(&stack0x000000d0,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo);
            if ((uVar13 & 1) != 0) {
              lVar19 = *unaff_x20;
              uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar13 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *unaff_x25) {
                    puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                    goto LAB_0788c460;
                  }
                  uVar13 = uVar13 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c460:
              auVar22 = (*(code *)*puVar10)();
              _in_stack_00000100 = auVar22;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)puVar2);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar9,*(undefined8 *)puVar6);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0(0,auVar22._8_8_,auVar22._0_8_);
              }
              FUN_05f6e848(lVar17,uVar9,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
            }
          }
        }
        else {
LAB_0788c224:
          lVar19 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_0788c2b4;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c2b4:
          auVar22 = (*(code *)*puVar10)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar2);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar9,*(undefined8 *)puVar6);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6e848(lVar18,uVar9,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
        }
      }
      else {
LAB_0788c038:
        lVar19 = *unaff_x20;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_0788c0c8;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c0c8:
        auVar22 = (*(code *)*puVar10)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar9,*(undefined8 *)puVar6);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848(lVar12,uVar9,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
      }
    }
    FUN_06289754(&stack0x000000e0,*(undefined8 *)UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo
                );
    puVar2 = UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo;
    if (lVar17 == 0) goto LAB_0788cc50;
    iVar8 = FUN_05f6e4fc(lVar17,*(undefined8 *)
                                 UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
    if ((0 < iVar8) && (lVar19 = *(long *)(unaff_x23 + 0x28), lVar19 != 0)) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
    }
    if (lVar18 == 0) goto LAB_0788cc50;
    iVar8 = FUN_05f6e4fc(lVar18,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x30), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar18,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar12 == 0) goto LAB_0788cc50;
    iVar8 = FUN_05f6e4fc(lVar12,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x38), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar9 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 10) * 0x10 + 0x138);
        goto LAB_0788c5c4;
      }
      uVar9 = uVar9 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c5c4:
  (*(code *)*puVar10)();
  if ((extraout_x1_03 & 0xff00) == 0) {
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 10) * 0x10 + 0x138);
          goto LAB_0788c628;
        }
        uVar9 = uVar9 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c628:
    (*(code *)*puVar10)();
    if ((extraout_x1_04 & 0xff) == 0) {
      return;
    }
  }
  puVar4 = UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo;
  puVar2 = UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo;
  lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
  FUN_05ed0550(lVar17,*(undefined8 *)puVar2);
  lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_05ed0550(lVar12,*(undefined8 *)puVar2);
  lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_05ed0550(lVar18,*(undefined8 *)puVar2);
  lVar19 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar9 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 10) * 0x10 + 0x138);
        goto LAB_0788c6d8;
      }
      uVar9 = uVar9 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_0788c6d8:
  lVar19 = (*(code *)*puVar10)();
  puVar5 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar3 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar4 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
  puVar10 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
  if (lVar19 != 0) {
    FUN_05ed172c(&stack0x00000020,lVar19,
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
      uVar13 = FUN_062727f4(&stack0x000000a0,*puVar10);
      lVar16 = in_stack_000000b8;
      uVar9 = in_stack_000000b0;
      lVar19 = in_stack_00000050;
      if ((uVar13 & 1) == 0) break;
      if (in_stack_000000b8 == 0) {
LAB_0788ca18:
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05ed12f0(lVar12,uVar9 & 0xffffffff,0,
                     *(undefined8 *)
                      UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
      }
      else {
        lVar19 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar19 == 0) goto LAB_0788ca18;
        lVar19 = *(long *)(lVar16 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6ec70(&stack0x00000020,lVar19,
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
          uVar14 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar4);
          uVar11 = in_stack_00000090;
          lVar19 = in_stack_00000088;
          uVar13 = in_stack_00000080;
          puVar10 = (undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
          if ((uVar14 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar14 & 1) == 0) {
            in_stack_00000060 = lVar19;
            in_stack_00000068 = uVar11;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar14 = FUN_0584b040(&stack0x00000060,
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                 );
            if ((uVar14 & 1) == 0) {
              in_stack_00000060 = lVar19;
              in_stack_00000068 = uVar11;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_0584b0bc(&stack0x00000060,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
              if ((uVar14 & 1) != 0) {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar14 = FUN_05ed14e4(lVar17,uVar9 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                     );
                if ((uVar14 & 1) == 0) {
                  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                             );
                  FUN_05f6dacc(uVar15,*(undefined8 *)
                                       UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                              );
                  FUN_05ed12f0(lVar17,uVar9 & 0xffffffff,uVar15,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                              );
                }
                lVar16 = FUN_05ed1250(lVar17,uVar9 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6e848(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar5);
              }
            }
            else {
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar14 = FUN_05ed14e4(lVar12,uVar9 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                   );
              if ((uVar14 & 1) == 0) {
                uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                             UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                           );
                FUN_05f6dacc(uVar15,*(undefined8 *)
                                     UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                            );
                FUN_05ed12f0(lVar12,uVar9 & 0xffffffff,uVar15,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            );
              }
              lVar16 = FUN_05ed1250(lVar12,uVar9 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar5);
            }
          }
          else {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar14 = FUN_05ed14e4(lVar18,uVar9 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                 );
            if ((uVar14 & 1) == 0) {
              uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar15,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(lVar18,uVar9 & 0xffffffff,uVar15,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar16 = FUN_05ed1250(lVar18,uVar9 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar5);
          }
        }
        FUN_06289384(&stack0x00000070,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
      }
    }
    FUN_06272918(in_stack_00000058,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    puVar2 = UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo;
    if (lVar19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar19);
    }
    if (lVar17 != 0) {
      iVar8 = FUN_05ed0f88(lVar17,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo
                          );
      if ((0 < iVar8) && (lVar19 = *(long *)(unaff_x23 + 0x40), lVar19 != 0)) {
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
      }
      if (lVar12 != 0) {
        iVar8 = FUN_05ed0f88(lVar12,*(undefined8 *)puVar2);
        if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x48), lVar17 != 0)) {
          (**(code **)(lVar17 + 0x18))
                    (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
        }
        if (lVar18 != 0) {
          iVar8 = FUN_05ed0f88(lVar18,*(undefined8 *)puVar2);
          if (iVar8 < 1) {
            return;
          }
          lVar17 = *(long *)(unaff_x23 + 0x50);
          if (lVar17 == 0) {
            return;
          }
          pcVar20 = *(code **)(lVar17 + 0x18);
          uVar11 = *(undefined8 *)(lVar17 + 0x40);
LAB_0788cc0c:
          (*pcVar20)(uVar11,lVar18,*(undefined8 *)(lVar17 + 0x28));
          return;
        }
      }
    }
  }
LAB_0788cc50:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


