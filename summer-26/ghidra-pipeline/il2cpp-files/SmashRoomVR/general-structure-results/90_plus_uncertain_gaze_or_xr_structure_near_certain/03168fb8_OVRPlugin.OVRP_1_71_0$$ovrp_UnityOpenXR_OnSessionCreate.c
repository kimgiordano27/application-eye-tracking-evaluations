/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 03168fb8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate
               (undefined8 param_1,undefined8 param_2,float param_3)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
                    /* try { // try from 03168fb8 to 03268fbf has its CatchHandler @ 03168fc0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03168fa0 with catch @ 03168fc0
                       catch(type#2 @ 00000000) { ... } // from try @ 03168fb8 with catch @ 03168fc0
                        */
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_2;
  if (*(int *)(*(long *)PTR_DAT_03d80700 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar2 = (float)param_2;
  fVar1 = (float)FUN_03164e98(&stack0x00000020);
  FUN_039148b4(fVar1 - unaff_s8,fVar2 - unaff_s9,param_3 - unaff_s10,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_03107d04(*(long *)(unaff_x19 + 0x30),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


