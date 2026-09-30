/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 05135c30
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  auVar6._8_8_ = in_stack_00000008;
  auVar6._0_8_ = in_stack_00000000;
  while( true ) {
    uVar3 = FUN_04f2d31c();
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar6;
      thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e8388(unaff_x19 + 2);
      return;
    }
    FUN_04f2d338();
    iVar1 = unaff_x19[0xc];
    unaff_x19[0xc] = iVar1 + 1;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar2 = FUN_04387650(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_06781298);
    if (iVar2 <= iVar1 + 1) break;
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar4 = (long *)FUN_043876e0(*(long *)(unaff_x20 + 0x58),unaff_x19[0xc],
                                  *(undefined8 *)PTR_DAT_067812a0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = (**(code **)(*plVar4 + 0x1f8))
                      (plVar4,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10),
                       *(undefined8 *)(unaff_x19 + 0x12),*(undefined8 *)(*plVar4 + 0x200));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar6 = FUN_0507b064(lVar5,0,0);
  }
  plVar4 = *(long **)(unaff_x19 + 0xe);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = (**(code **)(*plVar4 + 0x228))
                    (plVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar4 + 0x230));
  if (lVar5 != 0) {
    auVar6 = FUN_0507b064(lVar5,0,0);
    uVar3 = FUN_04f2d31c();
    if ((uVar3 & 1) != 0) {
      FUN_04f2d338();
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_04f2db0c(unaff_x19 + 2,0);
      return;
    }
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar6;
    thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
    if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e8388(unaff_x19 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


