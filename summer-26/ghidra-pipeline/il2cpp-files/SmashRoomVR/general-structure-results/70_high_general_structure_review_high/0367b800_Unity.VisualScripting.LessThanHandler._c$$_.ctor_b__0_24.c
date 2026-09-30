/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_24
ENTRY_POINT: 0367b800
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined **in_x9;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int unaff_w19;
  long *unaff_x20;
  undefined8 uVar15;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
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
    lVar6 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)in_x9[0x62];
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      plVar7 = (long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
      *plVar7 = unaff_x28;
      thunk_FUN_01b4f09c(plVar7,unaff_x28);
    }
    else {
      FUN_02b599e4(param_1,unaff_x28,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    do {
      if (unaff_w25 < 1) {
        uVar16 = 0;
      }
      else {
        if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar3 = FUN_03623cd4(*(undefined4 *)(unaff_x29 + 0x48),0,unaff_w19,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar16 = *(undefined8 *)(unaff_x23 + (long)(int)uVar3 * 8 + 0x20);
      }
      if (*unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar4 = FUN_02b5a5a8(*unaff_x27,uVar16,*(undefined8 *)PTR_DAT_03d9bc20);
      if (iVar4 < 0) {
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_03922f24(uVar16,0,0);
        if ((uVar8 & 1) == 0) {
          lVar6 = *unaff_x27;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar6 + 0x18);
          *(uint *)(unaff_x28 + 0x48) = uVar3;
          lVar11 = *(long *)(lVar6 + 0x10);
          lVar12 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar3 + 1;
            puVar5 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
            *puVar5 = uVar16;
            thunk_FUN_01b4f09c(puVar5,uVar16);
          }
          else {
            FUN_02b599e4(lVar6,uVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          *(undefined4 *)(unaff_x28 + 0x48) = 0;
        }
      }
      else {
        *(int *)(unaff_x28 + 0x48) = iVar4;
      }
      lVar6 = *in_stack_00000040;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar12 = *(long *)PTR_DAT_03d9a310;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        plVar7 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
        *plVar7 = unaff_x28;
        thunk_FUN_01b4f09c(plVar7,unaff_x28);
      }
      else {
        FUN_02b599e4(lVar6,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      uVar8 = (ulong)*(uint *)(unaff_x24 + 0x18);
      unaff_x21 = unaff_x21 + 1;
      if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x21) {
        do {
          puVar2 = PTR_DAT_03d9a838;
          puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
          if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar6 = *in_stack_00000028;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d9bc08) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0367ba58;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ae9f78(in_stack_00000028,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
          plVar7 = (long *)(*(code *)*puVar5)(in_stack_00000028,puVar5[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
LAB_0367ba6c:
          lVar6 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0367bab8;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
LAB_0367bab8:
          uVar8 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if ((uVar8 & 1) != 0) {
            lVar6 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d9bc10) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0367bb1c;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
            uVar16 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            lVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
            FUN_036515fc(lVar6,uVar16,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_03651e38(lVar6,unaff_w26,0);
            lVar11 = *in_stack_00000008;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_03d9bc18;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar11 + 0x18);
            if (uVar3 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar3 + 1;
              plVar9 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
              *plVar9 = lVar6;
              thunk_FUN_01b4f09c(plVar9,lVar6);
            }
            else {
              FUN_02b599e4(lVar11,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0367ba6c;
          }
          if (plVar7 != (long *)0x0) {
            lVar6 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0367bc28;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01ae9f78(plVar7,*(long *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                  ,0);
LAB_0367bc28:
            (*(code *)*puVar5)(plVar7,puVar5[1]);
          }
          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
            uVar8 = 0;
            uVar10 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
            do {
              if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar16 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar8 * 8);
              lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
              FUN_036515fc(lVar6,uVar16,0);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              FUN_03651e38(lVar6,unaff_w26,0);
              lVar11 = *in_stack_00000010;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar12 = *(long *)(lVar11 + 0x10);
              lVar13 = *(long *)PTR_DAT_03d9bc18;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = *(uint *)(lVar11 + 0x18);
              if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                plVar7 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                *plVar7 = lVar6;
                thunk_FUN_01b4f09c(plVar7,lVar6);
              }
              else {
                FUN_02b599e4(lVar11,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              uVar8 = uVar8 + 1;
              uVar10 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
            } while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
          }
          unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
          lVar6 = *in_stack_00000038;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0367b4f4;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ae9f78(in_stack_00000038,
                                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,
                                0);
LAB_0367b4f4:
          uVar8 = (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
          if ((uVar8 & 1) == 0) {
            if (in_stack_00000038 == (long *)0x0) {
              return;
            }
            lVar6 = *in_stack_00000038;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 == 0) goto LAB_0367bde8;
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_0367bdd0;
          }
          lVar6 = *in_stack_00000038;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d9abc8) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0367b55c;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
          lVar6 = (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          in_stack_00000030._4_4_ = FUN_0362e4c0(lVar6,0);
          uVar16 = FUN_0391c27c(lVar6,0);
          lVar11 = Unity_VisualScripting_Member__Invoke(lVar6,0,0);
          unaff_x24 = *(long *)(lVar6 + 0x28);
          in_stack_00000028 = (long *)FUN_036324a8(lVar6,0);
          in_stack_00000050 = *(long *)(lVar6 + 0x48);
          lVar6 = FUN_0362eedc(lVar6,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          unaff_x23 = FUN_038fe900(lVar6,0);
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          unaff_w25 = *(int *)(unaff_x23 + 0x18);
          if (0 < (int)in_stack_00000030._4_4_) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar8 = 0;
            do {
              if (*(uint *)(lVar11 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar15 = *(undefined8 *)(lVar11 + 0x20 + uVar8 * 8);
              if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar15 = FUN_03656eec(uVar16,uVar15,0);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_0391f968(in_stack_00000058,0,0);
              lVar6 = *in_stack_00000048;
              if ((uVar10 & 1) == 0) {
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar12 = *(long *)(lVar6 + 0x10);
                lVar13 = *(long *)PTR_DAT_03d9b598;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar3 = *(uint *)(lVar6 + 0x18);
                if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                  puVar5 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar5 = uVar15;
                  thunk_FUN_01b4f09c(puVar5,uVar15);
                }
                else {
                  FUN_02b599e4(lVar6,uVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar15 = FUN_036570ec(in_stack_00000058,uVar15,0);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar12 = *(long *)(lVar6 + 0x10);
                lVar13 = *(long *)PTR_DAT_03d9b598;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar3 = *(uint *)(lVar6 + 0x18);
                if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                  *(undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20) = uVar15;
                  thunk_FUN_01b4f09c();
                }
                else {
                  FUN_02b599e4(lVar6,uVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar8 = uVar8 + 1;
            } while (in_stack_00000030._4_4_ != uVar8);
          }
          if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
        } while ((int)*(ulong *)(unaff_x24 + 0x18) < 1);
        unaff_x21 = 0;
        unaff_w19 = unaff_w25 + -1;
        uVar8 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
        unaff_x22 = unaff_x24 + 0x20;
        unaff_x20 = in_stack_00000020;
        unaff_x27 = in_stack_00000018;
      }
      if (uVar8 <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_x29 = *(long *)(unaff_x22 + unaff_x21 * 8);
      unaff_x28 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
      Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(unaff_x28,unaff_x29,0);
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0361ce90(unaff_x28,unaff_w26,0);
    } while ((*(char *)(unaff_x28 + 0x4c) != '\0') || (*(char *)(unaff_x28 + 0x1c) != '\0'));
    *(undefined1 *)(unaff_x28 + 0x4c) = 1;
    param_1 = *unaff_x20;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_x9 = &PTR_DAT_03d9a000;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0367be0c;
    }
  }
LAB_0367bde8:
  puVar5 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000038,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367be0c:
  (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
  return;
}


