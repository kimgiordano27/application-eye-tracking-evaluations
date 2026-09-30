/*
FUNCTION_NAME: OVRPlugin.Sizef$$.cctor
ENTRY_POINT: 0515c198
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizef___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  
  lVar4 = *(long *)(unaff_x21 + 0x10);
  lVar1 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
  if (lVar1 == 0) {
LAB_0515c258:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((unaff_x24 != 0) && (lVar2 = thunk_FUN_02d9d438(), lVar2 == 0)) {
LAB_0515c260:
    uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,0);
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(long *)(lVar1 + 0x20) = unaff_x24;
    thunk_FUN_02dd37b4();
    if ((unaff_x23 != 0) && (lVar2 = thunk_FUN_02d9d438(), lVar2 == 0)) goto LAB_0515c260;
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(long *)(lVar1 + 0x28) = unaff_x23;
      thunk_FUN_02dd37b4();
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar1,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      goto LAB_0515c258;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


