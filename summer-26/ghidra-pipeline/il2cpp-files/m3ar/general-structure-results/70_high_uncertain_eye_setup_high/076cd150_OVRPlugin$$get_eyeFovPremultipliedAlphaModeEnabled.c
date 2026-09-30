/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 076cd150
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076cd41c) */

void OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(ulong param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  ulong in_x10;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  ulong uVar9;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long lStack0000000000000008;
  
  lStack0000000000000008 = in_x9;
  while( true ) {
    if (param_1 <= in_x10) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar8 = *(long *)(lStack0000000000000008 + in_x10 * 8 + 0x20);
    if (lVar8 == 0) break;
    uVar9 = 0;
    do {
      plVar2 = (long *)FUN_076cc40c(lVar8,uVar9 & 0xffffffff);
      if (plVar2 == (long *)0x0) goto LAB_076cd418;
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cd1d4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x26,0);
LAB_076cd1d4:
      plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
joined_r0x076cd1e8:
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cd23c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x28,0);
LAB_076cd23c:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) != 0) {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cd2a0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x29,0);
LAB_076cd2a0:
        uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if (unaff_x19 == 0) {
LAB_076cd394:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_076cd394;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(ulong *)(lVar5 + 0x20) = uVar9;
          *(undefined8 *)(lVar5 + 0x28) = uVar4;
        }
        else {
          FUN_0594b494();
        }
        goto joined_r0x076cd1e8;
      }
      if (plVar2 != (long *)0x0) {
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cd374;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x27,0);
LAB_076cd374:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 5);
    param_1 = (ulong)*(uint *)(lStack0000000000000008 + 0x18);
    in_x10 = in_x10 + 1;
    if ((int)*(uint *)(lStack0000000000000008 + 0x18) <= (int)in_x10) {
      return;
    }
  }
LAB_076cd418:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


