/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 076d439c
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


undefined8 OVRPlugin__RetrieveSpaceQueryResults(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 auVar6 [16];
  long in_stack_00000018;
  
LAB_076d43ac:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x19,param_1[1]);
    if ((uVar1 & 1) == 0) {
      FUN_076d46f8();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      return 0;
    }
    plVar5 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076d4418;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x22,0);
LAB_076d4418:
    lVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar5 = (long *)FUN_076cc4e4();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076d4480;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x23,0);
LAB_076d4480:
    plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
    *(long **)(in_stack_00000018 + 0x40) = plVar5;
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076d44f0;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x21,0);
LAB_076d44f0:
    uVar1 = (*(code *)*puVar2)(plVar5,puVar2[1]);
    if ((uVar1 & 1) != 0) {
      plVar5 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 == 0) goto LAB_076d4570;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    FUN_076d4648();
    unaff_x19 = *(long **)(in_stack_00000018 + 0x38);
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          param_1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076d43ac;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_0406ae20(unaff_x19,*unaff_x21,0);
  } while( true );
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar4 = piVar4 + 4;
    if (uVar1 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08fadfe8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_076d458c;
    }
  }
LAB_076d4570:
  puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08fadfe8,0);
LAB_076d458c:
  auVar6 = (*(code *)*puVar2)(plVar5,puVar2[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar6;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


