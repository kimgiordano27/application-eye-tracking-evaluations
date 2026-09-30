/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04433554
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,ulong param_4,long param_5
               )

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 04433574 to 04533577 has its CatchHandler @ 044335a0 */
                    /* try { // try from 04433578 to 0453357b has its CatchHandler @ 04433598 */
    lVar2 = FUN_032934b8(lVar2);
                    /* try { // try from 0443357c to 0453357f has its CatchHandler @ 044335a0 */
  }
                    /* try { // try from 04433580 to 04533583 has its CatchHandler @ 04433294 */
                    /* try { // try from 04433584 to 04533587 has its CatchHandler @ 04433590 */
                    /* try { // try from 04433588 to 045335bb has its CatchHandler @ 04433294 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 04433584 with catch @ 04433590
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 04433494 with catch @ 04433594
                        */
  FUN_04433700(param_2,param_3,param_1,**(undefined8 **)(lVar2 + 0xc0));
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 04433578 with catch @ 04433598
                        */
  if ((param_4 & 1) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 044333b8 with catch @ 0443359c
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 04433574 with catch @ 044335a0
                       catch(type#1 @ 06e40658) { ... } // from try @ 0443357c with catch @ 044335a0
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 044333f8 with catch @ 044335a4
                        */
    return;
  }
  uVar3 = *param_1;
  iVar1 = *(int *)(param_1 + 1);
                    /* try { // try from 044335bc to 045335bf has its CatchHandler @ 044335cc */
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
                    /* catch() { ... } // from try @ 044335bc with catch @ 044335cc */
  FUN_06baaf70(uVar3,(long)iVar1 << 5,0);
  return;
}


