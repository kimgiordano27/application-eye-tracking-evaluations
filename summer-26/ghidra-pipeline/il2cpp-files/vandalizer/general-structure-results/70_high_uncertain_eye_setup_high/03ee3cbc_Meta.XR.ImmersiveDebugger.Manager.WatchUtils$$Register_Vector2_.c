/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 03ee3cbc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x23;
  long unaff_x24;
  
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar1 = *unaff_x23;
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
                    /* try { // try from 03ee3ce0 to 03fe3ce3 has its CatchHandler @ 03ee3cf0 */
                    /* try { // try from 03ee3ce4 to 03fe3d0f has its CatchHandler @ 03ee3894 */
  uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 03ee3ce0 with catch @ 03ee3cf0
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 03ee3b54 with catch @ 03ee3cf4
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 03ee3b18 with catch @ 03ee3cf8
                        */
  uVar2 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar2,0);
  if (lVar1 != 0) {
                    /* try { // try from 03ee3d10 to 03fe3d13 has its CatchHandler @ 03ee3d28 */
                    /* catch() { ... } // from try @ 03ee3d10 with catch @ 03ee3d28 */
    FUN_055a862c(lVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


