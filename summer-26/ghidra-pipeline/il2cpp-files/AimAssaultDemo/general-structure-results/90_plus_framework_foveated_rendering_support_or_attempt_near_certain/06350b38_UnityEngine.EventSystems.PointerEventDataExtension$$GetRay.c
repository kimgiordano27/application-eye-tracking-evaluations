/*
FUNCTION_NAME: UnityEngine.EventSystems.PointerEventDataExtension$$GetRay
ENTRY_POINT: 06350b38
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 230
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;pose_vector;telemetry;foveation_rendering;structure_combo;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;strong_foveation_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

void UnityEngine_EventSystems_PointerEventDataExtension__GetRay(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 uVar10;
  long unaff_x28;
  undefined1 auVar11 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
code_r0x06350b38:
  uVar10 = *(undefined8 *)(unaff_x26 + 0x40);
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4b18) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06350bb8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c(unaff_x25,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
  plVar4 = (long *)(*(code *)*puVar3)(unaff_x25,uVar10,puVar3[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)((long)plVar4 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
    if ((*(char *)((long)plVar4 + 0xf2) != '\0') && ((char)plVar4[5] == '\0')) {
      plVar4 = *(long **)(unaff_x26 + 0x68);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto FUN_06350c88;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
      lVar6 = (*(code *)*puVar3)(plVar4);
      if (lVar6 != 0) {
        uVar10 = thunk_FUN_0374b7cc(lVar6,0);
        plVar4 = (long *)FUN_06348960(in_stack_00000028,uVar10);
        puVar2 = PTR_DAT_07d8ac68;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar4);
        }
        if (*(char *)((long)plVar4 + 0xf1) == '\0') {
          uVar10 = *(undefined8 *)PTR_DAT_07d8ac68;
          plVar5 = (long *)thunk_FUN_037787d0(lVar6);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar6,uVar10);
          }
        }
        else {
          plVar5 = (long *)FUN_06342b50(plVar4,lVar6);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_06350d8c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,6);
LAB_06350d8c:
        uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        plVar9 = (long *)PTR_DAT_07d8ac68;
        if ((uVar7 & 1) == 0) {
          if (*(char *)((long)plVar4 + 0xf1) == '\0') {
            uVar10 = *(undefined8 *)PTR_DAT_07d8ac68;
            plVar4 = (long *)thunk_FUN_037787d0(unaff_x24,uVar10);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(unaff_x24,uVar10);
            }
          }
          else {
            plVar4 = (long *)FUN_06342b50(plVar4,unaff_x24);
            plVar9 = (long *)PTR_DAT_07d8ac68;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d96390) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06350e38;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
          plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          do {
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d89700) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06350ea0;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
            uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            if ((uVar7 & 1) == 0) goto LAB_06350f7c;
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d89700) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto LAB_06350f08;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
            uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            lVar6 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *plVar9) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_06350f68;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c(plVar5,*plVar9,2);
LAB_06350f68:
            (*(code *)*puVar3)(plVar5,uVar10,puVar3[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar4 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    if ((char)plVar4[5] == '\0') {
      plVar5 = *(long **)(unaff_x26 + 0x68);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_063510d4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
      lVar6 = (*(code *)*puVar3)(plVar5);
      if (lVar6 != 0) {
        if ((char)plVar4[0x20] == '\0') {
          uVar10 = *(undefined8 *)PTR_DAT_07d974d8;
          plVar5 = (long *)thunk_FUN_037787d0(lVar6,uVar10);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar6,uVar10);
          }
        }
        else {
          plVar5 = (long *)FUN_0634424c(plVar4,lVar6);
        }
        if ((char)plVar4[0x20] == '\0') {
          uVar10 = *(undefined8 *)PTR_DAT_07d974d8;
          plVar4 = (long *)thunk_FUN_037787d0(unaff_x24,uVar10);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(unaff_x24,uVar10);
          }
        }
        else {
          plVar4 = (long *)FUN_0634424c(plVar4,unaff_x24);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d974d8) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
        plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        do {
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d89700) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
          uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar7 & 1) == 0) goto LAB_06351318;
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_06351290;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
          auVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d974d8) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_06351300;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
          (*(code *)*puVar3)(plVar5,auVar11._0_8_,auVar11._8_8_,puVar3[1]);
        } while( true );
      }
    }
  }
  goto LAB_06351064;
LAB_06351318:
  plVar4 = (long *)thunk_FUN_037787d0(plVar4,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar4 = (long *)thunk_FUN_037787d0(plVar4,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
LAB_06351064:
  *(undefined1 *)(unaff_x28 + 0x38) = 1;
  do {
    while( true ) {
      do {
        uVar7 = FUN_05d64e98(&stack0x00000060,*unaff_x19);
        unaff_x28 = in_stack_00000070;
        if ((uVar7 & 1) == 0) {
          FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
            FUN_049cf910(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar7 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar7 & 1) != 0) {
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                 ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                  ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                lVar6 = *(long *)(in_stack_00000030 + 0xe0);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
              }
            }
            FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          }
          if (in_stack_00000038._4_4_ != 0) {
            FUN_049cf910(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar7 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar7 & 1) != 0) {
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
                (unaff_x26 = *(long *)(in_stack_00000070 + 0x18), unaff_x26 == 0)) ||
               (*(char *)(unaff_x26 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
      unaff_x24 = *(long *)(in_stack_00000070 + 0x30);
      uVar7 = FUN_0634f488(in_stack_00000028,unaff_x26,in_stack_00000030,unaff_x24);
      if ((uVar7 & 1) == 0) break;
      plVar4 = *(long **)(unaff_x26 + 0x68);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06350b8c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
      (*(code *)*puVar3)(plVar4);
      *(undefined1 *)(unaff_x28 + 0x38) = 1;
    }
  } while ((unaff_x24 == 0) || (*(char *)(unaff_x26 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  unaff_x25 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  param_1 = *unaff_x25;
  goto code_r0x06350b38;
}


