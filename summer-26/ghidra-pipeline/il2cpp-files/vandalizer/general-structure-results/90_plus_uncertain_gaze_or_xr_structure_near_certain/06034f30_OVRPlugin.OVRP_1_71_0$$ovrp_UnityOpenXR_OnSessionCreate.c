/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 06034f30
PROGRAM: vandalizer-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long *unaff_x22;
  
                    /* try { // try from 06034f30 to 06134f33 has its CatchHandler @ 06034f78 */
                    /* try { // try from 06034f34 to 06134f6b has its CatchHandler @ 06034de8 */
  FUN_05d75504();
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar2 = param_1;
  thunk_FUN_0329bf60(puVar2,param_1);
  puVar1 = PTR_DAT_075f79a0;
  if (unaff_x19 != 0) {
                    /* try { // try from 06034f6c to 06134f6f has its CatchHandler @ 06034f74 */
                    /* try { // try from 06034f70 to 06134f8f has its CatchHandler @ 06034de8 */
    *(undefined8 *)(unaff_x19 + 0x70) = param_1;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034f6c with catch @ 06034f74
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034f30 with catch @ 06034f78
                        */
    thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x70),param_1);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034eb8 with catch @ 06034f7c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034f00 with catch @ 06034f80
                        */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
                    /* try { // try from 06034f90 to 06134f93 has its CatchHandler @ 06034fb8 */
                    /* try { // try from 06034f94 to 06134fbf has its CatchHandler @ 06034de8 */
    FUN_055e5704();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


