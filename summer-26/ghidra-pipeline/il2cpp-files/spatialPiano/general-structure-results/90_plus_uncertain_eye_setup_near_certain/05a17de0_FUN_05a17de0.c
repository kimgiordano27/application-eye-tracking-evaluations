/*
FUNCTION_NAME: FUN_05a17de0
ENTRY_POINT: 05a17de0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05a17de0(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_34;
  
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
                    /* try { // try from 05a17de8 to 05b17deb has its CatchHandler @ 05a17e48 */
                    /* try { // try from 05a17df8 to 05b17dff has its CatchHandler @ 05a17e68 */
                    /* try { // try from 05a17e00 to 05b17e03 has its CatchHandler @ 05a17e5c */
                    /* try { // try from 05a17e04 to 05b17e07 has its CatchHandler @ 05a17e64 */
                    /* try { // try from 05a17e08 to 05b17e0b has its CatchHandler @ 05a17e60 */
                    /* try { // try from 05a17e0c to 05b17e3f has its CatchHandler @ 05a17e58 */
  if ((DAT_06bc205b & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc205b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* try { // try from 05a17e40 to 05b17e43 has its CatchHandler @ 05a17e54 */
                    /* try { // try from 05a17e44 to 05b17e47 has its CatchHandler @ 05a17e4c */
                    /* catch() { ... } // from try @ 05a17de8 with catch @ 05a17e48
                       try { // try from 05a17e48 to 05b17e7f has its CatchHandler @ 05a17d20 */
                    /* catch() { ... } // from try @ 05a17e44 with catch @ 05a17e4c */
                    /* catch() { ... } // from try @ 05a17dd4 with catch @ 05a17e50 */
                    /* catch() { ... } // from try @ 05a17e40 with catch @ 05a17e54 */
  if ((param_1 != 0) &&
     (lVar3 = FUN_04f72020(param_1,**(undefined8 **)(*(long *)puVar1 + 0xb8),1,0), lVar3 != 0)) {
                    /* catch() { ... } // from try @ 05a17e0c with catch @ 05a17e58 */
    local_34 = *(int *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 05a17e00 with catch @ 05a17e5c */
                    /* catch() { ... } // from try @ 05a17db0 with catch @ 05a17e60
                       catch() { ... } // from try @ 05a17e08 with catch @ 05a17e60 */
    if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
                    /* catch() { ... } // from try @ 05a17d98 with catch @ 05a17e64
                       catch() { ... } // from try @ 05a17e04 with catch @ 05a17e64 */
                    /* catch() { ... } // from try @ 05a17d54 with catch @ 05a17e68
                       catch() { ... } // from try @ 05a17df8 with catch @ 05a17e68 */
    *param_3 = *(long *)(lVar3 + 0x20);
    *param_2 = 0;
    lVar4 = *param_3;
    if (local_34 == 1) {
      if (lVar4 == 0) goto LAB_05a17ed0;
                    /* try { // try from 05a17e98 to 05b17eeb has its CatchHandler @ 05a17d20 */
      sVar2 = FUN_04f69818(lVar4,0,0);
      if (sVar2 != 0x2c) {
        return;
      }
      lVar3 = 0;
      *param_2 = *param_3;
    }
    else {
                    /* try { // try from 05a17e80 to 05b17e97 has its CatchHandler @ 05a17efc */
      if (local_34 != 2) {
                    /* try { // try from 05a17eec to 05b17efb has its CatchHandler @ 05a17efc */
        uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_34);
                    /* catch() { ... } // from try @ 05a17e80 with catch @ 05a17efc
                       catch() { ... } // from try @ 05a17eec with catch @ 05a17efc */
                    /* try { // try from 05a17f00 to 05b17f03 has its CatchHandler @ 05a17f0c */
                    /* try { // try from 05a17f04 to 05b17f0f has its CatchHandler @ 05a17d20 */
        uVar6 = thunk_FUN_02f6ef30(
                                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupMarkerTracker>g__CreateTrackerAsync_5_0>d>__
                                  );
                    /* catch() { ... } // from try @ 05a17f00 with catch @ 05a17f0c */
        uVar5 = FUN_04f70018(uVar6,lVar4,uVar5,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
        uVar6 = thunk_FUN_02f45270();
        FUN_05055664(uVar6,uVar5,0);
        uVar5 = thunk_FUN_02f6ef30(
                                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar6,uVar5);
      }
      *param_2 = lVar4;
      lVar3 = *(long *)(lVar3 + 0x28);
    }
    *param_3 = lVar3;
    return;
  }
LAB_05a17ed0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


