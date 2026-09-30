/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 03c68fc8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate
               (long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* catch() { ... } // from try @ 03c68f48 with catch @ 03c68fcc
                       catch() { ... } // from try @ 03c68fbc with catch @ 03c68fcc */
                    /* try { // try from 03c68fd0 to 03d68fd3 has its CatchHandler @ 03c68fdc */
  iVar3 = (int)*(long *)(param_1 + 0x18);
                    /* try { // try from 03c68fd4 to 03d68fdf has its CatchHandler @ 03c68e30 */
  if (iVar3 < (int)param_3) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03c68fd0 with catch @ 03c68fdc
                        */
    uVar2 = iVar3 << 1;
    if (0x7feffffe < uVar2) {
      uVar2 = 0x7fefffff;
    }
    uVar1 = 4;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = uVar2;
    }
    if ((int)param_3 <= (int)uVar1) {
      param_3 = uVar1;
    }
    FUN_03c6834c(param_2,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xf0)
                );
    return;
  }
  return;
}


