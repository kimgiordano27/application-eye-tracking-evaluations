/*
FUNCTION_NAME: OVRPlugin$$StartKeyboardTracking
ENTRY_POINT: 076d0c68
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d0e68) */

void OVRPlugin__StartKeyboardTracking(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x23;
  long *plVar9;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *plVar10;
  long *in_stack_00000028;
  
  plVar10 = *(long **)(unaff_x26 + 0xf8);
  plVar9 = *(long **)(unaff_x23 + 0x868);
  in_stack_00000028 = (long *)(*(code *)*param_1)();
  do {
    plVar7 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000028;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076d0cdc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x24,0);
LAB_076d0cdc:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    plVar7 = in_stack_00000028;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000028 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000028;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_076d0e0c;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000028;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076d0d40;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x25,0);
LAB_076d0d40:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar7 = *(long **)(unaff_x19 + 0x38);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar1 = *(undefined4 *)(lVar3 + 0x14);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar10) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076d0db0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*plVar10,1);
LAB_076d0db0:
    (*(code *)*puVar2)(plVar7,uVar8,uVar1,&stack0x00000018,puVar2[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *plVar9) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076d0e28;
    }
  }
LAB_076d0e0c:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*plVar9,0);
LAB_076d0e28:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
  return;
}


