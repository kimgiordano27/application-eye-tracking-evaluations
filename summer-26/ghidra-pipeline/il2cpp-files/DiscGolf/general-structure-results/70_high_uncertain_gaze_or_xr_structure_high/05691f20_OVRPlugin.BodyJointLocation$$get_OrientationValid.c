/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationValid
ENTRY_POINT: 05691f20
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_BodyJointLocation__get_OrientationValid(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x20;
  
  if (unaff_x19 != 0) {
    lVar1 = *unaff_x20;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar1 = *unaff_x20;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
    *puVar2 = uVar3;
    LeanTween__value(puVar2,uVar3);
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar1 = *unaff_x20;
    }
    return *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


