/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 076cd2fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076cd41c) */

void OVRPlugin__GetNodeFrustum2(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000028;
  
code_r0x076cd2fc:
  FUN_0594b494();
joined_r0x076cd30c:
  do {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000028;
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
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x28,0);
LAB_076cd23c:
    uVar6 = (*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000028 != (long *)0x0) {
        lVar5 = *in_stack_00000028;
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
      in_stack_00000028 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      goto joined_r0x076cd30c;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000028;
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
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x29,0);
LAB_076cd2a0:
    uVar4 = (*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
    if (unaff_x19 == 0) {
LAB_076cd394:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_076cd394;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto code_r0x076cd2fc;
    lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(ulong *)(lVar5 + 0x20) = unaff_x21;
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
  } while( true );
}


