/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 05131f64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionTracked(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x21;
  long unaff_x22;
  int iVar7;
  long *unaff_x25;
  
  uVar4 = FUN_050d7290();
  puVar2 = PTR_DAT_067812a0;
  puVar1 = PTR_DAT_06781298;
  if ((uVar4 & 1) != 0) {
    iVar7 = 0;
    do {
      if (*(long *)(unaff_x22 + 0x58) == 0) {
LAB_05132060:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar3 = FUN_04387650(*(long *)(unaff_x22 + 0x58),*(undefined8 *)puVar1);
      if (iVar3 <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0513205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x21 + 0x228))();
        return;
      }
      if ((*(long *)(unaff_x22 + 0x58) == 0) ||
         (plVar5 = (long *)FUN_043876e0(*(long *)(unaff_x22 + 0x58),iVar7,*(undefined8 *)puVar2),
         plVar5 == (long *)0x0)) goto LAB_05132060;
      uVar6 = (**(code **)(*plVar5 + 0x1f8))();
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*unaff_x25);
      }
      uVar4 = FUN_050d7290(uVar6,0);
      iVar7 = iVar7 + 1;
    } while ((uVar4 & 1) != 0);
  }
  FUN_05132064();
  return;
}


