/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 051b270c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetTrackerFrustum(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  if ((unaff_x20 != 0) &&
     (lVar2 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(), lVar2 != 0)) {
    FUN_05f02644();
    FUN_05ef60b0();
    lVar2 = FUN_034248f0();
    if ((unaff_x19 != 0) && (uVar3 = FUN_03393668(), lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 200) = uVar3;
      puVar1 = PTR_DAT_06605dd0;
      uVar3 = FUN_03393668();
      FUN_03d99ffc(lVar2,uVar3,*(undefined8 *)puVar1);
      FUN_05ef60b0();
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


