/*
FUNCTION_NAME: Unity.VisualScripting.LessThanHandler.<>c$$<.ctor>b__0_17
ENTRY_POINT: 0367b4dc
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

void Unity_VisualScripting_LessThanHandler_<>c__<_ctor>b__0_17(long *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  int unaff_w26;
  long lVar22;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000058;
  
code_r0x0367b4dc:
  puVar7 = (undefined8 *)FUN_01ae9f78(param_1,param_2,0);
  do {
    uVar8 = (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
    if ((uVar8 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar13 = *in_stack_00000038;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 == 0) goto LAB_0367bde8;
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *in_stack_00000038;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_03d9abc8) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0367b55c;
        }
        uVar8 = uVar8 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(in_stack_00000038,*(long *)PTR_DAT_03d9abc8,0);
LAB_0367b55c:
    lVar13 = (*(code *)*puVar7)(in_stack_00000038,puVar7[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = FUN_0362e4c0(lVar13,0);
    uVar9 = FUN_0391c27c(lVar13,0);
    lVar10 = Unity_VisualScripting_Member__Invoke(lVar13,0,0);
    lVar21 = *(long *)(lVar13 + 0x28);
    plVar11 = (long *)FUN_036324a8(lVar13,0);
    lVar14 = *(long *)(lVar13 + 0x48);
    lVar13 = FUN_0362eedc(lVar13,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar13 = FUN_038fe900(lVar13,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar1 = *(int *)(lVar13 + 0x18);
    if (0 < (int)uVar4) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar8 = 0;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar20 = *(undefined8 *)(lVar10 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_03656eec(uVar9,uVar20,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = FUN_0391f968(in_stack_00000058,0,0);
        lVar22 = *in_stack_00000048;
        if ((uVar12 & 1) == 0) {
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar15 = *(long *)(lVar22 + 0x10);
          lVar17 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar5 = *(uint *)(lVar22 + 0x18);
          if (uVar5 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar5 + 1;
            puVar7 = (undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
            *puVar7 = uVar20;
            thunk_FUN_01b4f09c(puVar7,uVar20);
          }
          else {
            FUN_02b599e4(lVar22,uVar20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03d9b250 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_036570ec(in_stack_00000058,uVar20,0);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar15 = *(long *)(lVar22 + 0x10);
          lVar17 = *(long *)PTR_DAT_03d9b598;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar5 = *(uint *)(lVar22 + 0x18);
          if (uVar5 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar5 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20) = uVar20;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar22,uVar20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
    }
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar21 + 0x18)) {
      uVar8 = 0;
      uVar12 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar22 = *(long *)(lVar21 + 0x20 + uVar8 * 8);
        lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
        Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar10,lVar22,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0361ce90(lVar10,unaff_w26,0);
        if ((*(char *)(lVar10 + 0x4c) == '\0') && (*(char *)(lVar10 + 0x1c) == '\0')) {
          *(undefined1 *)(lVar10 + 0x4c) = 1;
          lVar15 = *in_stack_00000020;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar17 = *(long *)(lVar15 + 0x10);
          lVar18 = *(long *)PTR_DAT_03d9a310;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar5 = *(uint *)(lVar15 + 0x18);
          if (uVar5 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar5 + 1;
            plVar16 = (long *)(lVar17 + (long)(int)uVar5 * 8 + 0x20);
            *plVar16 = lVar10;
            thunk_FUN_01b4f09c(plVar16,lVar10);
          }
          else {
            FUN_02b599e4(lVar15,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (iVar1 < 1) {
          uVar9 = 0;
        }
        else {
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar5 = FUN_03623cd4(*(undefined4 *)(lVar22 + 0x48),0,iVar1 + -1,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar9 = *(undefined8 *)(lVar13 + (long)(int)uVar5 * 8 + 0x20);
        }
        if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar6 = FUN_02b5a5a8(*in_stack_00000018,uVar9,*(undefined8 *)PTR_DAT_03d9bc20);
        if (iVar6 < 0) {
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_03922f24(uVar9,0,0);
          if ((uVar12 & 1) == 0) {
            lVar22 = *in_stack_00000018;
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar5 = *(uint *)(lVar22 + 0x18);
            *(uint *)(lVar10 + 0x48) = uVar5;
            lVar15 = *(long *)(lVar22 + 0x10);
            lVar17 = *(long *)Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (uVar5 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar22 + 0x18) = uVar5 + 1;
              puVar7 = (undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
              *puVar7 = uVar9;
              thunk_FUN_01b4f09c(puVar7,uVar9);
            }
            else {
              FUN_02b599e4(lVar22,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            *(undefined4 *)(lVar10 + 0x48) = 0;
          }
        }
        else {
          *(int *)(lVar10 + 0x48) = iVar6;
        }
        lVar22 = *in_stack_00000040;
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar15 = *(long *)(lVar22 + 0x10);
        lVar17 = *(long *)PTR_DAT_03d9a310;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar5 = *(uint *)(lVar22 + 0x18);
        if (uVar5 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar5 + 1;
          plVar16 = (long *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
          *plVar16 = lVar10;
          thunk_FUN_01b4f09c(plVar16,lVar10);
        }
        else {
          FUN_02b599e4(lVar22,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = (ulong)*(uint *)(lVar21 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar21 + 0x18));
    }
    puVar3 = PTR_DAT_03d9a838;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar13 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_03d9bc08) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0367ba58;
        }
        uVar8 = uVar8 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d9bc08,0);
LAB_0367ba58:
    plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_0367ba6c:
    lVar13 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0367bab8;
        }
        uVar8 = uVar8 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_0367bab8:
    uVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if ((uVar8 & 1) != 0) {
      lVar13 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_03d9bc10) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0367bb1c;
          }
          uVar8 = uVar8 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d9bc10,0);
LAB_0367bb1c:
      uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      lVar13 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
      FUN_036515fc(lVar13,uVar9,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03651e38(lVar13,unaff_w26,0);
      lVar10 = *in_stack_00000008;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar21 = *(long *)(lVar10 + 0x10);
      lVar22 = *(long *)PTR_DAT_03d9bc18;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar5 = *(uint *)(lVar10 + 0x18);
      if (uVar5 < *(uint *)(lVar21 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar5 + 1;
        plVar16 = (long *)(lVar21 + (long)(int)uVar5 * 8 + 0x20);
        *plVar16 = lVar13;
        thunk_FUN_01b4f09c(plVar16,lVar13);
      }
      else {
        FUN_02b599e4(lVar10,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_0367ba6c;
    }
    if (plVar11 != (long *)0x0) {
      lVar13 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0367bc28;
          }
          uVar8 = uVar8 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ae9f78(plVar11,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367bc28:
      (*(code *)*puVar7)(plVar11,puVar7[1]);
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
      uVar8 = 0;
      uVar12 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar9 = *(undefined8 *)(lVar14 + 0x20 + uVar8 * 8);
        lVar13 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a838);
        FUN_036515fc(lVar13,uVar9,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03651e38(lVar13,unaff_w26,0);
        lVar10 = *in_stack_00000010;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar21 = *(long *)(lVar10 + 0x10);
        lVar22 = *(long *)PTR_DAT_03d9bc18;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar5 = *(uint *)(lVar10 + 0x18);
        if (uVar5 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar5 + 1;
          plVar11 = (long *)(lVar21 + (long)(int)uVar5 * 8 + 0x20);
          *plVar11 = lVar13;
          thunk_FUN_01b4f09c(plVar11,lVar13);
        }
        else {
          FUN_02b599e4(lVar10,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = uVar8 + 1;
        uVar12 = (ulong)*(uint *)(lVar14 + 0x18);
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar14 + 0x18));
    }
    unaff_w26 = uVar4 + unaff_w26;
    param_2 = *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    lVar13 = *in_stack_00000038;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    param_1 = in_stack_00000038;
    if (uVar8 == 0) goto code_r0x0367b4dc;
    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    while (*(long *)(piVar19 + -2) != param_2) {
      uVar8 = uVar8 - 1;
      piVar19 = piVar19 + 4;
      if (uVar8 == 0) goto code_r0x0367b4dc;
    }
    puVar7 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar19 = piVar19 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar19 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
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


