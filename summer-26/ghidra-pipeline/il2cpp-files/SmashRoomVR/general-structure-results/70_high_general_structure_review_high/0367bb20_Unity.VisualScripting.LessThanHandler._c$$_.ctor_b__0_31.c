/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_31
ENTRY_POINT: 0367bb20
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_31
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
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
  
code_r0x0367bb20:
  uVar5 = (*param_1)(unaff_x23,param_3);
  lVar6 = thunk_FUN_01afaadc(*unaff_x22);
  FUN_036515fc(lVar6,uVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_03651e38(lVar6,unaff_w26,0);
  lVar7 = *unaff_x24;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar10 = *(long *)(lVar7 + 0x10);
  lVar16 = *(long *)PTR_DAT_03d9bc18;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar2 = *(uint *)(lVar7 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
    plVar11 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
    *plVar11 = lVar6;
    thunk_FUN_01b4f09c(plVar11,lVar6);
  }
  else {
    FUN_02b599e4(lVar7,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
  do {
    lVar6 = *unaff_x23;
    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x20) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367bab8;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x20,0);
LAB_0367bab8:
    uVar15 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    if ((uVar15 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar6 = *unaff_x23;
      uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0367bc28;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(unaff_x23,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367bc28:
      (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    }
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(in_stack_00000050 + 0x18)) {
      uVar15 = 0;
      uVar12 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar5 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar15 * 8);
        lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
        FUN_036515fc(lVar6,uVar5,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03651e38(lVar6,unaff_w26,0);
        lVar7 = *unaff_x25;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar16 = *(long *)PTR_DAT_03d9bc18;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          plVar11 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *plVar11 = lVar6;
          thunk_FUN_01b4f09c(plVar11,lVar6);
        }
        else {
          FUN_02b599e4(lVar7,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        uVar15 = uVar15 + 1;
        uVar12 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
      } while ((long)uVar15 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
    }
    unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
    lVar6 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367b4f4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000038,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_0367b4f4:
    uVar15 = (*(code *)*puVar4)(in_stack_00000038,puVar4[1]);
    if ((uVar15 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar6 = *in_stack_00000038;
      uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar15 == 0) goto LAB_0367bde8;
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_0367bdd0;
    }
    lVar6 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9abc8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367b55c;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
    lVar6 = (*(code *)*puVar4)(in_stack_00000038,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_stack_00000030._4_4_ = FUN_0362e4c0(lVar6,0);
    uVar5 = FUN_0391c27c(lVar6,0);
    lVar7 = Unity_VisualScripting_Member__Invoke(lVar6,0,0);
    lVar10 = *(long *)(lVar6 + 0x28);
    plVar11 = (long *)FUN_036324a8(lVar6,0);
    in_stack_00000050 = *(long *)(lVar6 + 0x48);
    lVar6 = FUN_0362eedc(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = FUN_038fe900(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar1 = *(int *)(lVar6 + 0x18);
    if (0 < (int)in_stack_00000030._4_4_) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar15 = 0;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar18 = *(undefined8 *)(lVar7 + 0x20 + uVar15 * 8);
        if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_03656eec(uVar5,uVar18,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = FUN_0391f968(in_stack_00000058,0,0);
        lVar16 = *in_stack_00000048;
        if ((uVar12 & 1) == 0) {
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
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            puVar4 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *puVar4 = uVar18;
            thunk_FUN_01b4f09c(puVar4,uVar18);
          }
          else {
            FUN_02b599e4(lVar16,uVar18,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
          lVar13 = *(long *)PTR_DAT_03d9b598;
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
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = uVar15 + 1;
      } while (in_stack_00000030._4_4_ != uVar15);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar15 = 0;
      uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar16 = *(long *)(lVar10 + 0x20 + uVar15 * 8);
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
          lVar13 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)PTR_DAT_03d9a310;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar7;
            thunk_FUN_01b4f09c(plVar9,lVar7);
          }
          else {
            FUN_02b599e4(lVar8,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (iVar1 < 1) {
          uVar5 = 0;
        }
        else {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = FUN_03623cd4(*(undefined4 *)(lVar16 + 0x48),0,iVar1 + -1,0);
          if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar5 = *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        }
        if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar3 = FUN_02b5a5a8(*in_stack_00000018,uVar5,*(undefined8 *)PTR_DAT_03d9bc20);
        if (iVar3 < 0) {
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_03922f24(uVar5,0,0);
          if ((uVar12 & 1) == 0) {
            lVar16 = *in_stack_00000018;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar2 = *(uint *)(lVar16 + 0x18);
            *(uint *)(lVar7 + 0x48) = uVar2;
            lVar8 = *(long *)(lVar16 + 0x10);
            lVar13 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              puVar4 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *puVar4 = uVar5;
              thunk_FUN_01b4f09c(puVar4,uVar5);
            }
            else {
              FUN_02b599e4(lVar16,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
        lVar13 = *(long *)PTR_DAT_03d9a310;
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
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    unaff_x22 = (undefined8 *)PTR_DAT_03d9a838;
    unaff_x20 = (long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc08) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367ba58;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
    unaff_x23 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
    unaff_x24 = in_stack_00000008;
    unaff_x25 = in_stack_00000010;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  } while( true );
  lVar6 = *unaff_x23;
  uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc10) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0367bb1c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
  param_1 = (code *)*puVar4;
  param_3 = puVar4[1];
  goto code_r0x0367bb20;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0367be0c;
    }
  }
LAB_0367bde8:
  puVar4 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000038,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367be0c:
  (*(code *)*puVar4)(in_stack_00000038,puVar4[1]);
  return;
}


