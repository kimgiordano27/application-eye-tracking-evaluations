/*
FUNCTION_NAME: FMTSpiderSense.DataHeader.SkeletData$$GetRotation
ENTRY_POINT: 06257a9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FMTSpiderSense_DataHeader_SkeletData__GetRotation(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  undefined8 *puVar4;
  
  uVar1 = FUN_071c0684();
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* try { // try from 06257ab4 to 06357ab7 has its CatchHandler @ 06257ac8 */
  if (*(char *)(unaff_x19 + 0x5b) == '\0') {
RecordTrack__OnBeforeTrackSerialize:
    puVar4 = (undefined8 *)(unaff_x19 + 0x48);
    uVar2 = *puVar4;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar1 = FUN_071c0684(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06257bc8;
    uVar2 = thunk_FUN_0718a3d8(*(long *)(unaff_x19 + 0x50),0);
    uVar3 = *puVar4;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x22);
    }
    uVar1 = FUN_071c0684(uVar2,uVar3,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)(unaff_x19 + 0x40);
    uVar2 = *puVar4;
                    /* catch() { ... } // from try @ 06257ab4 with catch @ 06257ac8 */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
                    /* try { // try from 06257ad0 to 06357ad7 has its CatchHandler @ 06257b90 */
                    /* try { // try from 06257ad8 to 06357afb has its CatchHandler @ 062576ac */
                    /* catch() { ... } // from try @ 06257790 with catch @ 06257adc */
    uVar1 = FUN_071c0684(uVar2,0,0);
                    /* catch() { ... } // from try @ 06257830 with catch @ 06257ae0
                       catch() { ... } // from try @ 06257a40 with catch @ 06257ae0 */
    if ((uVar1 & 1) == 0) {
RecordPlayableBehaviour___ctor:
      if (*(char *)(unaff_x19 + 0x5b) != '\0') {
        return;
      }
      goto RecordTrack__OnBeforeTrackSerialize;
    }
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06257bc8;
    uVar2 = thunk_FUN_0718a3d8(*(long *)(unaff_x19 + 0x50),0);
    uVar3 = *puVar4;
                    /* try { // try from 06257afc to 06357b13 has its CatchHandler @ 06257b80 */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x22);
    }
                    /* try { // try from 06257b14 to 06357b6f has its CatchHandler @ 062576ac */
    uVar1 = FUN_071c0684(uVar2,uVar3,0);
    if ((uVar1 & 1) == 0) goto RecordPlayableBehaviour___ctor;
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    thunk_FUN_0718a4a8(*(long *)(unaff_x19 + 0x50),*puVar4,0);
    return;
  }
LAB_06257bc8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


