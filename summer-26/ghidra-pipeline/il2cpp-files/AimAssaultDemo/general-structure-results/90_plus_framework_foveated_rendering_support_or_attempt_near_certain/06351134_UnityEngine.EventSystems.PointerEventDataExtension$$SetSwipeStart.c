/*
FUNCTION_NAME: UnityEngine.EventSystems.PointerEventDataExtension$$SetSwipeStart
ENTRY_POINT: 06351134
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 165
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;telemetry;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_2;strong_foveation_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515e0) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

void UnityEngine_EventSystems_PointerEventDataExtension__SetSwipeStart(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long unaff_x24;
  long *unaff_x26;
  undefined8 uVar11;
  long unaff_x28;
  undefined1 auVar12 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
code_r0x06351134:
  plVar4 = (long *)FUN_0634424c(param_1,unaff_x24);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_06351168:
  lVar7 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d974d8) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d9b3e8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_06351290;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
    auVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d974d8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_06351300;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(unaff_x26,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
    (*(code *)*puVar5)(unaff_x26,auVar12._0_8_,auVar12._8_8_,puVar5[1]);
  } while( true );
  plVar4 = (long *)thunk_FUN_037787d0(plVar4,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
LAB_06351064:
  do {
    do {
      do {
        *(undefined1 *)(unaff_x28 + 0x38) = 1;
        do {
          while( true ) {
            do {
              uVar8 = FUN_05d64e98(&stack0x00000060,*unaff_x19);
              unaff_x28 = in_stack_00000070;
              if ((uVar8 & 1) == 0) {
                FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar8 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar8 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar7 = *(long *)(in_stack_00000030 + 0xe0);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar8 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar8 & 1) != 0) {
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
                      FUN_06352250(in_stack_00000028);
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(in_stack_00000028);
                return;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar7 = *(long *)(in_stack_00000070 + 0x18), lVar7 == 0)) ||
                     (*(char *)(lVar7 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            unaff_x24 = *(long *)(in_stack_00000070 + 0x30);
            uVar8 = FUN_0634f488(in_stack_00000028,lVar7,in_stack_00000030,unaff_x24);
            if ((uVar8 & 1) == 0) break;
            plVar4 = *(long **)(lVar7 + 0x68);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar7 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar5)(plVar4);
            *(undefined1 *)(unaff_x28 + 0x38) = 1;
          }
        } while ((unaff_x24 == 0) || (*(char *)(lVar7 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar4 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar6 = *plVar4;
        uVar11 = *(undefined8 *)(lVar7 + 0x40);
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        param_1 = (long *)(*(code *)*puVar5)(plVar4,uVar11,puVar5[1]);
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)((long)param_1 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(param_1);
          }
          if ((*(char *)((long)param_1 + 0xf2) != '\0') && ((char)param_1[5] == '\0')) {
            plVar4 = *(long **)(lVar7 + 0x68);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar7 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar7 = (*(code *)*puVar5)(plVar4);
            if (lVar7 != 0) {
              uVar11 = thunk_FUN_0374b7cc(lVar7,0);
              plVar4 = (long *)FUN_06348960(in_stack_00000028,uVar11);
              puVar2 = PTR_DAT_07d8ac68;
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
              if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(plVar4);
              }
              if (*(char *)((long)plVar4 + 0xf1) == '\0') {
                uVar11 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar3 = (long *)thunk_FUN_037787d0(lVar7);
                if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar7,uVar11);
                }
              }
              else {
                plVar3 = (long *)FUN_06342b50(plVar4,lVar7);
                if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_0377596c(plVar3,*(long *)puVar2,6);
LAB_06350d8c:
              uVar8 = (*(code *)*puVar5)(plVar3,puVar5[1]);
              plVar10 = (long *)PTR_DAT_07d8ac68;
              if ((uVar8 & 1) == 0) {
                if (*(char *)((long)plVar4 + 0xf1) == '\0') {
                  uVar11 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar4 = (long *)thunk_FUN_037787d0(unaff_x24,uVar11);
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(unaff_x24,uVar11);
                  }
                }
                else {
                  plVar4 = (long *)FUN_06342b50(plVar4,unaff_x24);
                  plVar10 = (long *)PTR_DAT_07d8ac68;
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar7 = *plVar4;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar7 = *plVar4;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  if ((uVar8 & 1) == 0) goto LAB_06350f7c;
                  lVar7 = *plVar4;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  lVar7 = *plVar3;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *plVar10) {
                        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0377596c(plVar3,*plVar10,2);
LAB_06350f68:
                  (*(code *)*puVar5)(plVar3,uVar11,puVar5[1]);
                } while( true );
              }
            }
          }
          goto LAB_06351064;
        }
      } while (*(int *)((long)param_1 + 0x24) != 5);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
      if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4610)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
    } while ((char)param_1[5] != '\0');
    plVar4 = *(long **)(lVar7 + 0x68);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4e80) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_063510d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
    lVar7 = (*(code *)*puVar5)(plVar4);
  } while (lVar7 == 0);
  if ((char)param_1[0x20] == '\0') {
    uVar11 = *(undefined8 *)PTR_DAT_07d974d8;
    unaff_x26 = (long *)thunk_FUN_037787d0(lVar7,uVar11);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar7,uVar11);
    }
  }
  else {
    unaff_x26 = (long *)FUN_0634424c(param_1,lVar7);
  }
  if ((char)param_1[0x20] != '\0') goto code_r0x06351134;
  uVar11 = *(undefined8 *)PTR_DAT_07d974d8;
  plVar4 = (long *)thunk_FUN_037787d0(unaff_x24,uVar11);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(unaff_x24,uVar11);
  }
  goto LAB_06351168;
LAB_06350f7c:
  plVar4 = (long *)thunk_FUN_037787d0(plVar4,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_06351064;
}


