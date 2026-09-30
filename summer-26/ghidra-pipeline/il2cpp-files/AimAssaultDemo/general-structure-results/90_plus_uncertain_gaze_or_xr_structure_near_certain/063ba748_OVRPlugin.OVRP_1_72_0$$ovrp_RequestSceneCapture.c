/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 063ba748
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
                    /* try { // try from 063ba748 to 064ba74b has its CatchHandler @ 063ba758 */
  puVar1 = PTR_DAT_07db7568;
                    /* catch() { ... } // from try @ 063ba748 with catch @ 063ba758 */
  if ((*(byte *)(unaff_x20 + 0x7c9) & 1) == 0) {
                    /* try { // try from 063ba764 to 064ba76f has its CatchHandler @ 063ba784 */
    FUN_0373b518(PTR_DAT_07db7568);
                    /* try { // try from 063ba770 to 064ba77b has its CatchHandler @ 063ba5fc */
    FUN_0373b518(PTR_DAT_07db71c0);
                    /* try { // try from 063ba77c to 064ba783 has its CatchHandler @ 063ba784 */
    *(undefined1 *)(unaff_x20 + 0x7c9) = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063ba764 with catch @ 063ba784
                       catch(type#2 @ 00000000) { ... } // from try @ 063ba77c with catch @ 063ba784
                        */
  lVar2 = FUN_03c6a8d4(param_3,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_054d3fe8(param_1,param_2,lVar2,*(undefined8 *)PTR_DAT_07db71c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


