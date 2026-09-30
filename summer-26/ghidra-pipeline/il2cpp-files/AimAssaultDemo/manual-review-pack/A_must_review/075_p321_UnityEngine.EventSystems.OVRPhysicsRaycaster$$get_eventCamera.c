/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRPhysicsRaycaster$$get_eventCamera
ENTRY_POINT: 06350534
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 183
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;ray_interaction;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x063506bc) */
/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351ab0) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

undefined8 UnityEngine_EventSystems_OVRPhysicsRaycaster__get_eventCamera(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar15;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *unaff_x29;
  undefined1 auVar18 [16];
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
  
  do {
    if (*(char *)(param_1 + 0x80) == '\0') {
      uVar7 = thunk_FUN_037788cc(*unaff_x25);
      FUN_044a3874(uVar7,unaff_x26,*unaff_x29,0);
      uVar8 = FUN_03f439f0();
      if ((uVar8 & 1) != 0) {
        if (*unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar7 = *(undefined8 *)(*unaff_x27 + 0x30);
        lVar9 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
        FUN_06352c74(lVar9,uVar7,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(long *)(lVar9 + 0x18) = *unaff_x27;
        thunk_FUN_037aeb94();
        in_stack_00000040 = 0;
        FUN_04e5f37c(&stack0x00000040,0,*(undefined8 *)PTR_DAT_07db4f38);
        *(undefined8 *)(lVar9 + 0x28) = in_stack_00000040;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar12 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        if (uVar5 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
          plVar10 = (long *)(lVar12 + (long)(int)uVar5 * 8 + 0x20);
          *plVar10 = lVar9;
          thunk_FUN_037aeb94(plVar10,lVar9);
        }
        else {
          FUN_049ceef4();
        }
      }
    }
    lVar9 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d89700) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06350498;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c();
LAB_06350498:
    uVar8 = (*(code *)*puVar6)();
    puVar3 = PTR_DAT_07db4be0;
    if ((uVar8 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_063506b0;
      lVar9 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 == 0) goto LAB_06350688;
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_06350670;
    }
    unaff_x26 = thunk_FUN_037788cc(*unaff_x19);
    FUN_06352d54(unaff_x26,0);
    lVar9 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06350508;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c();
LAB_06350508:
    lVar9 = (*(code *)*puVar6)();
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    unaff_x27 = (long *)(unaff_x26 + 0x10);
    *unaff_x27 = lVar9;
    thunk_FUN_037aeb94(unaff_x27);
    param_1 = *unaff_x27;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  } while( true );
LAB_06350914:
  if (*(long *)(lVar9 + 0x18) != 0) {
    uVar7 = FUN_06338600(in_stack_00000030);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar12);
      lVar12 = *(long *)puVar3;
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (lVar11 == 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar12);
        lVar12 = *(long *)puVar3;
      }
      uVar17 = **(undefined8 **)(lVar12 + 0xb8);
      lVar11 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar11,uVar17,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar16 = lVar11;
      thunk_FUN_037aeb94(plVar16,lVar11);
      puVar6 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar12 = FUN_041f32b0(uVar7,lVar11,*(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x60),*puVar6);
    if (lVar12 != 0) {
LAB_063507e0:
      if (*(char *)(lVar12 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar9 + 0x28) != '\0')) &&
           (*(uint *)(lVar9 + 0x2c) < 2)) {
          plVar16 = (long *)(lVar12 + 0x48);
          if (*plVar16 == 0) {
            lVar11 = FUN_063488fc(in_stack_00000028,*(undefined8 *)(lVar12 + 0x40));
            *plVar16 = lVar11;
            thunk_FUN_037aeb94(plVar16);
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
            uVar7 = FUN_0634b13c();
            *(undefined8 *)(lVar9 + 0x30) = uVar7;
            thunk_FUN_037aeb94();
          }
        }
        lVar11 = FUN_06338600(in_stack_00000030);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar5 = FUN_054507c0(lVar11,lVar12,*(undefined8 *)PTR_DAT_07db4ed8);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar12 = *(long *)(lVar9 + 0x30);
        if ((lVar12 != 0) &&
           (lVar11 = thunk_FUN_037787d0(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
          uVar7 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar7,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar10[(long)(int)uVar5 + 4] = lVar12;
        thunk_FUN_037aeb94(plVar10 + (long)(int)uVar5 + 4,lVar12);
        *(undefined1 *)(lVar9 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar10 = (long *)thunk_FUN_037787d0(plVar10,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar10 = (long *)thunk_FUN_037787d0(plVar10,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar9 + 0x38) = 1;
  goto LAB_06350a64;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
LAB_06350670:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_063506a4;
    }
  }
LAB_06350688:
  puVar6 = (undefined8 *)FUN_0377596c();
LAB_063506a4:
  (*(code *)*puVar6)();
LAB_063506b0:
  lVar9 = FUN_06338600(in_stack_00000030);
  puVar2 = PTR_DAT_07d882c0;
  if (lVar9 != 0) {
    uVar4 = FUN_05450160(lVar9,*(undefined8 *)PTR_DAT_07db4d78);
    plVar10 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,uVar4);
    puVar6 = (undefined8 *)PTR_DAT_07db4f48;
    puVar2 = PTR_DAT_07db4f00;
    if (unaff_x22 != 0) {
      FUN_049cf910(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_06350740:
      uVar8 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
      lVar9 = in_stack_00000070;
      if ((uVar8 & 1) != 0) {
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
              uVar8 = FUN_0634b6c0(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
              uVar4 = 1;
              if ((uVar8 & 1) == 0) {
                uVar4 = 2;
              }
            }
            else {
              uVar4 = 2;
            }
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,uVar4,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar9 + 0x28) = in_stack_00000040;
          }
        }
        lVar12 = *(long *)(lVar9 + 0x20);
        if (lVar12 == 0) goto LAB_06350914;
        goto LAB_063507e0;
      }
      FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
      if (in_stack_00000020 != 0) {
        uVar7 = (**(code **)(in_stack_00000020 + 0x18))
                          (*(undefined8 *)(in_stack_00000020 + 0x40),plVar10,
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
              uVar8 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
              lVar9 = in_stack_00000070;
              if ((uVar8 & 1) == 0) {
                FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar8 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar8 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar9 = *(long *)(in_stack_00000030 + 0xe0);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(lVar9 + 0x18))
                                (*(undefined8 *)(lVar9 + 0x40),uVar7,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar9 + 0x28));
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar8 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar8 & 1) != 0) {
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
                      FUN_06352250(in_stack_00000028,uVar7);
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(in_stack_00000028);
                return uVar7;
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
            uVar8 = FUN_0634f488(in_stack_00000028,lVar12,in_stack_00000030,lVar11);
            if ((uVar8 & 1) == 0) break;
            plVar10 = *(long **)(lVar12 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar12 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar6)(plVar10,uVar7,lVar11,puVar6[1]);
            *(undefined1 *)(lVar9 + 0x38) = 1;
          }
        } while ((lVar11 == 0) || (*(char *)(lVar12 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar10 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar13 = *plVar10;
        uVar17 = *(undefined8 *)(lVar12 + 0x40);
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        plVar10 = (long *)(*(code *)*puVar6)(plVar10,uVar17,puVar6[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)((long)plVar10 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar10);
          }
          if ((*(char *)((long)plVar10 + 0xf2) != '\0') && ((char)plVar10[5] == '\0')) {
            plVar10 = *(long **)(lVar12 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar12 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar12 = (*(code *)*puVar6)(plVar10,uVar7,puVar6[1]);
            if (lVar12 != 0) {
              uVar17 = thunk_FUN_0374b7cc(lVar12,0);
              plVar10 = (long *)FUN_06348960(in_stack_00000028,uVar17);
              puVar3 = PTR_DAT_07d8ac68;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(plVar10);
              }
              if (*(char *)((long)plVar10 + 0xf1) == '\0') {
                uVar17 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar16 = (long *)thunk_FUN_037787d0(lVar12);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar12,uVar17);
                }
              }
              else {
                plVar16 = (long *)FUN_06342b50(plVar10,lVar12);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar12 = *plVar16;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_0377596c(plVar16,*(long *)puVar3,6);
LAB_06350d8c:
              uVar8 = (*(code *)*puVar6)(plVar16,puVar6[1]);
              plVar15 = (long *)PTR_DAT_07d8ac68;
              if ((uVar8 & 1) == 0) {
                if (*(char *)((long)plVar10 + 0xf1) == '\0') {
                  uVar17 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar10 = (long *)thunk_FUN_037787d0(lVar11,uVar17);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(lVar11,uVar17);
                  }
                }
                else {
                  plVar10 = (long *)FUN_06342b50(plVar10,lVar11);
                  plVar15 = (long *)PTR_DAT_07d8ac68;
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar12 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar8 = uVar8 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar12 = *plVar10;
                  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar8 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar8 = uVar8 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                  if ((uVar8 & 1) == 0) goto LAB_06350f7c;
                  lVar12 = *plVar10;
                  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar8 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar8 = uVar8 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar17 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                  lVar12 = *plVar16;
                  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar8 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *plVar15) {
                        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar8 = uVar8 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar16,*plVar15,2);
LAB_06350f68:
                  (*(code *)*puVar6)(plVar16,uVar17,puVar6[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar10 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          if ((char)plVar10[5] == '\0') {
            plVar16 = *(long **)(lVar12 + 0x68);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar12 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_063510d4;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar16,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
            lVar12 = (*(code *)*puVar6)(plVar16,uVar7,puVar6[1]);
            if (lVar12 != 0) {
              if ((char)plVar10[0x20] == '\0') {
                uVar17 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar16 = (long *)thunk_FUN_037787d0(lVar12,uVar17);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar12,uVar17);
                }
              }
              else {
                plVar16 = (long *)FUN_0634424c(plVar10,lVar12);
              }
              if ((char)plVar10[0x20] == '\0') {
                uVar17 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar10 = (long *)thunk_FUN_037787d0(lVar11,uVar17);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar11,uVar17);
                }
              }
              else {
                plVar10 = (long *)FUN_0634424c(plVar10,lVar11);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar12 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
              plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              do {
                lVar12 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d89700) {
                      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                      goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                    }
                    uVar8 = uVar8 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
                uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                if ((uVar8 & 1) == 0) goto LAB_06351318;
                lVar12 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                      goto LAB_06351290;
                    }
                    uVar8 = uVar8 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
                auVar18 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                lVar12 = *plVar16;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07d974d8) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_06351300;
                    }
                    uVar8 = uVar8 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar16,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
                (*(code *)*puVar6)(plVar16,auVar18._0_8_,auVar18._8_8_,puVar6[1]);
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
}


