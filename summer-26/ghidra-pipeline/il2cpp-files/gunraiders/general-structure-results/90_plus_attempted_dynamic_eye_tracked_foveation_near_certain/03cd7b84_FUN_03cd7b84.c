/*
FUNCTION_NAME: FUN_03cd7b84
ENTRY_POINT: 03cd7b84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 112
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool FUN_03cd7b84(void)

{
  int iVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
                    /* try { // try from 03cd7b8c to 03dd7b93 has its CatchHandler @ 03cd7d44 */
  if (DAT_0453ba38 == (code *)0x0) {
    local_18 = 0;
                    /* try { // try from 03cd7bc0 to 03dd7bc3 has its CatchHandler @ 03cd7d20 */
    local_40 = "OculusXRPlugin";
    uStack_38 = 0xe;
    local_30 = "GetEyeTrackedFoveatedRenderingEnabled";
    uStack_28 = 0x25;
    local_20 = DAT_00b91768;
    local_14 = 0;
                    /* try { // try from 03cd7bd0 to 03dd7bdb has its CatchHandler @ 03cd7d38 */
    DAT_0453ba38 = (code *)thunk_FUN_01c49924(&local_40);
  }
  iVar1 = (*DAT_0453ba38)();
                    /* try { // try from 03cd7bec to 03dd7bef has its CatchHandler @ 03cd7d10 */
  return iVar1 != 0;
}


