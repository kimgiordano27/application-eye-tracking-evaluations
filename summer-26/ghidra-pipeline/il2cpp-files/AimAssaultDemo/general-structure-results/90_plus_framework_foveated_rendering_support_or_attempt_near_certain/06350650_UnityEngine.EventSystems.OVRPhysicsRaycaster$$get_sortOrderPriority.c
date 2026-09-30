/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRPhysicsRaycaster$$get_sortOrderPriority
ENTRY_POINT: 06350650
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 195
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

long * UnityEngine_EventSystems_OVRPhysicsRaycaster__get_sortOrderPriority(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int unaff_w19;
  long *unaff_x20;
  long *plVar16;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  long *plVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  lVar11 = *unaff_x23;
  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d896f8) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_063506a4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c();
LAB_063506a4:
  (*(code *)*puVar6)();
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac();
  }
  if ((unaff_w19 != 6) && (unaff_w19 != 0)) {
    return unaff_x23;
  }
  lVar11 = FUN_06338600(in_stack_00000030);
  puVar2 = PTR_DAT_07d882c0;
  if (lVar11 != 0) {
    uVar4 = FUN_05450160(lVar11,*(undefined8 *)PTR_DAT_07db4d78);
    plVar7 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,uVar4);
    puVar6 = (undefined8 *)PTR_DAT_07db4f48;
    puVar2 = PTR_DAT_07db4f00;
    if (unaff_x22 != 0) {
      FUN_049cf910(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_06350740:
      uVar14 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
      lVar11 = in_stack_00000070;
      if ((uVar14 & 1) != 0) {
        if (in_stack_00000038._4_4_ == 0) {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        else {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar12 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar12 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar4 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)(PTR_DAT_07d86548 + 0x90)) {
              uVar14 = FUN_0634b6c0(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
              uVar4 = 1;
              if ((uVar14 & 1) == 0) {
                uVar4 = 2;
              }
            }
            else {
              uVar4 = 2;
            }
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,uVar4,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar11 + 0x28) = in_stack_00000040;
          }
        }
        lVar12 = *(long *)(lVar11 + 0x20);
        if (lVar12 == 0) goto LAB_06350914;
        goto LAB_063507e0;
      }
      FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
      if (in_stack_00000020 != 0) {
        plVar7 = (long *)(**(code **)(in_stack_00000020 + 0x18))
                                   (*(undefined8 *)(in_stack_00000020 + 0x40),plVar7,
                                    *(undefined8 *)(in_stack_00000020 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_0634f590(in_stack_00000028);
        }
        FUN_0634f950(in_stack_00000028);
        FUN_049cf910(&stack0x00000040);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_06350a64:
        do {
          while( true ) {
            do {
              uVar14 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
              lVar11 = in_stack_00000070;
              if ((uVar14 & 1) == 0) {
                FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar14 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar14 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar11 = *(long *)(in_stack_00000030 + 0xe0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(lVar11 + 0x18))
                                (*(undefined8 *)(lVar11 + 0x40),plVar7,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar11 + 0x28));
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar14 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar14 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if (*(long *)(in_stack_00000070 + 0x18) != 0) {
                      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(*unaff_x20 + 0x268))();
                      FUN_06352250(in_stack_00000028,plVar7);
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(in_stack_00000028);
                return plVar7;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            } while (((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                     (lVar12 = *(long *)(in_stack_00000070 + 0x18), lVar12 == 0)) ||
                    ((*(char *)(lVar12 + 0x80) != '\0' ||
                     ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                      ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))))));
            lVar8 = *(long *)(in_stack_00000070 + 0x30);
            uVar14 = FUN_0634f488(in_stack_00000028,lVar12,in_stack_00000030,lVar8);
            if ((uVar14 & 1) == 0) break;
            plVar17 = *(long **)(lVar12 + 0x68);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar12 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar6)(plVar17,plVar7,lVar8,puVar6[1]);
            *(undefined1 *)(lVar11 + 0x38) = 1;
          }
        } while ((lVar8 == 0) || (*(char *)(lVar12 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar17 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar13 = *plVar17;
        uVar9 = *(undefined8 *)(lVar12 + 0x40);
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        plVar17 = (long *)(*(code *)*puVar6)(plVar17,uVar9,puVar6[1]);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)((long)plVar17 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar17);
          }
          if ((*(char *)((long)plVar17 + 0xf2) != '\0') && ((char)plVar17[5] == '\0')) {
            plVar17 = *(long **)(lVar12 + 0x68);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar12 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar12 = (*(code *)*puVar6)(plVar17,plVar7,puVar6[1]);
            if (lVar12 != 0) {
              uVar9 = thunk_FUN_0374b7cc(lVar12,0);
              plVar17 = (long *)FUN_06348960(in_stack_00000028,uVar9);
              puVar3 = PTR_DAT_07d8ac68;
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
              if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(plVar17);
              }
              if (*(char *)((long)plVar17 + 0xf1) == '\0') {
                uVar9 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar10 = (long *)thunk_FUN_037787d0(lVar12);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar12,uVar9);
                }
              }
              else {
                plVar10 = (long *)FUN_06342b50(plVar17,lVar12);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar12 = *plVar10;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar3,6);
LAB_06350d8c:
              uVar14 = (*(code *)*puVar6)(plVar10,puVar6[1]);
              plVar16 = (long *)PTR_DAT_07d8ac68;
              if ((uVar14 & 1) == 0) {
                if (*(char *)((long)plVar17 + 0xf1) == '\0') {
                  uVar9 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar17 = (long *)thunk_FUN_037787d0(lVar8,uVar9);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(lVar8,uVar9);
                  }
                }
                else {
                  plVar17 = (long *)FUN_06342b50(plVar17,lVar8);
                  plVar16 = (long *)PTR_DAT_07d8ac68;
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar12 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar17 = (long *)(*(code *)*puVar6)(plVar17,puVar6[1]);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar12 = *plVar17;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar14 = (*(code *)*puVar6)(plVar17,puVar6[1]);
                  if ((uVar14 & 1) == 0) goto LAB_06350f7c;
                  lVar12 = *plVar17;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar9 = (*(code *)*puVar6)(plVar17,puVar6[1]);
                  lVar12 = *plVar10;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *plVar16) {
                        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar10,*plVar16,2);
LAB_06350f68:
                  (*(code *)*puVar6)(plVar10,uVar9,puVar6[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar17 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          if ((char)plVar17[5] == '\0') {
            plVar10 = *(long **)(lVar12 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar12 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_063510d4;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
            lVar12 = (*(code *)*puVar6)(plVar10,plVar7,puVar6[1]);
            if (lVar12 != 0) {
              if ((char)plVar17[0x20] == '\0') {
                uVar9 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar10 = (long *)thunk_FUN_037787d0(lVar12,uVar9);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar12,uVar9);
                }
              }
              else {
                plVar10 = (long *)FUN_0634424c(plVar17,lVar12);
              }
              if ((char)plVar17[0x20] == '\0') {
                uVar9 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar17 = (long *)thunk_FUN_037787d0(lVar8,uVar9);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar8,uVar9);
                }
              }
              else {
                plVar17 = (long *)FUN_0634424c(plVar17,lVar8);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar12 = *plVar17;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
              plVar17 = (long *)(*(code *)*puVar6)(plVar17,puVar6[1]);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              do {
                lVar12 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d89700) {
                      puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                      goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
                uVar14 = (*(code *)*puVar6)(plVar17,puVar6[1]);
                if ((uVar14 & 1) == 0) goto LAB_06351318;
                lVar12 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_06351290;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
                auVar19 = (*(code *)*puVar6)(plVar17,puVar6[1]);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                lVar12 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d974d8) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto LAB_06351300;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
                (*(code *)*puVar6)(plVar10,auVar19._0_8_,auVar19._8_8_,puVar6[1]);
              } while( true );
            }
          }
        }
        goto LAB_06351064;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_06350914:
  if (*(long *)(lVar11 + 0x18) != 0) {
    uVar9 = FUN_06338600(in_stack_00000030);
    lVar12 = *unaff_x24;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar12);
      lVar12 = *unaff_x24;
    }
    lVar8 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar12);
        lVar12 = *unaff_x24;
      }
      uVar18 = **(undefined8 **)(lVar12 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar8,uVar18,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar17 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
      *plVar17 = lVar8;
      thunk_FUN_037aeb94(plVar17,lVar8);
      puVar6 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar12 = FUN_041f32b0(uVar9,lVar8,*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x60),*puVar6);
    if (lVar12 != 0) {
LAB_063507e0:
      if (*(char *)(lVar12 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar11 + 0x28) != '\0')) &&
           (*(uint *)(lVar11 + 0x2c) < 2)) {
          plVar17 = (long *)(lVar12 + 0x48);
          if (*plVar17 == 0) {
            lVar8 = FUN_063488fc(in_stack_00000028,*(undefined8 *)(lVar12 + 0x40));
            *plVar17 = lVar8;
            thunk_FUN_037aeb94(plVar17);
          }
          in_stack_00000058 = *(undefined8 *)(lVar12 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar5 = FUN_04e5f3c0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if ((uVar5 >> 1 & 1) != 0) {
            FUN_06345efc(lVar12);
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_061d52c8(0);
            uVar9 = FUN_0634b13c();
            *(undefined8 *)(lVar11 + 0x30) = uVar9;
            thunk_FUN_037aeb94();
          }
        }
        lVar8 = FUN_06338600(in_stack_00000030);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar5 = FUN_054507c0(lVar8,lVar12,*(undefined8 *)PTR_DAT_07db4ed8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar12 = *(long *)(lVar11 + 0x30);
        if ((lVar12 != 0) &&
           (lVar8 = thunk_FUN_037787d0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar9,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar7[(long)(int)uVar5 + 4] = lVar12;
        thunk_FUN_037aeb94(plVar7 + (long)(int)uVar5 + 4,lVar12);
        *(undefined1 *)(lVar11 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar17 = (long *)thunk_FUN_037787d0(plVar17,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar17 != (long *)0x0) {
    lVar12 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar6)(plVar17,puVar6[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar17 = (long *)thunk_FUN_037787d0(plVar17,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar17 != (long *)0x0) {
    lVar12 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar17,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar6)(plVar17,puVar6[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar11 + 0x38) = 1;
  goto LAB_06350a64;
}


