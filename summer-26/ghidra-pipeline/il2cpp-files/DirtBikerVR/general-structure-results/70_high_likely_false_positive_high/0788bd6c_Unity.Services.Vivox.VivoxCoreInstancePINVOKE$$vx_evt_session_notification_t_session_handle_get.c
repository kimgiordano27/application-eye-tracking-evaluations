/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_notification_t_session_handle_get
ENTRY_POINT: 0788bd6c
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_notification_t_session_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  int *piVar18;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined1 auVar19 [16];
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
  
  FUN_05f6dacc();
  lVar14 = *unaff_x20;
                    /* try { // try from 0788bd78 to 0798bd7b has its CatchHandler @ 0788c430 */
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* try { // try from 0788bd7c to 0798bda3 has its CatchHandler @ 0788c45c */
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x25) {
                    /* try { // try from 0788bdb4 to 0798bdd3 has its CatchHandler @ 0788c4b0 */
        puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
        goto LAB_0788bdc0;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788bdc0:
  _in_stack_00000100 = (*(code *)*puVar6)();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x27);
  }
  if (in_stack_00000100 != 0) {
    lVar14 = *unaff_x20;
                    /* try { // try from 0788bde4 to 0798bdf3 has its CatchHandler @ 0788c490 */
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
          goto LAB_0788be58;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788be58:
    auVar19 = (*(code *)*puVar6)();
    _in_stack_00000100 = auVar19;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x27);
    }
    if (in_stack_00000100 != 0) {
      lVar14 = FUN_05f6e50c(in_stack_00000100,
                            *(undefined8 *)UnityEngine_Rendering_ListPool<Camera>_TypeInfo);
      puVar4 = UnityEngine_Rendering_ListPool<int>_TypeInfo;
      puVar3 = UnityEngine_Rendering_ListPool<ValueTuple<HDProbe_RenderData,_HDProbe>>_TypeInfo;
      puVar2 = UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo;
      puVar1 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
      if (lVar14 != 0) {
        FUN_04bac724(&stack0x00000020,lVar14,
                     *(undefined8 *)UnityEngine_Rendering_ListPool<RendererListHandle>_TypeInfo);
        in_stack_000000f0 = in_stack_00000030;
        in_stack_000000e8 = in_stack_00000028;
        in_stack_000000e0 = in_stack_00000020;
        in_stack_00000020 = 0;
        in_stack_00000028 = &stack0x000000e0;
        while( true ) {
          uVar7 = FUN_06289758(&stack0x000000e0,*(undefined8 *)puVar4);
          uVar16 = in_stack_000000f0;
          if ((uVar7 & 1) == 0) break;
          lVar14 = *unaff_x20;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar7 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x25) {
                puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_0788bf4c;
              }
              uVar7 = uVar7 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788bf4c:
          auVar19 = (*(code *)*puVar6)();
          _in_stack_00000100 = auVar19;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x27);
          }
          uVar7 = FUN_0584b198(&stack0x00000100,*unaff_x29);
          if ((uVar7 & 1) == 0) {
            lVar14 = *unaff_x20;
            uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar7 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x25) {
                  puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                  goto LAB_0788bfd0;
                }
                uVar7 = uVar7 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788bfd0:
            auVar19 = (*(code *)*puVar6)();
            _in_stack_00000100 = auVar19;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*unaff_x27);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar19 = FUN_05f6e7c4(in_stack_00000100,uVar16,*(undefined8 *)puVar3);
            _in_stack_000000d0 = auVar19;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar1);
            }
            uVar7 = FUN_0584b198(&stack0x000000d0,
                                 *(undefined8 *)
                                  System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo
                                );
            if ((uVar7 & 1) != 0) goto LAB_0788c038;
            lVar14 = *unaff_x20;
            uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar7 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x25) {
                  puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                  goto LAB_0788c130;
                }
                uVar7 = uVar7 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c130:
            auVar19 = (*(code *)*puVar6)();
            _in_stack_00000100 = auVar19;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*unaff_x27);
            }
            uVar7 = FUN_0584b040(&stack0x00000100,
                                 *(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
            if ((uVar7 & 1) == 0) {
              lVar14 = *unaff_x20;
              uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar7 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *unaff_x25) {
                    puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                    goto LAB_0788c1bc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c1bc:
              auVar19 = (*(code *)*puVar6)();
              _in_stack_00000100 = auVar19;
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*unaff_x27);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar19 = FUN_05f6e7c4(in_stack_00000100,uVar16,*(undefined8 *)puVar3);
              _in_stack_000000d0 = auVar19;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)puVar1);
              }
              uVar7 = FUN_0584b040(&stack0x000000d0,
                                   *(undefined8 *)
                                    System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                                  );
              if ((uVar7 & 1) != 0) goto LAB_0788c224;
              lVar14 = *unaff_x20;
              uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar7 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *unaff_x25) {
                    puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                    goto LAB_0788c31c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c31c:
              auVar19 = (*(code *)*puVar6)();
              _in_stack_00000100 = auVar19;
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*unaff_x27);
              }
              uVar7 = FUN_0584b0bc(&stack0x00000100,
                                   *(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
              if ((uVar7 & 1) != 0) {
                lVar14 = *unaff_x20;
                uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar7 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *unaff_x25) {
                      puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                      goto LAB_0788c3a8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c3a8:
                auVar19 = (*(code *)*puVar6)();
                _in_stack_00000100 = auVar19;
                if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(*unaff_x27);
                }
                if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                auVar19 = FUN_05f6e7c4(in_stack_00000100,uVar16,*(undefined8 *)puVar3);
                _in_stack_000000d0 = auVar19;
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(*(long *)puVar1);
                }
                uVar7 = FUN_0584b0bc(&stack0x000000d0,
                                     *(undefined8 *)
                                      UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo
                                    );
                if ((uVar7 & 1) != 0) {
                  lVar14 = *unaff_x20;
                  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar7 != 0) {
                    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *unaff_x25) {
                        puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                        goto LAB_0788c460;
                      }
                      uVar7 = uVar7 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c460:
                  auVar19 = (*(code *)*puVar6)();
                  _in_stack_00000100 = auVar19;
                  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*unaff_x27);
                  }
                  if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  auVar19 = FUN_05f6e7c4(in_stack_00000100,uVar16,*(undefined8 *)puVar3);
                  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0(0,auVar19._8_8_,auVar19._0_8_);
                  }
                  FUN_05f6e848(unaff_x24,uVar16,auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar2);
                }
              }
            }
            else {
LAB_0788c224:
              lVar14 = *unaff_x20;
              uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar7 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *unaff_x25) {
                    puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                    goto LAB_0788c2b4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c2b4:
              auVar19 = (*(code *)*puVar6)();
              _in_stack_00000100 = auVar19;
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*unaff_x27);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e7c4(in_stack_00000100,uVar16,*(undefined8 *)puVar3);
              if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848();
            }
          }
          else {
LAB_0788c038:
            lVar14 = *unaff_x20;
            uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar7 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x25) {
                  puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                  goto LAB_0788c0c8;
                }
                uVar7 = uVar7 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c0c8:
            auVar19 = (*(code *)*puVar6)();
            _in_stack_00000100 = auVar19;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*unaff_x27);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e7c4(in_stack_00000100,uVar16,*(undefined8 *)puVar3);
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848();
          }
        }
        FUN_06289754(&stack0x000000e0,
                     *(undefined8 *)UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo);
        if (unaff_x24 != 0) {
          iVar5 = FUN_05f6e4fc(unaff_x24,
                               *(undefined8 *)
                                UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
          if ((0 < iVar5) && (lVar14 = *(long *)(in_stack_00000010 + 0x28), lVar14 != 0)) {
            (**(code **)(lVar14 + 0x18))
                      (*(undefined8 *)(lVar14 + 0x40),unaff_x24,*(undefined8 *)(lVar14 + 0x28));
          }
          if (unaff_x22 != 0) {
            iVar5 = FUN_05f6e4fc();
            if ((0 < iVar5) && (lVar14 = *(long *)(in_stack_00000010 + 0x30), lVar14 != 0)) {
              (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40));
            }
            if (unaff_x21 != 0) {
              iVar5 = FUN_05f6e4fc();
              if ((0 < iVar5) && (lVar14 = *(long *)(in_stack_00000010 + 0x38), lVar14 != 0)) {
                (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40));
              }
              lVar14 = *unaff_x20;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *unaff_x25) {
                    puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                    goto LAB_0788c5c4;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c5c4:
              (*(code *)*puVar6)();
              if ((extraout_x1 & 0xff00) == 0) {
                lVar14 = *unaff_x20;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *unaff_x25) {
                      puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                      goto LAB_0788c628;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c628:
                (*(code *)*puVar6)();
                if ((extraout_x1_00 & 0xff) == 0) {
                  return;
                }
              }
              puVar2 = UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo;
              puVar1 = UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo;
              lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
              FUN_05ed0550(lVar14,*(undefined8 *)puVar1);
              lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
              FUN_05ed0550(lVar8,*(undefined8 *)puVar1);
              lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
              FUN_05ed0550(lVar9,*(undefined8 *)puVar1);
              lVar15 = *unaff_x20;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *unaff_x25) {
                    puVar6 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                    goto LAB_0788c6d8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_0788c6d8:
              lVar15 = (*(code *)*puVar6)();
              puVar4 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
              puVar3 = 
              System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
              puVar2 = 
              System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
              puVar6 = (undefined8 *)
                       System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
              puVar1 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
              if (lVar15 != 0) {
                FUN_05ed172c(&stack0x00000020,lVar15,
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo
                            );
                in_stack_000000c0 = in_stack_00000040;
                in_stack_00000058 = &stack0x000000a0;
                in_stack_000000a8 = in_stack_00000028;
                in_stack_000000a0 = in_stack_00000020;
                in_stack_000000b8 = in_stack_00000038;
                in_stack_000000b0 = in_stack_00000030;
                in_stack_00000050 = 0;
                while( true ) {
                  uVar7 = FUN_062727f4(&stack0x000000a0,*puVar6);
                  lVar12 = in_stack_000000b8;
                  uVar16 = in_stack_000000b0;
                  lVar15 = in_stack_00000050;
                  if ((uVar7 & 1) == 0) break;
                  if (in_stack_000000b8 == 0) {
LAB_0788ca18:
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    FUN_05ed12f0(lVar8,uVar16 & 0xffffffff,0,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                                );
                  }
                  else {
                    lVar15 = *(long *)(in_stack_000000b8 + 0x38);
                    if (*(int *)(*(long *)
                                  System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    if (lVar15 == 0) goto LAB_0788ca18;
                    lVar15 = *(long *)(lVar12 + 0x38);
                    if (*(int *)(*(long *)
                                  System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    FUN_05f6ec70(&stack0x00000020,lVar15,
                                 *(undefined8 *)
                                  System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo
                                );
                    in_stack_00000070 = in_stack_00000020;
                    in_stack_00000020 = 0;
                    in_stack_00000078 = in_stack_00000028;
                    in_stack_00000088 = in_stack_00000038;
                    in_stack_00000080 = in_stack_00000030;
                    in_stack_00000098 = in_stack_00000048;
                    in_stack_00000090 = in_stack_00000040;
                    in_stack_00000028 = &stack0x00000070;
                    while( true ) {
                      uVar10 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar2);
                      uVar13 = in_stack_00000090;
                      lVar15 = in_stack_00000088;
                      uVar7 = in_stack_00000080;
                      puVar6 = (undefined8 *)
                               System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo
                      ;
                      if ((uVar10 & 1) == 0) break;
                      in_stack_00000060 = in_stack_00000088;
                      in_stack_00000068 = in_stack_00000090;
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      uVar10 = FUN_0584b198(&stack0x00000060,*(undefined8 *)puVar3);
                      if ((uVar10 & 1) == 0) {
                        in_stack_00000060 = lVar15;
                        in_stack_00000068 = uVar13;
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                        }
                        uVar10 = FUN_0584b040(&stack0x00000060,
                                              *(undefined8 *)
                                               System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                             );
                        if ((uVar10 & 1) == 0) {
                          in_stack_00000060 = lVar15;
                          in_stack_00000068 = uVar13;
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4();
                          }
                          uVar10 = FUN_0584b0bc(&stack0x00000060,
                                                *(undefined8 *)
                                                 UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo
                                               );
                          if ((uVar10 & 1) != 0) {
                            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03a8a9c0();
                            }
                            uVar10 = FUN_05ed14e4(lVar14,uVar16 & 0xffffffff,
                                                  *(undefined8 *)
                                                                                                      
                                                  UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                                 );
                            if ((uVar10 & 1) == 0) {
                              uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                                  );
                              FUN_05f6dacc(uVar11,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                                          );
                              FUN_05ed12f0(lVar14,uVar16 & 0xffffffff,uVar11,
                                           *(undefined8 *)
                                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                                          );
                            }
                            lVar12 = FUN_05ed1250(lVar14,uVar16 & 0xffffffff,
                                                  *(undefined8 *)
                                                                                                      
                                                  UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo
                                                 );
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03a8a9c0();
                            }
                            FUN_05f6e848(lVar12,uVar7,lVar15,uVar13,*(undefined8 *)puVar4);
                          }
                        }
                        else {
                          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03a8a9c0();
                          }
                          uVar10 = FUN_05ed14e4(lVar8,uVar16 & 0xffffffff,
                                                *(undefined8 *)
                                                 UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                               );
                          if ((uVar10 & 1) == 0) {
                            uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                                  );
                            FUN_05f6dacc(uVar11,*(undefined8 *)
                                                 UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                                        );
                            FUN_05ed12f0(lVar8,uVar16 & 0xffffffff,uVar11,
                                         *(undefined8 *)
                                          UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                                        );
                          }
                          lVar12 = FUN_05ed1250(lVar8,uVar16 & 0xffffffff,
                                                *(undefined8 *)
                                                 UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo
                                               );
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03a8a9c0();
                          }
                          FUN_05f6e848(lVar12,uVar7,lVar15,uVar13,*(undefined8 *)puVar4);
                        }
                      }
                      else {
                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03a8a9c0();
                        }
                        uVar10 = FUN_05ed14e4(lVar9,uVar16 & 0xffffffff,
                                              *(undefined8 *)
                                               UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                             );
                        if ((uVar10 & 1) == 0) {
                          uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                                  );
                          FUN_05f6dacc(uVar11,*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                                      );
                          FUN_05ed12f0(lVar9,uVar16 & 0xffffffff,uVar11,
                                       *(undefined8 *)
                                        UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                                      );
                        }
                        lVar12 = FUN_05ed1250(lVar9,uVar16 & 0xffffffff,
                                              *(undefined8 *)
                                               UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo
                                             );
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03a8a9c0();
                        }
                        FUN_05f6e848(lVar12,uVar7,lVar15,uVar13,*(undefined8 *)puVar4);
                      }
                    }
                    FUN_06289384(&stack0x00000070,
                                 *(undefined8 *)
                                  System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
                  }
                }
                FUN_06272918(in_stack_00000058,
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
                puVar1 = UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo;
                if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9b8(lVar15);
                }
                if (lVar14 != 0) {
                  iVar5 = FUN_05ed0f88(lVar14,*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo
                                      );
                  if ((0 < iVar5) && (lVar15 = *(long *)(in_stack_00000010 + 0x40), lVar15 != 0)) {
                    (**(code **)(lVar15 + 0x18))
                              (*(undefined8 *)(lVar15 + 0x40),lVar14,*(undefined8 *)(lVar15 + 0x28))
                    ;
                  }
                  if (lVar8 != 0) {
                    iVar5 = FUN_05ed0f88(lVar8,*(undefined8 *)puVar1);
                    if ((0 < iVar5) && (lVar14 = *(long *)(in_stack_00000010 + 0x48), lVar14 != 0))
                    {
                      (**(code **)(lVar14 + 0x18))
                                (*(undefined8 *)(lVar14 + 0x40),lVar8,*(undefined8 *)(lVar14 + 0x28)
                                );
                    }
                    if (lVar9 != 0) {
                      iVar5 = FUN_05ed0f88(lVar9,*(undefined8 *)puVar1);
                      if (iVar5 < 1) {
                        return;
                      }
                      lVar14 = *(long *)(in_stack_00000010 + 0x50);
                      if (lVar14 == 0) {
                        return;
                      }
                      pcVar17 = *(code **)(lVar14 + 0x18);
                      uVar13 = *(undefined8 *)(lVar14 + 0x40);
                      goto LAB_0788cc0c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar14 = *(long *)(unaff_x23 + 0x30);
  if (lVar14 == 0) {
    return;
  }
  pcVar17 = *(code **)(lVar14 + 0x18);
  uVar13 = *(undefined8 *)(lVar14 + 0x40);
  lVar9 = 0;
LAB_0788cc0c:
  (*pcVar17)(uVar13,lVar9,*(undefined8 *)(lVar14 + 0x28));
  return;
}


