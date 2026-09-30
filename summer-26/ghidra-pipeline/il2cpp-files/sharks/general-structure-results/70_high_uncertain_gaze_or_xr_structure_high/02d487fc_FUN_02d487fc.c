/*
FUNCTION_NAME: FUN_02d487fc
ENTRY_POINT: 02d487fc
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_02d487fc(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 02d48814 to 02e48817 has its CatchHandler @ 02d4882c */
  if (DAT_03a29308 == (code *)0x0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d48760 with catch @ 02d48818
                       try { // try from 02d48818 to 02e48853 has its CatchHandler @ 02d4858c */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d487c0 with catch @ 02d4881c
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d48794 with catch @ 02d48820
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d4877c with catch @ 02d48824
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d48744 with catch @ 02d48828
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d48814 with catch @ 02d4882c
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d486f4 with catch @ 02d48838
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02d48708 with catch @ 02d4883c
                        */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionCreate";
    uStack_38 = 0x20;
    local_28 = 8;
    local_30 = DAT_009a5708;
    local_24 = 0;
                    /* try { // try from 02d48854 to 02e48857 has its CatchHandler @ 02d48864 */
    DAT_03a29308 = (code *)thunk_FUN_01861e78(&local_50);
  }
                    /* catch() { ... } // from try @ 02d48854 with catch @ 02d48864 */
  (*DAT_03a29308)(param_1);
                    /* try { // try from 02d48870 to 02e4887b has its CatchHandler @ 02d48890 */
  return;
}


