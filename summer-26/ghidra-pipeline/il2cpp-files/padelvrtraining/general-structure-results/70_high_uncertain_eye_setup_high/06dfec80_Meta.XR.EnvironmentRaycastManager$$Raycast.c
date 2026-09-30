/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Raycast
ENTRY_POINT: 06dfec80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__Raycast(long param_1)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if ((uint)param_1 < *(uint *)(in_x9 + 0x18)) {
    lVar1 = in_x9 + param_1 * 0x30;
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


