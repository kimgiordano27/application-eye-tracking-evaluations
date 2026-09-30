/*
FUNCTION_NAME: FUN_06350c88
ENTRY_POINT: 06350c88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 179
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x063515e0) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */
/* WARNING: Removing unreachable block (ram,0x06351788) */

void FUN_06350c88(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long unaff_x24;
  long *unaff_x27;
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
  
code_r0x06350c88:
  lVar3 = (*(code *)*param_1)(unaff_x27);
  if (lVar3 != 0) {
    uVar4 = thunk_FUN_0374b7cc(lVar3,0);
    plVar5 = (long *)FUN_06348960(in_stack_00000028,uVar4);
    puVar2 = PTR_DAT_07d8ac68;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar5);
    }
    if (*(char *)((long)plVar5 + 0xf1) == '\0') {
      uVar4 = *(undefined8 *)PTR_DAT_07d8ac68;
      plVar6 = (long *)thunk_FUN_037787d0(lVar3);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(lVar3,uVar4);
      }
    }
    else {
      plVar6 = (long *)FUN_06342b50(plVar5,lVar3);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    lVar3 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_06350d8c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,6);
LAB_06350d8c:
    uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    plVar11 = (long *)PTR_DAT_07d8ac68;
    if ((uVar9 & 1) == 0) {
      if (*(char *)((long)plVar5 + 0xf1) == '\0') {
        uVar4 = *(undefined8 *)PTR_DAT_07d8ac68;
        plVar5 = (long *)thunk_FUN_037787d0(unaff_x24,uVar4);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(unaff_x24,uVar4);
        }
      }
      else {
        plVar5 = (long *)FUN_06342b50(plVar5,unaff_x24);
        plVar11 = (long *)PTR_DAT_07d8ac68;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      }
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d96390) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06350e38;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
      plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d89700) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06350ea0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
        uVar9 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        if ((uVar9 & 1) == 0) goto LAB_06350f7c;
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d89700) {
              puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_06350f08;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
        uVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        lVar3 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *plVar11) {
              puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_06350f68;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar6,*plVar11,2);
LAB_06350f68:
        (*(code *)*puVar7)(plVar6,uVar4,puVar7[1]);
      } while( true );
    }
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar5 = (long *)thunk_FUN_037787d0(plVar5,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
LAB_06351064:
  do {
    *(undefined1 *)(unaff_x28 + 0x38) = 1;
    do {
      while( true ) {
        do {
          uVar9 = FUN_05d64e98(&stack0x00000060,*unaff_x19);
          unaff_x28 = in_stack_00000070;
          if ((uVar9 & 1) == 0) {
            FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
            if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
              FUN_049cf910(&stack0x00000040);
              in_stack_00000068 = in_stack_00000048;
              in_stack_00000060 = in_stack_00000040;
              in_stack_00000070 = in_stack_00000050;
              while (uVar9 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar9 & 1) != 0) {
                if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                   ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                  lVar3 = *(long *)(in_stack_00000030 + 0xe0);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
                }
              }
              FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
            }
            if (in_stack_00000038._4_4_ != 0) {
              FUN_049cf910(&stack0x00000040);
              in_stack_00000068 = in_stack_00000048;
              in_stack_00000060 = in_stack_00000040;
              in_stack_00000070 = in_stack_00000050;
              while (uVar9 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar9 & 1) != 0) {
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
                  (lVar3 = *(long *)(in_stack_00000070 + 0x18), lVar3 == 0)) ||
                 (*(char *)(lVar3 + 0x80) != '\0')) ||
                ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                 ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
        unaff_x24 = *(long *)(in_stack_00000070 + 0x30);
        uVar9 = FUN_0634f488(in_stack_00000028,lVar3,in_stack_00000030,unaff_x24);
        if ((uVar9 & 1) == 0) break;
        plVar5 = *(long **)(lVar3 + 0x68);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db4e80) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06350b8c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
        (*(code *)*puVar7)(plVar5);
        *(undefined1 *)(unaff_x28 + 0x38) = 1;
      }
    } while ((unaff_x24 == 0) || (*(char *)(lVar3 + 0x82) != '\0'));
    if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar5 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar8 = *plVar5;
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db4b18) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06350bb8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
    plVar5 = (long *)(*(code *)*puVar7)(plVar5,uVar4,puVar7[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)((long)plVar5 + 0x24) != 2) {
      if (*(int *)((long)plVar5 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4610
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54();
        }
        if ((char)plVar5[5] == '\0') {
          plVar6 = *(long **)(lVar3 + 0x68);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar3 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db4e80) {
                puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_063510d4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
          lVar3 = (*(code *)*puVar7)(plVar6);
          if (lVar3 != 0) {
            if ((char)plVar5[0x20] == '\0') {
              uVar4 = *(undefined8 *)PTR_DAT_07d974d8;
              plVar6 = (long *)thunk_FUN_037787d0(lVar3,uVar4);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(lVar3,uVar4);
              }
            }
            else {
              plVar6 = (long *)FUN_0634424c(plVar5,lVar3);
            }
            if ((char)plVar5[0x20] == '\0') {
              uVar4 = *(undefined8 *)PTR_DAT_07d974d8;
              plVar5 = (long *)thunk_FUN_037787d0(unaff_x24,uVar4);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(unaff_x24,uVar4);
              }
            }
            else {
              plVar5 = (long *)FUN_0634424c(plVar5,unaff_x24);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            }
            lVar3 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d974d8) {
                  puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                  goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
            plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            do {
              lVar3 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d89700) {
                    puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
              uVar9 = (*(code *)*puVar7)(plVar5,puVar7[1]);
              if ((uVar9 & 1) == 0) goto LAB_06351318;
              lVar3 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                    puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                    goto LAB_06351290;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
              auVar12 = (*(code *)*puVar7)(plVar5,puVar7[1]);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar3 = *plVar6;
              uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_06351300;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
              (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_,puVar7[1]);
            } while( true );
          }
        }
      }
      goto LAB_06351064;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar5);
    }
  } while ((*(char *)((long)plVar5 + 0xf2) == '\0') || ((char)plVar5[5] != '\0'));
  unaff_x27 = *(long **)(lVar3 + 0x68);
  if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar3 = *unaff_x27;
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db4e80) {
        param_1 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto code_r0x06350c88;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  param_1 = (undefined8 *)FUN_0377596c(unaff_x27,*(long *)PTR_DAT_07db4e80,1);
  goto code_r0x06350c88;
LAB_06351318:
  plVar5 = (long *)thunk_FUN_037787d0(plVar5,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
  goto LAB_06351064;
}


