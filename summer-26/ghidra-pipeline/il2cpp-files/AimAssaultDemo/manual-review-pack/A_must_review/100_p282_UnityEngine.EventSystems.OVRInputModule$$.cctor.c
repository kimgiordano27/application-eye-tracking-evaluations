/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRInputModule$$.cctor
ENTRY_POINT: 0635047c
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

undefined8 UnityEngine_EventSystems_OVRInputModule___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar14;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *plVar15;
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
  
code_r0x0635047c:
  puVar6 = (undefined8 *)FUN_0377596c();
  do {
    uVar7 = (*(code *)*puVar6)();
    puVar3 = PTR_DAT_07db4be0;
    if ((uVar7 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_063506b0;
      lVar8 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 == 0) goto LAB_06350688;
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_06350670;
    }
    lVar8 = thunk_FUN_037788cc(*unaff_x19);
    FUN_06352d54(lVar8,0);
    lVar11 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06350508;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c();
LAB_06350508:
    lVar11 = (*(code *)*puVar6)();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar15 = (long *)(lVar8 + 0x10);
    *plVar15 = lVar11;
    thunk_FUN_037aeb94(plVar15);
    if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(*plVar15 + 0x80) == '\0') {
      uVar9 = thunk_FUN_037788cc(*unaff_x25);
      FUN_044a3874(uVar9,lVar8,*unaff_x29,0);
      uVar7 = FUN_03f439f0();
      if ((uVar7 & 1) != 0) {
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar9 = *(undefined8 *)(*plVar15 + 0x30);
        lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
        FUN_06352c74(lVar8,uVar9,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(long *)(lVar8 + 0x18) = *plVar15;
        thunk_FUN_037aeb94();
        in_stack_00000040 = 0;
        FUN_04e5f37c(&stack0x00000040,0,*(undefined8 *)PTR_DAT_07db4f38);
        *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar11 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        if (uVar5 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
          plVar15 = (long *)(lVar11 + (long)(int)uVar5 * 8 + 0x20);
          *plVar15 = lVar8;
          thunk_FUN_037aeb94(plVar15,lVar8);
        }
        else {
          FUN_049ceef4();
        }
      }
    }
    lVar8 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 == 0) goto code_r0x0635047c;
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    while (*(long *)(piVar13 + -2) != *(long *)PTR_DAT_07d89700) {
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
      if (uVar7 == 0) goto code_r0x0635047c;
    }
    puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
  } while( true );
LAB_06350914:
  if (*(long *)(lVar8 + 0x18) != 0) {
    uVar9 = FUN_06338600(in_stack_00000030);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar11);
      lVar11 = *(long *)puVar3;
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar10 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar11);
        lVar11 = *(long *)puVar3;
      }
      uVar17 = **(undefined8 **)(lVar11 + 0xb8);
      lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar10,uVar17,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar16 = lVar10;
      thunk_FUN_037aeb94(plVar16,lVar10);
      puVar6 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar11 = FUN_041f32b0(uVar9,lVar10,*(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x60),*puVar6);
    if (lVar11 != 0) {
LAB_063507e0:
      if (*(char *)(lVar11 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar8 + 0x28) != '\0')) &&
           (*(uint *)(lVar8 + 0x2c) < 2)) {
          plVar16 = (long *)(lVar11 + 0x48);
          if (*plVar16 == 0) {
            lVar10 = FUN_063488fc(in_stack_00000028,*(undefined8 *)(lVar11 + 0x40));
            *plVar16 = lVar10;
            thunk_FUN_037aeb94(plVar16);
          }
          in_stack_00000058 = *(undefined8 *)(lVar11 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar5 = FUN_04e5f3c0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if ((uVar5 >> 1 & 1) != 0) {
            FUN_06345efc(lVar11);
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_061d52c8(0);
            uVar9 = FUN_0634b13c();
            *(undefined8 *)(lVar8 + 0x30) = uVar9;
            thunk_FUN_037aeb94();
          }
        }
        lVar10 = FUN_06338600(in_stack_00000030);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar5 = FUN_054507c0(lVar10,lVar11,*(undefined8 *)PTR_DAT_07db4ed8);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar11 = *(long *)(lVar8 + 0x30);
        if ((lVar11 != 0) &&
           (lVar10 = thunk_FUN_037787d0(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
          uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar9,0);
        }
        if (*(uint *)(plVar15 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar15[(long)(int)uVar5 + 4] = lVar11;
        thunk_FUN_037aeb94(plVar15 + (long)(int)uVar5 + 4,lVar11);
        *(undefined1 *)(lVar8 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar15 = (long *)thunk_FUN_037787d0(plVar15,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar6)(plVar15,puVar6[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar15 = (long *)thunk_FUN_037787d0(plVar15,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar6)(plVar15,puVar6[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar8 + 0x38) = 1;
  goto LAB_06350a64;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_06350670:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_063506a4;
    }
  }
LAB_06350688:
  puVar6 = (undefined8 *)FUN_0377596c();
LAB_063506a4:
  (*(code *)*puVar6)();
LAB_063506b0:
  lVar8 = FUN_06338600(in_stack_00000030);
  puVar2 = PTR_DAT_07d882c0;
  if (lVar8 != 0) {
    uVar4 = FUN_05450160(lVar8,*(undefined8 *)PTR_DAT_07db4d78);
    plVar15 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,uVar4);
    puVar6 = (undefined8 *)PTR_DAT_07db4f48;
    puVar2 = PTR_DAT_07db4f00;
    if (unaff_x22 != 0) {
      FUN_049cf910(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_06350740:
      uVar7 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
      lVar8 = in_stack_00000070;
      if ((uVar7 & 1) != 0) {
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
          lVar11 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar11 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar4 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)(PTR_DAT_07d86548 + 0x90)) {
              uVar7 = FUN_0634b6c0(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x48));
              uVar4 = 1;
              if ((uVar7 & 1) == 0) {
                uVar4 = 2;
              }
            }
            else {
              uVar4 = 2;
            }
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,uVar4,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
          }
        }
        lVar11 = *(long *)(lVar8 + 0x20);
        if (lVar11 == 0) goto LAB_06350914;
        goto LAB_063507e0;
      }
      FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
      if (in_stack_00000020 != 0) {
        uVar9 = (**(code **)(in_stack_00000020 + 0x18))
                          (*(undefined8 *)(in_stack_00000020 + 0x40),plVar15,
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
              uVar7 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
              lVar8 = in_stack_00000070;
              if ((uVar7 & 1) == 0) {
                FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar7 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar7 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar8 = *(long *)(in_stack_00000030 + 0xe0);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(lVar8 + 0x18))
                                (*(undefined8 *)(lVar8 + 0x40),uVar9,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar8 + 0x28));
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_049cf910(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar7 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar7 & 1) != 0) {
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
                      FUN_06352250(in_stack_00000028,uVar9);
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(in_stack_00000028);
                return uVar9;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar11 = *(long *)(in_stack_00000070 + 0x18), lVar11 == 0)) ||
                     (*(char *)(lVar11 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar10 = *(long *)(in_stack_00000070 + 0x30);
            uVar7 = FUN_0634f488(in_stack_00000028,lVar11,in_stack_00000030,lVar10);
            if ((uVar7 & 1) == 0) break;
            plVar15 = *(long **)(lVar11 + 0x68);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar11 = *plVar15;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar6)(plVar15,uVar9,lVar10,puVar6[1]);
            *(undefined1 *)(lVar8 + 0x38) = 1;
          }
        } while ((lVar10 == 0) || (*(char *)(lVar11 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar15 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar12 = *plVar15;
        uVar17 = *(undefined8 *)(lVar11 + 0x40);
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        plVar15 = (long *)(*(code *)*puVar6)(plVar15,uVar17,puVar6[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)((long)plVar15 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar15);
          }
          if ((*(char *)((long)plVar15 + 0xf2) != '\0') && ((char)plVar15[5] == '\0')) {
            plVar15 = *(long **)(lVar11 + 0x68);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar11 = *plVar15;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar11 = (*(code *)*puVar6)(plVar15,uVar9,puVar6[1]);
            if (lVar11 != 0) {
              uVar17 = thunk_FUN_0374b7cc(lVar11,0);
              plVar15 = (long *)FUN_06348960(in_stack_00000028,uVar17);
              puVar3 = PTR_DAT_07d8ac68;
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
                uVar17 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar16 = (long *)thunk_FUN_037787d0(lVar11);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar11,uVar17);
                }
              }
              else {
                plVar16 = (long *)FUN_06342b50(plVar15,lVar11);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar11 = *plVar16;
              uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_0377596c(plVar16,*(long *)puVar3,6);
LAB_06350d8c:
              uVar7 = (*(code *)*puVar6)(plVar16,puVar6[1]);
              plVar14 = (long *)PTR_DAT_07d8ac68;
              if ((uVar7 & 1) == 0) {
                if (*(char *)((long)plVar15 + 0xf1) == '\0') {
                  uVar17 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar15 = (long *)thunk_FUN_037787d0(lVar10,uVar17);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(lVar10,uVar17);
                  }
                }
                else {
                  plVar15 = (long *)FUN_06342b50(plVar15,lVar10);
                  plVar14 = (long *)PTR_DAT_07d8ac68;
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar11 = *plVar15;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar11 = *plVar15;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar7 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar7 = uVar7 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar7 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                  if ((uVar7 & 1) == 0) goto LAB_06350f7c;
                  lVar11 = *plVar15;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar7 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar7 = uVar7 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar17 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                  lVar11 = *plVar16;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar7 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *plVar14) {
                        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar7 = uVar7 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0377596c(plVar16,*plVar14,2);
LAB_06350f68:
                  (*(code *)*puVar6)(plVar16,uVar17,puVar6[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar15 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          if ((char)plVar15[5] == '\0') {
            plVar16 = *(long **)(lVar11 + 0x68);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar11 = *plVar16;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_063510d4;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar16,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
            lVar11 = (*(code *)*puVar6)(plVar16,uVar9,puVar6[1]);
            if (lVar11 != 0) {
              if ((char)plVar15[0x20] == '\0') {
                uVar17 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar16 = (long *)thunk_FUN_037787d0(lVar11,uVar17);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar11,uVar17);
                }
              }
              else {
                plVar16 = (long *)FUN_0634424c(plVar15,lVar11);
              }
              if ((char)plVar15[0x20] == '\0') {
                uVar17 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar15 = (long *)thunk_FUN_037787d0(lVar10,uVar17);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar10,uVar17);
                }
              }
              else {
                plVar15 = (long *)FUN_0634424c(plVar15,lVar10);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar11 = *plVar15;
              uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
              plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              do {
                lVar11 = *plVar15;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d89700) {
                      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
                uVar7 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                if ((uVar7 & 1) == 0) goto LAB_06351318;
                lVar11 = *plVar15;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                      goto LAB_06351290;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar15,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
                auVar18 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                lVar11 = *plVar16;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d974d8) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_06351300;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
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


