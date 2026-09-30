/*
FUNCTION_NAME: HVRInputActions.RightHandActions$$get_PrimaryTouch
ENTRY_POINT: 02189648
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02189790) */

undefined8 HVRInputActions_RightHandActions__get_PrimaryTouch(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  long *plVar7;
  undefined8 in_stack_00000008;
  
  FUN_027e0bd8();
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (*(int *)(unaff_x21 + 0x20) == 0) {
    lVar6 = *(long *)(lVar3 + 0x68);
    lVar3 = *(long *)(lVar6 + 0x38);
    if (lVar3 == 0) {
      FUN_01a47054(lVar6);
      lVar3 = *(long *)(lVar6 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8(lVar3);
    }
    lVar6 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02189750;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar7,lVar3,0);
LAB_02189750:
    uVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  else {
    if ((*(byte *)(*(long *)(lVar3 + 0x58) + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    uVar1 = thunk_FUN_01a89e68();
    FUN_021bb470();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return uVar1;
}


