/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRPhysicsRaycaster$$Raycast
ENTRY_POINT: 0635072c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 195
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

undefined8 UnityEngine_EventSystems_OVRPhysicsRaycaster__Raycast(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar13;
  long *unaff_x23;
  undefined4 uVar14;
  long *plVar15;
  undefined8 *unaff_x28;
  undefined8 uVar16;
  long *unaff_x29;
  undefined1 auVar17 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  long lStack0000000000000070;
  
  uStack0000000000000068 = in_stack_00000048;
  uStack0000000000000060 = in_stack_00000040;
  lStack0000000000000070 = in_stack_00000050;
LAB_06350740:
  uVar4 = FUN_05d64e98(&stack0x00000060,*unaff_x19);
  lVar11 = lStack0000000000000070;
  if ((uVar4 & 1) != 0) {
    if (in_stack_00000038._4_4_ == 0) {
      if (lStack0000000000000070 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    else {
      if (lStack0000000000000070 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = *(long *)(lStack0000000000000070 + 0x18);
      if ((lVar9 != 0) && (*(char *)(lStack0000000000000070 + 0x28) == '\0')) {
        if (*(long **)(lStack0000000000000070 + 0x30) == (long *)0x0) {
          uVar14 = 1;
        }
        else if (**(long **)(lStack0000000000000070 + 0x30) == *(long *)(PTR_DAT_07d86548 + 0x90)) {
          uVar4 = FUN_0634b6c0(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48));
          uVar14 = 1;
          if ((uVar4 & 1) == 0) {
            uVar14 = 2;
          }
        }
        else {
          uVar14 = 2;
        }
        in_stack_00000040 = 0;
        FUN_04e5f37c(&stack0x00000040,uVar14,*(undefined8 *)PTR_DAT_07db4f38);
        *(undefined8 *)(lVar11 + 0x28) = in_stack_00000040;
      }
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if (lVar9 == 0) goto LAB_06350914;
    goto LAB_063507e0;
  }
  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar6 = (**(code **)(in_stack_00000020 + 0x18))(*(undefined8 *)(in_stack_00000020 + 0x40));
  if (in_stack_00000018 != 0) {
    FUN_0634f590(in_stack_00000028);
  }
  FUN_0634f950(in_stack_00000028);
  FUN_049cf910(&stack0x00000040);
  uStack0000000000000068 = in_stack_00000048;
  uStack0000000000000060 = in_stack_00000040;
  lStack0000000000000070 = in_stack_00000050;
LAB_06350a64:
  do {
    while( true ) {
      do {
        uVar4 = FUN_05d64e98(&stack0x00000060,*unaff_x19);
        lVar11 = lStack0000000000000070;
        if ((uVar4 & 1) == 0) {
          FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
            FUN_049cf910(&stack0x00000040);
            uStack0000000000000068 = in_stack_00000048;
            uStack0000000000000060 = in_stack_00000040;
            lStack0000000000000070 = in_stack_00000050;
            while (uVar4 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
              if (lStack0000000000000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              if ((*(char *)(lStack0000000000000070 + 0x38) == '\0') &&
                 ((*(ulong *)(lStack0000000000000070 + 0x28) >> 0x20 != 0 ||
                  ((*(ulong *)(lStack0000000000000070 + 0x28) & 0xff) == 0)))) {
                lVar11 = *(long *)(in_stack_00000030 + 0xe0);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                (**(code **)(lVar11 + 0x18))
                          (*(undefined8 *)(lVar11 + 0x40),uVar6,
                           *(undefined8 *)(lStack0000000000000070 + 0x10),
                           *(undefined8 *)(lStack0000000000000070 + 0x30),
                           *(undefined8 *)(lVar11 + 0x28));
              }
            }
            FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          }
          if (in_stack_00000038._4_4_ != 0) {
            FUN_049cf910(&stack0x00000040);
            uStack0000000000000068 = in_stack_00000048;
            uStack0000000000000060 = in_stack_00000040;
            lStack0000000000000070 = in_stack_00000050;
            while (uVar4 = FUN_05d64e98(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
              if (lStack0000000000000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              if (*(long *)(lStack0000000000000070 + 0x18) != 0) {
                if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                (**(code **)(*unaff_x20 + 0x268))();
                FUN_06352250(in_stack_00000028,uVar6);
              }
            }
            FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
          }
          FUN_0634fb7c(in_stack_00000028);
          return uVar6;
        }
        if (lStack0000000000000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      } while ((((*(char *)(lStack0000000000000070 + 0x38) != '\0') ||
                (lVar9 = *(long *)(lStack0000000000000070 + 0x18), lVar9 == 0)) ||
               (*(char *)(lVar9 + 0x80) != '\0')) ||
              ((*(ulong *)(lStack0000000000000070 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(lStack0000000000000070 + 0x28) & 0xff) != 0))));
      lVar5 = *(long *)(lStack0000000000000070 + 0x30);
      uVar4 = FUN_0634f488(in_stack_00000028,lVar9,unaff_x21,lVar5);
      if ((uVar4 & 1) == 0) break;
      plVar15 = *(long **)(lVar9 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = *plVar15;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06350b8c;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
      (*(code *)*puVar7)(plVar15,uVar6,lVar5,puVar7[1]);
      *(undefined1 *)(lVar11 + 0x38) = 1;
    }
  } while ((lVar5 == 0) || (*(char *)(lVar9 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar15 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar10 = *plVar15;
  uVar16 = *(undefined8 *)(lVar9 + 0x40);
  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar4 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db4b18) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06350bb8;
      }
      uVar4 = uVar4 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
  plVar15 = (long *)(*(code *)*puVar7)(plVar15,uVar16,puVar7[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)((long)plVar15 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4648))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar15);
    }
    if ((*(char *)((long)plVar15 + 0xf2) != '\0') && ((char)plVar15[5] == '\0')) {
      plVar15 = *(long **)(lVar9 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = *plVar15;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto FUN_06350c88;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
      lVar9 = (*(code *)*puVar7)(plVar15,uVar6,puVar7[1]);
      if (lVar9 != 0) {
        uVar16 = thunk_FUN_0374b7cc(lVar9,0);
        plVar15 = (long *)FUN_06348960(in_stack_00000028,uVar16);
        puVar2 = PTR_DAT_07d8ac68;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar15);
        }
        if (*(char *)((long)plVar15 + 0xf1) == '\0') {
          uVar16 = *(undefined8 *)PTR_DAT_07d8ac68;
          plVar8 = (long *)thunk_FUN_037787d0(lVar9);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar9,uVar16);
          }
        }
        else {
          plVar8 = (long *)FUN_06342b50(plVar15,lVar9);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        lVar9 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
              goto LAB_06350d8c;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,6);
LAB_06350d8c:
        uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        plVar13 = (long *)PTR_DAT_07d8ac68;
        if ((uVar4 & 1) == 0) {
          if (*(char *)((long)plVar15 + 0xf1) == '\0') {
            uVar16 = *(undefined8 *)PTR_DAT_07d8ac68;
            plVar15 = (long *)thunk_FUN_037787d0(lVar5,uVar16);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(lVar5,uVar16);
            }
          }
          else {
            plVar15 = (long *)FUN_06342b50(plVar15,lVar5);
            plVar13 = (long *)PTR_DAT_07d8ac68;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
          lVar9 = *plVar15;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d96390) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06350e38;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
          plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          do {
            lVar9 = *plVar15;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d89700) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_06350ea0;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
            uVar4 = (*(code *)*puVar7)(plVar15,puVar7[1]);
            if ((uVar4 & 1) == 0) goto LAB_06350f7c;
            lVar9 = *plVar15;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d89700) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_06350f08;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
            uVar16 = (*(code *)*puVar7)(plVar15,puVar7[1]);
            lVar9 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *plVar13) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_06350f68;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar8,*plVar13,2);
LAB_06350f68:
            (*(code *)*puVar7)(plVar8,uVar16,puVar7[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar15 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4610))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    if ((char)plVar15[5] == '\0') {
      plVar8 = *(long **)(lVar9 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db4e80) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_063510d4;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
      lVar9 = (*(code *)*puVar7)(plVar8,uVar6,puVar7[1]);
      if (lVar9 != 0) {
        if ((char)plVar15[0x20] == '\0') {
          uVar16 = *(undefined8 *)PTR_DAT_07d974d8;
          plVar8 = (long *)thunk_FUN_037787d0(lVar9,uVar16);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar9,uVar16);
          }
        }
        else {
          plVar8 = (long *)FUN_0634424c(plVar15,lVar9);
        }
        if ((char)plVar15[0x20] == '\0') {
          uVar16 = *(undefined8 *)PTR_DAT_07d974d8;
          plVar15 = (long *)thunk_FUN_037787d0(lVar5,uVar16);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar5,uVar16);
          }
        }
        else {
          plVar15 = (long *)FUN_0634424c(plVar15,lVar5);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        lVar9 = *plVar15;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d974d8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
        plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        do {
          lVar9 = *plVar15;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d89700) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
          uVar4 = (*(code *)*puVar7)(plVar15,puVar7[1]);
          if ((uVar4 & 1) == 0) goto LAB_06351318;
          lVar9 = *plVar15;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_06351290;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
          auVar17 = (*(code *)*puVar7)(plVar15,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar9 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d974d8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_06351300;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
          (*(code *)*puVar7)(plVar8,auVar17._0_8_,auVar17._8_8_,puVar7[1]);
        } while( true );
      }
    }
  }
  goto LAB_06351064;
LAB_06350914:
  if (*(long *)(lVar11 + 0x18) != 0) {
    uVar6 = FUN_06338600();
    lVar9 = *unaff_x29;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar9);
      lVar9 = *unaff_x29;
    }
    lVar5 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar5 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar9);
        lVar9 = *unaff_x29;
      }
      uVar16 = **(undefined8 **)(lVar9 + 0xb8);
      lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar5,uVar16,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar15 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x10);
      *plVar15 = lVar5;
      thunk_FUN_037aeb94(plVar15,lVar5);
      unaff_x28 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar9 = FUN_041f32b0(uVar6,lVar5,*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x60),*unaff_x28);
    if (lVar9 != 0) {
LAB_063507e0:
      if (*(char *)(lVar9 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar11 + 0x28) != '\0')) &&
           (*(uint *)(lVar11 + 0x2c) < 2)) {
          plVar15 = (long *)(lVar9 + 0x48);
          if (*plVar15 == 0) {
            lVar5 = FUN_063488fc(in_stack_00000028,*(undefined8 *)(lVar9 + 0x40));
            *plVar15 = lVar5;
            thunk_FUN_037aeb94(plVar15);
          }
          in_stack_00000058 = *(undefined8 *)(lVar9 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar3 = FUN_04e5f3c0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if ((uVar3 >> 1 & 1) != 0) {
            FUN_06345efc(lVar9);
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_061d52c8(0);
            uVar6 = FUN_0634b13c();
            *(undefined8 *)(lVar11 + 0x30) = uVar6;
            thunk_FUN_037aeb94();
          }
        }
        lVar5 = FUN_06338600();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar3 = FUN_054507c0(lVar5,lVar9,*(undefined8 *)PTR_DAT_07db4ed8);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *(long *)(lVar11 + 0x30);
        if ((lVar9 != 0) &&
           (lVar5 = thunk_FUN_037787d0(lVar9,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar6,0);
        }
        if (*(uint *)(unaff_x23 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        unaff_x23[(long)(int)uVar3 + 4] = lVar9;
        thunk_FUN_037aeb94(unaff_x23 + (long)(int)uVar3 + 4,lVar9);
        *(undefined1 *)(lVar11 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar15 = (long *)thunk_FUN_037787d0(plVar15,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar15 != (long *)0x0) {
    lVar9 = *plVar15;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar7)(plVar15,puVar7[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar15 = (long *)thunk_FUN_037787d0(plVar15,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar15 != (long *)0x0) {
    lVar9 = *plVar15;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar7)(plVar15,puVar7[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar11 + 0x38) = 1;
  unaff_x21 = in_stack_00000030;
  goto LAB_06350a64;
}


