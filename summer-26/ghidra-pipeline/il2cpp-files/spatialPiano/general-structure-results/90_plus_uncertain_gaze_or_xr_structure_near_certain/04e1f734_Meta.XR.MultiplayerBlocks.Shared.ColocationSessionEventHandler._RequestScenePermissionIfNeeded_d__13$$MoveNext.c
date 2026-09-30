/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13$$MoveNext
ENTRY_POINT: 04e1f734
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13__MoveNext
               (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x21;
  long unaff_x22;
  uint uVar2;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    uVar1 = FUN_05ee6d80(unaff_x23);
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 04e1f764 to 04f1f773 has its CatchHandler @ 04e1f774 */
                    /* catch() { ... } // from try @ 04e1f688 with catch @ 04e1f774
                       catch() { ... } // from try @ 04e1f6c4 with catch @ 04e1f774
                       catch() { ... } // from try @ 04e1f6f0 with catch @ 04e1f774
                       catch() { ... } // from try @ 04e1f764 with catch @ 04e1f774 */
                    /* try { // try from 04e1f778 to 04f1f77b has its CatchHandler @ 04e1f784 */
                    /* try { // try from 04e1f77c to 04f1f787 has its CatchHandler @ 04e1f518 */
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 <= unaff_w19) break;
    memcpy(&stack0x00000050,unaff_x21,0x50);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      uVar2 = *(uint *)(unaff_x22 + 0x18);
    }
    if (uVar2 <= unaff_w19) break;
    param_2 = &stack0x00000050;
    param_3 = 0x50;
    unaff_x23 = unaff_x26 + (long)(int)unaff_w19 * (long)unaff_w27;
    param_1 = (undefined1 *)register0x00000008;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04e1f778 with catch @ 04e1f784
                        */
  FUN_02f089d0();
}


