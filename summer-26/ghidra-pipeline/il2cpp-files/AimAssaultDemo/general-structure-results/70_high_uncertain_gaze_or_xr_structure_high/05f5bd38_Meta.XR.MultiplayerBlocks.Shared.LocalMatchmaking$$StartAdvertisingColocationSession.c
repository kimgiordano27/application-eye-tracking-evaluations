/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartAdvertisingColocationSession
ENTRY_POINT: 05f5bd38
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartAdvertisingColocationSession
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
                    /* try { // try from 05f5bd38 to 0605bd43 has its CatchHandler @ 05f5bb9c */
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f5bd34 with catch @ 05f5bd40
                        */
    param_1 = FUN_03775678();
  }
                    /* catch() { ... } // from try @ 05f5bdc8 with catch @ 05f5bd44
                       catch() { ... } // from try @ 05f5be08 with catch @ 05f5bd44
                       catch() { ... } // from try @ 05f5be40 with catch @ 05f5bd44
                       catch() { ... } // from try @ 05f5be6c with catch @ 05f5bd44
                       catch() { ... } // from try @ 05f5bee0 with catch @ 05f5bd44 */
  lVar2 = **(long **)(param_1 + 0xb8);
  thunk_FUN_03749f34();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    lVar2 = FUN_05f5bde4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
                    /* try { // try from 05f5bd70 to 0605bdc7 has its CatchHandler @ 05f5bdd8 */
    thunk_FUN_03749f34();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    **(long **)(lVar1 + 0xb8) = lVar2;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
                    /* try { // try from 05f5bdc8 to 0605bdef has its CatchHandler @ 05f5bd44 */
    thunk_FUN_037aeb94(*(undefined8 *)(lVar1 + 0xb8),lVar2);
  }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5bd70 with catch @ 05f5bdd8
                        */
  return lVar2;
}


