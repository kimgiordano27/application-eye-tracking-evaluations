/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 01dbb428
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(long param_1)

{
  undefined8 *puVar1;
  long in_x9;
  long *in_x10;
  int *piVar2;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
        goto LAB_01dbb46c;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_0103c348();
LAB_01dbb46c:
                    /* WARNING: Could not recover jumptable at 0x01dbb484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


