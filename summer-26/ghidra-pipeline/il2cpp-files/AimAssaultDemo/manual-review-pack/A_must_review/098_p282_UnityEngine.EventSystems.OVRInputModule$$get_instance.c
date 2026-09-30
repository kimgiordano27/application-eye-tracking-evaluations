/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRInputModule$$get_instance
ENTRY_POINT: 063503bc
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

undefined8 UnityEngine_EventSystems_OVRInputModule__get_instance(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *unaff_x20;
  long *plVar19;
  long *unaff_x24;
  long *plVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
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
  
  (*(code *)*param_1)();
  lVar9 = FUN_06351ba4(in_stack_00000028);
  if (in_stack_00000038._4_4_ != 0) {
    if (*(long *)(in_stack_00000030 + 0xd8) != 0) {
      plVar10 = (long *)FUN_05450738(*(long *)(in_stack_00000030 + 0xd8),
                                     *(undefined8 *)PTR_DAT_07db4a70);
      puVar6 = PTR_DAT_07db4f68;
      puVar5 = PTR_DAT_07db4f60;
      puVar4 = PTR_DAT_07db4f10;
      puVar3 = PTR_DAT_07db4ee8;
      puVar2 = PTR_DAT_07db4a78;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar13 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350498;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,0);
LAB_06350498:
        uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        unaff_x24 = (long *)PTR_DAT_07db4be0;
        if ((uVar16 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_063506c0;
          lVar13 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 == 0) goto LAB_06350688;
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_06350670;
        }
        lVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
        FUN_06352d54(lVar13,0);
        lVar14 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350508;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar2,0);
LAB_06350508:
        lVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar20 = (long *)(lVar13 + 0x10);
        *plVar20 = lVar14;
        thunk_FUN_037aeb94(plVar20);
        if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(char *)(*plVar20 + 0x80) == '\0') {
          uVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
          FUN_044a3874(uVar12,lVar13,*(undefined8 *)puVar5,0);
          uVar16 = FUN_03f439f0(lVar9,uVar12,*(undefined8 *)puVar3);
          if ((uVar16 & 1) != 0) {
            if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar12 = *(undefined8 *)(*plVar20 + 0x30);
            lVar13 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
            FUN_06352c74(lVar13,uVar12,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            *(long *)(lVar13 + 0x18) = *plVar20;
            thunk_FUN_037aeb94();
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,0,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar13 + 0x28) = in_stack_00000040;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar17 = *(long *)PTR_DAT_07db4f20;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar8 = *(uint *)(lVar9 + 0x18);
            if (uVar8 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar8 + 1;
              plVar20 = (long *)(lVar14 + (long)(int)uVar8 * 8 + 0x20);
              *plVar20 = lVar13;
              thunk_FUN_037aeb94(plVar20,lVar13);
            }
            else {
              FUN_049ceef4(lVar9,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_0635162c;
  }
  goto LAB_063506c0;
LAB_06350914:
  if (*(long *)(lVar13 + 0x18) != 0) {
    uVar12 = FUN_06338600(in_stack_00000030);
    lVar14 = *unaff_x24;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar14);
      lVar14 = *unaff_x24;
    }
    lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar14);
        lVar14 = *unaff_x24;
      }
      uVar21 = **(undefined8 **)(lVar14 + 0xb8);
      lVar17 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar17,uVar21,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar20 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
      *plVar20 = lVar17;
      thunk_FUN_037aeb94(plVar20,lVar17);
      puVar11 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar14 = FUN_041f32b0(uVar12,lVar17,*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x60),*puVar11);
    if (lVar14 != 0) {
LAB_063507e0:
      if (*(char *)(lVar14 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar13 + 0x28) != '\0')) &&
           (*(uint *)(lVar13 + 0x2c) < 2)) {
          plVar20 = (long *)(lVar14 + 0x48);
          if (*plVar20 == 0) {
            lVar17 = FUN_063488fc(in_stack_00000028,*(undefined8 *)(lVar14 + 0x40));
            *plVar20 = lVar17;
            thunk_FUN_037aeb94(plVar20);
          }
          in_stack_00000058 = *(undefined8 *)(lVar14 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar8 = FUN_04e5f3c0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if ((uVar8 >> 1 & 1) != 0) {
            FUN_06345efc(lVar14);
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_061d52c8(0);
            uVar12 = FUN_0634b13c();
            *(undefined8 *)(lVar13 + 0x30) = uVar12;
            thunk_FUN_037aeb94();
          }
        }
        lVar17 = FUN_06338600(in_stack_00000030);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar8 = FUN_054507c0(lVar17,lVar14,*(undefined8 *)PTR_DAT_07db4ed8);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar14 = *(long *)(lVar13 + 0x30);
        if ((lVar14 != 0) &&
           (lVar17 = thunk_FUN_037787d0(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar17 == 0)) {
          uVar12 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar12,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar10[(long)(int)uVar8 + 4] = lVar14;
        thunk_FUN_037aeb94(plVar10 + (long)(int)uVar8 + 4,lVar14);
        *(undefined1 *)(lVar13 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar10 = (long *)thunk_FUN_037787d0(plVar10,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar10 = (long *)thunk_FUN_037787d0(plVar10,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar13 + 0x38) = 1;
  goto LAB_06350a64;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_06350670:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_063506a4;
    }
  }
LAB_06350688:
  puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_063506a4:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_063506c0:
  lVar13 = FUN_06338600(in_stack_00000030);
  puVar2 = PTR_DAT_07d882c0;
  if (lVar13 != 0) {
    uVar7 = FUN_05450160(lVar13,*(undefined8 *)PTR_DAT_07db4d78);
    plVar10 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,uVar7);
    puVar11 = (undefined8 *)PTR_DAT_07db4f48;
    puVar2 = PTR_DAT_07db4f00;
    if (lVar9 != 0) {
      FUN_049cf910(&stack0x00000040,lVar9,*(undefined8 *)PTR_DAT_07db4f28);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_06350740:
      uVar16 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
      lVar13 = in_stack_00000070;
      if ((uVar16 & 1) != 0) {
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
          lVar14 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar14 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar7 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)(PTR_DAT_07d86548 + 0x90)) {
              uVar16 = FUN_0634b6c0(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48));
              uVar7 = 1;
              if ((uVar16 & 1) == 0) {
                uVar7 = 2;
              }
            }
            else {
              uVar7 = 2;
            }
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,uVar7,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar13 + 0x28) = in_stack_00000040;
          }
        }
        lVar14 = *(long *)(lVar13 + 0x20);
        if (lVar14 == 0) goto LAB_06350914;
        goto LAB_063507e0;
      }
      FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
      if (in_stack_00000020 != 0) {
        uVar12 = (**(code **)(in_stack_00000020 + 0x18))
                           (*(undefined8 *)(in_stack_00000020 + 0x40),plVar10,
                            *(undefined8 *)(in_stack_00000020 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_0634f590(in_stack_00000028);
        }
        FUN_0634f950(in_stack_00000028);
        FUN_049cf910(&stack0x00000040,lVar9,*(undefined8 *)PTR_DAT_07db4f28);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_06350a64:
        do {
          while( true ) {
            do {
              uVar16 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
              lVar13 = in_stack_00000070;
              if ((uVar16 & 1) == 0) {
                FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_049cf910(&stack0x00000040,lVar9,*(undefined8 *)PTR_DAT_07db4f28);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar16 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar16 & 1) != 0) {
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
                                (*(undefined8 *)(lVar13 + 0x40),uVar12,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar13 + 0x28));
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_049cf910(&stack0x00000040,lVar9,*(undefined8 *)PTR_DAT_07db4f28);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar16 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar16 & 1) != 0) {
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
                      FUN_06352250(in_stack_00000028,uVar12);
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(in_stack_00000028);
                return uVar12;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar14 = *(long *)(in_stack_00000070 + 0x18), lVar14 == 0)) ||
                     (*(char *)(lVar14 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar17 = *(long *)(in_stack_00000070 + 0x30);
            uVar16 = FUN_0634f488(in_stack_00000028,lVar14,in_stack_00000030,lVar17);
            if ((uVar16 & 1) == 0) break;
            plVar10 = *(long **)(lVar14 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar14 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar11)(plVar10,uVar12,lVar17,puVar11[1]);
            *(undefined1 *)(lVar13 + 0x38) = 1;
          }
        } while ((lVar17 == 0) || (*(char *)(lVar14 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar10 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar15 = *plVar10;
        uVar21 = *(undefined8 *)(lVar14 + 0x40);
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        plVar10 = (long *)(*(code *)*puVar11)(plVar10,uVar21,puVar11[1]);
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
            plVar10 = *(long **)(lVar14 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar14 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar14 = (*(code *)*puVar11)(plVar10,uVar12,puVar11[1]);
            if (lVar14 != 0) {
              uVar21 = thunk_FUN_0374b7cc(lVar14,0);
              plVar10 = (long *)FUN_06348960(in_stack_00000028,uVar21);
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
                uVar21 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar20 = (long *)thunk_FUN_037787d0(lVar14);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar14,uVar21);
                }
              }
              else {
                plVar20 = (long *)FUN_06342b50(plVar10,lVar14);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar14 = *plVar20;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                    puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)puVar3,6);
LAB_06350d8c:
              uVar16 = (*(code *)*puVar11)(plVar20,puVar11[1]);
              plVar19 = (long *)PTR_DAT_07d8ac68;
              if ((uVar16 & 1) == 0) {
                if (*(char *)((long)plVar10 + 0xf1) == '\0') {
                  uVar21 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar10 = (long *)thunk_FUN_037787d0(lVar17,uVar21);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(lVar17,uVar21);
                  }
                }
                else {
                  plVar10 = (long *)FUN_06342b50(plVar10,lVar17);
                  plVar19 = (long *)PTR_DAT_07d8ac68;
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar14 = *plVar10;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar14 = *plVar10;
                  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar16 != 0) {
                    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar16 = uVar16 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                  if ((uVar16 & 1) == 0) goto LAB_06350f7c;
                  lVar14 = *plVar10;
                  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar16 != 0) {
                    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar16 = uVar16 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar21 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                  lVar14 = *plVar20;
                  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar16 != 0) {
                    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *plVar19) {
                        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar16 = uVar16 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar20,*plVar19,2);
LAB_06350f68:
                  (*(code *)*puVar11)(plVar20,uVar21,puVar11[1]);
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
            plVar20 = *(long **)(lVar14 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar14 = *plVar20;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_063510d4;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
            lVar14 = (*(code *)*puVar11)(plVar20,uVar12,puVar11[1]);
            if (lVar14 != 0) {
              if ((char)plVar10[0x20] == '\0') {
                uVar21 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar20 = (long *)thunk_FUN_037787d0(lVar14,uVar21);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar14,uVar21);
                }
              }
              else {
                plVar20 = (long *)FUN_0634424c(plVar10,lVar14);
              }
              if ((char)plVar10[0x20] == '\0') {
                uVar21 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar10 = (long *)thunk_FUN_037787d0(lVar17,uVar21);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar17,uVar21);
                }
              }
              else {
                plVar10 = (long *)FUN_0634424c(plVar10,lVar17);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar14 = *plVar10;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
              plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              do {
                lVar14 = *plVar10;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                      puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                      goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
                uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if ((uVar16 & 1) == 0) goto LAB_06351318;
                lVar14 = *plVar10;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                      puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                      goto LAB_06351290;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
                auVar22 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                lVar14 = *plVar20;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d974d8) {
                      puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_06351300;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar20,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
                (*(code *)*puVar11)(plVar20,auVar22._0_8_,auVar22._8_8_,puVar11[1]);
              } while( true );
            }
          }
        }
        goto LAB_06351064;
      }
    }
  }
LAB_0635162c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


