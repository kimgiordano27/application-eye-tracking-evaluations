/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 076cd3dc
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


void OVRPlugin__get_AsymmetricFovEnabled(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar7;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000028;
  
  do {
    plVar7 = (long *)*param_1;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076cd374;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x27,0);
LAB_076cd374:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
    }
    if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031884(unaff_x22);
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
    plVar7 = (long *)FUN_076cc40c(unaff_x20,unaff_x21 & 0xffffffff);
    if (plVar7 == (long *)0x0) {
LAB_076cd418:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076cd1d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x26,0);
LAB_076cd1d4:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
joined_r0x076cd1e8:
    in_stack_00000028 = plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076cd23c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x28,0);
LAB_076cd23c:
    uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    plVar7 = in_stack_00000028;
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *in_stack_00000028;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076cd2a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x29,0);
LAB_076cd2a0:
      uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (unaff_x19 == 0) {
LAB_076cd394:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_076cd394;
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(ulong *)(lVar4 + 0x20) = unaff_x21;
        *(undefined8 *)(lVar4 + 0x28) = uVar2;
        plVar7 = in_stack_00000028;
      }
      else {
        FUN_0594b494();
        plVar7 = in_stack_00000028;
      }
      goto joined_r0x076cd1e8;
    }
    unaff_x22 = 0;
    param_1 = &stack0x00000028;
  } while( true );
}


