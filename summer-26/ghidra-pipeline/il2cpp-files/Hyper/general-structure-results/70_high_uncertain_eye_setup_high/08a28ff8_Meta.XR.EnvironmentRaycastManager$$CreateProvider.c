/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CreateProvider
ENTRY_POINT: 08a28ff8
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_EnvironmentRaycastManager__CreateProvider(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_08a29028:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        puVar1 = (undefined8 *)(unaff_x19 + 0x68);
      }
      else {
        puVar1 = (undefined8 *)(unaff_x19 + 0x78);
      }
      return *puVar1;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_04980e68();
      goto LAB_08a29028;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


