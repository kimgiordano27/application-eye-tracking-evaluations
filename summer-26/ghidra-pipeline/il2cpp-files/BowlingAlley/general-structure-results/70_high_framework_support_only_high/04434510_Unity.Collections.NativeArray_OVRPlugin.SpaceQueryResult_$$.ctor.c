/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04434510
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


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
                    /* try { // try from 0443451c to 0453452b has its CatchHandler @ 0443452c */
  uVar4 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  local_30 = 0;
  lVar3 = *(long *)(param_2 + 0x20);
                    /* catch() { ... } // from try @ 044344dc with catch @ 0443452c
                       catch() { ... } // from try @ 0443451c with catch @ 0443452c */
                    /* try { // try from 04434530 to 04534533 has its CatchHandler @ 0443453c */
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 04434534 to 0453453f has its CatchHandler @ 04434464 */
    lVar3 = FUN_032934b8();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04434530 with catch @ 0443453c
                        */
  FUN_047f184c(&local_30,uVar4,uVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xe0));
  auVar2._8_8_ = local_28;
  auVar2._0_8_ = local_30;
  return auVar2;
}


