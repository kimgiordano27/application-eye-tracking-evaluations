/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 032039f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(undefined8 param_1,int param_2)

{
  int in_w8;
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
                    /* try { // try from 032039f8 to 033039fb has its CatchHandler @ 03203a04 */
                    /* try { // try from 032039fc to 03303a07 has its CatchHandler @ 032037a4 */
  if (param_2 < in_w8) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032039f8 with catch @ 03203a04
                        */
                    /* catch() { ... } // from try @ 03203a90 with catch @ 03203a08
                       catch() { ... } // from try @ 03203adc with catch @ 03203a08
                       catch() { ... } // from try @ 03203b08 with catch @ 03203a08
                       catch() { ... } // from try @ 03203b7c with catch @ 03203a08 */
    FUN_0358b620(0xf,0x15,0);
  }
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 != 0) {
    if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
      return;
    }
                    /* try { // try from 03203a40 to 03303a43 has its CatchHandler @ 03203aa4 */
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    if (unaff_w22 < 1) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      lVar1 = **(long **)(lVar1 + 0xb8);
      *plVar2 = lVar1;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x18);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
                    /* try { // try from 03203a5c to 03303a6b has its CatchHandler @ 03203aa8 */
      lVar1 = FUN_01f08890(lVar1,unaff_w22);
      if (0 < *(int *)(unaff_x20 + 0x18)) {
        FUN_0358d498(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
      }
      *plVar2 = lVar1;
    }
    thunk_FUN_01f51358(plVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


