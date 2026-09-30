/*
FUNCTION_NAME: Oculus.Platform.Models.PartyUpdateNotification$$.ctor
ENTRY_POINT: 030e5f5c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_19;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x030e639c) */

undefined4 Oculus_Platform_Models_PartyUpdateNotification___ctor(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  long unaff_x20;
  undefined4 uVar14;
  long unaff_x21;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xe10));
  thunk_FUN_01ad9084(StringLiteral_13500);
  thunk_FUN_01ad9084(StringLiteral_13501);
  thunk_FUN_01ad9084(StringLiteral_13502);
  thunk_FUN_01ad9084(StringLiteral_13503);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  *(undefined1 *)(unaff_x21 + 0xb4f) = 1;
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (unaff_x19 != 0) {
    lVar5 = FUN_01ed712c();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    uVar6 = FUN_03922f24(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    plVar13 = *(long **)(unaff_x20 + 0x28);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      lVar8 = *(long *)StringLiteral_13428;
      uVar1 = *(ushort *)(lVar10 + 0x12e);
      uVar6 = (ulong)uVar1;
      if (*(char *)(unaff_x20 + 0x40) == '\0') {
        if (uVar1 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              iVar11 = *piVar12 + 6;
              goto LAB_030e6094;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        uVar9 = 6;
      }
      else {
        if (uVar1 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
LAB_030e602c:
          if (*(long *)(piVar12 + -2) != lVar8) goto code_r0x030e6038;
          iVar11 = *piVar12 + 7;
LAB_030e6094:
          puVar7 = (undefined8 *)(lVar10 + (long)iVar11 * 0x10 + 0x138);
          goto LAB_030e609c;
        }
LAB_030e6044:
        uVar9 = 7;
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar13,lVar8,uVar9);
LAB_030e609c:
      plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_13498) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_030e6104;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)StringLiteral_13498,0);
LAB_030e6104:
        plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
        puVar4 = StringLiteral_13499;
        puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        do {
          lVar8 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_030e6174;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar3,0);
LAB_030e6174:
          uVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          if ((uVar6 & 1) == 0) {
            uVar14 = 0;
            if (plVar13 == (long *)0x0) {
              return 0;
            }
            goto Oculus_Platform_Models_PingResult__set_ID;
          }
          lVar8 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_030e61d0;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar4,0);
LAB_030e61d0:
          lVar8 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
        } while (lVar8 != *(long *)(lVar5 + 0x30));
        if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar6 = FUN_025bc7b8(*(long *)(unaff_x20 + 0x48),lVar8,*(undefined8 *)StringLiteral_13495);
        if ((uVar6 & 1) == 0) {
          lVar10 = *(long *)(unaff_x20 + 0x48);
          uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_13503);
          FUN_02b591b0(uVar9,*(undefined8 *)StringLiteral_13502);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_025bc5c4(lVar10,lVar8,uVar9,*(undefined8 *)StringLiteral_13494);
        }
        if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar8 = FUN_025bc544(*(long *)(unaff_x20 + 0x48),lVar8,*(undefined8 *)StringLiteral_13496);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar6 = FUN_02b59d74(lVar8,*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)StringLiteral_13501)
        ;
        if ((uVar6 & 1) == 0) {
          uVar9 = *(undefined8 *)(lVar5 + 0x38);
          lVar5 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)StringLiteral_13500;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = 1;
        if (plVar13 == (long *)0x0) {
          return 1;
        }
Oculus_Platform_Models_PingResult__set_ID:
        lVar5 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_030e6368;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ae9f78(plVar13,*(long *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0
                             );
LAB_030e6368:
        (*(code *)*puVar7)(plVar13,puVar7[1]);
        return uVar14;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
code_r0x030e6038:
  uVar6 = uVar6 - 1;
  piVar12 = piVar12 + 4;
  if (uVar6 == 0) goto LAB_030e6044;
  goto LAB_030e602c;
}


