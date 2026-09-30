/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_20
ENTRY_POINT: 0367b65c
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long lVar16;
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
    uVar5 = FUN_0391f968(param_1,0,0);
    lVar16 = *in_stack_00000048;
    if ((uVar5 & 1) == 0) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar8 = *(long *)(lVar16 + 0x10);
      lVar13 = *(long *)PTR_DAT_03d9b598;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(lVar16 + 0x18);
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar3 + 1;
        puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
        *puVar7 = unaff_x21;
        thunk_FUN_01b4f09c(puVar7,unaff_x21);
      }
      else {
        FUN_02b599e4(lVar16,unaff_x21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_036570ec(in_stack_00000058,unaff_x21,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar8 = *(long *)(lVar16 + 0x10);
      lVar13 = *(long *)PTR_DAT_03d9b598;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(lVar16 + 0x18);
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar6;
        thunk_FUN_01b4f09c();
      }
      else {
        FUN_02b599e4(lVar16,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x20 == unaff_x22) {
      do {
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
          uVar5 = 0;
          uVar9 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar8 = *(long *)(unaff_x24 + 0x20 + uVar5 * 8);
            lVar16 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
            Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar16,lVar8,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0361ce90(lVar16,unaff_w26,0);
            if ((*(char *)(lVar16 + 0x4c) == '\0') && (*(char *)(lVar16 + 0x1c) == '\0')) {
              *(undefined1 *)(lVar16 + 0x4c) = 1;
              lVar13 = *in_stack_00000020;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar10 = *(long *)(lVar13 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9a310;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = *(uint *)(lVar13 + 0x18);
              if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                plVar11 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                *plVar11 = lVar16;
                thunk_FUN_01b4f09c(plVar11,lVar16);
              }
              else {
                FUN_02b599e4(lVar13,lVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (unaff_w25 < 1) {
              uVar6 = 0;
            }
            else {
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar3 = FUN_03623cd4(*(undefined4 *)(lVar8 + 0x48),0,unaff_w25 + -1,0);
              if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar6 = *(undefined8 *)(unaff_x23 + (long)(int)uVar3 * 8 + 0x20);
            }
            if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            iVar4 = FUN_02b5a5a8(*in_stack_00000018,uVar6,*(undefined8 *)PTR_DAT_03d9bc20);
            if (iVar4 < 0) {
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar9 = FUN_03922f24(uVar6,0,0);
              if ((uVar9 & 1) == 0) {
                lVar8 = *in_stack_00000018;
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar3 = *(uint *)(lVar8 + 0x18);
                *(uint *)(lVar16 + 0x48) = uVar3;
                lVar13 = *(long *)(lVar8 + 0x10);
                lVar10 = *(long *)
                          Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                  puVar7 = (undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar7 = uVar6;
                  thunk_FUN_01b4f09c(puVar7,uVar6);
                }
                else {
                  FUN_02b599e4(lVar8,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                *(undefined4 *)(lVar16 + 0x48) = 0;
              }
            }
            else {
              *(int *)(lVar16 + 0x48) = iVar4;
            }
            lVar8 = *in_stack_00000040;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar13 = *(long *)(lVar8 + 0x10);
            lVar10 = *(long *)PTR_DAT_03d9a310;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
              *plVar11 = lVar16;
              thunk_FUN_01b4f09c(plVar11,lVar16);
            }
            else {
              FUN_02b599e4(lVar8,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = (ulong)*(uint *)(unaff_x24 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x24 + 0x18));
        }
        puVar2 = PTR_DAT_03d9a838;
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar16 = *in_stack_00000028;
        uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc08) {
              puVar7 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367ba58;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(in_stack_00000028,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
        plVar11 = (long *)(*(code *)*puVar7)(in_stack_00000028,puVar7[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0367ba6c:
        lVar16 = *plVar11;
        uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367bab8;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar1,0);
LAB_0367bab8:
        uVar5 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        if ((uVar5 & 1) != 0) {
          lVar16 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar5 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc10) {
                puVar7 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0367bb1c;
              }
              uVar5 = uVar5 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
          uVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          lVar16 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
          FUN_036515fc(lVar16,uVar6,0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_03651e38(lVar16,unaff_w26,0);
          lVar8 = *in_stack_00000008;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar13 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)PTR_DAT_03d9bc18;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            plVar12 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
            *plVar12 = lVar16;
            thunk_FUN_01b4f09c(plVar12,lVar16);
          }
          else {
            FUN_02b599e4(lVar8,lVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0367ba6c;
        }
        if (plVar11 != (long *)0x0) {
          lVar16 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar5 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar7 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0367bc28;
              }
              uVar5 = uVar5 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ae9f78(plVar11,*(long *)
                                         Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                ,0);
LAB_0367bc28:
          (*(code *)*puVar7)(plVar11,puVar7[1]);
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
          uVar5 = 0;
          uVar9 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar6 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar5 * 8);
            lVar16 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
            FUN_036515fc(lVar16,uVar6,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_03651e38(lVar16,unaff_w26,0);
            lVar8 = *in_stack_00000010;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar13 = *(long *)(lVar8 + 0x10);
            lVar10 = *(long *)PTR_DAT_03d9bc18;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
              *plVar11 = lVar16;
              thunk_FUN_01b4f09c(plVar11,lVar16);
            }
            else {
              FUN_02b599e4(lVar8,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar5 = uVar5 + 1;
            uVar9 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
          } while ((long)uVar5 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
        }
        unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
        lVar16 = *in_stack_00000038;
        uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar7 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
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
          lVar16 = *in_stack_00000038;
          uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar5 == 0) goto LAB_0367bde8;
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_0367bdd0;
        }
        lVar16 = *in_stack_00000038;
        uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9abc8) {
              puVar7 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0367b55c;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
        lVar16 = (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        in_stack_00000030._4_4_ = FUN_0362e4c0(lVar16,0);
        unaff_x19 = FUN_0391c27c(lVar16,0);
        unaff_x28 = Unity_VisualScripting_Member__Invoke(lVar16,0,0);
        unaff_x24 = *(long *)(lVar16 + 0x28);
        in_stack_00000028 = (long *)FUN_036324a8(lVar16,0);
        in_stack_00000050 = *(long *)(lVar16 + 0x48);
        lVar16 = FUN_0362eedc(lVar16,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        unaff_x23 = FUN_038fe900(lVar16,0);
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
    uVar6 = *(undefined8 *)(unaff_x27 + unaff_x22 * 8);
    if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    unaff_x21 = FUN_03656eec(unaff_x19,uVar6,0);
    param_1 = in_stack_00000058;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar7 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
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


