/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_29
ENTRY_POINT: 0367ba04
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_29(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong in_x9;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined **in_x10;
  long *unaff_x19;
  undefined *unaff_x20;
  long *plVar18;
  undefined8 uVar19;
  undefined **unaff_x22;
  undefined8 *puVar20;
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
    plVar18 = *(long **)(unaff_x20 + 0xf98);
    puVar20 = (undefined8 *)unaff_x22[0x107];
    if (in_x9 != 0) {
      piVar17 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)in_x10[0x181]) {
          puVar4 = (undefined8 *)(param_1 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367ba58;
        }
        in_x9 = in_x9 - 1;
        piVar17 = piVar17 + 4;
      } while (in_x9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x19,*(long *)in_x10[0x181],0);
LAB_0367ba58:
    plVar5 = (long *)(*(code *)*puVar4)(unaff_x19,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_0367ba6c:
    lVar9 = *plVar5;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *plVar18) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367bab8;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*plVar18,0);
LAB_0367bab8:
    uVar15 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar15 & 1) != 0) {
      lVar9 = *plVar5;
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
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
      uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      lVar9 = thunk_FUN_01afaadc(*puVar20);
      FUN_036515fc(lVar9,uVar6,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03651e38(lVar9,unaff_w26,0);
      lVar7 = *in_stack_00000008;
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
        *plVar11 = lVar9;
        thunk_FUN_01b4f09c(plVar11,lVar9);
      }
      else {
        FUN_02b599e4(lVar7,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
        ;
      }
      goto LAB_0367ba6c;
    }
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar20 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0367bc28;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar20 = (undefined8 *)
                FUN_01ae9f78(plVar5,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367bc28:
      (*(code *)*puVar20)(plVar5,puVar20[1]);
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
        uVar6 = *(undefined8 *)(in_stack_00000050 + 0x20 + uVar15 * 8);
        lVar9 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
        FUN_036515fc(lVar9,uVar6,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03651e38(lVar9,unaff_w26,0);
        lVar7 = *in_stack_00000010;
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
          plVar18 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *plVar18 = lVar9;
          thunk_FUN_01b4f09c(plVar18,lVar9);
        }
        else {
          FUN_02b599e4(lVar7,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        uVar15 = uVar15 + 1;
        uVar12 = (ulong)*(uint *)(in_stack_00000050 + 0x18);
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
          puVar20 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367b4f4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined8 *)
              FUN_01ae9f78(in_stack_00000038,
                           *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_0367b4f4:
    uVar15 = (*(code *)*puVar20)(in_stack_00000038,puVar20[1]);
    if ((uVar15 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar9 = *in_stack_00000038;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 == 0) goto LAB_0367bde8;
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03d9abc8) {
          puVar20 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0367b55c;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar20 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
    lVar9 = (*(code *)*puVar20)(in_stack_00000038,puVar20[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_stack_00000030._4_4_ = FUN_0362e4c0(lVar9,0);
    uVar6 = FUN_0391c27c(lVar9,0);
    lVar7 = Unity_VisualScripting_Member__Invoke(lVar9,0,0);
    lVar10 = *(long *)(lVar9 + 0x28);
    unaff_x19 = (long *)FUN_036324a8(lVar9,0);
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
        uVar19 = *(undefined8 *)(lVar7 + 0x20 + uVar15 * 8);
        if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_03656eec(uVar6,uVar19,0);
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
            puVar20 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *puVar20 = uVar19;
            thunk_FUN_01b4f09c(puVar20,uVar19);
          }
          else {
            FUN_02b599e4(lVar16,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar19;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar16,uVar19,
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
            plVar18 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
            *plVar18 = lVar7;
            thunk_FUN_01b4f09c(plVar18,lVar7);
          }
          else {
            FUN_02b599e4(lVar8,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
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
          if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar6 = *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
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
          uVar12 = FUN_03922f24(uVar6,0,0);
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
              puVar20 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *puVar20 = uVar6;
              thunk_FUN_01b4f09c(puVar20,uVar6);
            }
            else {
              FUN_02b599e4(lVar16,uVar6,
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
          plVar18 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar18 = lVar7;
          thunk_FUN_01b4f09c(plVar18,lVar7);
        }
        else {
          FUN_02b599e4(lVar16,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    param_1 = *unaff_x19;
    in_x10 = &PTR_DAT_03d9b000;
    unaff_x20 = &Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Key__;
    unaff_x22 = &PTR_DAT_03d9a000;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar20 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0367be0c;
    }
  }
LAB_0367bde8:
  puVar20 = (undefined8 *)
            FUN_01ae9f78(in_stack_00000038,
                         *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367be0c:
  (*(code *)*puVar20)(in_stack_00000038,puVar20[1]);
  return;
}


