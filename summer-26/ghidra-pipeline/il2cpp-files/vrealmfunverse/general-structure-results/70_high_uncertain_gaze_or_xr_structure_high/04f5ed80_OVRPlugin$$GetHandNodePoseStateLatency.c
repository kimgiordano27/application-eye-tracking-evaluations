/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 04f5ed80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetHandNodePoseStateLatency(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c(System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo);
  FUN_02b3c81c(PTR_DAT_0631b248);
  *(undefined1 *)(unaff_x20 + 0xacc) = 1;
  plVar2 = (long *)FUN_03172fbc();
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
    *(undefined8 *)(unaff_x19 + 0x118) = 0;
  }
  else {
    lVar5 = *(long *)PTR_DAT_0631b248;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
                    /* try { // try from 04f5eddc to 0505edef has its CatchHandler @ 04f5ef9c */
    }
    else {
      plVar4 = plVar2;
                    /* try { // try from 04f5ee00 to 0505ee0f has its CatchHandler @ 04f5ef58 */
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar4 = (long *)0x0;
      }
    }
    *(long **)(unaff_x19 + 0x118) = plVar4;
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
                    /* try { // try from 04f5ee20 to 0505ee23 has its CatchHandler @ 04f5ef4c */
    }
    else {
                    /* try { // try from 04f5ee34 to 0505ee47 has its CatchHandler @ 04f5ef54 */
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar2 = (long *)0x0;
      }
    }
  }
  thunk_FUN_02bb0e9c(unaff_x19 + 0x118,plVar2);
  uVar3 = FUN_03172fbc();
  *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x130);
  return;
}


