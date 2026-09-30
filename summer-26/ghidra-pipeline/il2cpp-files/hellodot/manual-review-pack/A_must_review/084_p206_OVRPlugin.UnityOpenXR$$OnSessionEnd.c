/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 051e03d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609258);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066091f8);
                    /* try { // try from 051e03f0 to 052e03ff has its CatchHandler @ 051e0404 */
  *(undefined1 *)(unaff_x19 + 0x5da) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
                    /* catch() { ... } // from try @ 051e0398 with catch @ 051e0404
                       catch() { ... } // from try @ 051e03f0 with catch @ 051e0404 */
    lVar3 = *unaff_x22;
  }
                    /* try { // try from 051e0408 to 052e040b has its CatchHandler @ 051e0480 */
                    /* try { // try from 051e040c to 052e0427 has its CatchHandler @ 051e025c */
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051e0340 with catch @ 051e0410
                        */
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x22;
    }
                    /* try { // try from 051e0428 to 052e043f has its CatchHandler @ 051e0470 */
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609230);
                    /* try { // try from 051e0440 to 052e045f has its CatchHandler @ 051e025c */
    FUN_04a57bf8(lVar4,uVar5,*(undefined8 *)PTR_DAT_06609250,0);
    lVar3 = *unaff_x22;
                    /* try { // try from 051e0460 to 052e046f has its CatchHandler @ 051e0470 */
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x18) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
                    /* catch() { ... } // from try @ 051e0428 with catch @ 051e0470
                       catch() { ... } // from try @ 051e0460 with catch @ 051e0470 */
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_06609248;
  puVar1 = PTR_DAT_06609240;
                    /* try { // try from 051e0474 to 052e0477 has its CatchHandler @ 051e0480 */
                    /* try { // try from 051e0478 to 052e0483 has its CatchHandler @ 051e025c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051e0408 with catch @ 051e0480
                       catch(type#2 @ 00000000) { ... } // from try @ 051e0474 with catch @ 051e0480
                        */
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609238);
    FUN_04a66d30(lVar6,uVar5,*(undefined8 *)PTR_DAT_06609258,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = lVar6;
  }
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_03d87120(uVar5,3,lVar4,lVar6,*(undefined8 *)puVar1);
  return uVar5;
}


