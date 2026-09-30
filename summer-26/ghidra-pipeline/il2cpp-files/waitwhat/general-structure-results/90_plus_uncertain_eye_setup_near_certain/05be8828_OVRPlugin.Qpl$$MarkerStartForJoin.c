/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 05be8828
PROGRAM: waitwhat-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin(undefined8 param_1)

{
  long lVar1;
  undefined4 in_w8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(unaff_x19 + 0x30) = in_w8;
  FUN_05953590(param_1,*(undefined8 *)(unaff_x19 + 0x38));
  lVar1 = *(long *)(unaff_x19 + 0x48);
  if (lVar1 != 0) {
    FUN_05953590(*(undefined8 *)(unaff_x20 + 0x48),lVar1,*(undefined4 *)(lVar1 + 0x18),0);
    lVar1 = *(long *)(unaff_x19 + 0x50);
    if (lVar1 != 0) {
      FUN_05953590(*(undefined8 *)(unaff_x20 + 0x50),lVar1,*(undefined4 *)(lVar1 + 0x18),0);
      lVar1 = *(long *)(unaff_x19 + 0x58);
      if (lVar1 != 0) {
        FUN_05953590(*(undefined8 *)(unaff_x20 + 0x58),lVar1,*(undefined4 *)(lVar1 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(unaff_x20 + 0x60);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x74);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x6c);
        uVar3 = *(undefined8 *)(unaff_x20 + 100);
        *(undefined4 *)(unaff_x19 + 0x7c) = *(undefined4 *)(unaff_x20 + 0x7c);
        *(undefined8 *)(unaff_x19 + 0x74) = uVar2;
        *(undefined8 *)(unaff_x19 + 0x6c) = uVar4;
        *(undefined8 *)(unaff_x19 + 100) = uVar3;
        uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
        *(undefined4 *)(unaff_x19 + 0x80) = *(undefined4 *)(unaff_x20 + 0x80);
        *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


