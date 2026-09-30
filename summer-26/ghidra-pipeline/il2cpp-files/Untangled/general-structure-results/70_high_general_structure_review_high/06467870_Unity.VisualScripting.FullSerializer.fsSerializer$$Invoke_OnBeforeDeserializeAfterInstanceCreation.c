/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserializeAfterInstanceCreation
ENTRY_POINT: 06467870
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserializeAfterInstanceCreation
               (undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xace) & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<Vector3>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xace) = 1;
  }
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


