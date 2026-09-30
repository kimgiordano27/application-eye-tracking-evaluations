/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 04435304
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (undefined8 param_1,int param_2,long param_3,undefined8 param_4,int param_5,
               int param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  param_10 = FUN_0584a884(param_1,3,0);
  uVar2 = FUN_0584a794(&param_10,0);
  if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8(*(long *)(param_7 + 0x20));
  }
  lVar3 = FUN_0596f544(uVar2,0);
  lVar4 = *(long *)(param_7 + 0x20);
                    /* try { // try from 04435370 to 04535373 has its CatchHandler @ 0443537c */
  uVar1 = *(ushort *)(lVar4 + 0x135);
                    /* try { // try from 04435374 to 0453539f has its CatchHandler @ 04434eec */
  if ((uVar1 & 1) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 04435370 with catch @ 0443537c
                        */
    FUN_032934b8(lVar4);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 044352a4 with catch @ 04435380
                        */
    lVar4 = *(long *)(param_7 + 0x20);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 044351ec with catch @ 04435384
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0443522c with catch @ 04435388
                        */
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar4);
  }
                    /* try { // try from 044353a0 to 045353a3 has its CatchHandler @ 044353b8 */
  FUN_06baa6ec(param_3 + (param_5 << 5),lVar3 + (param_2 << 5),(long)(param_6 << 5),0);
                    /* catch() { ... } // from try @ 044353a0 with catch @ 044353b8 */
  FUN_0584a898(&param_10,0);
  return;
}


