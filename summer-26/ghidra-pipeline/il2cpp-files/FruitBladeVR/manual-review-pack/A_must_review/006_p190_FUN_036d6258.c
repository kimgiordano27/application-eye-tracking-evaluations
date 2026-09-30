/*
FUNCTION_NAME: FUN_036d6258
ENTRY_POINT: 036d6258
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 127
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering
*/


bool FUN_036d6258(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
                    /* catch() { ... } // from try @ 036d6244 with catch @ 036d6268 */
  if (DAT_03ef7198 == (code *)0x0) {
                    /* try { // try from 036d626c to 037d6273 has its CatchHandler @ 036d627c */
                    /* try { // try from 036d6274 to 037d627f has its CatchHandler @ 036d5f88 */
    local_40 = "UnityOpenXR";
    uStack_38 = 0xb;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036d626c with catch @ 036d627c
                        */
    local_30 = "OculusFoveation_GetHasEyeTrackingPermissions";
    uStack_28 = 0x2c;
    local_20 = DAT_00b46930;
    local_18 = 0;
    local_14 = 0;
    DAT_03ef7198 = (code *)thunk_FUN_01c8fee8(&local_40);
  }
  cVar1 = (*DAT_03ef7198)();
  return cVar1 != '\0';
}


