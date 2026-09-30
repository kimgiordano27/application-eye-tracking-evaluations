/*
FUNCTION_NAME: FUN_02cfd03c
ENTRY_POINT: 02cfd03c
PROGRAM: vrfs-libil2cpp.so
SCORE: 152
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_1
*/


bool FUN_02cfd03c(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
                    /* try { // try from 02cfd040 to 02dfd043 has its CatchHandler @ 02cfd07c */
                    /* try { // try from 02cfd044 to 02dfd047 has its CatchHandler @ 02cfd098 */
                    /* try { // try from 02cfd048 to 02dfd04b has its CatchHandler @ 02cfd078 */
                    /* try { // try from 02cfd04c to 02dfd04f has its CatchHandler @ 02cfd074 */
  if (DAT_072360b0 == (code *)0x0) {
                    /* try { // try from 02cfd050 to 02dfd053 has its CatchHandler @ 02cfd070 */
                    /* try { // try from 02cfd054 to 02dfd057 has its CatchHandler @ 02cfd06c */
                    /* try { // try from 02cfd058 to 02dfd05b has its CatchHandler @ 02cfd068 */
                    /* try { // try from 02cfd05c to 02dfd05f has its CatchHandler @ 02cfd090 */
                    /* try { // try from 02cfd060 to 02dfd063 has its CatchHandler @ 02cfd064 */
                    /* catch() { ... } // from try @ 02cfd060 with catch @ 02cfd064
                       try { // try from 02cfd064 to 02dfd0bf has its CatchHandler @ 02cfce54 */
                    /* catch() { ... } // from try @ 02cfd058 with catch @ 02cfd068 */
                    /* catch() { ... } // from try @ 02cfd054 with catch @ 02cfd06c */
                    /* catch() { ... } // from try @ 02cfd050 with catch @ 02cfd070 */
                    /* catch() { ... } // from try @ 02cfd04c with catch @ 02cfd074 */
    local_18 = 0;
                    /* catch() { ... } // from try @ 02cfd048 with catch @ 02cfd078 */
    local_40 = "UnityOpenXR";
    uStack_38 = 0xb;
                    /* catch() { ... } // from try @ 02cfd040 with catch @ 02cfd07c */
    local_30 = "OculusFoveation_HasRequestedEyeTrackingPermissions";
    uStack_28 = 0x32;
                    /* catch() { ... } // from try @ 02cfd01c with catch @ 02cfd080 */
    local_20 = DAT_0533fbf8;
                    /* catch() { ... } // from try @ 02cfd00c with catch @ 02cfd084 */
    local_14 = 0;
                    /* catch() { ... } // from try @ 02cfcffc with catch @ 02cfd088 */
    DAT_072360b0 = (code *)thunk_FUN_015d07f0(&local_40);
                    /* catch() { ... } // from try @ 02cfcfe4 with catch @ 02cfd08c */
                    /* catch() { ... } // from try @ 02cfcfd8 with catch @ 02cfd090
                       catch() { ... } // from try @ 02cfd05c with catch @ 02cfd090 */
  }
                    /* catch() { ... } // from try @ 02cfcf1c with catch @ 02cfd094 */
  cVar1 = (*DAT_072360b0)();
                    /* catch() { ... } // from try @ 02cfceb8 with catch @ 02cfd098
                       catch() { ... } // from try @ 02cfd044 with catch @ 02cfd098 */
                    /* catch() { ... } // from try @ 02cfcf7c with catch @ 02cfd09c */
                    /* catch() { ... } // from try @ 02cfced0 with catch @ 02cfd0a0 */
                    /* catch() { ... } // from try @ 02cfcf00 with catch @ 02cfd0a4 */
                    /* catch() { ... } // from try @ 02cfce88 with catch @ 02cfd0a8 */
  return cVar1 != '\0';
}


