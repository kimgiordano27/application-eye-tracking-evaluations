/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_33
ENTRY_POINT: 0367bbf0
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


/* WARNING: Removing unreachable block (ram,0x0367bf2c) */

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_33
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong in_x9;
  long lVar16;
  int *piVar17;
  long in_x10;
  long unaff_x19;
  int unaff_w20;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x23;
  long *unaff_x25;
  int unaff_w26;
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
    piVar17 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar17 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0367bc28;
      }
      in_x9 = in_x9 - 1;
      piVar17 = piVar17 + 4;
    } while (in_x9 != 0);
    do {
      puVar6 = (undefined8 *)FUN_01ae9f78(unaff_x23,param_3,0);
LAB_0367bc28:
      (*(code *)*puVar6)(unaff_x23,puVar6[1]);
      do {
        if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab0160(unaff_x19);
        }
        if ((unaff_w20 != 0x12) && (unaff_w20 != 0)) {
LAB_0367bda4:
          if (in_stack_00000038 == (long *)0x0) {
            return;
          }
          lVar7 = *in_stack_00000038;
          uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar18 == 0) goto LAB_0367bde8;
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0367bdd0;
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
          uVar18 = 0;
          uVar11 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar20 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar18 * 8);
            lVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
            FUN_036515fc(lVar7,uVar20,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_03651e38(lVar7,unaff_w26,0);
            lVar8 = *unaff_x25;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar12 = *(long *)(lVar8 + 0x10);
            lVar16 = *(long *)PTR_DAT_03d9bc18;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar4 = *(uint *)(lVar8 + 0x18);
            if (uVar4 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar4 + 1;
              plVar13 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
              *plVar13 = lVar7;
              thunk_FUN_01b4f09c(plVar13,lVar7);
            }
            else {
              FUN_02b599e4(lVar8,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            uVar18 = uVar18 + 1;
            uVar11 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
          } while ((long)uVar18 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
        }
        unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
        lVar7 = *in_stack_00000038;
        uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar18 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367b4f4;
            }
            uVar18 = uVar18 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar18 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ae9f78(in_stack_00000038,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_0367b4f4:
        uVar18 = (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
        if ((uVar18 & 1) == 0) goto LAB_0367bda4;
        lVar7 = *in_stack_00000038;
        uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar18 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9abc8) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367b55c;
            }
            uVar18 = uVar18 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar18 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
        lVar7 = (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        in_stack_00000030._4_4_ = FUN_0362e4c0(lVar7,0);
        uVar20 = FUN_0391c27c(lVar7,0);
        lVar8 = Unity_VisualScripting_Member__Invoke(lVar7,0,0);
        lVar12 = *(long *)(lVar7 + 0x28);
        plVar13 = (long *)FUN_036324a8(lVar7,0);
        in_stack_00000050 = *(long *)(lVar7 + 0x48);
        lVar7 = FUN_0362eedc(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar7 = FUN_038fe900(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar1 = *(int *)(lVar7 + 0x18);
        if (0 < (int)in_stack_00000030._4_4_) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar18 = 0;
          do {
            if (*(uint *)(lVar8 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar19 = *(undefined8 *)(lVar8 + 0x20 + uVar18 * 8);
            if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar19 = FUN_03656eec(uVar20,uVar19,0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar11 = FUN_0391f968(in_stack_00000058,0,0);
            lVar16 = *in_stack_00000048;
            if ((uVar11 & 1) == 0) {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar9 = *(long *)(lVar16 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = *(uint *)(lVar16 + 0x18);
              if (uVar4 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
                *puVar6 = uVar19;
                thunk_FUN_01b4f09c(puVar6,uVar19);
              }
              else {
                FUN_02b599e4(lVar16,uVar19,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar19 = FUN_036570ec(in_stack_00000058,uVar19,0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar9 = *(long *)(lVar16 + 0x10);
              lVar14 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = *(uint *)(lVar16 + 0x18);
              if (uVar4 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20) = uVar19;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar16,uVar19,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar18 = uVar18 + 1;
          } while (in_stack_00000030._4_4_ != uVar18);
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
          uVar18 = 0;
          uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar16 = *(long *)(lVar12 + 0x20 + uVar18 * 8);
            lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
            Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar8,lVar16,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0361ce90(lVar8,unaff_w26,0);
            if ((*(char *)(lVar8 + 0x4c) == '\0') && (*(char *)(lVar8 + 0x1c) == '\0')) {
              *(undefined1 *)(lVar8 + 0x4c) = 1;
              lVar9 = *in_stack_00000020;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar14 = *(long *)(lVar9 + 0x10);
              lVar15 = *(long *)PTR_DAT_03d9a310;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = *(uint *)(lVar9 + 0x18);
              if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar4 + 1;
                plVar10 = (long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
                *plVar10 = lVar8;
                thunk_FUN_01b4f09c(plVar10,lVar8);
              }
              else {
                FUN_02b599e4(lVar9,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (iVar1 < 1) {
              uVar20 = 0;
            }
            else {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = FUN_03623cd4(*(undefined4 *)(lVar16 + 0x48),0,iVar1 + -1,0);
              if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar20 = *(undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
            }
            if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            iVar5 = FUN_02b5a5a8(*in_stack_00000018,uVar20,*(undefined8 *)PTR_DAT_03d9bc20);
            if (iVar5 < 0) {
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar11 = FUN_03922f24(uVar20,0,0);
              if ((uVar11 & 1) == 0) {
                lVar16 = *in_stack_00000018;
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar4 = *(uint *)(lVar16 + 0x18);
                *(uint *)(lVar8 + 0x48) = uVar4;
                lVar9 = *(long *)(lVar16 + 0x10);
                lVar14 = *(long *)
                          Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (uVar4 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                  puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
                  *puVar6 = uVar20;
                  thunk_FUN_01b4f09c(puVar6,uVar20);
                }
                else {
                  FUN_02b599e4(lVar16,uVar20,
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
            lVar16 = *in_stack_00000040;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar9 = *(long *)(lVar16 + 0x10);
            lVar14 = *(long *)PTR_DAT_03d9a310;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar4 = *(uint *)(lVar16 + 0x18);
            if (uVar4 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar4 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
              *plVar10 = lVar8;
              thunk_FUN_01b4f09c(plVar10,lVar8);
            }
            else {
              FUN_02b599e4(lVar16,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((long)uVar18 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
        puVar3 = PTR_DAT_03d9a838;
        puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar7 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar18 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc08) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367ba58;
            }
            uVar18 = uVar18 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar18 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
        unaff_x23 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0367ba6c:
        lVar7 = *unaff_x23;
        uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar18 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367bab8;
            }
            uVar18 = uVar18 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar18 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)puVar2,0);
LAB_0367bab8:
        uVar18 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
        if ((uVar18 & 1) != 0) {
          lVar7 = *unaff_x23;
          uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar18 != 0) {
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc10) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0367bb1c;
              }
              uVar18 = uVar18 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar18 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
          uVar20 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
          lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
          FUN_036515fc(lVar7,uVar20,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_03651e38(lVar7,unaff_w26,0);
          lVar8 = *in_stack_00000008;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar16 = *(long *)PTR_DAT_03d9bc18;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar8 + 0x18);
          if (uVar4 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar4 + 1;
            plVar13 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
            *plVar13 = lVar7;
            thunk_FUN_01b4f09c(plVar13,lVar7);
          }
          else {
            FUN_02b599e4(lVar8,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0367ba6c;
        }
        unaff_x19 = 0;
        unaff_w20 = 0x12;
        unaff_x25 = in_stack_00000010;
      } while (unaff_x23 == (long *)0x0);
      param_1 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
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


