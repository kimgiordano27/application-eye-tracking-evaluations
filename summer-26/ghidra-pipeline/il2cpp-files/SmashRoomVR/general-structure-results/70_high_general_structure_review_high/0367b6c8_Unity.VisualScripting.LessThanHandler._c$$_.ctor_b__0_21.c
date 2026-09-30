/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_21
ENTRY_POINT: 0367b6c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0367bc40) */
/* WARNING: Removing unreachable block (ram,0x0367bf10) */
/* WARNING: Removing unreachable block (ram,0x0367bf2c) */

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_21
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long in_x9;
  long lVar12;
  int *piVar13;
  long in_x10;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar15;
  undefined8 uVar16;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x29 + 0x18) = (uint)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_01b4f09c();
    }
    else {
      FUN_02b599e4(unaff_x29,param_3,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
LAB_0367b76c:
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x20 == unaff_x22) {
      do {
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
          uVar14 = 0;
          uVar8 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar15 = *(long *)(unaff_x24 + 0x20 + uVar14 * 8);
            lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
            Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar5,lVar15,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0361ce90(lVar5,unaff_w26,0);
            if ((*(char *)(lVar5 + 0x4c) == '\0') && (*(char *)(lVar5 + 0x1c) == '\0')) {
              *(undefined1 *)(lVar5 + 0x4c) = 1;
              lVar6 = *in_stack_00000020;
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar9 = *(long *)(lVar6 + 0x10);
              lVar12 = *(long *)PTR_DAT_03d9a310;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                plVar10 = (long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
                *plVar10 = lVar5;
                thunk_FUN_01b4f09c(plVar10,lVar5);
              }
              else {
                FUN_02b599e4(lVar6,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (unaff_w25 < 1) {
              uVar16 = 0;
            }
            else {
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = FUN_03623cd4(*(undefined4 *)(lVar15 + 0x48),0,unaff_w25 + -1,0);
              if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar16 = *(undefined8 *)(unaff_x23 + (long)(int)uVar3 * 8 + 0x20);
            }
            if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            iVar4 = FUN_02b5a5a8(*in_stack_00000018,uVar16,*(undefined8 *)PTR_DAT_03d9bc20);
            if (iVar4 < 0) {
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar8 = FUN_03922f24(uVar16,0,0);
              if ((uVar8 & 1) == 0) {
                lVar15 = *in_stack_00000018;
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar3 = *(uint *)(lVar15 + 0x18);
                *(uint *)(lVar5 + 0x48) = uVar3;
                lVar6 = *(long *)(lVar15 + 0x10);
                lVar9 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__
                ;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (uVar3 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                  puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar7 = uVar16;
                  thunk_FUN_01b4f09c(puVar7,uVar16);
                }
                else {
                  FUN_02b599e4(lVar15,uVar16,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                *(undefined4 *)(lVar5 + 0x48) = 0;
              }
            }
            else {
              *(int *)(lVar5 + 0x48) = iVar4;
            }
            lVar15 = *in_stack_00000040;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar6 = *(long *)(lVar15 + 0x10);
            lVar9 = *(long *)PTR_DAT_03d9a310;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar15 + 0x18);
            if (uVar3 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar3 + 1;
              plVar10 = (long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
              *plVar10 = lVar5;
              thunk_FUN_01b4f09c(plVar10,lVar5);
            }
            else {
              FUN_02b599e4(lVar15,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = (ulong)*(uint *)(unaff_x24 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)*(uint *)(unaff_x24 + 0x18));
        }
        puVar2 = PTR_DAT_03d9a838;
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar5 = *in_stack_00000028;
        uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03d9bc08) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0367ba58;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(in_stack_00000028,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
        plVar10 = (long *)(*(code *)*puVar7)(in_stack_00000028,puVar7[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0367ba6c:
        lVar5 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0367bab8;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar1,0);
LAB_0367bab8:
        uVar14 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        if ((uVar14 & 1) != 0) {
          lVar5 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar14 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03d9bc10) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0367bb1c;
              }
              uVar14 = uVar14 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
          uVar16 = (*(code *)*puVar7)(plVar10,puVar7[1]);
          lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
          FUN_036515fc(lVar5,uVar16,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_03651e38(lVar5,unaff_w26,0);
          lVar15 = *in_stack_00000008;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar6 = *(long *)(lVar15 + 0x10);
          lVar9 = *(long *)PTR_DAT_03d9bc18;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar15 + 0x18);
          if (uVar3 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar3 + 1;
            plVar11 = (long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
            *plVar11 = lVar5;
            thunk_FUN_01b4f09c(plVar11,lVar5);
          }
          else {
            FUN_02b599e4(lVar15,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0367ba6c;
        }
        if (plVar10 != (long *)0x0) {
          lVar5 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar14 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0367bc28;
              }
              uVar14 = uVar14 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ae9f78(plVar10,*(long *)
                                         Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                ,0);
LAB_0367bc28:
          (*(code *)*puVar7)(plVar10,puVar7[1]);
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
          uVar14 = 0;
          uVar8 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar16 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar14 * 8);
            lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
            FUN_036515fc(lVar5,uVar16,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_03651e38(lVar5,unaff_w26,0);
            lVar15 = *in_stack_00000010;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar6 = *(long *)(lVar15 + 0x10);
            lVar9 = *(long *)PTR_DAT_03d9bc18;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar15 + 0x18);
            if (uVar3 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar3 + 1;
              plVar10 = (long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
              *plVar10 = lVar5;
              thunk_FUN_01b4f09c(plVar10,lVar5);
            }
            else {
              FUN_02b599e4(lVar15,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            uVar14 = uVar14 + 1;
            uVar8 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
          } while ((long)uVar14 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
        }
        unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
        lVar5 = *in_stack_00000038;
        uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0367b4f4;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ae9f78(in_stack_00000038,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_0367b4f4:
        uVar14 = (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          if (in_stack_00000038 == (long *)0x0) {
            return;
          }
          lVar5 = *in_stack_00000038;
          uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar14 == 0) goto LAB_0367bde8;
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_0367bdd0;
        }
        lVar5 = *in_stack_00000038;
        uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03d9abc8) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0367b55c;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
        lVar5 = (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        in_stack_00000030._4_4_ = FUN_0362e4c0(lVar5,0);
        unaff_x19 = FUN_0391c27c(lVar5,0);
        unaff_x28 = Unity_VisualScripting_Member__Invoke(lVar5,0,0);
        unaff_x24 = *(long *)(lVar5 + 0x28);
        in_stack_00000028 = (long *)FUN_036324a8(lVar5,0);
        in_stack_00000050 = *(long *)(lVar5 + 0x48);
        lVar5 = FUN_0362eedc(lVar5,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        unaff_x23 = FUN_038fe900(lVar5,0);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        unaff_w25 = *(int *)(unaff_x23 + 0x18);
      } while ((int)in_stack_00000030._4_4_ < 1);
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      unaff_x22 = 0;
      unaff_x27 = unaff_x28 + 0x20;
      unaff_x20 = (ulong)in_stack_00000030._4_4_;
    }
    if (*(uint *)(unaff_x28 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar16 = *(undefined8 *)(unaff_x27 + unaff_x22 * 8);
    if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar16 = FUN_03656eec(unaff_x19,uVar16,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar14 = FUN_0391f968(in_stack_00000058,0,0);
    unaff_x29 = *in_stack_00000048;
    if ((uVar14 & 1) == 0) {
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar5 = *(long *)(unaff_x29 + 0x10);
      lVar15 = *(long *)PTR_DAT_03d9b598;
      *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(unaff_x29 + 0x18);
      if (uVar3 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x29 + 0x18) = uVar3 + 1;
        puVar7 = (undefined8 *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
        *puVar7 = uVar16;
        thunk_FUN_01b4f09c(puVar7,uVar16);
      }
      else {
        FUN_02b599e4(unaff_x29,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_0367b76c;
    }
    if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    param_3 = FUN_036570ec(in_stack_00000058,uVar16,0);
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    param_1 = *(long *)(unaff_x29 + 0x10);
    in_x9 = *(long *)PTR_DAT_03d9b598;
    *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_x10 = (long)*(int *)(unaff_x29 + 0x18);
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar13 = piVar13 + 4;
    if (uVar14 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0367be0c;
    }
  }
LAB_0367bde8:
  puVar7 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000038,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367be0c:
  (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
  return;
}


