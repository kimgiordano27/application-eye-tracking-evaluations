/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 076d3b60
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  long in_x10;
  int *piVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  int unaff_w23;
  undefined4 in_stack_00000020;
  
  piVar3 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar3 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
    in_x9 = in_x9 + -1;
    piVar3 = piVar3 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_076d3b98:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  if ((unaff_w23 != 0xc) && (unaff_w23 != 0)) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar4 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000020 = FUN_076ccf14();
    uVar2 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar2 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar2);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


