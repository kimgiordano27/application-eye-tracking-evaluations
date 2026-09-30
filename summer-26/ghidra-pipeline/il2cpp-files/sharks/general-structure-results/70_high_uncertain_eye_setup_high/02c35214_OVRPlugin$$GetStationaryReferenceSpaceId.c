/*
FUNCTION_NAME: OVRPlugin$$GetStationaryReferenceSpaceId
ENTRY_POINT: 02c35214
PROGRAM: sharks-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetStationaryReferenceSpaceId(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x40));
  *(undefined1 *)(unaff_x20 + 0xff3) = 1;
  lVar1 = thunk_FUN_01861bbc(*unaff_x21);
                    /* try { // try from 02c3522c to 02d35233 has its CatchHandler @ 02c3600c */
  FUN_02c35400();
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    *(long *)(unaff_x19 + 0x30) = lVar1;
    thunk_FUN_0188fd20((long *)(unaff_x19 + 0x30),lVar1);
    *(long *)(unaff_x19 + 0x38) = lVar1;
LAB_02c35280:
    thunk_FUN_0188fd20(unaff_x19 + 0x38,lVar1);
    return lVar1;
  }
  plVar3 = (long *)(unaff_x19 + 0x38);
  if (*plVar3 != 0) {
                    /* try { // try from 02c35248 to 02d3524f has its CatchHandler @ 02c36084 */
    plVar2 = (long *)(*plVar3 + 0x60);
    *plVar2 = lVar1;
    thunk_FUN_0188fd20(plVar2,lVar1);
    if (lVar1 != 0) {
                    /* try { // try from 02c35260 to 02d35267 has its CatchHandler @ 02c36080 */
      *(long *)(lVar1 + 0x58) = *plVar3;
      thunk_FUN_0188fd20();
      *plVar3 = lVar1;
      goto LAB_02c35280;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02c3529c to 02d352a3 has its CatchHandler @ 02c36038 */
  FUN_017fc5a8();
}


