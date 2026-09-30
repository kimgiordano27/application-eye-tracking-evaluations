/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 01453f94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay
          (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Collections_Generic_List<TransformFeatureStateThreshold>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xa7d) = 1;
  }
  if (param_3 != 0) {
    uVar2 = FUN_0145b018(param_3,0);
    puVar1 = System_Collections_Generic_List<TransformFeatureStateThreshold>_TypeInfo;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026610e4(*(undefined8 *)puVar1,0);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


