/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 03169c48
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerAnnotation(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff209d & 1) == 0) {
                    /* try { // try from 03169c64 to 03269c73 has its CatchHandler @ 03169c74 */
    thunk_FUN_01ad9084(PTR_DAT_03d808a8);
                    /* catch() { ... } // from try @ 03169c28 with catch @ 03169c74
                       catch() { ... } // from try @ 03169c64 with catch @ 03169c74 */
    DAT_03ff209d = 1;
  }
                    /* try { // try from 03169c78 to 03269c7b has its CatchHandler @ 03169c84 */
                    /* try { // try from 03169c7c to 03269c87 has its CatchHandler @ 031692d0 */
                    /* catch() { ... } // from try @ 03169bb4 with catch @ 03169c84
                       catch() { ... } // from try @ 03169c78 with catch @ 03169c84 */
  plVar1 = (long *)(param_1 + 0x168);
  lVar3 = FUN_03084da8(*(undefined8 *)(param_1 + 0x168),param_2,0);
  puVar2 = PTR_DAT_03d808a8;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_03d808a8;
    lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_03169cdc;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_03169cdc:
  thunk_FUN_01b4f09c(plVar1,lVar4);
  return;
}


