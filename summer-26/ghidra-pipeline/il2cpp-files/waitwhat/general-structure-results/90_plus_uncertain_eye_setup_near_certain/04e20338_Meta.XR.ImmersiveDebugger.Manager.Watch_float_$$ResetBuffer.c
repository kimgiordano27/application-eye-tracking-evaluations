/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$ResetBuffer
ENTRY_POINT: 04e20338
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Watch<float>__ResetBuffer(ulong param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined1 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  plVar12 = (long *)thunk_FUN_031c39fc(**(undefined8 **)(param_2 + 0xc0),&stack0x00000038);
  if (plVar12 == (long *)0x0) {
    lVar15 = *(long *)(unaff_x22 + 0x20);
    in_stack_00000038 = *unaff_x21;
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 8),&stack0x00000038);
    puVar2 = PTR_DAT_070f1838;
    if (unaff_x19 != (long *)0x0) {
      lVar15 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_04e205d0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e205d0:
      uVar5 = (*(code *)*puVar13)();
      lVar15 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x21 + 1);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18),(long)&stack0x00000030 + 4
                        );
      lVar15 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_04e20664;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20664:
      uVar6 = (*(code *)*puVar13)();
      lVar15 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000028 = unaff_x21[2];
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x20),&stack0x00000028);
      lVar15 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_04e206f8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e206f8:
      uVar7 = (*(code *)*puVar13)();
      lVar15 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000020._4_4_ = *(undefined4 *)(unaff_x21 + 3);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x28),(long)&stack0x00000020 + 4
                        );
      lVar15 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_04e2078c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e2078c:
      uVar8 = (*(code *)*puVar13)();
      lVar15 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000018 = unaff_x21[4];
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30),&stack0x00000018);
      lVar15 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_04e20820;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20820:
      uVar9 = (*(code *)*puVar13)();
      lVar15 = *(long *)(unaff_x22 + 0x20);
      uStack0000000000000014 = *(undefined4 *)(unaff_x21 + 5);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38),(long)&stack0x00000010 + 4
                        );
      lVar15 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_04e208b4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e208b4:
      uVar10 = (*(code *)*puVar13)();
      lVar15 = *(long *)(unaff_x22 + 0x20);
      uStack0000000000000010 = *(undefined1 *)((long)unaff_x21 + 0x2c);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),&stack0x00000010);
      lVar15 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_04e20948;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20948:
      uVar11 = (*(code *)*puVar13)();
LAB_04e20974:
      uVar14 = FUN_0594e734(uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,0);
      return uVar14;
    }
  }
  else {
    lVar15 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5970) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_04e20428;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5970,0);
LAB_04e20428:
    iVar3 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if (7 < iVar3) {
      lVar15 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_04e2098c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e2098c:
      uVar14 = (*(code *)*puVar13)(plVar12);
      return uVar14;
    }
    iVar3 = -iVar3;
    iVar1 = iVar3 + 7;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar3 == -7) {
          lVar15 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000038 =
               CONCAT71(in_stack_00000038._1_7_,*(undefined1 *)((long)unaff_x21 + 0x2c));
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),&stack0x00000038);
          if (unaff_x19 != (long *)0x0) {
            lVar15 = *unaff_x19;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_04e21074;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21074:
            uVar5 = (*(code *)*puVar13)();
            lVar15 = *plVar12;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_04e21170;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e21170:
            uVar6 = (*(code *)*puVar13)(plVar12);
            uVar14 = FUN_0594e468(uVar5,uVar6,0);
            return uVar14;
          }
        }
        else {
          if (iVar1 != 1) {
            return 0xffffffff;
          }
          lVar15 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(unaff_x21 + 5));
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38),&stack0x00000038);
          puVar2 = PTR_DAT_070f1838;
          if (unaff_x19 != (long *)0x0) {
            lVar15 = *unaff_x19;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_04e212dc;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e212dc:
            uVar5 = (*(code *)*puVar13)();
            lVar15 = *(long *)(unaff_x22 + 0x20);
            in_stack_00000028 =
                 CONCAT71(in_stack_00000028._1_7_,*(undefined1 *)((long)unaff_x21 + 0x2c));
            if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_031c09d4();
            }
            thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),&stack0x00000028);
            lVar15 = *unaff_x19;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_04e21404;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21404:
            uVar6 = (*(code *)*puVar13)();
            lVar15 = *plVar12;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_04e21500;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e21500:
            uVar7 = (*(code *)*puVar13)(plVar12);
            uVar14 = FUN_0594e4e4(uVar5,uVar6,uVar7,0);
            return uVar14;
          }
        }
      }
      else if (iVar1 == 2) {
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000038 = unaff_x21[4];
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30),&stack0x00000038);
        puVar2 = PTR_DAT_070f1838;
        if (unaff_x19 != (long *)0x0) {
          lVar15 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_04e210e0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e210e0:
          uVar5 = (*(code *)*puVar13)();
          lVar15 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(unaff_x21 + 5));
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38),&stack0x00000028);
          lVar15 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_04e211a4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e211a4:
          uVar6 = (*(code *)*puVar13)();
          lVar15 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000018 =
               CONCAT71(in_stack_00000018._1_7_,*(undefined1 *)((long)unaff_x21 + 0x2c));
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),&stack0x00000018);
          lVar15 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_04e21238;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21238:
          uVar7 = (*(code *)*puVar13)();
          lVar15 = *plVar12;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_04e212a0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e212a0:
          uVar8 = (*(code *)*puVar13)(plVar12);
          uVar14 = FUN_0594e564(uVar5,uVar6,uVar7,uVar8,0);
          return uVar14;
        }
      }
      else {
        if (iVar1 != 3) {
          return 0xffffffff;
        }
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(unaff_x21 + 3));
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x28),&stack0x00000028);
        puVar2 = PTR_DAT_070f1838;
        if (unaff_x19 != (long *)0x0) {
          lVar15 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_04e21370;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21370:
          uVar5 = (*(code *)*puVar13)();
          lVar15 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000038 = unaff_x21[4];
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30),&stack0x00000038);
          lVar15 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_04e21470;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21470:
          uVar6 = (*(code *)*puVar13)();
          lVar15 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 5));
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38),&stack0x00000018);
          lVar15 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08();
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value:
          uVar7 = (*(code *)*puVar13)();
          lVar15 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000030._4_4_ =
               CONCAT31(in_stack_00000030._5_3_,*(undefined1 *)((long)unaff_x21 + 0x2c));
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),
                             (long)&stack0x00000030 + 4);
          lVar15 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_04e215cc;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e215cc:
          uVar8 = (*(code *)*puVar13)();
          lVar15 = *plVar12;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_04e21634;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e21634:
          uVar9 = (*(code *)*puVar13)(plVar12);
          uVar14 = FUN_0594e5f4(uVar5,uVar6,uVar7,uVar8,uVar9,0);
          return uVar14;
        }
      }
    }
    else if (iVar3 + 1U < 2) {
      lVar15 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000038 = *unaff_x21;
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 8),&stack0x00000038);
      puVar2 = PTR_DAT_070f1838;
      if (unaff_x19 != (long *)0x0) {
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e20c48;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20c48:
        uVar5 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x21 + 1);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18),
                           (long)&stack0x00000030 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e20cdc;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20cdc:
        uVar6 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000028 = unaff_x21[2];
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x20),&stack0x00000028);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e20d70;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20d70:
        uVar7 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000020._4_4_ = *(undefined4 *)(unaff_x21 + 3);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x28),
                           (long)&stack0x00000020 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e20e04;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20e04:
        uVar8 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000018 = unaff_x21[4];
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30),&stack0x00000018);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e20e98;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20e98:
        uVar9 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        uStack0000000000000014 = *(undefined4 *)(unaff_x21 + 5);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38),
                           (long)&stack0x00000010 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e20f2c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20f2c:
        uVar10 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        uStack0000000000000010 = *(undefined1 *)((long)unaff_x21 + 0x2c);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),&stack0x00000010);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e20fc0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e20fc0:
        uVar11 = (*(code *)*puVar13)();
        lVar15 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_04e21028;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e21028:
        uVar4 = (*(code *)*puVar13)(plVar12);
        uVar14 = FUN_0594e7e4(uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar4);
        return uVar14;
      }
    }
    else if (iVar1 == 4) {
      lVar15 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000038 = unaff_x21[2];
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x20),&stack0x00000038);
      puVar2 = PTR_DAT_070f1838;
      if (unaff_x19 != (long *)0x0) {
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21a00;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21a00:
        uVar5 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 3));
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x28),&stack0x00000018);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21a94;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21a94:
        uVar6 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000028 = unaff_x21[4];
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30),&stack0x00000028);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21b28;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21b28:
        uVar7 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x21 + 5);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38),
                           (long)&stack0x00000030 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21bbc;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21bbc:
        uVar8 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000020._4_4_ =
             CONCAT31(in_stack_00000020._5_3_,*(undefined1 *)((long)unaff_x21 + 0x2c));
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),
                           (long)&stack0x00000020 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21c50;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21c50:
        uVar9 = (*(code *)*puVar13)();
        lVar15 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_04e21cb8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e21cb8:
        uVar10 = (*(code *)*puVar13)(plVar12);
        uVar14 = FUN_0594e68c(uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,0);
        return uVar14;
      }
    }
    else {
      if (iVar1 != 5) {
        return 0xffffffff;
      }
      lVar15 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 1));
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18),&stack0x00000018);
      puVar2 = PTR_DAT_070f1838;
      if (unaff_x19 != (long *)0x0) {
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f1838) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21674;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21674:
        uVar5 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000038 = unaff_x21[2];
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x20),&stack0x00000038);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21708;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21708:
        uVar6 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x21 + 3);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x28),
                           (long)&stack0x00000030 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e2179c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e2179c:
        uVar7 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000028 = unaff_x21[4];
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30),&stack0x00000028);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21830;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21830:
        uVar8 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000020._4_4_ = *(undefined4 *)(unaff_x21 + 5);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38),
                           (long)&stack0x00000020 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e218c4;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e218c4:
        uVar9 = (*(code *)*puVar13)();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        uStack0000000000000014 =
             CONCAT31(uStack0000000000000014._1_3_,*(undefined1 *)((long)unaff_x21 + 0x2c));
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40),
                           (long)&stack0x00000010 + 4);
        lVar15 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_04e21958;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08();
LAB_04e21958:
        uVar10 = (*(code *)*puVar13)();
        lVar15 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_070f5978) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_04e219c0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5978,0);
LAB_04e219c0:
        uVar11 = (*(code *)*puVar13)(plVar12);
        goto LAB_04e20974;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


