/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_28
ENTRY_POINT: 0367b998
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_28(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long in_x9;
  long lVar14;
  int *piVar15;
  long in_x10;
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
      *(uint *)(param_2 + 0x18) = (uint)in_x10 + 1;
      plVar8 = (long *)(param_1 + in_x10 * 8 + 0x20);
      *plVar8 = unaff_x28;
      thunk_FUN_01b4f09c(plVar8,unaff_x28);
    }
    else {
      FUN_02b599e4(param_2,unaff_x28,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    uVar9 = (ulong)*(uint *)(unaff_x24 + 0x18);
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x21) {
      do {
        puVar2 = PTR_DAT_03d9a838;
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar10 = *in_stack_00000028;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc08) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367ba58;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(in_stack_00000028,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
        plVar8 = (long *)(*(code *)*puVar5)(in_stack_00000028,puVar5[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0367ba6c:
        lVar10 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367bab8;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar1,0);
LAB_0367bab8:
        uVar9 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        if ((uVar9 & 1) != 0) {
          lVar10 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc10) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0367bb1c;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
          uVar6 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          lVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
          FUN_036515fc(lVar10,uVar6,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_03651e38(lVar10,unaff_w26,0);
          lVar7 = *in_stack_00000008;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar14 = *(long *)PTR_DAT_03d9bc18;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar7 + 0x18);
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            plVar12 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
            *plVar12 = lVar10;
            thunk_FUN_01b4f09c(plVar12,lVar10);
          }
          else {
            FUN_02b599e4(lVar7,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0367ba6c;
        }
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0367bc28;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ae9f78(plVar8,*(long *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                                0);
LAB_0367bc28:
          (*(code *)*puVar5)(plVar8,puVar5[1]);
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
          uVar9 = 0;
          uVar13 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
          do {
            if (uVar13 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar6 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar9 * 8);
            lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
            FUN_036515fc(lVar10,uVar6,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_03651e38(lVar10,unaff_w26,0);
            lVar7 = *in_stack_00000010;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar14 = *(long *)PTR_DAT_03d9bc18;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar7 + 0x18);
            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar3 + 1;
              plVar8 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
              *plVar8 = lVar10;
              thunk_FUN_01b4f09c(plVar8,lVar10);
            }
            else {
              FUN_02b599e4(lVar7,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = uVar9 + 1;
            uVar13 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
          } while ((long)uVar9 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
        }
        unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
        lVar10 = *in_stack_00000038;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367b4f4;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ae9f78(in_stack_00000038,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_0367b4f4:
        uVar9 = (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (in_stack_00000038 == (long *)0x0) {
            return;
          }
          lVar10 = *in_stack_00000038;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 == 0) goto LAB_0367bde8;
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0367bdd0;
        }
        lVar10 = *in_stack_00000038;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9abc8) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367b55c;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
        lVar10 = (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        in_stack_00000030._4_4_ = FUN_0362e4c0(lVar10,0);
        uVar6 = FUN_0391c27c(lVar10,0);
        lVar7 = Unity_VisualScripting_Member__Invoke(lVar10,0,0);
        unaff_x24 = *(long *)(lVar10 + 0x28);
        in_stack_00000028 = (long *)FUN_036324a8(lVar10,0);
        in_stack_00000050 = *(long *)(lVar10 + 0x48);
        lVar10 = FUN_0362eedc(lVar10,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        unaff_x23 = FUN_038fe900(lVar10,0);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        unaff_w25 = *(int *)(unaff_x23 + 0x18);
        if (0 < (int)in_stack_00000030._4_4_) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar9 = 0;
          do {
            if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar16 = *(undefined8 *)(lVar7 + 0x20 + uVar9 * 8);
            if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar16 = FUN_03656eec(uVar6,uVar16,0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_0391f968(in_stack_00000058,0,0);
            lVar10 = *in_stack_00000048;
            if ((uVar13 & 1) == 0) {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                puVar5 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                *puVar5 = uVar16;
                thunk_FUN_01b4f09c(puVar5,uVar16);
              }
              else {
                FUN_02b599e4(lVar10,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar16 = FUN_036570ec(in_stack_00000058,uVar16,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                *(undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) = uVar16;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar10,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar9 = uVar9 + 1;
          } while (in_stack_00000030._4_4_ != uVar9);
        }
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
      } while ((int)*(ulong *)(unaff_x24 + 0x18) < 1);
      unaff_x21 = 0;
      unaff_w19 = unaff_w25 + -1;
      uVar9 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
      unaff_x22 = unaff_x24 + 0x20;
      unaff_x20 = in_stack_00000020;
      unaff_x27 = in_stack_00000018;
    }
    if (uVar9 <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar10 = *(long *)(unaff_x22 + unaff_x21 * 8);
    unaff_x28 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
    Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(unaff_x28,lVar10,0);
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0361ce90(unaff_x28,unaff_w26,0);
    if ((*(char *)(unaff_x28 + 0x4c) == '\0') && (*(char *)(unaff_x28 + 0x1c) == '\0')) {
      *(undefined1 *)(unaff_x28 + 0x4c) = 1;
      lVar7 = *unaff_x20;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar14 = *(long *)PTR_DAT_03d9a310;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar3 + 1;
        plVar8 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
        *plVar8 = unaff_x28;
        thunk_FUN_01b4f09c(plVar8,unaff_x28);
      }
      else {
        FUN_02b599e4(lVar7,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (unaff_w25 < 1) {
      uVar6 = 0;
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = FUN_03623cd4(*(undefined4 *)(lVar10 + 0x48),0,unaff_w19,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar6 = *(undefined8 *)(unaff_x23 + (long)(int)uVar3 * 8 + 0x20);
    }
    if (*unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar4 = FUN_02b5a5a8(*unaff_x27,uVar6,*(undefined8 *)PTR_DAT_03d9bc20);
    if (iVar4 < 0) {
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_03922f24(uVar6,0,0);
      if ((uVar9 & 1) == 0) {
        lVar10 = *unaff_x27;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar3 = *(uint *)(lVar10 + 0x18);
        *(uint *)(unaff_x28 + 0x48) = uVar3;
        lVar7 = *(long *)(lVar10 + 0x10);
        lVar11 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar3 + 1;
          puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
          *puVar5 = uVar6;
          thunk_FUN_01b4f09c(puVar5,uVar6);
        }
        else {
          FUN_02b599e4(lVar10,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        *(undefined4 *)(unaff_x28 + 0x48) = 0;
      }
    }
    else {
      *(int *)(unaff_x28 + 0x48) = iVar4;
    }
    param_2 = *in_stack_00000040;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    param_1 = *(long *)(param_2 + 0x10);
    in_x9 = *(long *)PTR_DAT_03d9a310;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_x10 = (long)*(int *)(param_2 + 0x18);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
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


