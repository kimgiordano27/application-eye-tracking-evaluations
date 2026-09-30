/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 0146463c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 in_w9;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)(unaff_x19 + 0x41) = in_w9;
  *(undefined4 *)(unaff_x19 + 0x50) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x38) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x3c) = 0x42c80000;
  *(undefined8 *)(unaff_x19 + 0x58) = param_2;
  lVar2 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar2 != 0) {
    FUN_01320e50(lVar2,*(undefined8 *)System_Reflection_CustomAttributeNamedArgument_TypeInfo);
    *(long *)(unaff_x19 + 0x60) = lVar2;
    FUN_017b46ec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


