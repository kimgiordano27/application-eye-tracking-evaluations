/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_subscription_t
ENTRY_POINT: 0788ba58
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_subscription_t
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long lVar16;
  long lVar17;
  long lVar18;
  long in_x9;
  ulong uVar19;
  code *pcVar20;
  int *in_x10;
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
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)(in_x10[4] + 8) * 0x10 + 0x138);
      goto LAB_0788ba80;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788ba80:
  (*(code *)*puVar9)();
  if ((extraout_x1 & 0xff) == 0) {
    lVar16 = *unaff_x20;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 8) * 0x10 + 0x138);
          goto LAB_0788bae4;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788bae4:
    (*(code *)*puVar9)();
    if ((extraout_x1_00 & 0xff00) != 0) goto LAB_0788baf8;
  }
  else {
LAB_0788baf8:
    lVar16 = *(long *)(unaff_x23 + 0x20);
    if (lVar16 != 0) {
      lVar17 = *unaff_x20;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 8) * 0x10 + 0x138);
            goto LAB_0788bb50;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788bb50:
      uVar10 = (*(code *)*puVar9)();
      (**(code **)(lVar16 + 0x18))
                (*(undefined8 *)(lVar16 + 0x40),uVar10,*(undefined8 *)(lVar16 + 0x28));
    }
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo;
  lVar16 = *unaff_x20;
  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 7) * 0x10 + 0x138);
        goto LAB_0788bbcc;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788bbcc:
  puVar4 = System_Collections_Generic_LinkedList<WebOperation>_TypeInfo;
  _in_stack_00000100 = (*(code *)*puVar9)();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar19 = FUN_0584b198(&stack0x00000100,*(undefined8 *)puVar4);
  if ((uVar19 & 1) == 0) {
    lVar16 = *unaff_x20;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_0788bc5c;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788bc5c:
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar19 = FUN_0584b0bc(&stack0x00000100,*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo
                         );
    if ((uVar19 & 1) != 0) goto LAB_0788bd24;
    lVar16 = *unaff_x20;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto FUN_0788bce8;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
FUN_0788bce8:
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar19 = FUN_0584b040(&stack0x00000100,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
    if ((uVar19 & 1) != 0) goto LAB_0788bd24;
  }
  else {
LAB_0788bd24:
    puVar5 = UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo;
    puVar3 = UnityEngine_Rendering_ListChangedEventHandler<Volume>_TypeInfo;
    lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo);
    FUN_05f6dacc(lVar16,*(undefined8 *)puVar3);
    lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_05f6dacc(lVar17,*(undefined8 *)puVar3);
    lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_05f6dacc(lVar11,*(undefined8 *)puVar3);
    lVar18 = *unaff_x20;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_0788bdc0;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788bdc0:
    auVar22 = (*(code *)*puVar9)();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      _in_stack_00000100 = auVar22;
      thunk_FUN_03ae8be4(*(long *)puVar2);
      auVar22 = _in_stack_00000100;
    }
    if (auVar22._0_8_ == 0) {
      lVar16 = *(long *)(unaff_x23 + 0x30);
      if (lVar16 == 0) {
        return;
      }
      pcVar20 = *(code **)(lVar16 + 0x18);
      uVar10 = *(undefined8 *)(lVar16 + 0x40);
      lVar17 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar22._8_8_;
      _in_stack_00000100 = auVar1 << 0x40;
      goto LAB_0788cc0c;
    }
    lVar18 = *unaff_x20;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_0788be58;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    _in_stack_00000100 = auVar22;
    puVar9 = (undefined8 *)FUN_03ac43c4();
    auVar22 = _in_stack_00000100;
LAB_0788be58:
    _in_stack_00000100 = auVar22;
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar2);
    }
    if (in_stack_00000100 == 0) goto LAB_0788cc50;
    lVar18 = FUN_05f6e50c(in_stack_00000100,
                          *(undefined8 *)UnityEngine_Rendering_ListPool<Camera>_TypeInfo);
    puVar7 = UnityEngine_Rendering_ListPool<int>_TypeInfo;
    puVar6 = UnityEngine_Rendering_ListPool<ValueTuple<HDProbe_RenderData,_HDProbe>>_TypeInfo;
    puVar5 = UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo;
    puVar3 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
    if (lVar18 == 0) goto LAB_0788cc50;
    FUN_04bac724(&stack0x00000020,lVar18,
                 *(undefined8 *)UnityEngine_Rendering_ListPool<RendererListHandle>_TypeInfo);
    in_stack_000000f0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x000000e0;
    while( true ) {
      uVar12 = FUN_06289758(&stack0x000000e0,*(undefined8 *)puVar7);
      uVar19 = in_stack_000000f0;
      if ((uVar12 & 1) == 0) break;
      lVar18 = *unaff_x20;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
            goto LAB_0788bf4c;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788bf4c:
      auVar22 = (*(code *)*puVar9)();
      _in_stack_00000100 = auVar22;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar2);
      }
      uVar12 = FUN_0584b198(&stack0x00000100,*(undefined8 *)puVar4);
      if ((uVar12 & 1) == 0) {
        lVar18 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_0788bfd0;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788bfd0:
        auVar22 = (*(code *)*puVar9)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar19,*(undefined8 *)puVar6);
        _in_stack_000000d0 = auVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        uVar12 = FUN_0584b198(&stack0x000000d0,
                              *(undefined8 *)
                               System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo
                             );
        if ((uVar12 & 1) != 0) goto LAB_0788c038;
        lVar18 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_0788c130;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c130:
        auVar22 = (*(code *)*puVar9)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        uVar12 = FUN_0584b040(&stack0x00000100,
                              *(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
        if ((uVar12 & 1) == 0) {
          lVar18 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_0788c1bc;
              }
              uVar12 = uVar12 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c1bc:
          auVar22 = (*(code *)*puVar9)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar2);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar19,*(undefined8 *)puVar6);
          _in_stack_000000d0 = auVar22;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          uVar12 = FUN_0584b040(&stack0x000000d0,
                                *(undefined8 *)
                                 System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                               );
          if ((uVar12 & 1) != 0) goto LAB_0788c224;
          lVar18 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_0788c31c;
              }
              uVar12 = uVar12 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c31c:
          auVar22 = (*(code *)*puVar9)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar2);
          }
          uVar12 = FUN_0584b0bc(&stack0x00000100,
                                *(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
          if ((uVar12 & 1) != 0) {
            lVar18 = *unaff_x20;
            uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *unaff_x25) {
                  puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                  goto LAB_0788c3a8;
                }
                uVar12 = uVar12 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c3a8:
            auVar22 = (*(code *)*puVar9)();
            _in_stack_00000100 = auVar22;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar2);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar19,*(undefined8 *)puVar6);
            _in_stack_000000d0 = auVar22;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar3);
            }
            uVar12 = FUN_0584b0bc(&stack0x000000d0,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo);
            if ((uVar12 & 1) != 0) {
              lVar18 = *unaff_x20;
              uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar12 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *unaff_x25) {
                    puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                    goto LAB_0788c460;
                  }
                  uVar12 = uVar12 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar12 != 0);
              }
              puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c460:
              auVar22 = (*(code *)*puVar9)();
              _in_stack_00000100 = auVar22;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)puVar2);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar19,*(undefined8 *)puVar6);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0(0,auVar22._8_8_,auVar22._0_8_);
              }
              FUN_05f6e848(lVar16,uVar19,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
            }
          }
        }
        else {
LAB_0788c224:
          lVar18 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_0788c2b4;
              }
              uVar12 = uVar12 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c2b4:
          auVar22 = (*(code *)*puVar9)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar2);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar19,*(undefined8 *)puVar6);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6e848(lVar17,uVar19,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
        }
      }
      else {
LAB_0788c038:
        lVar18 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_0788c0c8;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c0c8:
        auVar22 = (*(code *)*puVar9)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar22 = FUN_05f6e7c4(in_stack_00000100,uVar19,*(undefined8 *)puVar6);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848(lVar11,uVar19,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
      }
    }
    FUN_06289754(&stack0x000000e0,*(undefined8 *)UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo
                );
    puVar2 = UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo;
    if (lVar16 == 0) goto LAB_0788cc50;
    iVar8 = FUN_05f6e4fc(lVar16,*(undefined8 *)
                                 UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
    if ((0 < iVar8) && (lVar18 = *(long *)(unaff_x23 + 0x28), lVar18 != 0)) {
      (**(code **)(lVar18 + 0x18))
                (*(undefined8 *)(lVar18 + 0x40),lVar16,*(undefined8 *)(lVar18 + 0x28));
    }
    if (lVar17 == 0) goto LAB_0788cc50;
    iVar8 = FUN_05f6e4fc(lVar17,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar16 = *(long *)(unaff_x23 + 0x30), lVar16 != 0)) {
      (**(code **)(lVar16 + 0x18))
                (*(undefined8 *)(lVar16 + 0x40),lVar17,*(undefined8 *)(lVar16 + 0x28));
    }
    if (lVar11 == 0) goto LAB_0788cc50;
    iVar8 = FUN_05f6e4fc(lVar11,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar16 = *(long *)(unaff_x23 + 0x38), lVar16 != 0)) {
      (**(code **)(lVar16 + 0x18))
                (*(undefined8 *)(lVar16 + 0x40),lVar11,*(undefined8 *)(lVar16 + 0x28));
    }
  }
  lVar16 = *unaff_x20;
  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 10) * 0x10 + 0x138);
        goto LAB_0788c5c4;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c5c4:
  (*(code *)*puVar9)();
  if ((extraout_x1_01 & 0xff00) == 0) {
    lVar16 = *unaff_x20;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 10) * 0x10 + 0x138);
          goto LAB_0788c628;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c628:
    (*(code *)*puVar9)();
    if ((extraout_x1_02 & 0xff) == 0) {
      return;
    }
  }
  puVar4 = UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo;
  puVar2 = UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo;
  lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
  FUN_05ed0550(lVar16,*(undefined8 *)puVar2);
  lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_05ed0550(lVar11,*(undefined8 *)puVar2);
  lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_05ed0550(lVar17,*(undefined8 *)puVar2);
  lVar18 = *unaff_x20;
  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 10) * 0x10 + 0x138);
        goto LAB_0788c6d8;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788c6d8:
  lVar18 = (*(code *)*puVar9)();
  puVar5 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar3 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar4 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
  puVar9 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
  if (lVar18 != 0) {
    FUN_05ed172c(&stack0x00000020,lVar18,
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
      uVar12 = FUN_062727f4(&stack0x000000a0,*puVar9);
      lVar15 = in_stack_000000b8;
      uVar19 = in_stack_000000b0;
      lVar18 = in_stack_00000050;
      if ((uVar12 & 1) == 0) break;
      if (in_stack_000000b8 == 0) {
LAB_0788ca18:
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05ed12f0(lVar11,uVar19 & 0xffffffff,0,
                     *(undefined8 *)
                      UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
      }
      else {
        lVar18 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar18 == 0) goto LAB_0788ca18;
        lVar18 = *(long *)(lVar15 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6ec70(&stack0x00000020,lVar18,
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
          uVar13 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar4);
          uVar10 = in_stack_00000090;
          lVar18 = in_stack_00000088;
          uVar12 = in_stack_00000080;
          puVar9 = (undefined8 *)
                   System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
          if ((uVar13 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar13 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar13 & 1) == 0) {
            in_stack_00000060 = lVar18;
            in_stack_00000068 = uVar10;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_0584b040(&stack0x00000060,
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                 );
            if ((uVar13 & 1) == 0) {
              in_stack_00000060 = lVar18;
              in_stack_00000068 = uVar10;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_0584b0bc(&stack0x00000060,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
              if ((uVar13 & 1) != 0) {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar13 = FUN_05ed14e4(lVar16,uVar19 & 0xffffffff,
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
                  FUN_05ed12f0(lVar16,uVar19 & 0xffffffff,uVar14,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                              );
                }
                lVar15 = FUN_05ed1250(lVar16,uVar19 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6e848(lVar15,uVar12,lVar18,uVar10,*(undefined8 *)puVar5);
              }
            }
            else {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar13 = FUN_05ed14e4(lVar11,uVar19 & 0xffffffff,
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
                FUN_05ed12f0(lVar11,uVar19 & 0xffffffff,uVar14,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            );
              }
              lVar15 = FUN_05ed1250(lVar11,uVar19 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848(lVar15,uVar12,lVar18,uVar10,*(undefined8 *)puVar5);
            }
          }
          else {
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar13 = FUN_05ed14e4(lVar17,uVar19 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                 );
            if ((uVar13 & 1) == 0) {
              uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar14,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(lVar17,uVar19 & 0xffffffff,uVar14,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar15 = FUN_05ed1250(lVar17,uVar19 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar15,uVar12,lVar18,uVar10,*(undefined8 *)puVar5);
          }
        }
        FUN_06289384(&stack0x00000070,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
      }
    }
    FUN_06272918(in_stack_00000058,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    puVar2 = UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo;
    if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar18);
    }
    if (lVar16 != 0) {
      iVar8 = FUN_05ed0f88(lVar16,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo
                          );
      if ((0 < iVar8) && (lVar18 = *(long *)(unaff_x23 + 0x40), lVar18 != 0)) {
        (**(code **)(lVar18 + 0x18))
                  (*(undefined8 *)(lVar18 + 0x40),lVar16,*(undefined8 *)(lVar18 + 0x28));
      }
      if (lVar11 != 0) {
        iVar8 = FUN_05ed0f88(lVar11,*(undefined8 *)puVar2);
        if ((0 < iVar8) && (lVar16 = *(long *)(unaff_x23 + 0x48), lVar16 != 0)) {
          (**(code **)(lVar16 + 0x18))
                    (*(undefined8 *)(lVar16 + 0x40),lVar11,*(undefined8 *)(lVar16 + 0x28));
        }
        if (lVar17 != 0) {
          iVar8 = FUN_05ed0f88(lVar17,*(undefined8 *)puVar2);
          if (iVar8 < 1) {
            return;
          }
          lVar16 = *(long *)(unaff_x23 + 0x50);
          if (lVar16 == 0) {
            return;
          }
          pcVar20 = *(code **)(lVar16 + 0x18);
          uVar10 = *(undefined8 *)(lVar16 + 0x40);
LAB_0788cc0c:
          (*pcVar20)(uVar10,lVar17,*(undefined8 *)(lVar16 + 0x28));
          return;
        }
      }
    }
  }
LAB_0788cc50:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


