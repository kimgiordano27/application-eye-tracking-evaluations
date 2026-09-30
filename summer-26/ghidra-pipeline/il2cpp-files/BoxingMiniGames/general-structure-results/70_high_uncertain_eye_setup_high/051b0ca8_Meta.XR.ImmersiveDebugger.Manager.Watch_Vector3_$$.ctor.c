/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 051b0ca8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *puVar2;
  long in_x9;
  int *in_x10;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_051b0cf0:
      uVar1 = (*(code *)*puVar2)();
      return uVar1 & 1;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0367cd30();
      goto LAB_051b0cf0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


