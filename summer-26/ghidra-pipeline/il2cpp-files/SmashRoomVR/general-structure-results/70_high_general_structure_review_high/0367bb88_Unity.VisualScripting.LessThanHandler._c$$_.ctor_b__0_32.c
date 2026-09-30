/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_32
ENTRY_POINT: 0367bb88
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_32(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long in_x9;
  long lVar16;
  int *piVar17;
  long in_x10;
  uint in_w11;
  long unaff_x19;
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
  
code_r0x0367bb88:
  if ((uint)in_x10 < in_w11) {
    *(uint *)(param_2 + 0x18) = (uint)in_x10 + 1;
    plVar10 = (long *)(param_1 + in_x10 * 8 + 0x20);
    *plVar10 = unaff_x19;
    thunk_FUN_01b4f09c(plVar10,unaff_x19);
  }
  else {
    FUN_02b599e4(param_2,unaff_x19,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70)
                );
  }
  do {
    lVar9 = *unaff_x23;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x20) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
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
      lVar9 = *unaff_x23;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
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
      uVar11 = *(ulong *)(in_stack_00000050 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar5 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar15 * 8);
        lVar9 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
        FUN_036515fc(lVar9,uVar5,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03651e38(lVar9,unaff_w26,0);
        lVar6 = *unaff_x25;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar12 = *(long *)(lVar6 + 0x10);
        lVar16 = *(long *)PTR_DAT_03d9bc18;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          plVar10 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
          *plVar10 = lVar9;
          thunk_FUN_01b4f09c(plVar10,lVar9);
        }
        else {
          FUN_02b599e4(lVar6,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        uVar15 = uVar15 + 1;
        uVar11 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
      } while ((long)uVar15 < (long)(int)*(uint *)(in_stack_00000050 + 0x18));
    }
    unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
    lVar9 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
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
      lVar9 = *in_stack_00000038;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 == 0) goto LAB_0367bde8;
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_0367bdd0;
    }
    lVar9 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9abc8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367b55c;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
    lVar9 = (*(code *)*puVar4)(in_stack_00000038,puVar4[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_stack_00000030._4_4_ = FUN_0362e4c0(lVar9,0);
    uVar5 = FUN_0391c27c(lVar9,0);
    lVar6 = Unity_VisualScripting_Member__Invoke(lVar9,0,0);
    lVar12 = *(long *)(lVar9 + 0x28);
    plVar10 = (long *)FUN_036324a8(lVar9,0);
    in_stack_00000050 = *(long *)(lVar9 + 0x48);
    lVar9 = FUN_0362eedc(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = FUN_038fe900(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar1 = *(int *)(lVar9 + 0x18);
    if (0 < (int)in_stack_00000030._4_4_) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar15 = 0;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar18 = *(undefined8 *)(lVar6 + 0x20 + uVar15 * 8);
        if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_03656eec(uVar5,uVar18,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar11 = FUN_0391f968(in_stack_00000058,0,0);
        lVar16 = *in_stack_00000048;
        if ((uVar11 & 1) == 0) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar7 = *(long *)(lVar16 + 0x10);
          lVar13 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
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
          lVar7 = *(long *)(lVar16 + 0x10);
          lVar13 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
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
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar15 = 0;
      uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar16 = *(long *)(lVar12 + 0x20 + uVar15 * 8);
        lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
        Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar6,lVar16,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0361ce90(lVar6,unaff_w26,0);
        if ((*(char *)(lVar6 + 0x4c) == '\0') && (*(char *)(lVar6 + 0x1c) == '\0')) {
          *(undefined1 *)(lVar6 + 0x4c) = 1;
          lVar7 = *in_stack_00000020;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar13 = *(long *)(lVar7 + 0x10);
          lVar14 = *(long *)PTR_DAT_03d9a310;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            plVar8 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
            *plVar8 = lVar6;
            thunk_FUN_01b4f09c(plVar8,lVar6);
          }
          else {
            FUN_02b599e4(lVar7,lVar6,
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
          if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar5 = *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
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
          uVar11 = FUN_03922f24(uVar5,0,0);
          if ((uVar11 & 1) == 0) {
            lVar16 = *in_stack_00000018;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar2 = *(uint *)(lVar16 + 0x18);
            *(uint *)(lVar6 + 0x48) = uVar2;
            lVar7 = *(long *)(lVar16 + 0x10);
            lVar13 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
              *puVar4 = uVar5;
              thunk_FUN_01b4f09c(puVar4,uVar5);
            }
            else {
              FUN_02b599e4(lVar16,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            *(undefined4 *)(lVar6 + 0x48) = 0;
          }
        }
        else {
          *(int *)(lVar6 + 0x48) = iVar3;
        }
        lVar16 = *in_stack_00000040;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar7 = *(long *)(lVar16 + 0x10);
        lVar13 = *(long *)PTR_DAT_03d9a310;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar2 = *(uint *)(lVar16 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar2 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *plVar8 = lVar6;
          thunk_FUN_01b4f09c(plVar8,lVar6);
        }
        else {
          FUN_02b599e4(lVar16,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    unaff_x22 = (undefined8 *)PTR_DAT_03d9a838;
    unaff_x20 = (long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc08) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367ba58;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
    unaff_x23 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    unaff_x24 = in_stack_00000008;
    unaff_x25 = in_stack_00000010;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  } while( true );
  lVar9 = *unaff_x23;
  uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9bc10) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0367bb1c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
  uVar5 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
  unaff_x19 = thunk_FUN_01afaadc(*unaff_x22);
  FUN_036515fc(unaff_x19,uVar5,0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_03651e38(unaff_x19,unaff_w26,0);
  param_2 = *unaff_x24;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  param_1 = *(long *)(param_2 + 0x10);
  in_x9 = *(long *)PTR_DAT_03d9bc18;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  in_x10 = (long)*(int *)(param_2 + 0x18);
  in_w11 = *(uint *)(param_1 + 0x18);
  goto code_r0x0367bb88;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_0367bdd0:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
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


