/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_subscription_t_application_get
ENTRY_POINT: 0788b834
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_application_get
               (long param_1,undefined1 param_2 [16])

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  int *piVar22;
  long *unaff_x20;
  long unaff_x23;
  undefined1 auVar23 [16];
  ulong in_stack_00000020;
  undefined1 *in_stack_00000028;
  ulong in_stack_00000030;
  undefined1 *in_stack_00000038;
  ulong in_stack_00000040;
  undefined1 *in_stack_00000048;
  long in_stack_00000050;
  undefined1 *in_stack_00000058;
  undefined1 *puStack0000000000000060;
  ulong uStack0000000000000068;
  ulong uStack0000000000000070;
  undefined1 *puStack0000000000000078;
  ulong uStack0000000000000080;
  undefined1 *puStack0000000000000088;
  ulong uStack0000000000000090;
  undefined1 *puStack0000000000000098;
  ulong uStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  ulong uStack00000000000000b0;
  undefined1 *puStack00000000000000b8;
  ulong uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  ulong uStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  ulong uStack00000000000000f0;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  
  puStack0000000000000078 = param_2._8_8_;
  uStack0000000000000070 = param_2._0_8_;
  uStack00000000000000e0 = 0;
  puStack00000000000000e8 = (undefined1 *)0x0;
  uStack00000000000000f0 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000d8 = 0;
  uStack00000000000000c0 = 0;
  puStack0000000000000060 = (undefined1 *)0x0;
  uStack0000000000000068 = 0;
  uStack0000000000000080 = uStack0000000000000070;
  puStack0000000000000088 = puStack0000000000000078;
  uStack0000000000000090 = uStack0000000000000070;
  puStack0000000000000098 = puStack0000000000000078;
  uStack00000000000000a0 = uStack0000000000000070;
  puStack00000000000000a8 = puStack0000000000000078;
  uStack00000000000000b0 = uStack0000000000000070;
  puStack00000000000000b8 = puStack0000000000000078;
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40));
  }
  puVar2 = PTR_DAT_0848b5c8;
  if (unaff_x20 == (long *)0x0) goto LAB_0788cc50;
  lVar17 = *unaff_x20;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0848b5c8) {
        puVar12 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_0788b8c4;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788b8c4:
  uVar20 = (*(code *)*puVar12)();
  if (((uVar20 & 1) != 0) && (lVar17 = *(long *)(unaff_x23 + 0x58), lVar17 != 0)) {
    (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
  }
  lVar17 = *unaff_x20;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 9) * 0x10 + 0x138);
        goto LAB_0788b93c;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788b93c:
  (*(code *)*puVar12)();
  if ((extraout_x1 & 0xff) == 0) {
    lVar17 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 9) * 0x10 + 0x138);
          goto LAB_0788b9a0;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788b9a0:
    (*(code *)*puVar12)();
    if ((extraout_x1_00 & 0xff00) != 0) goto LAB_0788b9b4;
  }
  else {
LAB_0788b9b4:
    lVar17 = *(long *)(unaff_x23 + 0x18);
    if (lVar17 != 0) {
      lVar18 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar18 + (long)(*piVar22 + 9) * 0x10 + 0x138);
            goto LAB_0788ba0c;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788ba0c:
      uVar13 = (*(code *)*puVar12)();
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar13,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *unaff_x20;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 8) * 0x10 + 0x138);
        goto LAB_0788ba80;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788ba80:
  (*(code *)*puVar12)();
  if ((extraout_x1_01 & 0xff) == 0) {
    lVar17 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 8) * 0x10 + 0x138);
          goto LAB_0788bae4;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788bae4:
    (*(code *)*puVar12)();
    if ((extraout_x1_02 & 0xff00) != 0) goto LAB_0788baf8;
  }
  else {
LAB_0788baf8:
    lVar17 = *(long *)(unaff_x23 + 0x20);
    if (lVar17 != 0) {
      lVar18 = *unaff_x20;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
            goto LAB_0788bb50;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788bb50:
      uVar13 = (*(code *)*puVar12)();
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar13,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  puVar3 = System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo;
  lVar17 = *unaff_x20;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
        goto LAB_0788bbcc;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788bbcc:
  puVar5 = System_Collections_Generic_LinkedList<WebOperation>_TypeInfo;
  _in_stack_00000100 = (*(code *)*puVar12)();
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar20 = FUN_0584b198(&stack0x00000100,*(undefined8 *)puVar5);
  if ((uVar20 & 1) == 0) {
    lVar17 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_0788bc5c;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788bc5c:
    auVar23 = (*(code *)*puVar12)();
    _in_stack_00000100 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar20 = FUN_0584b0bc(&stack0x00000100,*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo
                         );
    if ((uVar20 & 1) != 0) goto LAB_0788bd24;
    lVar17 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto FUN_0788bce8;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4();
FUN_0788bce8:
    auVar23 = (*(code *)*puVar12)();
    _in_stack_00000100 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar20 = FUN_0584b040(&stack0x00000100,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
    if ((uVar20 & 1) != 0) goto LAB_0788bd24;
  }
  else {
LAB_0788bd24:
    puVar6 = UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo;
    puVar4 = UnityEngine_Rendering_ListChangedEventHandler<Volume>_TypeInfo;
    lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo);
    FUN_05f6dacc(lVar17,*(undefined8 *)puVar4);
    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
    FUN_05f6dacc(lVar18,*(undefined8 *)puVar4);
    lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
    FUN_05f6dacc(lVar14,*(undefined8 *)puVar4);
    lVar19 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_0788bdc0;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788bdc0:
    auVar23 = (*(code *)*puVar12)();
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      _in_stack_00000100 = auVar23;
      thunk_FUN_03ae8be4(*(long *)puVar3);
      auVar23 = _in_stack_00000100;
    }
    if (auVar23._0_8_ == 0) {
      lVar17 = *(long *)(unaff_x23 + 0x30);
      if (lVar17 == 0) {
        return;
      }
      pcVar21 = *(code **)(lVar17 + 0x18);
      uVar13 = *(undefined8 *)(lVar17 + 0x40);
      lVar18 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar23._8_8_;
      _in_stack_00000100 = auVar1 << 0x40;
      goto LAB_0788cc0c;
    }
    lVar19 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_0788be58;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    _in_stack_00000100 = auVar23;
    puVar12 = (undefined8 *)FUN_03ac43c4();
    auVar23 = _in_stack_00000100;
LAB_0788be58:
    _in_stack_00000100 = auVar23;
    auVar23 = (*(code *)*puVar12)();
    _in_stack_00000100 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar3);
    }
    if (in_stack_00000100 == 0) goto LAB_0788cc50;
    lVar19 = FUN_05f6e50c(in_stack_00000100,
                          *(undefined8 *)UnityEngine_Rendering_ListPool<Camera>_TypeInfo);
    puVar8 = UnityEngine_Rendering_ListPool<int>_TypeInfo;
    puVar7 = UnityEngine_Rendering_ListPool<ValueTuple<HDProbe_RenderData,_HDProbe>>_TypeInfo;
    puVar6 = UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo;
    puVar4 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
    if (lVar19 == 0) goto LAB_0788cc50;
    FUN_04bac724(&stack0x00000020,lVar19,
                 *(undefined8 *)UnityEngine_Rendering_ListPool<RendererListHandle>_TypeInfo);
    uStack00000000000000f0 = in_stack_00000030;
    puStack00000000000000e8 = in_stack_00000028;
    uStack00000000000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = (undefined1 *)&stack0x000000e0;
    while( true ) {
      uVar15 = FUN_06289758(&stack0x000000e0,*(undefined8 *)puVar8);
      uVar20 = uStack00000000000000f0;
      if ((uVar15 & 1) == 0) break;
      lVar19 = *unaff_x20;
      uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
            goto LAB_0788bf4c;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788bf4c:
      auVar23 = (*(code *)*puVar12)();
      _in_stack_00000100 = auVar23;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar3);
      }
      uVar15 = FUN_0584b198(&stack0x00000100,*(undefined8 *)puVar5);
      if ((uVar15 & 1) == 0) {
        lVar19 = *unaff_x20;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_0788bfd0;
            }
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788bfd0:
        auVar23 = (*(code *)*puVar12)();
        _in_stack_00000100 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar23 = FUN_05f6e7c4(in_stack_00000100,uVar20,*(undefined8 *)puVar7);
        _uStack00000000000000d0 = auVar23;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar4);
        }
        uVar15 = FUN_0584b198(&stack0x000000d0,
                              *(undefined8 *)
                               System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo
                             );
        if ((uVar15 & 1) != 0) goto LAB_0788c038;
        lVar19 = *unaff_x20;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_0788c130;
            }
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c130:
        auVar23 = (*(code *)*puVar12)();
        _in_stack_00000100 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        uVar15 = FUN_0584b040(&stack0x00000100,
                              *(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
        if ((uVar15 & 1) == 0) {
          lVar19 = *unaff_x20;
          uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar15 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_0788c1bc;
              }
              uVar15 = uVar15 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar15 != 0);
          }
          puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c1bc:
          auVar23 = (*(code *)*puVar12)();
          _in_stack_00000100 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar23 = FUN_05f6e7c4(in_stack_00000100,uVar20,*(undefined8 *)puVar7);
          _uStack00000000000000d0 = auVar23;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar4);
          }
          uVar15 = FUN_0584b040(&stack0x000000d0,
                                *(undefined8 *)
                                 System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                               );
          if ((uVar15 & 1) != 0) goto LAB_0788c224;
          lVar19 = *unaff_x20;
          uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar15 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_0788c31c;
              }
              uVar15 = uVar15 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar15 != 0);
          }
          puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c31c:
          auVar23 = (*(code *)*puVar12)();
          _in_stack_00000100 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          uVar15 = FUN_0584b0bc(&stack0x00000100,
                                *(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
          if ((uVar15 & 1) != 0) {
            lVar19 = *unaff_x20;
            uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar15 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                  puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                  goto LAB_0788c3a8;
                }
                uVar15 = uVar15 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar15 != 0);
            }
            puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c3a8:
            auVar23 = (*(code *)*puVar12)();
            _in_stack_00000100 = auVar23;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar3);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar23 = FUN_05f6e7c4(in_stack_00000100,uVar20,*(undefined8 *)puVar7);
            _uStack00000000000000d0 = auVar23;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar4);
            }
            uVar15 = FUN_0584b0bc(&stack0x000000d0,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo);
            if ((uVar15 & 1) != 0) {
              lVar19 = *unaff_x20;
              uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar15 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                    puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                    goto LAB_0788c460;
                  }
                  uVar15 = uVar15 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar15 != 0);
              }
              puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c460:
              auVar23 = (*(code *)*puVar12)();
              _in_stack_00000100 = auVar23;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)puVar3);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar23 = FUN_05f6e7c4(in_stack_00000100,uVar20,*(undefined8 *)puVar7);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0(0,auVar23._8_8_,auVar23._0_8_);
              }
              FUN_05f6e848(lVar17,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
            }
          }
        }
        else {
LAB_0788c224:
          lVar19 = *unaff_x20;
          uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar15 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_0788c2b4;
              }
              uVar15 = uVar15 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar15 != 0);
          }
          puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c2b4:
          auVar23 = (*(code *)*puVar12)();
          _in_stack_00000100 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar23 = FUN_05f6e7c4(in_stack_00000100,uVar20,*(undefined8 *)puVar7);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6e848(lVar18,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
        }
      }
      else {
LAB_0788c038:
        lVar19 = *unaff_x20;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_0788c0c8;
            }
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c0c8:
        auVar23 = (*(code *)*puVar12)();
        _in_stack_00000100 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar23 = FUN_05f6e7c4(in_stack_00000100,uVar20,*(undefined8 *)puVar7);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848(lVar14,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
      }
    }
    FUN_06289754(&stack0x000000e0,*(undefined8 *)UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo
                );
    puVar3 = UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo;
    if (lVar17 == 0) goto LAB_0788cc50;
    iVar11 = FUN_05f6e4fc(lVar17,*(undefined8 *)
                                  UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
    if ((0 < iVar11) && (lVar19 = *(long *)(unaff_x23 + 0x28), lVar19 != 0)) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
    }
    if (lVar18 == 0) goto LAB_0788cc50;
    iVar11 = FUN_05f6e4fc(lVar18,*(undefined8 *)puVar3);
    if ((0 < iVar11) && (lVar17 = *(long *)(unaff_x23 + 0x30), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar18,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar14 == 0) goto LAB_0788cc50;
    iVar11 = FUN_05f6e4fc(lVar14,*(undefined8 *)puVar3);
    if ((0 < iVar11) && (lVar17 = *(long *)(unaff_x23 + 0x38), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar14,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *unaff_x20;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 10) * 0x10 + 0x138);
        goto LAB_0788c5c4;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c5c4:
  (*(code *)*puVar12)();
  if ((extraout_x1_03 & 0xff00) == 0) {
    lVar17 = *unaff_x20;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar22 + 10) * 0x10 + 0x138);
          goto LAB_0788c628;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c628:
    (*(code *)*puVar12)();
    if ((extraout_x1_04 & 0xff) == 0) {
      return;
    }
  }
  puVar5 = UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo;
  puVar3 = UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo;
  lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
  FUN_05ed0550(lVar17,*(undefined8 *)puVar3);
  lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_05ed0550(lVar14,*(undefined8 *)puVar3);
  lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_05ed0550(lVar18,*(undefined8 *)puVar3);
  lVar19 = *unaff_x20;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 10) * 0x10 + 0x138);
        goto LAB_0788c6d8;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4();
LAB_0788c6d8:
  lVar19 = (*(code *)*puVar12)();
  puVar4 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar5 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar3 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
  puVar12 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
  if (lVar19 != 0) {
    FUN_05ed172c(&stack0x00000020,lVar19,
                 *(undefined8 *)
                  System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
    uStack00000000000000c0 = in_stack_00000040;
    in_stack_00000058 = (undefined1 *)&stack0x000000a0;
    puStack00000000000000a8 = in_stack_00000028;
    uStack00000000000000a0 = in_stack_00000020;
    puStack00000000000000b8 = in_stack_00000038;
    uStack00000000000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while( true ) {
      uVar15 = FUN_062727f4(&stack0x000000a0,*puVar12);
      puVar9 = puStack00000000000000b8;
      uVar20 = uStack00000000000000b0;
      lVar19 = in_stack_00000050;
      if ((uVar15 & 1) == 0) break;
      if (puStack00000000000000b8 == (undefined1 *)0x0) {
LAB_0788ca18:
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05ed12f0(lVar14,uVar20 & 0xffffffff,0,
                     *(undefined8 *)
                      UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
      }
      else {
        lVar19 = *(long *)(puStack00000000000000b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar19 == 0) goto LAB_0788ca18;
        lVar19 = *(long *)(puVar9 + 0x38);
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
        uStack0000000000000070 = in_stack_00000020;
        in_stack_00000020 = 0;
        puStack0000000000000078 = in_stack_00000028;
        puStack0000000000000088 = in_stack_00000038;
        uStack0000000000000080 = in_stack_00000030;
        puStack0000000000000098 = in_stack_00000048;
        uStack0000000000000090 = in_stack_00000040;
        in_stack_00000028 = (undefined1 *)&stack0x00000070;
        while( true ) {
          uVar16 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar3);
          uVar10 = uStack0000000000000090;
          puVar9 = puStack0000000000000088;
          uVar15 = uStack0000000000000080;
          puVar12 = (undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
          if ((uVar16 & 1) == 0) break;
          puStack0000000000000060 = puStack0000000000000088;
          uStack0000000000000068 = uStack0000000000000090;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar16 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar5);
          if ((uVar16 & 1) == 0) {
            puStack0000000000000060 = puVar9;
            uStack0000000000000068 = uVar10;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar16 = FUN_0584b040(&stack0x00000060,
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                 );
            if ((uVar16 & 1) == 0) {
              puStack0000000000000060 = puVar9;
              uStack0000000000000068 = uVar10;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar16 = FUN_0584b0bc(&stack0x00000060,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
              if ((uVar16 & 1) != 0) {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar16 = FUN_05ed14e4(lVar17,uVar20 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                     );
                if ((uVar16 & 1) == 0) {
                  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                             );
                  FUN_05f6dacc(uVar13,*(undefined8 *)
                                       UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                              );
                  FUN_05ed12f0(lVar17,uVar20 & 0xffffffff,uVar13,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                              );
                }
                lVar19 = FUN_05ed1250(lVar17,uVar20 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6e848(lVar19,uVar15,puVar9,uVar10,*(undefined8 *)puVar4);
              }
            }
            else {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar16 = FUN_05ed14e4(lVar14,uVar20 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                   );
              if ((uVar16 & 1) == 0) {
                uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                             UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                           );
                FUN_05f6dacc(uVar13,*(undefined8 *)
                                     UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                            );
                FUN_05ed12f0(lVar14,uVar20 & 0xffffffff,uVar13,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            );
              }
              lVar19 = FUN_05ed1250(lVar14,uVar20 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848(lVar19,uVar15,puVar9,uVar10,*(undefined8 *)puVar4);
            }
          }
          else {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar16 = FUN_05ed14e4(lVar18,uVar20 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                 );
            if ((uVar16 & 1) == 0) {
              uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar13,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(lVar18,uVar20 & 0xffffffff,uVar13,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar19 = FUN_05ed1250(lVar18,uVar20 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar19,uVar15,puVar9,uVar10,*(undefined8 *)puVar4);
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
      iVar11 = FUN_05ed0f88(lVar17,*(undefined8 *)
                                    UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo
                           );
      if ((0 < iVar11) && (lVar19 = *(long *)(unaff_x23 + 0x40), lVar19 != 0)) {
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
      }
      if (lVar14 != 0) {
        iVar11 = FUN_05ed0f88(lVar14,*(undefined8 *)puVar2);
        if ((0 < iVar11) && (lVar17 = *(long *)(unaff_x23 + 0x48), lVar17 != 0)) {
          (**(code **)(lVar17 + 0x18))
                    (*(undefined8 *)(lVar17 + 0x40),lVar14,*(undefined8 *)(lVar17 + 0x28));
        }
        if (lVar18 != 0) {
          iVar11 = FUN_05ed0f88(lVar18,*(undefined8 *)puVar2);
          if (iVar11 < 1) {
            return;
          }
          lVar17 = *(long *)(unaff_x23 + 0x50);
          if (lVar17 == 0) {
            return;
          }
          pcVar21 = *(code **)(lVar17 + 0x18);
          uVar13 = *(undefined8 *)(lVar17 + 0x40);
LAB_0788cc0c:
          (*pcVar21)(uVar13,lVar18,*(undefined8 *)(lVar17 + 0x28));
          return;
        }
      }
    }
  }
LAB_0788cc50:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


