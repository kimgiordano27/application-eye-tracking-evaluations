/*
FUNCTION_NAME: System.Span<OVRPlugin.RoomFace>$$ToArray
ENTRY_POINT: 04db7888
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Span<OVRPlugin_RoomFace>__ToArray(long param_1)

{
  ulong unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined1 auVar1 [16];
  
                    /* try { // try from 04db788c to 04eb78bf has its CatchHandler @ 04db7454 */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db7874 with catch @ 04db789c
                        */
  auVar1._8_8_ = unaff_x19 & 0xffffffff;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db777c with catch @ 04db78a0
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db7800 with catch @ 04db78a4
                        */
  auVar1._0_8_ = unaff_x21 + (long)unaff_w20 * 0x80;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db7878 with catch @ 04db78a8
                        */
  return auVar1;
}


