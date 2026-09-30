/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 076c87f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076c8904) */

void OVRPlugin__GetControllerState6
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *in_stack_00000018;
  
  do {
    FUN_07063c08(param_1,param_2,0,0,param_3,param_4,param_5);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076c86f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x25,0);
LAB_076c86f8:
    uVar5 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto code_r0x076c886c;
      lVar3 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_076c8840;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076c875c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x26,0);
LAB_076c875c:
    param_4 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_076c87c8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076c87c8:
    (*(code *)*puVar2)();
    param_3 = *(long *)(unaff_x19 + 0x50);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_5 = *unaff_x28;
    param_1 = 0;
    param_2 = 0;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076c885c;
    }
  }
LAB_076c8840:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x24,0);
LAB_076c885c:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
code_r0x076c886c:
  uVar1 = FUN_0858dd10();
  lVar3 = thunk_FUN_0406deb8(*unaff_x23);
  FUN_075273c0(lVar3,0);
  lVar4 = *(long *)(unaff_x19 + 0x68);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(long **)(lVar3 + 0x18) = unaff_x20;
  *(long *)(unaff_x19 + 0x58) = lVar3;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar1 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  *(undefined4 *)(unaff_x19 + 0x78) = uVar1;
  FUN_076515f0();
  return;
}


