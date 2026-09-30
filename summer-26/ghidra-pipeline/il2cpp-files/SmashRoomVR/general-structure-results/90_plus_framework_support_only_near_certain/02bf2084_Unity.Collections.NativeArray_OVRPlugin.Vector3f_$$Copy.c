/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 02bf2084
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(undefined8 param_1,int param_2)

{
  int in_w8;
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  if (param_2 < in_w8) {
                    /* try { // try from 02bf2094 to 02cf20bb has its CatchHandler @ 02bf20d0 */
    FUN_030608c4(0xf,0x15,0);
  }
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 != 0) {
    if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
                    /* try { // try from 02bf20bc to 02cf20c7 has its CatchHandler @ 02bf1cfc */
      return;
    }
                    /* try { // try from 02bf20c8 to 02cf20cf has its CatchHandler @ 02bf20d0 */
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bf2094 with catch @ 02bf20d0
                       catch(type#2 @ 00000000) { ... } // from try @ 02bf20c8 with catch @ 02bf20d0
                        */
    if (unaff_w22 < 1) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      lVar1 = **(long **)(lVar1 + 0xb8);
      *plVar2 = lVar1;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x18);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      lVar1 = FUN_01b47fd0(lVar1,unaff_w22);
      if (0 < *(int *)(unaff_x20 + 0x18)) {
        FUN_0306273c(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
      }
      *plVar2 = lVar1;
    }
    thunk_FUN_01b4f09c(plVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


