/*
FUNCTION_NAME: OVRPlugin$$DestroyPassthroughColorLut
ENTRY_POINT: 06386b30
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyPassthroughColorLut(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  lVar1 = thunk_FUN_037787d0(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar1 != 0) {
    if (*(int *)(unaff_x21 + 0x18) != 0) {
      *(undefined8 *)(unaff_x21 + 0x20) = unaff_x22;
      thunk_FUN_037aeb94();
      lVar1 = thunk_FUN_037787d0();
      if (lVar1 == 0) goto LAB_06386c5c;
      if (1 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x28) = unaff_x19;
        thunk_FUN_037aeb94();
        *unaff_x20 = unaff_x21;
        thunk_FUN_037aeb94();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_06386c5c:
  uVar2 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,0);
}


