/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_26
ENTRY_POINT: 0367b8cc
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_26(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int unaff_w19;
  long *unaff_x20;
  undefined8 uVar16;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
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
  
code_r0x0367b8cc:
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(unaff_x29,0,0);
  if ((uVar5 & 1) == 0) {
    lVar6 = *unaff_x27;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(uint *)(lVar6 + 0x18);
    *(uint *)(unaff_x28 + 0x48) = uVar3;
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar13 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (uVar3 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar3 + 1;
      puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
      *puVar7 = unaff_x29;
      thunk_FUN_01b4f09c(puVar7,unaff_x29);
    }
    else {
      FUN_02b599e4(lVar6,unaff_x29,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    *(undefined4 *)(unaff_x28 + 0x48) = 0;
  }
  do {
    lVar6 = *in_stack_00000040;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar13 = *(long *)PTR_DAT_03d9a310;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(uint *)(lVar6 + 0x18);
    if (uVar3 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar3 + 1;
      plVar10 = (long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
      *plVar10 = unaff_x28;
      thunk_FUN_01b4f09c(plVar10,unaff_x28);
    }
    else {
      FUN_02b599e4(lVar6,unaff_x28,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = (ulong)*(uint *)(unaff_x24 + 0x18);
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
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc08) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367ba58;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(in_stack_00000028,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
        plVar10 = (long *)(*(code *)*puVar7)(in_stack_00000028,puVar7[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0367ba6c:
        lVar6 = *plVar10;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367bab8;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar1,0);
LAB_0367bab8:
        uVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        if ((uVar5 & 1) != 0) {
          lVar6 = *plVar10;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc10) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0367bb1c;
              }
              uVar5 = uVar5 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
          uVar8 = (*(code *)*puVar7)(plVar10,puVar7[1]);
          lVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
          FUN_036515fc(lVar6,uVar8,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_03651e38(lVar6,unaff_w26,0);
          lVar9 = *in_stack_00000008;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_03d9bc18;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            plVar11 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
            *plVar11 = lVar6;
            thunk_FUN_01b4f09c(plVar11,lVar6);
          }
          else {
            FUN_02b599e4(lVar9,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0367ba6c;
        }
        if (plVar10 != (long *)0x0) {
          lVar6 = *plVar10;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0367bc28;
              }
              uVar5 = uVar5 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar5 != 0);
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
          uVar5 = 0;
          uVar12 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar8 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar5 * 8);
            lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
            FUN_036515fc(lVar6,uVar8,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_03651e38(lVar6,unaff_w26,0);
            lVar9 = *in_stack_00000010;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar13 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_03d9bc18;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar9 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
              plVar10 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
              *plVar10 = lVar6;
              thunk_FUN_01b4f09c(plVar10,lVar6);
            }
            else {
              FUN_02b599e4(lVar9,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar5 = uVar5 + 1;
            uVar12 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
          } while ((long)uVar5 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
        }
        unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
        lVar6 = *in_stack_00000038;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367b4f4;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ae9f78(in_stack_00000038,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_0367b4f4:
        uVar5 = (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
        if ((uVar5 & 1) == 0) {
          if (in_stack_00000038 == (long *)0x0) {
            return;
          }
          lVar6 = *in_stack_00000038;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 == 0) goto LAB_0367bde8;
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0367bdd0;
        }
        lVar6 = *in_stack_00000038;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9abc8) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367b55c;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
        lVar6 = (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        in_stack_00000030._4_4_ = FUN_0362e4c0(lVar6,0);
        uVar8 = FUN_0391c27c(lVar6,0);
        lVar9 = Unity_VisualScripting_Member__Invoke(lVar6,0,0);
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
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar5 = 0;
          do {
            if (*(uint *)(lVar9 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar16 = *(undefined8 *)(lVar9 + 0x20 + uVar5 * 8);
            if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar16 = FUN_03656eec(uVar8,uVar16,0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar12 = FUN_0391f968(in_stack_00000058,0,0);
            lVar6 = *in_stack_00000048;
            if ((uVar12 & 1) == 0) {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar13 = *(long *)(lVar6 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                puVar7 = (undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
                *puVar7 = uVar16;
                thunk_FUN_01b4f09c(puVar7,uVar16);
              }
              else {
                FUN_02b599e4(lVar6,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar16 = FUN_036570ec(in_stack_00000058,uVar16,0);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar13 = *(long *)(lVar6 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = uVar16;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar6,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar5 = uVar5 + 1;
          } while (in_stack_00000030._4_4_ != uVar5);
        }
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
      } while ((int)*(ulong *)(unaff_x24 + 0x18) < 1);
      unaff_x21 = 0;
      unaff_w19 = unaff_w25 + -1;
      uVar5 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
      unaff_x22 = unaff_x24 + 0x20;
      unaff_x20 = in_stack_00000020;
      unaff_x27 = in_stack_00000018;
    }
    if (uVar5 <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar6 = *(long *)(unaff_x22 + unaff_x21 * 8);
    unaff_x28 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
    Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(unaff_x28,lVar6,0);
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0361ce90(unaff_x28,unaff_w26,0);
    if ((*(char *)(unaff_x28 + 0x4c) == '\0') && (*(char *)(unaff_x28 + 0x1c) == '\0')) {
      *(undefined1 *)(unaff_x28 + 0x4c) = 1;
      lVar9 = *unaff_x20;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_03d9a310;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (uVar3 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar3 + 1;
        plVar10 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
        *plVar10 = unaff_x28;
        thunk_FUN_01b4f09c(plVar10,unaff_x28);
      }
      else {
        FUN_02b599e4(lVar9,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (unaff_w25 < 1) {
      unaff_x29 = 0;
    }
    else {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = FUN_03623cd4(*(undefined4 *)(lVar6 + 0x48),0,unaff_w19,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_x29 = *(undefined8 *)(unaff_x23 + (long)(int)uVar3 * 8 + 0x20);
    }
    if (*unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar4 = FUN_02b5a5a8(*unaff_x27,unaff_x29,*(undefined8 *)PTR_DAT_03d9bc20);
    param_1 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (iVar4 < 0) goto code_r0x0367b8cc;
    *(int *)(unaff_x28 + 0x48) = iVar4;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
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


