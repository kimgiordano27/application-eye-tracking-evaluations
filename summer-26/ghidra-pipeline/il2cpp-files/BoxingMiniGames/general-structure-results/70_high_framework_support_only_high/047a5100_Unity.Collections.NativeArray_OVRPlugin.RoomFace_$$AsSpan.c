/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$AsSpan
ENTRY_POINT: 047a5100
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


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__AsSpan(ushort *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
                    /* try { // try from 047a5100 to 048a5127 has its CatchHandler @ 047a5070 */
  if ((*param_1 & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar1 = thunk_FUN_0367fe20();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 047a5128 to 048a5137 has its CatchHandler @ 047a5138 */
    FUN_0367c9fc(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05e5ae34(uVar1,0);
                    /* catch() { ... } // from try @ 047a50e8 with catch @ 047a5138
                       catch() { ... } // from try @ 047a5128 with catch @ 047a5138 */
  lVar2 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 047a513c to 048a513f has its CatchHandler @ 047a5148 */
                    /* try { // try from 047a5140 to 048a514b has its CatchHandler @ 047a5070 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  thunk_FUN_036b7ad0(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


