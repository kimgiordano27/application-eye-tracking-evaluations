/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_19
ENTRY_POINT: 0367b5ac
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_19(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x24;
  int unaff_w26;
  long unaff_x28;
  long lVar19;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000058;
  
  do {
    plVar6 = (long *)FUN_036324a8(param_1,0);
    lVar10 = *(long *)(unaff_x21 + 0x48);
    lVar7 = FUN_0362eedc(unaff_x21,0);
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
    if (0 < (int)unaff_w20) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar18 = 0;
      do {
        if (*(uint *)(unaff_x28 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar17 = *(undefined8 *)(unaff_x28 + 0x20 + uVar18 * 8);
        if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar17 = FUN_03656eec(unaff_x19,uVar17,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_0391f968(in_stack_00000058,0,0);
        lVar19 = *in_stack_00000048;
        if ((uVar8 & 1) == 0) {
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar11 = *(long *)(lVar19 + 0x10);
          lVar14 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar19 + 0x18);
          if (uVar4 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar4 + 1;
            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
            *puVar9 = uVar17;
            thunk_FUN_01b4f09c(puVar9,uVar17);
          }
          else {
            FUN_02b599e4(lVar19,uVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar17 = FUN_036570ec(in_stack_00000058,uVar17,0);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar11 = *(long *)(lVar19 + 0x10);
          lVar14 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar19 + 0x18);
          if (uVar4 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar4 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20) = uVar17;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar19,uVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar18 = uVar18 + 1;
      } while (unaff_w20 != uVar18);
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
      uVar18 = 0;
      uVar8 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar11 = *(long *)(unaff_x24 + 0x20 + uVar18 * 8);
        lVar19 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
        Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar19,lVar11,0);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0361ce90(lVar19,unaff_w26,0);
        if ((*(char *)(lVar19 + 0x4c) == '\0') && (*(char *)(lVar19 + 0x1c) == '\0')) {
          *(undefined1 *)(lVar19 + 0x4c) = 1;
          lVar14 = *in_stack_00000020;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar15 = *(long *)PTR_DAT_03d9a310;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar14 + 0x18);
          if (uVar4 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
            plVar13 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
            *plVar13 = lVar19;
            thunk_FUN_01b4f09c(plVar13,lVar19);
          }
          else {
            FUN_02b599e4(lVar14,lVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (iVar1 < 1) {
          uVar17 = 0;
        }
        else {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = FUN_03623cd4(*(undefined4 *)(lVar11 + 0x48),0,iVar1 + -1,0);
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar17 = *(undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
        }
        if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar5 = FUN_02b5a5a8(*in_stack_00000018,uVar17,*(undefined8 *)PTR_DAT_03d9bc20);
        if (iVar5 < 0) {
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_03922f24(uVar17,0,0);
          if ((uVar8 & 1) == 0) {
            lVar11 = *in_stack_00000018;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar4 = *(uint *)(lVar11 + 0x18);
            *(uint *)(lVar19 + 0x48) = uVar4;
            lVar14 = *(long *)(lVar11 + 0x10);
            lVar12 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (uVar4 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar4 + 1;
              puVar9 = (undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
              *puVar9 = uVar17;
              thunk_FUN_01b4f09c(puVar9,uVar17);
            }
            else {
              FUN_02b599e4(lVar11,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            *(undefined4 *)(lVar19 + 0x48) = 0;
          }
        }
        else {
          *(int *)(lVar19 + 0x48) = iVar5;
        }
        lVar11 = *in_stack_00000040;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)PTR_DAT_03d9a310;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar4 = *(uint *)(lVar11 + 0x18);
        if (uVar4 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar4 + 1;
          plVar13 = (long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
          *plVar13 = lVar19;
          thunk_FUN_01b4f09c(plVar13,lVar19);
        }
        else {
          FUN_02b599e4(lVar11,lVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = (ulong)*(uint *)(unaff_x24 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)*(uint *)(unaff_x24 + 0x18));
    }
    puVar3 = PTR_DAT_03d9a838;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar7 = *plVar6;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03d9bc08) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0367ba58;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
    plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_0367ba6c:
    lVar7 = *plVar6;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0367bab8;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)puVar2,0);
LAB_0367bab8:
    uVar18 = (*(code *)*puVar9)(plVar6,puVar9[1]);
    if ((uVar18 & 1) != 0) {
      lVar7 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03d9bc10) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0367bb1c;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
      uVar17 = (*(code *)*puVar9)(plVar6,puVar9[1]);
      lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
      FUN_036515fc(lVar7,uVar17,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03651e38(lVar7,unaff_w26,0);
      lVar19 = *in_stack_00000008;
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar11 = *(long *)(lVar19 + 0x10);
      lVar14 = *(long *)PTR_DAT_03d9bc18;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar4 = *(uint *)(lVar19 + 0x18);
      if (uVar4 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar4 + 1;
        plVar13 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
        *plVar13 = lVar7;
        thunk_FUN_01b4f09c(plVar13,lVar7);
      }
      else {
        FUN_02b599e4(lVar19,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_0367ba6c;
    }
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0367bc28;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ae9f78(plVar6,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367bc28:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar18 = 0;
      uVar8 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar17 = *(undefined8 *)(lVar10 + 0x20 + uVar18 * 8);
        lVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
        FUN_036515fc(lVar7,uVar17,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03651e38(lVar7,unaff_w26,0);
        lVar19 = *in_stack_00000010;
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar11 = *(long *)(lVar19 + 0x10);
        lVar14 = *(long *)PTR_DAT_03d9bc18;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar4 = *(uint *)(lVar19 + 0x18);
        if (uVar4 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar4 + 1;
          plVar6 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
          *plVar6 = lVar7;
          thunk_FUN_01b4f09c(plVar6,lVar7);
        }
        else {
          FUN_02b599e4(lVar19,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar18 = uVar18 + 1;
        uVar8 = (ulong)*(uint *)(lVar10 + 0x18);
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    unaff_w26 = unaff_w20 + unaff_w26;
    lVar7 = *in_stack_00000038;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0367b4f4;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000038,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_0367b4f4:
    uVar18 = (*(code *)*puVar9)(in_stack_00000038,puVar9[1]);
    if ((uVar18 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar7 = *in_stack_00000038;
      uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar18 == 0) goto LAB_0367bde8;
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *in_stack_00000038;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03d9abc8) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0367b55c;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
    param_1 = (*(code *)*puVar9)(in_stack_00000038,puVar9[1]);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    unaff_w20 = FUN_0362e4c0(param_1,0);
    unaff_x19 = FUN_0391c27c(param_1,0);
    unaff_x28 = Unity_VisualScripting_Member__Invoke(param_1,0,0);
    unaff_x24 = *(long *)(param_1 + 0x28);
    unaff_x21 = param_1;
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar16 = piVar16 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0367be0c;
    }
  }
LAB_0367bde8:
  puVar9 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000038,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367be0c:
  (*(code *)*puVar9)(in_stack_00000038,puVar9[1]);
  return;
}


