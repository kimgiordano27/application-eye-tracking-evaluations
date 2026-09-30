/*
FUNCTION_NAME: OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 076cd220
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076cd41c) */

void OVRPlugin__set_eyeFovPremultipliedAlphaModeEnabled(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000028;
  
code_r0x076cd220:
  puVar3 = (undefined8 *)FUN_0406ae20(unaff_x22,param_2,0);
  do {
    uVar4 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000028 != (long *)0x0) {
        lVar6 = *in_stack_00000028;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cd374;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x27,0);
LAB_076cd374:
        (*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
      }
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        in_stack_00000010 = in_stack_00000010 + 1;
        if ((int)*(uint *)(in_stack_00000008 + 0x18) <= (int)in_stack_00000010) {
          return;
        }
        if (*(uint *)(in_stack_00000008 + 0x18) <= in_stack_00000010) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        unaff_x20 = *(long *)(in_stack_00000008 + in_stack_00000010 * 8 + 0x20);
        if (unaff_x20 == 0) goto LAB_076cd418;
        unaff_x21 = 0;
      }
      plVar2 = (long *)FUN_076cc40c(unaff_x20,unaff_x21 & 0xffffffff);
      if (plVar2 == (long *)0x0) {
LAB_076cd418:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cd1d4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x26,0);
LAB_076cd1d4:
      unaff_x22 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    else {
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *in_stack_00000028;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cd2a0;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x29,0);
LAB_076cd2a0:
      uVar5 = (*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
      if (unaff_x19 == 0) {
LAB_076cd394:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_076cd394;
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      unaff_x22 = in_stack_00000028;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(ulong *)(lVar6 + 0x20) = unaff_x21;
        *(undefined8 *)(lVar6 + 0x28) = uVar5;
      }
      else {
        FUN_0594b494();
      }
    }
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *unaff_x22;
    param_2 = *unaff_x28;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    in_stack_00000028 = unaff_x22;
    if (uVar4 == 0) goto code_r0x076cd220;
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
      if (uVar4 == 0) goto code_r0x076cd220;
    }
    puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
}


