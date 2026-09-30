/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_30
ENTRY_POINT: 0367bab4
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
/* WARNING: Removing unreachable block (ram,0x0367bc40) */
/* WARNING: Removing unreachable block (ram,0x0367bf10) */

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_30(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x20;
  undefined8 uVar18;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
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
  
code_r0x0367bab4:
  puVar5 = (undefined8 *)(param_1 + 0x138);
  do {
    uVar4 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if ((uVar4 & 1) == 0) {
      if (unaff_x23 != (long *)0x0) {
        lVar10 = *unaff_x23;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0367bc28;
            }
            uVar4 = uVar4 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ae9f78(unaff_x23,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0
                             );
LAB_0367bc28:
        (*(code *)*puVar5)(unaff_x23,puVar5[1]);
      }
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
        uVar4 = 0;
        uVar13 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar6 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar4 * 8);
          lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
          FUN_036515fc(lVar10,uVar6,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_03651e38(lVar10,unaff_w26,0);
          lVar7 = *unaff_x25;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar16 = *(long *)PTR_DAT_03d9bc18;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar12 = lVar10;
            thunk_FUN_01b4f09c(plVar12,lVar10);
          }
          else {
            FUN_02b599e4(lVar7,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar4 = uVar4 + 1;
          uVar13 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
        } while ((long)uVar4 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
      }
      unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
      lVar10 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0367b4f4;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ae9f78(in_stack_00000038,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_0367b4f4:
      uVar4 = (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
      if ((uVar4 & 1) == 0) {
        if (in_stack_00000038 == (long *)0x0) {
          return;
        }
        lVar10 = *in_stack_00000038;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 == 0) goto LAB_0367bde8;
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        break;
      }
      lVar10 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9abc8) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0367b55c;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
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
      lVar11 = *(long *)(lVar10 + 0x28);
      plVar12 = (long *)FUN_036324a8(lVar10,0);
      in_stack_00000050 = *(long *)(lVar10 + 0x48);
      lVar10 = FUN_0362eedc(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar10 = FUN_038fe900(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar1 = *(int *)(lVar10 + 0x18);
      if (0 < (int)in_stack_00000030._4_4_) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar4 = 0;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar18 = *(undefined8 *)(lVar7 + 0x20 + uVar4 * 8);
          if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar18 = FUN_03656eec(uVar6,uVar18,0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar13 = FUN_0391f968(in_stack_00000058,0,0);
          lVar16 = *in_stack_00000048;
          if ((uVar13 & 1) == 0) {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar8 = *(long *)(lVar16 + 0x10);
            lVar14 = *(long *)PTR_DAT_03d9b598;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *puVar5 = uVar18;
              thunk_FUN_01b4f09c(puVar5,uVar18);
            }
            else {
              FUN_02b599e4(lVar16,uVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = FUN_036570ec(in_stack_00000058,uVar18,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar8 = *(long *)(lVar16 + 0x10);
            lVar14 = *(long *)PTR_DAT_03d9b598;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
              thunk_FUN_01b4f09c();
            }
            else {
              FUN_02b599e4(lVar16,uVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar4 = uVar4 + 1;
        } while (in_stack_00000030._4_4_ != uVar4);
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar4 = 0;
        uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar16 = *(long *)(lVar11 + 0x20 + uVar4 * 8);
          lVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
          Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar7,lVar16,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0361ce90(lVar7,unaff_w26,0);
          if ((*(char *)(lVar7 + 0x4c) == '\0') && (*(char *)(lVar7 + 0x1c) == '\0')) {
            *(undefined1 *)(lVar7 + 0x4c) = 1;
            lVar8 = *in_stack_00000020;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar14 = *(long *)(lVar8 + 0x10);
            lVar15 = *(long *)PTR_DAT_03d9a310;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              plVar9 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
              *plVar9 = lVar7;
              thunk_FUN_01b4f09c(plVar9,lVar7);
            }
            else {
              FUN_02b599e4(lVar8,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (iVar1 < 1) {
            uVar6 = 0;
          }
          else {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar2 = FUN_03623cd4(*(undefined4 *)(lVar16 + 0x48),0,iVar1 + -1,0);
            if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar6 = *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          }
          if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          iVar3 = FUN_02b5a5a8(*in_stack_00000018,uVar6,*(undefined8 *)PTR_DAT_03d9bc20);
          if (iVar3 < 0) {
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_03922f24(uVar6,0,0);
            if ((uVar13 & 1) == 0) {
              lVar16 = *in_stack_00000018;
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar2 = *(uint *)(lVar16 + 0x18);
              *(uint *)(lVar7 + 0x48) = uVar2;
              lVar8 = *(long *)(lVar16 + 0x10);
              lVar14 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                *puVar5 = uVar6;
                thunk_FUN_01b4f09c(puVar5,uVar6);
              }
              else {
                FUN_02b599e4(lVar16,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              *(undefined4 *)(lVar7 + 0x48) = 0;
            }
          }
          else {
            *(int *)(lVar7 + 0x48) = iVar3;
          }
          lVar16 = *in_stack_00000040;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar8 = *(long *)(lVar16 + 0x10);
          lVar14 = *(long *)PTR_DAT_03d9a310;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar7;
            thunk_FUN_01b4f09c(plVar9,lVar7);
          }
          else {
            FUN_02b599e4(lVar16,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      unaff_x22 = (undefined8 *)PTR_DAT_03d9a838;
      unaff_x20 = (long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar10 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc08) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0367ba58;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
      unaff_x23 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
      unaff_x24 = in_stack_00000008;
      unaff_x25 = in_stack_00000010;
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    else {
      lVar10 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc10) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0367bb1c;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
      uVar6 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
      lVar10 = thunk_FUN_01afaadc(*unaff_x22);
      FUN_036515fc(lVar10,uVar6,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03651e38(lVar10,unaff_w26,0);
      lVar7 = *unaff_x24;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar16 = *(long *)PTR_DAT_03d9bc18;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
        *plVar12 = lVar10;
        thunk_FUN_01b4f09c(plVar12,lVar10);
      }
      else {
        FUN_02b599e4(lVar7,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    param_1 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x20) {
          param_1 = param_1 + (long)*piVar17 * 0x10;
          goto code_r0x0367bab4;
        }
        uVar4 = uVar4 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x20,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar17 = piVar17 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
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


