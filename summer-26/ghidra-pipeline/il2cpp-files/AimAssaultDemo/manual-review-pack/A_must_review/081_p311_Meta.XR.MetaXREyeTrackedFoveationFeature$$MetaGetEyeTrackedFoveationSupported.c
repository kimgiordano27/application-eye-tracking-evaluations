/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 063513a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 188
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;strong_foveation_hits_10;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x28;
  undefined1 auVar13 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  if (unaff_w21 != 0) {
    FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
    if (unaff_w21 == 0) {
LAB_06351450:
      if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
        FUN_049cf910(&stack0x00000040);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
        while (uVar5 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar5 & 1) != 0) {
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
        while (uVar5 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar5 & 1) != 0) {
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
    }
    return;
  }
LAB_06351064:
  do {
    *(undefined1 *)(unaff_x28 + 0x38) = 1;
    do {
      while( true ) {
        do {
          uVar5 = FUN_05d64e98(&stack0x00000060,*unaff_x19);
          unaff_x28 = in_stack_00000070;
          if ((uVar5 & 1) == 0) {
            FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
            goto LAB_06351450;
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
        lVar10 = *(long *)(in_stack_00000070 + 0x30);
        uVar5 = FUN_0634f488(in_stack_00000028,lVar7,in_stack_00000030,lVar10);
        if ((uVar5 & 1) == 0) break;
        plVar11 = *(long **)(lVar7 + 0x68);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar11;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4e80) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06350b8c;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
        (*(code *)*puVar3)(plVar11);
        *(undefined1 *)(unaff_x28 + 0x38) = 1;
      }
    } while ((lVar10 == 0) || (*(char *)(lVar7 + 0x82) != '\0'));
    if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar11 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar11;
    uVar12 = *(undefined8 *)(lVar7 + 0x40);
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4b18) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06350bb8;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
    plVar11 = (long *)(*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)((long)plVar11 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar11);
      }
      if ((*(char *)((long)plVar11 + 0xf2) != '\0') && ((char)plVar11[5] == '\0')) {
        plVar11 = *(long **)(lVar7 + 0x68);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar11;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4e80) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto FUN_06350c88;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
        lVar7 = (*(code *)*puVar3)(plVar11);
        if (lVar7 != 0) {
          uVar12 = thunk_FUN_0374b7cc(lVar7,0);
          plVar11 = (long *)FUN_06348960(in_stack_00000028,uVar12);
          puVar2 = PTR_DAT_07d8ac68;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar11);
          }
          if (*(char *)((long)plVar11 + 0xf1) == '\0') {
            uVar12 = *(undefined8 *)PTR_DAT_07d8ac68;
            plVar4 = (long *)thunk_FUN_037787d0(lVar7);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(lVar7,uVar12);
            }
          }
          else {
            plVar4 = (long *)FUN_06342b50(plVar11,lVar7);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
          lVar7 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                goto LAB_06350d8c;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar2,6);
LAB_06350d8c:
          uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          plVar9 = (long *)PTR_DAT_07d8ac68;
          if ((uVar5 & 1) == 0) {
            if (*(char *)((long)plVar11 + 0xf1) == '\0') {
              uVar12 = *(undefined8 *)PTR_DAT_07d8ac68;
              plVar11 = (long *)thunk_FUN_037787d0(lVar10,uVar12);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(lVar10,uVar12);
              }
            }
            else {
              plVar11 = (long *)FUN_06342b50(plVar11,lVar10);
              plVar9 = (long *)PTR_DAT_07d8ac68;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            }
            lVar7 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d96390) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06350e38;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
            plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            do {
              lVar7 = *plVar11;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d89700) {
                    puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_06350ea0;
                  }
                  uVar5 = uVar5 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
              uVar5 = (*(code *)*puVar3)(plVar11,puVar3[1]);
              if ((uVar5 & 1) == 0) goto LAB_06350f7c;
              lVar7 = *plVar11;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d89700) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                    goto LAB_06350f08;
                  }
                  uVar5 = uVar5 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
              uVar12 = (*(code *)*puVar3)(plVar11,puVar3[1]);
              lVar7 = *plVar4;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *plVar9) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                    goto LAB_06350f68;
                  }
                  uVar5 = uVar5 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)FUN_0377596c(plVar4,*plVar9,2);
LAB_06350f68:
              (*(code *)*puVar3)(plVar4,uVar12,puVar3[1]);
            } while( true );
          }
        }
      }
      goto LAB_06351064;
    }
    if (*(int *)((long)plVar11 + 0x24) == 5) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4610)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      if ((char)plVar11[5] == '\0') {
        plVar4 = *(long **)(lVar7 + 0x68);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4e80) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_063510d4;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
        lVar7 = (*(code *)*puVar3)(plVar4);
        if (lVar7 != 0) {
          if ((char)plVar11[0x20] == '\0') {
            uVar12 = *(undefined8 *)PTR_DAT_07d974d8;
            plVar4 = (long *)thunk_FUN_037787d0(lVar7,uVar12);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(lVar7,uVar12);
            }
          }
          else {
            plVar4 = (long *)FUN_0634424c(plVar11,lVar7);
          }
          if ((char)plVar11[0x20] == '\0') {
            uVar12 = *(undefined8 *)PTR_DAT_07d974d8;
            plVar11 = (long *)thunk_FUN_037787d0(lVar10,uVar12);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(lVar10,uVar12);
            }
          }
          else {
            plVar11 = (long *)FUN_0634424c(plVar11,lVar10);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
          lVar7 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d974d8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
                goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
          plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          do {
            lVar7 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d89700) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
            uVar5 = (*(code *)*puVar3)(plVar11,puVar3[1]);
            if ((uVar5 & 1) == 0) goto LAB_06351318;
            lVar7 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_06351290;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
            auVar13 = (*(code *)*puVar3)(plVar11,puVar3[1]);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar7 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d974d8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto LAB_06351300;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
            (*(code *)*puVar3)(plVar4,auVar13._0_8_,auVar13._8_8_,puVar3[1]);
          } while( true );
        }
      }
    }
  } while( true );
LAB_06351318:
  plVar11 = (long *)thunk_FUN_037787d0(plVar11,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar3)(plVar11,puVar3[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar11 = (long *)thunk_FUN_037787d0(plVar11,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar3)(plVar11,puVar3[1]);
  }
  goto LAB_06351064;
}


