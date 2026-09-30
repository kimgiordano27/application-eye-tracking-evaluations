/*
FUNCTION_NAME: FUN_0349f7b8
ENTRY_POINT: 0349f7b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_0349f7b8(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_045370f0 == (code *)0x0) {
    local_60 = "OVRPlugin";
    local_58 = 9;
                    /* try { // try from 0349f808 to 0359f80b has its CatchHandler @ 0349f944 */
    local_50 = "ovrp_RequestSceneCapture";
    uStack_48 = 0x18;
                    /* try { // try from 0349f80c to 0359f823 has its CatchHandler @ 0349f940 */
    local_38 = 0x10;
    local_40 = DAT_00b91518;
    local_34 = 0;
    DAT_045370f0 = (code *)thunk_FUN_01c49924(&local_60);
  }
  local_58 = 0;
                    /* try { // try from 0349f824 to 0359f82b has its CatchHandler @ 0349f924 */
  local_60 = (char *)(ulong)*param_1;
  local_58 = thunk_FUN_01c49c44(*(undefined8 *)(param_1 + 2));
                    /* try { // try from 0349f834 to 0359f853 has its CatchHandler @ 0349f91c */
  uVar2 = (*DAT_045370f0)(&local_60,param_2);
  uVar1 = (uint)local_60;
                    /* try { // try from 0349f854 to 0359f87b has its CatchHandler @ 0349f900 */
  uVar3 = thunk_FUN_01c20cbc(local_58);
  thunk_FUN_01c20cbc(local_58);
  thunk_FUN_01c49c38(local_58);
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar3;
                    /* try { // try from 0349f87c to 0359f87f has its CatchHandler @ 0349f938 */
                    /* try { // try from 0349f880 to 0359f897 has its CatchHandler @ 0349f934 */
  return uVar2;
}


