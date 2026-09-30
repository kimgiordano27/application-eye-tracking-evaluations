/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_37
ENTRY_POINT: 0367bd88
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_37(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
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
  
  plVar7 = (long *)__cxa_begin_catch();
  lVar16 = *plVar7;
  __cxa_end_catch();
  iVar17 = 0;
  do {
    if (unaff_x23 != (long *)0x0) {
      lVar6 = *unaff_x23;
      uVar18 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar18 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0367bc28;
          }
          uVar18 = uVar18 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar18 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ae9f78(unaff_x23,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367bc28:
      (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    }
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab0160(lVar16);
    }
    if ((iVar17 != 0x12) && (iVar17 != 0)) {
LAB_0367bda4:
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar16 = *in_stack_00000038;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 == 0) goto LAB_0367bde8;
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
      uVar18 = 0;
      uVar10 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar20 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar18 * 8);
        lVar16 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
        FUN_036515fc(lVar16,uVar20,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03651e38(lVar16,unaff_w26,0);
        lVar6 = *unaff_x25;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar11 = *(long *)(lVar6 + 0x10);
        lVar14 = *(long *)PTR_DAT_03d9bc18;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar3 = *(uint *)(lVar6 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar3 + 1;
          plVar7 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
          *plVar7 = lVar16;
          thunk_FUN_01b4f09c(plVar7,lVar16);
        }
        else {
          FUN_02b599e4(lVar6,lVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar18 = uVar18 + 1;
        uVar10 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
      } while ((long)uVar18 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
    }
    unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
    lVar16 = *in_stack_00000038;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar5 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0367b4f4;
        }
        uVar18 = uVar18 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar18 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000038,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_0367b4f4:
    uVar18 = (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
    if ((uVar18 & 1) == 0) goto LAB_0367bda4;
    lVar16 = *in_stack_00000038;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9abc8) {
          puVar5 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0367b55c;
        }
        uVar18 = uVar18 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar18 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
    lVar16 = (*(code *)*puVar5)(in_stack_00000038,puVar5[1]);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_stack_00000030._4_4_ = FUN_0362e4c0(lVar16,0);
    uVar20 = FUN_0391c27c(lVar16,0);
    lVar6 = Unity_VisualScripting_Member__Invoke(lVar16,0,0);
    lVar11 = *(long *)(lVar16 + 0x28);
    plVar7 = (long *)FUN_036324a8(lVar16,0);
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
    iVar17 = *(int *)(lVar16 + 0x18);
    if (0 < (int)in_stack_00000030._4_4_) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar18 = 0;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar19 = *(undefined8 *)(lVar6 + 0x20 + uVar18 * 8);
        if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_03656eec(uVar20,uVar19,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_0391f968(in_stack_00000058,0,0);
        lVar14 = *in_stack_00000048;
        if ((uVar10 & 1) == 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar8 = *(long *)(lVar14 + 0x10);
          lVar12 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar14 + 0x18);
          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar3 + 1;
            puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
            *puVar5 = uVar19;
            thunk_FUN_01b4f09c(puVar5,uVar19);
          }
          else {
            FUN_02b599e4(lVar14,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_036570ec(in_stack_00000058,uVar19,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar8 = *(long *)(lVar14 + 0x10);
          lVar12 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar14 + 0x18);
          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar19;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar14,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar18 = uVar18 + 1;
      } while (in_stack_00000030._4_4_ != uVar18);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar18 = 0;
      uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar14 = *(long *)(lVar11 + 0x20 + uVar18 * 8);
        lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
        Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar6,lVar14,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0361ce90(lVar6,unaff_w26,0);
        if ((*(char *)(lVar6 + 0x4c) == '\0') && (*(char *)(lVar6 + 0x1c) == '\0')) {
          *(undefined1 *)(lVar6 + 0x4c) = 1;
          lVar8 = *in_stack_00000020;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)PTR_DAT_03d9a310;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            plVar9 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
            *plVar9 = lVar6;
            thunk_FUN_01b4f09c(plVar9,lVar6);
          }
          else {
            FUN_02b599e4(lVar8,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (iVar17 < 1) {
          uVar20 = 0;
        }
        else {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar3 = FUN_03623cd4(*(undefined4 *)(lVar14 + 0x48),0,iVar17 + -1,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar20 = *(undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
        }
        if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar4 = FUN_02b5a5a8(*in_stack_00000018,uVar20,*(undefined8 *)PTR_DAT_03d9bc20);
        if (iVar4 < 0) {
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_03922f24(uVar20,0,0);
          if ((uVar10 & 1) == 0) {
            lVar14 = *in_stack_00000018;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar3 = *(uint *)(lVar14 + 0x18);
            *(uint *)(lVar6 + 0x48) = uVar3;
            lVar8 = *(long *)(lVar14 + 0x10);
            lVar12 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (uVar3 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar3 + 1;
              puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
              *puVar5 = uVar20;
              thunk_FUN_01b4f09c(puVar5,uVar20);
            }
            else {
              FUN_02b599e4(lVar14,uVar20,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            *(undefined4 *)(lVar6 + 0x48) = 0;
          }
        }
        else {
          *(int *)(lVar6 + 0x48) = iVar4;
        }
        lVar14 = *in_stack_00000040;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar8 = *(long *)(lVar14 + 0x10);
        lVar12 = *(long *)PTR_DAT_03d9a310;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar3 = *(uint *)(lVar14 + 0x18);
        if (uVar3 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar3 + 1;
          plVar9 = (long *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
          *plVar9 = lVar6;
          thunk_FUN_01b4f09c(plVar9,lVar6);
        }
        else {
          FUN_02b599e4(lVar14,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    puVar2 = PTR_DAT_03d9a838;
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar16 = *plVar7;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc08) {
          puVar5 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0367ba58;
        }
        uVar18 = uVar18 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar18 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
    unaff_x23 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_0367ba6c:
    lVar16 = *unaff_x23;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0367bab8;
        }
        uVar18 = uVar18 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar18 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)puVar1,0);
LAB_0367bab8:
    uVar18 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if ((uVar18 & 1) != 0) {
      lVar16 = *unaff_x23;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d9bc10) {
            puVar5 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0367bb1c;
          }
          uVar18 = uVar18 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar18 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
      uVar20 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
      lVar16 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
      FUN_036515fc(lVar16,uVar20,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03651e38(lVar16,unaff_w26,0);
      lVar6 = *in_stack_00000008;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar14 = *(long *)PTR_DAT_03d9bc18;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        plVar7 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
        *plVar7 = lVar16;
        thunk_FUN_01b4f09c(plVar7,lVar16);
      }
      else {
        FUN_02b599e4(lVar6,lVar16,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_0367ba6c;
    }
    lVar16 = 0;
    iVar17 = 0x12;
    unaff_x25 = in_stack_00000010;
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar15 = piVar15 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
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


