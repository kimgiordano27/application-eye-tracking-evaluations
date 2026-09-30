/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRInputModule$$set_instance
ENTRY_POINT: 06350414
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 159
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
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

undefined8 UnityEngine_EventSystems_OVRInputModule__set_instance(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x20;
  long *plVar17;
  long unaff_x22;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
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
  
  puVar6 = PTR_DAT_07db4f68;
  puVar5 = PTR_DAT_07db4f60;
  puVar3 = PTR_DAT_07db4f10;
  puVar2 = PTR_DAT_07db4a78;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar12 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d89700) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06350498;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(param_1,*(long *)PTR_DAT_07d89700,0);
LAB_06350498:
    uVar15 = (*(code *)*puVar9)(param_1,puVar9[1]);
    puVar4 = PTR_DAT_07db4be0;
    if ((uVar15 & 1) == 0) {
      if (param_1 == (long *)0x0) goto LAB_063506b0;
      lVar12 = *param_1;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 == 0) goto LAB_06350688;
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_06350670;
    }
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
    FUN_06352d54(lVar12,0);
    lVar13 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06350508;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(param_1,*(long *)puVar2,0);
LAB_06350508:
    lVar13 = (*(code *)*puVar9)(param_1,puVar9[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar18 = (long *)(lVar12 + 0x10);
    *plVar18 = lVar13;
    thunk_FUN_037aeb94(plVar18);
    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(*plVar18 + 0x80) == '\0') {
      uVar10 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
      FUN_044a3874(uVar10,lVar12,*(undefined8 *)puVar5,0);
      uVar15 = FUN_03f439f0();
      if ((uVar15 & 1) != 0) {
        if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar10 = *(undefined8 *)(*plVar18 + 0x30);
        lVar12 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
        FUN_06352c74(lVar12,uVar10,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(long *)(lVar12 + 0x18) = *plVar18;
        thunk_FUN_037aeb94();
        in_stack_00000040 = 0;
        FUN_04e5f37c(&stack0x00000040,0,*(undefined8 *)PTR_DAT_07db4f38);
        *(undefined8 *)(lVar12 + 0x28) = in_stack_00000040;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar13 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if (uVar8 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          plVar18 = (long *)(lVar13 + (long)(int)uVar8 * 8 + 0x20);
          *plVar18 = lVar12;
          thunk_FUN_037aeb94(plVar18,lVar12);
        }
        else {
          FUN_049ceef4();
        }
      }
    }
  } while( true );
LAB_06350914:
  if (*(long *)(lVar12 + 0x18) != 0) {
    uVar10 = FUN_06338600(in_stack_00000030);
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar13);
      lVar13 = *(long *)puVar4;
    }
    lVar11 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
    if (lVar11 == 0) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar13);
        lVar13 = *(long *)puVar4;
      }
      uVar20 = **(undefined8 **)(lVar13 + 0xb8);
      lVar11 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar11,uVar20,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar19 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar19 = lVar11;
      thunk_FUN_037aeb94(plVar19,lVar11);
      puVar9 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar13 = FUN_041f32b0(uVar10,lVar11,*(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x60),*puVar9);
    if (lVar13 != 0) {
LAB_063507e0:
      if (*(char *)(lVar13 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar12 + 0x28) != '\0')) &&
           (*(uint *)(lVar12 + 0x2c) < 2)) {
          plVar19 = (long *)(lVar13 + 0x48);
          if (*plVar19 == 0) {
            lVar11 = FUN_063488fc(in_stack_00000028,*(undefined8 *)(lVar13 + 0x40));
            *plVar19 = lVar11;
            thunk_FUN_037aeb94(plVar19);
          }
          in_stack_00000058 = *(undefined8 *)(lVar13 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar8 = FUN_04e5f3c0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if ((uVar8 >> 1 & 1) != 0) {
            FUN_06345efc(lVar13);
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_061d52c8(0);
            uVar10 = FUN_0634b13c();
            *(undefined8 *)(lVar12 + 0x30) = uVar10;
            thunk_FUN_037aeb94();
          }
        }
        lVar11 = FUN_06338600(in_stack_00000030);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar8 = FUN_054507c0(lVar11,lVar13,*(undefined8 *)PTR_DAT_07db4ed8);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar13 = *(long *)(lVar12 + 0x30);
        if ((lVar13 != 0) &&
           (lVar11 = thunk_FUN_037787d0(lVar13,*(undefined8 *)(*plVar18 + 0x40)), lVar11 == 0)) {
          uVar10 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar10,0);
        }
        if (*(uint *)(plVar18 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar18[(long)(int)uVar8 + 4] = lVar13;
        thunk_FUN_037aeb94(plVar18 + (long)(int)uVar8 + 4,lVar13);
        *(undefined1 *)(lVar12 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar18 = (long *)thunk_FUN_037787d0(plVar18,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar18 != (long *)0x0) {
    lVar13 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar9)(plVar18,puVar9[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar18 = (long *)thunk_FUN_037787d0(plVar18,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar18 != (long *)0x0) {
    lVar13 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar9)(plVar18,puVar9[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar12 + 0x38) = 1;
  goto LAB_06350a64;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_06350670:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_063506a4;
    }
  }
LAB_06350688:
  puVar9 = (undefined8 *)FUN_0377596c(param_1,*(long *)PTR_DAT_07d896f8,0);
LAB_063506a4:
  (*(code *)*puVar9)(param_1,puVar9[1]);
LAB_063506b0:
  lVar12 = FUN_06338600(in_stack_00000030);
  puVar2 = PTR_DAT_07d882c0;
  if (lVar12 != 0) {
    uVar7 = FUN_05450160(lVar12,*(undefined8 *)PTR_DAT_07db4d78);
    plVar18 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,uVar7);
    puVar9 = (undefined8 *)PTR_DAT_07db4f48;
    puVar2 = PTR_DAT_07db4f00;
    if (unaff_x22 != 0) {
      FUN_049cf910(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_06350740:
      uVar15 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
      lVar12 = in_stack_00000070;
      if ((uVar15 & 1) != 0) {
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
          lVar13 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar13 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar7 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)(PTR_DAT_07d86548 + 0x90)) {
              uVar15 = FUN_0634b6c0(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x48));
              uVar7 = 1;
              if ((uVar15 & 1) == 0) {
                uVar7 = 2;
              }
            }
            else {
              uVar7 = 2;
            }
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,uVar7,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar12 + 0x28) = in_stack_00000040;
          }
        }
        lVar13 = *(long *)(lVar12 + 0x20);
        if (lVar13 == 0) goto LAB_06350914;
        goto LAB_063507e0;
      }
      FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
      if (in_stack_00000020 != 0) {
        uVar10 = (**(code **)(in_stack_00000020 + 0x18))
                           (*(undefined8 *)(in_stack_00000020 + 0x40),plVar18,
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
              uVar15 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
              lVar12 = in_stack_00000070;
              if ((uVar15 & 1) == 0) {
                FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar15 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar15 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar12 = *(long *)(in_stack_00000030 + 0xe0);
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(lVar12 + 0x18))
                                (*(undefined8 *)(lVar12 + 0x40),uVar10,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar12 + 0x28));
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar15 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar15 & 1) != 0) {
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
                      FUN_06352250(in_stack_00000028,uVar10);
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(in_stack_00000028);
                return uVar10;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar13 = *(long *)(in_stack_00000070 + 0x18), lVar13 == 0)) ||
                     (*(char *)(lVar13 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar11 = *(long *)(in_stack_00000070 + 0x30);
            uVar15 = FUN_0634f488(in_stack_00000028,lVar13,in_stack_00000030,lVar11);
            if ((uVar15 & 1) == 0) break;
            plVar18 = *(long **)(lVar13 + 0x68);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar13 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar9)(plVar18,uVar10,lVar11,puVar9[1]);
            *(undefined1 *)(lVar12 + 0x38) = 1;
          }
        } while ((lVar11 == 0) || (*(char *)(lVar13 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar18 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar14 = *plVar18;
        uVar20 = *(undefined8 *)(lVar13 + 0x40);
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        plVar18 = (long *)(*(code *)*puVar9)(plVar18,uVar20,puVar9[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)((long)plVar18 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar18);
          }
          if ((*(char *)((long)plVar18 + 0xf2) != '\0') && ((char)plVar18[5] == '\0')) {
            plVar18 = *(long **)(lVar13 + 0x68);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar13 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar13 = (*(code *)*puVar9)(plVar18,uVar10,puVar9[1]);
            if (lVar13 != 0) {
              uVar20 = thunk_FUN_0374b7cc(lVar13,0);
              plVar18 = (long *)FUN_06348960(in_stack_00000028,uVar20);
              puVar3 = PTR_DAT_07d8ac68;
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
              if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(plVar18);
              }
              if (*(char *)((long)plVar18 + 0xf1) == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar19 = (long *)thunk_FUN_037787d0(lVar13);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar13,uVar20);
                }
              }
              else {
                plVar19 = (long *)FUN_06342b50(plVar18,lVar13);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar13 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                    puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar9 = (undefined8 *)FUN_0377596c(plVar19,*(long *)puVar3,6);
LAB_06350d8c:
              uVar15 = (*(code *)*puVar9)(plVar19,puVar9[1]);
              plVar17 = (long *)PTR_DAT_07d8ac68;
              if ((uVar15 & 1) == 0) {
                if (*(char *)((long)plVar18 + 0xf1) == '\0') {
                  uVar20 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar18 = (long *)thunk_FUN_037787d0(lVar11,uVar20);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(lVar11,uVar20);
                  }
                }
                else {
                  plVar18 = (long *)FUN_06342b50(plVar18,lVar11);
                  plVar17 = (long *)PTR_DAT_07d8ac68;
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar13 = *plVar18;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar13 = *plVar18;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar15 = (*(code *)*puVar9)(plVar18,puVar9[1]);
                  if ((uVar15 & 1) == 0) goto LAB_06350f7c;
                  lVar13 = *plVar18;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar20 = (*(code *)*puVar9)(plVar18,puVar9[1]);
                  lVar13 = *plVar19;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *plVar17) {
                        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_0377596c(plVar19,*plVar17,2);
LAB_06350f68:
                  (*(code *)*puVar9)(plVar19,uVar20,puVar9[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar18 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          if ((char)plVar18[5] == '\0') {
            plVar19 = *(long **)(lVar13 + 0x68);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar13 = *plVar19;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_063510d4;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)FUN_0377596c(plVar19,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
            lVar13 = (*(code *)*puVar9)(plVar19,uVar10,puVar9[1]);
            if (lVar13 != 0) {
              if ((char)plVar18[0x20] == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar19 = (long *)thunk_FUN_037787d0(lVar13,uVar20);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar13,uVar20);
                }
              }
              else {
                plVar19 = (long *)FUN_0634424c(plVar18,lVar13);
              }
              if ((char)plVar18[0x20] == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar18 = (long *)thunk_FUN_037787d0(lVar11,uVar20);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar11,uVar20);
                }
              }
              else {
                plVar18 = (long *)FUN_0634424c(plVar18,lVar11);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar13 = *plVar18;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
              plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              do {
                lVar13 = *plVar18;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d89700) {
                      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                      goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
                uVar15 = (*(code *)*puVar9)(plVar18,puVar9[1]);
                if ((uVar15 & 1) == 0) goto LAB_06351318;
                lVar13 = *plVar18;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                      puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                      goto LAB_06351290;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar9 = (undefined8 *)FUN_0377596c(plVar18,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
                auVar21 = (*(code *)*puVar9)(plVar18,puVar9[1]);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                lVar13 = *plVar19;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d974d8) {
                      puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_06351300;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar9 = (undefined8 *)FUN_0377596c(plVar19,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
                (*(code *)*puVar9)(plVar19,auVar21._0_8_,auVar21._8_8_,puVar9[1]);
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


