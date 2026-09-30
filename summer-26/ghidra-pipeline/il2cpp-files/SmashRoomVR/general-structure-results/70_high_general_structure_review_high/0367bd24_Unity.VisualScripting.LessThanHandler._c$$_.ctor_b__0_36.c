/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_36
ENTRY_POINT: 0367bd24
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_36(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  long lVar20;
  int unaff_w26;
  long lVar21;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000058;
  
  do {
    unaff_w26 = in_stack_00000030._4_4_ + unaff_w26;
    lVar11 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0367b4f4;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000038,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_0367b4f4:
    uVar15 = (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
    if ((uVar15 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar11 = *in_stack_00000038;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 == 0) goto LAB_0367bde8;
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_03d9abc8) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0367b55c;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
    lVar11 = (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_stack_00000030._4_4_ = FUN_0362e4c0(lVar11,0);
    uVar7 = FUN_0391c27c(lVar11,0);
    lVar8 = Unity_VisualScripting_Member__Invoke(lVar11,0,0);
    lVar20 = *(long *)(lVar11 + 0x28);
    plVar9 = (long *)FUN_036324a8(lVar11,0);
    lVar12 = *(long *)(lVar11 + 0x48);
    lVar11 = FUN_0362eedc(lVar11,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar11 = FUN_038fe900(lVar11,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar1 = *(int *)(lVar11 + 0x18);
    if (0 < (int)in_stack_00000030._4_4_) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar15 = 0;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar19 = *(undefined8 *)(lVar8 + 0x20 + uVar15 * 8);
        if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_03656eec(uVar7,uVar19,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_0391f968(in_stack_00000058,0,0);
        lVar21 = *in_stack_00000048;
        if ((uVar10 & 1) == 0) {
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar13 = *(long *)(lVar21 + 0x10);
          lVar16 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar21 + 0x18);
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar21 + 0x18) = uVar4 + 1;
            puVar6 = (undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20);
            *puVar6 = uVar19;
            thunk_FUN_01b4f09c(puVar6,uVar19);
          }
          else {
            FUN_02b599e4(lVar21,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_036570ec(in_stack_00000058,uVar19,0);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar13 = *(long *)(lVar21 + 0x10);
          lVar16 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar21 + 0x18);
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar21 + 0x18) = uVar4 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar19;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar21,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = uVar15 + 1;
      } while (in_stack_00000030._4_4_ != uVar15);
    }
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
      uVar15 = 0;
      uVar10 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar21 = *(long *)(lVar20 + 0x20 + uVar15 * 8);
        lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
        Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar8,lVar21,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0361ce90(lVar8,unaff_w26,0);
        if ((*(char *)(lVar8 + 0x4c) == '\0') && (*(char *)(lVar8 + 0x1c) == '\0')) {
          *(undefined1 *)(lVar8 + 0x4c) = 1;
          lVar13 = *in_stack_00000020;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar16 = *(long *)(lVar13 + 0x10);
          lVar17 = *(long *)PTR_DAT_03d9a310;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = *(uint *)(lVar13 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar4 + 1;
            plVar14 = (long *)(lVar16 + (long)(int)uVar4 * 8 + 0x20);
            *plVar14 = lVar8;
            thunk_FUN_01b4f09c(plVar14,lVar8);
          }
          else {
            FUN_02b599e4(lVar13,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (iVar1 < 1) {
          uVar7 = 0;
        }
        else {
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = FUN_03623cd4(*(undefined4 *)(lVar21 + 0x48),0,iVar1 + -1,0);
          if (*(uint *)(lVar11 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar7 = *(undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
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
          uVar10 = FUN_03922f24(uVar7,0,0);
          if ((uVar10 & 1) == 0) {
            lVar21 = *in_stack_00000018;
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar4 = *(uint *)(lVar21 + 0x18);
            *(uint *)(lVar8 + 0x48) = uVar4;
            lVar13 = *(long *)(lVar21 + 0x10);
            lVar16 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar4 + 1;
              puVar6 = (undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20);
              *puVar6 = uVar7;
              thunk_FUN_01b4f09c(puVar6,uVar7);
            }
            else {
              FUN_02b599e4(lVar21,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            *(undefined4 *)(lVar8 + 0x48) = 0;
          }
        }
        else {
          *(int *)(lVar8 + 0x48) = iVar5;
        }
        lVar21 = *in_stack_00000040;
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar13 = *(long *)(lVar21 + 0x10);
        lVar16 = *(long *)PTR_DAT_03d9a310;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar4 = *(uint *)(lVar21 + 0x18);
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar4 + 1;
          plVar14 = (long *)(lVar13 + (long)(int)uVar4 * 8 + 0x20);
          *plVar14 = lVar8;
          thunk_FUN_01b4f09c(plVar14,lVar8);
        }
        else {
          FUN_02b599e4(lVar21,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = (ulong)*(uint *)(lVar20 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar20 + 0x18));
    }
    puVar3 = PTR_DAT_03d9a838;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar11 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_03d9bc08) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0367ba58;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
    plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_0367ba6c:
    lVar11 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0367bab8;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar2,0);
LAB_0367bab8:
    uVar15 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if ((uVar15 & 1) != 0) {
      lVar11 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_03d9bc10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0367bb1c;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
      uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
      FUN_036515fc(lVar11,uVar7,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03651e38(lVar11,unaff_w26,0);
      lVar8 = *in_stack_00000008;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar20 = *(long *)(lVar8 + 0x10);
      lVar21 = *(long *)PTR_DAT_03d9bc18;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar4 = *(uint *)(lVar8 + 0x18);
      if (uVar4 < *(uint *)(lVar20 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar4 + 1;
        plVar14 = (long *)(lVar20 + (long)(int)uVar4 * 8 + 0x20);
        *plVar14 = lVar11;
        thunk_FUN_01b4f09c(plVar14,lVar11);
      }
      else {
        FUN_02b599e4(lVar8,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_0367ba6c;
    }
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0367bc28;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ae9f78(plVar9,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367bc28:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar15 = 0;
      uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar7 = *(undefined8 *)(lVar12 + 0x20 + uVar15 * 8);
        lVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
        FUN_036515fc(lVar11,uVar7,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03651e38(lVar11,unaff_w26,0);
        lVar8 = *in_stack_00000010;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar20 = *(long *)(lVar8 + 0x10);
        lVar21 = *(long *)PTR_DAT_03d9bc18;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar4 = *(uint *)(lVar8 + 0x18);
        if (uVar4 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar4 + 1;
          plVar9 = (long *)(lVar20 + (long)(int)uVar4 * 8 + 0x20);
          *plVar9 = lVar11;
          thunk_FUN_01b4f09c(plVar9,lVar11);
        }
        else {
          FUN_02b599e4(lVar8,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        uVar15 = uVar15 + 1;
        uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar18 = piVar18 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
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


