/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.CreateEnvironmentRaycasterDelegate$$Invoke
ENTRY_POINT: 06e11a50
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate__Invoke(long param_1)

{
  long lVar1;
  long in_x9;
  uint in_w10;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((uint)param_1 < in_w10) {
    lVar1 = in_x9 + param_1 * 0x20;
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(uint *)(unaff_x19 + 8) = (uint)param_1 + 1;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


