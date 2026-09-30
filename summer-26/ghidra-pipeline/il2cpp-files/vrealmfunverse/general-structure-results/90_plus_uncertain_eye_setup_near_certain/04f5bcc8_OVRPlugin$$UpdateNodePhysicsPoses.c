/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 04f5bcc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  if (*(long *)(unaff_x19 + 200) != 0) {
    uVar2 = FUN_031734d8(*(long *)(unaff_x19 + 200),*(undefined8 *)PTR_DAT_06314ab8);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x138,uVar2);
    if (*(long *)(unaff_x19 + 0x120) == 0) {
      lVar3 = FUN_05c89410();
      if (lVar3 == 0) goto LAB_04f5bd8c;
      FUN_031d8020(lVar3,*(undefined8 *)
                          OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var);
      FUN_04f5bd90();
    }
    puVar1 = System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo;
    if (*(long *)(unaff_x19 + 200) != 0) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x130);
      uVar2 = FUN_05c89340(*(long *)(unaff_x19 + 200),0);
      uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_04f5a894(uVar4,uVar5,uVar2);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x140,uVar4);
      FUN_04e833f4();
      return;
    }
  }
LAB_04f5bd8c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


