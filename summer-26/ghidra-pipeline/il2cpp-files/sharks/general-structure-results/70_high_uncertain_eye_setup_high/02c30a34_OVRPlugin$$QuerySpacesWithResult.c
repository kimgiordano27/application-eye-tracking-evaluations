/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 02c30a34
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpacesWithResult(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *plVar7;
  long lVar8;
  int unaff_w27;
  long *unaff_x28;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380be28);
  FUN_02c33348();
  lVar8 = *(long *)(unaff_x22 + 0x18);
  thunk_FUN_0181f594();
  if (lVar8 == 0) {
    lVar8 = *unaff_x28;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar8 = *unaff_x28;
    }
    lVar8 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380be30,
                         *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x10));
    thunk_FUN_0181f594();
    lVar4 = FUN_01818258((long *)(unaff_x22 + 0x18),lVar8,0);
    if (lVar4 != 0) {
      lVar8 = lVar4;
    }
    if (lVar8 == 0) goto LAB_02c30bac;
  }
  iVar2 = 0;
  if (unaff_w27 != 0) {
    iVar2 = unaff_w24 / unaff_w27;
  }
  uVar1 = unaff_w24 - iVar2 * unaff_w27;
  if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_02c30bb0;
  plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
  lVar4 = *plVar7;
  thunk_FUN_0181f594();
  if (lVar4 == 0) {
    uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380be48);
    FUN_01dbe1ac(uVar5,4,*(undefined8 *)PTR_DAT_0380be40);
    if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_02c30bb0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    FUN_01818258(plVar7,uVar5,0);
    if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_02c30bb0;
    lVar4 = *plVar7;
    if (lVar4 == 0) goto LAB_02c30bac;
  }
  auVar9 = FUN_01dbe250(lVar4,uVar3,*(undefined8 *)PTR_DAT_0380be38);
  in_stack_00000008 = uVar3;
  thunk_FUN_0188fd20(&stack0x00000008,uVar3);
  _in_stack_00000010 = auVar9;
  thunk_FUN_0188fd20(&stack0x00000010,0);
  iVar2 = *(int *)(unaff_x22 + 0x20);
  thunk_FUN_0181f594();
  if ((iVar2 < 2) || (uVar6 = FUN_02c32850(&stack0x00000008), (uVar6 & 1) == 0)) {
    *(undefined1 (*) [16])(unaff_x19 + 1) = _in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    if (unaff_x21 == 0) {
LAB_02c30bac:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}


