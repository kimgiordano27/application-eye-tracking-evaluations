/*
FUNCTION_NAME: OVRPlugin$$AreHandPosesGeneratedByControllerData
ENTRY_POINT: 06940680
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__AreHandPosesGeneratedByControllerData(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar9;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x22 + 0xfa2) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar5 = thunk_FUN_03ac74bc(*unaff_x21);
  FUN_04cd0dfc(lVar5,*unaff_x20);
  plVar9 = (long *)(unaff_x19 + 0x38);
  *plVar9 = lVar5;
  thunk_FUN_03afed3c(plVar9,lVar5);
  puVar4 = PTR_DAT_084b5eb0;
  puVar3 = PTR_DAT_084b5ea8;
  puVar2 = PTR_DAT_08487990;
  if (((*(long *)(unaff_x19 + 0x10) == 0) ||
      (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar5 == 0)) ||
     (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04de90b8(&stack0x00000018,lVar5,*(undefined8 *)PTR_DAT_084b5ed8);
  while( true ) {
    uVar6 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) {
      FUN_061c1960(&stack0x00000018,*(undefined8 *)puVar3);
      OVRPlugin__get_eyeHeight();
      return;
    }
    lVar5 = *plVar9;
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar2;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined1 *)(lVar7 + (int)uVar1 + 0x20) = 1;
    }
    else {
      FUN_04cd1698(lVar5,1,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


