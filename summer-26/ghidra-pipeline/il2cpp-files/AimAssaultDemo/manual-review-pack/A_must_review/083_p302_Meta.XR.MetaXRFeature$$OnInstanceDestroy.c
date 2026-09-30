/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnInstanceDestroy
ENTRY_POINT: 0635189c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 179
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351ae0) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

undefined8 Meta_XR_MetaXRFeature__OnInstanceDestroy(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long unaff_x21;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  if (param_2 != 1) {
    FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4(param_1);
  }
  plVar7 = (long *)__cxa_begin_catch();
  lVar13 = *plVar7;
  __cxa_end_catch();
  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar13);
  }
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = (**(code **)(in_stack_00000020 + 0x18))(*(undefined8 *)(in_stack_00000020 + 0x40));
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
        uVar4 = FUN_05d64e98(&stack0x00000060,*unaff_x19);
        lVar13 = in_stack_00000070;
        if ((uVar4 & 1) == 0) {
          FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
            FUN_049cf910(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar4 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                 ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                  ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                lVar13 = *(long *)(in_stack_00000030 + 0xe0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                (**(code **)(lVar13 + 0x18))
                          (*(undefined8 *)(lVar13 + 0x40),uVar3,
                           *(undefined8 *)(in_stack_00000070 + 0x10),
                           *(undefined8 *)(in_stack_00000070 + 0x30),*(undefined8 *)(lVar13 + 0x28))
                ;
              }
            }
            FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          }
          if (in_stack_00000038._4_4_ != 0) {
            FUN_049cf910(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar4 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
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
                FUN_06352250(in_stack_00000028,uVar3);
              }
            }
            FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          }
          FUN_0634fb7c(in_stack_00000028);
          return uVar3;
        }
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                (lVar12 = *(long *)(in_stack_00000070 + 0x18), lVar12 == 0)) ||
               (*(char *)(lVar12 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
      lVar11 = *(long *)(in_stack_00000070 + 0x30);
      uVar4 = FUN_0634f488(in_stack_00000028,lVar12,unaff_x21,lVar11);
      if ((uVar4 & 1) == 0) break;
      plVar7 = *(long **)(lVar12 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar12 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06350b8c;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
      (*(code *)*puVar5)(plVar7,uVar3,lVar11,puVar5[1]);
      *(undefined1 *)(lVar13 + 0x38) = 1;
    }
  } while ((lVar11 == 0) || (*(char *)(lVar12 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar7 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar8 = *plVar7;
  uVar14 = *(undefined8 *)(lVar12 + 0x40);
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4b18) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06350bb8;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
  plVar7 = (long *)(*(code *)*puVar5)(plVar7,uVar14,puVar5[1]);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)((long)plVar7 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar7);
    }
    if ((*(char *)((long)plVar7 + 0xf2) != '\0') && ((char)plVar7[5] == '\0')) {
      plVar7 = *(long **)(lVar12 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar12 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto FUN_06350c88;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
      lVar12 = (*(code *)*puVar5)(plVar7,uVar3,puVar5[1]);
      if (lVar12 != 0) {
        uVar14 = thunk_FUN_0374b7cc(lVar12,0);
        plVar7 = (long *)FUN_06348960(in_stack_00000028,uVar14);
        puVar2 = PTR_DAT_07d8ac68;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar7);
        }
        if (*(char *)((long)plVar7 + 0xf1) == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_07d8ac68;
          plVar6 = (long *)thunk_FUN_037787d0(lVar12);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar12,uVar14);
          }
        }
        else {
          plVar6 = (long *)FUN_06342b50(plVar7,lVar12);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        lVar12 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              goto LAB_06350d8c;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,6);
LAB_06350d8c:
        uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        plVar10 = (long *)PTR_DAT_07d8ac68;
        if ((uVar4 & 1) == 0) {
          if (*(char *)((long)plVar7 + 0xf1) == '\0') {
            uVar14 = *(undefined8 *)PTR_DAT_07d8ac68;
            plVar7 = (long *)thunk_FUN_037787d0(lVar11,uVar14);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(lVar11,uVar14);
            }
          }
          else {
            plVar7 = (long *)FUN_06342b50(plVar7,lVar11);
            plVar10 = (long *)PTR_DAT_07d8ac68;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
          lVar12 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d96390) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06350e38;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
          plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          do {
            lVar12 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
                  puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06350ea0;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
            uVar4 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            if ((uVar4 & 1) == 0) goto LAB_06350f7c;
            lVar12 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
                  puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_06350f08;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
            uVar14 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            lVar12 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *plVar10) {
                  puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_06350f68;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar6,*plVar10,2);
LAB_06350f68:
            (*(code *)*puVar5)(plVar6,uVar14,puVar5[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar7 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    if ((char)plVar7[5] == '\0') {
      plVar6 = *(long **)(lVar12 + 0x68);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar12 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_063510d4;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
      lVar12 = (*(code *)*puVar5)(plVar6,uVar3,puVar5[1]);
      if (lVar12 != 0) {
        if ((char)plVar7[0x20] == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_07d974d8;
          plVar6 = (long *)thunk_FUN_037787d0(lVar12,uVar14);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar12,uVar14);
          }
        }
        else {
          plVar6 = (long *)FUN_0634424c(plVar7,lVar12);
        }
        if ((char)plVar7[0x20] == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_07d974d8;
          plVar7 = (long *)thunk_FUN_037787d0(lVar11,uVar14);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar11,uVar14);
          }
        }
        else {
          plVar7 = (long *)FUN_0634424c(plVar7,lVar11);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        lVar12 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d974d8) {
              puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 9) * 0x10 + 0x138);
              goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
        plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        do {
          lVar12 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
          uVar4 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if ((uVar4 & 1) == 0) goto LAB_06351318;
          lVar12 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_06351290;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
          auVar15 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar12 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d974d8) {
                puVar5 = (undefined8 *)(lVar12 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_06351300;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
          (*(code *)*puVar5)(plVar6,auVar15._0_8_,auVar15._8_8_,puVar5[1]);
        } while( true );
      }
    }
  }
  goto LAB_06351064;
LAB_06351318:
  plVar7 = (long *)thunk_FUN_037787d0(plVar7,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar7 = (long *)thunk_FUN_037787d0(plVar7,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar13 + 0x38) = 1;
  unaff_x21 = in_stack_00000030;
  goto LAB_06350a64;
}


