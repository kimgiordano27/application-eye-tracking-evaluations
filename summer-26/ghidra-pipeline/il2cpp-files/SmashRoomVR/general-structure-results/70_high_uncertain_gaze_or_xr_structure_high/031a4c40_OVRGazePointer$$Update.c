/*
FUNCTION_NAME: OVRGazePointer$$Update
ENTRY_POINT: 031a4c40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_data_collection_or_telemetry_hits_2
*/


void OVRGazePointer__Update
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 031a4c44 to 032a4c47 has its CatchHandler @ 031a4c54 */
                    /* try { // try from 031a4c48 to 032a4c4f has its CatchHandler @ 031a4c50 */
                    /* catch() { ... } // from try @ 031a4c48 with catch @ 031a4c50 */
                    /* catch() { ... } // from try @ 031a4c44 with catch @ 031a4c54 */
                    /* catch() { ... } // from try @ 031a4afc with catch @ 031a4c58 */
                    /* catch() { ... } // from try @ 031a4ac8 with catch @ 031a4c5c */
  if ((DAT_03ff23f5 & 1) == 0) {
                    /* catch() { ... } // from try @ 031a4ab4 with catch @ 031a4c6c */
                    /* catch() { ... } // from try @ 031a4c34 with catch @ 031a4c70 */
                    /* catch() { ... } // from try @ 031a4a94 with catch @ 031a4c74 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 031a4c7c to 032a4c7f has its CatchHandler @ 031a4d10 */
    DAT_03ff23f5 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 031a4c80 to 032a4cbb has its CatchHandler @ 031a4838 */
  plVar2 = *(long **)(param_5 + 0x20);
                    /* catch() { ... } // from try @ 031a4954 with catch @ 031a4c84 */
  if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 031a4940 with catch @ 031a4c88 */
                    /* catch() { ... } // from try @ 031a4be0 with catch @ 031a4c8c */
                    /* catch() { ... } // from try @ 031a4b28 with catch @ 031a4c90 */
                    /* catch() { ... } // from try @ 031a4970 with catch @ 031a4c94 */
                    /* catch() { ... } // from try @ 031a49b8 with catch @ 031a4c98 */
                    /* catch() { ... } // from try @ 031a49ac with catch @ 031a4c9c */
                    /* catch() { ... } // from try @ 031a4984 with catch @ 031a4ca0 */
    (**(code **)(*plVar2 + 0x308))(plVar2,param_6,*(undefined8 *)(*plVar2 + 0x310));
    uVar4 = *(undefined8 *)(param_5 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 031a4cbc to 032a4cbf has its CatchHandler @ 031a4cd0 */
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      plVar2 = *(long **)(param_5 + 0x30);
                    /* catch() { ... } // from try @ 031a4cbc with catch @ 031a4cd0 */
      if (plVar2 == (long *)0x0) goto LAB_031a4d0c;
                    /* try { // try from 031a4cd4 to 032a4cfb has its CatchHandler @ 031a4d10 */
      (**(code **)(*plVar2 + 0x2a8))
                (param_1,param_2,param_3,param_4,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    }
                    /* try { // try from 031a4cfc to 032a4d07 has its CatchHandler @ 031a4838 */
                    /* try { // try from 031a4d08 to 032a4d0f has its CatchHandler @ 031a4d10 */
    FUN_031a4dd0(param_5);
    return;
  }
LAB_031a4d0c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


