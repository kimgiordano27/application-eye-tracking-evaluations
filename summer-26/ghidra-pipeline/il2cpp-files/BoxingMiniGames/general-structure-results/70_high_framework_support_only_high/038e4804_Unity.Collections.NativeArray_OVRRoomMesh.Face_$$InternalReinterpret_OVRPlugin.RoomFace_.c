/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRRoomMesh.Face>$$InternalReinterpret<OVRPlugin.RoomFace>
ENTRY_POINT: 038e4804
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


byte Unity_Collections_NativeArray<OVRRoomMesh_Face>__InternalReinterpret<OVRPlugin_RoomFace>
               (long param_1)

{
  ulong uVar1;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  
  while( true ) {
    if ((*(ushort *)(*(long *)(param_1 + 8) + 0x135) & 1) == 0) {
                    /* try { // try from 038e481c to 039e481f has its CatchHandler @ 038e4828 */
      FUN_0367c9fc(*(long *)(param_1 + 8));
                    /* catch() { ... } // from try @ 038e47c4 with catch @ 038e4820
                       try { // try from 038e4820 to 039e485f has its CatchHandler @ 038e4724 */
    }
                    /* catch() { ... } // from try @ 038e47f8 with catch @ 038e4824 */
                    /* catch() { ... } // from try @ 038e481c with catch @ 038e4828 */
    memcpy((void *)(unaff_x25 + 0x10),unaff_x20,0x70);
    uVar1 = thunk_FUN_05e72870();
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_x23 < unaff_x26;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x000000f0,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(&stack0x00000080,&stack0x000000f0,0x70);
    thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000080);
    param_1 = *(long *)(unaff_x19 + 0x38);
  }
  return unaff_w27 & 1;
}


