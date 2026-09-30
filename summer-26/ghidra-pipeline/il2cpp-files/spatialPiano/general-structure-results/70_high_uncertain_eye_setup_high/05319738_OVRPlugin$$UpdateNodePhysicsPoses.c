/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 05319738
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_067c9790;
  if ((DAT_06bbb229 & 1) == 0) {
                    /* try { // try from 05319774 to 0541979b has its CatchHandler @ 053197c0 */
    FUN_02f08768(PTR_DAT_067c9790);
    DAT_06bbb229 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_58 = thunk_FUN_02f44ec4(*(undefined8 *)puVar1,param_2);
  uStack_50 = param_3;
  thunk_FUN_02f695c4(param_1,&local_58,param_4,param_5);
                    /* try { // try from 053197b4 to 054197b7 has its CatchHandler @ 053197c4 */
                    /* try { // try from 053197b8 to 054197bb has its CatchHandler @ 053197bc */
                    /* catch() { ... } // from try @ 053197b8 with catch @ 053197bc */
                    /* catch() { ... } // from try @ 05319774 with catch @ 053197c0 */
                    /* catch() { ... } // from try @ 053197b4 with catch @ 053197c4 */
  return;
}


