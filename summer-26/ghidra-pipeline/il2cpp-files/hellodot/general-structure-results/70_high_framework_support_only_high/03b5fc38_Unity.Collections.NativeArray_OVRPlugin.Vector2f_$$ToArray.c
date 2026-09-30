/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 03b5fc38
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_Vector2f>__ToArray
               (long param_1,void *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_2c0 [352];
  undefined1 auStack_160 [352];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03b5fc9c with catch @ 03b5fca8
                        */
    bVar1 = false;
  }
  else {
    memcpy(auStack_2c0,param_2,0x160);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0) +
                                 0x20) + 0xc0) + 0x150);
    memcpy(auStack_160,auStack_2c0,0x160);
                    /* try { // try from 03b5fc88 to 03c5fc97 has its CatchHandler @ 03b5fc98 */
                    /* catch() { ... } // from try @ 03b5fc08 with catch @ 03b5fc98
                       catch() { ... } // from try @ 03b5fc88 with catch @ 03b5fc98 */
    iVar2 = FUN_035c5304(uVar3,auStack_160,0,iVar2,uVar4);
                    /* try { // try from 03b5fc9c to 03c5fc9f has its CatchHandler @ 03b5fca8 */
    bVar1 = iVar2 != -1;
                    /* try { // try from 03b5fca0 to 03c5fcab has its CatchHandler @ 03b5fb40 */
  }
  return bVar1;
}


