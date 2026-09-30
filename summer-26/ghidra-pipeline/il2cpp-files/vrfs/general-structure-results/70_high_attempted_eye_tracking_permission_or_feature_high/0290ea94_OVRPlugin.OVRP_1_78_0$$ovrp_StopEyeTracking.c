/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 0290ea94
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 5) * 0x10 + 0x138);
      goto LAB_0290eacc;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_015c2a80();
LAB_0290eacc:
                    /* WARNING: Could not recover jumptable at 0x0290eae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


