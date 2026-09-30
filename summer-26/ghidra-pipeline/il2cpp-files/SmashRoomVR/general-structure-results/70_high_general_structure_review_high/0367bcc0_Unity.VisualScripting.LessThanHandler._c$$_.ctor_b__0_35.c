/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_35
ENTRY_POINT: 0367bcc0
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_35(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *in_x9;
  long lVar16;
  int in_w10;
  int *piVar17;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar18;
  long unaff_x22;
  long lVar19;
  long *unaff_x25;
  int unaff_w26;
  long lVar20;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    lVar16 = *in_x9;
    *(int *)(param_2 + 0x1c) = in_w10;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = *(uint *)(param_2 + 0x18);
    if (uVar4 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar4 + 1;
      plVar12 = (long *)(param_1 + (long)(int)uVar4 * 8 + 0x20);
      *plVar12 = unaff_x19;
      thunk_FUN_01b4f09c(plVar12,unaff_x19);
    }
    else {
      FUN_02b599e4(param_2,unaff_x19,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x20 = unaff_x20 + 1;
    uVar13 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
    if ((long)(int)*(uint *)(in_stack_00000050 + 0x18) <= (long)unaff_x20) {
      do {
        unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
        lVar16 = *in_stack_00000038;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar6 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367b4f4;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ae9f78(in_stack_00000038,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_0367b4f4:
        uVar13 = (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
        if ((uVar13 & 1) == 0) {
          if (in_stack_00000038 == (long *)0x0) {
            return;
          }
          lVar16 = *in_stack_00000038;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 == 0) goto LAB_0367bde8;
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_0367bdd0;
        }
        lVar16 = *in_stack_00000038;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9abc8) {
              puVar6 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367b55c;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
        lVar16 = (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        in_stack_00000030._4_4_ = FUN_0362e4c0(lVar16,0);
        uVar7 = FUN_0391c27c(lVar16,0);
        lVar8 = Unity_VisualScripting_Member__Invoke(lVar16,0,0);
        lVar19 = *(long *)(lVar16 + 0x28);
        plVar12 = (long *)FUN_036324a8(lVar16,0);
        in_stack_00000050 = *(long *)(lVar16 + 0x48);
        lVar16 = FUN_0362eedc(lVar16,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar16 = FUN_038fe900(lVar16,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar1 = *(int *)(lVar16 + 0x18);
        if (0 < (int)in_stack_00000030._4_4_) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar13 = 0;
          do {
            if (*(uint *)(lVar8 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar18 = *(undefined8 *)(lVar8 + 0x20 + uVar13 * 8);
            if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = FUN_03656eec(uVar7,uVar18,0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar9 = FUN_0391f968(in_stack_00000058,0,0);
            lVar20 = *in_stack_00000048;
            if ((uVar9 & 1) == 0) {
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar10 = *(long *)(lVar20 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = *(uint *)(lVar20 + 0x18);
              if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar4 + 1;
                puVar6 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
                *puVar6 = uVar18;
                thunk_FUN_01b4f09c(puVar6,uVar18);
              }
              else {
                FUN_02b599e4(lVar20,uVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar18 = FUN_036570ec(in_stack_00000058,uVar18,0);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar10 = *(long *)(lVar20 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = *(uint *)(lVar20 + 0x18);
              if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar4 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20) = uVar18;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar20,uVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar13 = uVar13 + 1;
          } while (in_stack_00000030._4_4_ != uVar13);
        }
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(lVar19 + 0x18)) {
          uVar13 = 0;
          uVar9 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar20 = *(long *)(lVar19 + 0x20 + uVar13 * 8);
            lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
            Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar8,lVar20,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0361ce90(lVar8,unaff_w26,0);
            if ((*(char *)(lVar8 + 0x4c) == '\0') && (*(char *)(lVar8 + 0x1c) == '\0')) {
              *(undefined1 *)(lVar8 + 0x4c) = 1;
              lVar10 = *in_stack_00000020;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar14 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)PTR_DAT_03d9a310;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = *(uint *)(lVar10 + 0x18);
              if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar4 + 1;
                plVar11 = (long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
                *plVar11 = lVar8;
                thunk_FUN_01b4f09c(plVar11,lVar8);
              }
              else {
                FUN_02b599e4(lVar10,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (iVar1 < 1) {
              uVar7 = 0;
            }
            else {
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = FUN_03623cd4(*(undefined4 *)(lVar20 + 0x48),0,iVar1 + -1,0);
              if (*(uint *)(lVar16 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar7 = *(undefined8 *)(lVar16 + (long)(int)uVar4 * 8 + 0x20);
            }
            if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            iVar5 = FUN_02b5a5a8(*in_stack_00000018,uVar7,*(undefined8 *)PTR_DAT_03d9bc20);
            if (iVar5 < 0) {
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar9 = FUN_03922f24(uVar7,0,0);
              if ((uVar9 & 1) == 0) {
                lVar20 = *in_stack_00000018;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar4 = *(uint *)(lVar20 + 0x18);
                *(uint *)(lVar8 + 0x48) = uVar4;
                lVar10 = *(long *)(lVar20 + 0x10);
                lVar14 = *(long *)
                          Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
                *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar20 + 0x18) = uVar4 + 1;
                  puVar6 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
                  *puVar6 = uVar7;
                  thunk_FUN_01b4f09c(puVar6,uVar7);
                }
                else {
                  FUN_02b599e4(lVar20,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                *(undefined4 *)(lVar8 + 0x48) = 0;
              }
            }
            else {
              *(int *)(lVar8 + 0x48) = iVar5;
            }
            lVar20 = *in_stack_00000040;
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar10 = *(long *)(lVar20 + 0x10);
            lVar14 = *(long *)PTR_DAT_03d9a310;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar4 = *(uint *)(lVar20 + 0x18);
            if (uVar4 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar4 + 1;
              plVar11 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
              *plVar11 = lVar8;
              thunk_FUN_01b4f09c(plVar11,lVar8);
            }
            else {
              FUN_02b599e4(lVar20,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = (ulong)*(uint *)(lVar19 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar19 + 0x18));
        }
        puVar3 = PTR_DAT_03d9a838;
        puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar16 = *plVar12;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc08) {
              puVar6 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367ba58;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
        plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0367ba6c:
        lVar16 = *plVar12;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367bab8;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar2,0);
LAB_0367bab8:
        uVar13 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if ((uVar13 & 1) != 0) {
          lVar16 = *plVar12;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc10) {
                puVar6 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0367bb1c;
              }
              uVar13 = uVar13 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
          uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          lVar16 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
          FUN_036515fc(lVar16,uVar7,0);
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
          lVar19 = *(long *)(lVar8 + 0x10);
          lVar20 = *(long *)PTR_DAT_03d9bc18;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar8 + 0x18);
          if (uVar4 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar4 + 1;
            plVar11 = (long *)(lVar19 + (long)(int)uVar4 * 8 + 0x20);
            *plVar11 = lVar16;
            thunk_FUN_01b4f09c(plVar11,lVar16);
          }
          else {
            FUN_02b599e4(lVar8,lVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0367ba6c;
        }
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar6 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0367bc28;
              }
              uVar13 = uVar13 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01ae9f78(plVar12,*(long *)
                                         Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                ,0);
LAB_0367bc28:
          (*(code *)*puVar6)(plVar12,puVar6[1]);
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
      } while ((int)*(ulong *)(in_stack_00000050 + 0x18) < 1);
      unaff_x20 = 0;
      uVar13 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
      unaff_x22 = in_stack_00000050 + 0x20;
      unaff_x25 = in_stack_00000010;
    }
    if (uVar13 <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar7 = *(undefined8 *)(unaff_x22 + unaff_x20 * 8);
    unaff_x19 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
    FUN_036515fc(unaff_x19,uVar7,0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_03651e38(unaff_x19,unaff_w26,0);
    param_2 = *unaff_x25;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    param_1 = *(long *)(param_2 + 0x10);
    in_w10 = *(int *)(param_2 + 0x1c) + 1;
    in_x9 = (long *)PTR_DAT_03d9bc18;
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar17 = piVar17 + 4;
    if (uVar13 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar6 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0367be0c;
    }
  }
LAB_0367bde8:
  puVar6 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000038,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367be0c:
  (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
  return;
}


