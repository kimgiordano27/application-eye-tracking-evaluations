/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 044335ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate
               (undefined8 *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    lVar4 = *(long *)(param_4 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
                    /* try { // try from 04433604 to 0453362b has its CatchHandler @ 04433640 */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    FUN_04433700(uVar3,param_3,param_1,**(undefined8 **)(lVar4 + 0xc0));
                    /* try { // try from 0443362c to 04533637 has its CatchHandler @ 04433294 */
    lVar4 = *(long *)(param_4 + 0x20);
    uVar1 = *param_1;
    uVar2 = param_1[1];
                    /* try { // try from 04433638 to 0453363f has its CatchHandler @ 04433640 */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04433604 with catch @ 04433640
                       catch(type#2 @ 00000000) { ... } // from try @ 04433638 with catch @ 04433640
                        */
    FUN_04433ee4(param_2,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


