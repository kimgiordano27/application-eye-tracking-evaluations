/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 06401598
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor
                (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  long in_x10;
  int *piVar3;
  long unaff_x19;
  
  piVar3 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar3 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_064015d0;
    }
    in_x9 = in_x9 + -1;
    piVar3 = piVar3 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_064015d0:
  uVar2 = (*(code *)*puVar1)();
  if ((int)uVar2 != 1) {
    uVar2 = (ulong)(*(long *)(unaff_x19 + 0x18) != 0);
  }
  return uVar2;
}


