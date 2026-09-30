/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 051e064c
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionDestroy(undefined8 *param_1)

{
  undefined8 uVar1;
  long in_x9;
  undefined8 uVar2;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  uVar2 = *param_1;
  uVar1 = thunk_FUN_02cea894(**(undefined8 **)(in_x9 + 0x268));
                    /* catch() { ... } // from try @ 051e05bc with catch @ 051e065c
                       catch() { ... } // from try @ 051e0648 with catch @ 051e065c */
                    /* try { // try from 051e0660 to 052e0663 has its CatchHandler @ 051e0710 */
                    /* try { // try from 051e0664 to 052e067f has its CatchHandler @ 051e04e0 */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051e0554 with catch @ 051e0668
                        */
  FUN_04a66dd0(uVar1,uVar2,*(undefined8 *)PTR_DAT_06609288,0);
                    /* try { // try from 051e0680 to 052e0697 has its CatchHandler @ 051e0700 */
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = uVar1;
  uVar1 = thunk_FUN_02cea894(*unaff_x24);
                    /* try { // try from 051e0698 to 052e06ef has its CatchHandler @ 051e04e0 */
  FUN_03d875dc(uVar1,4);
  return uVar1;
}


