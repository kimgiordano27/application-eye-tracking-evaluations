/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 05ce4100
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose
               (long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_091a5d60;
  if ((DAT_0983d52e & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a5d60);
    DAT_0983d52e = 1;
  }
  uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
                    /* try { // try from 05ce4144 to 05de4153 has its CatchHandler @ 05ce4154 */
  FUN_071bc31c(uVar2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
                    /* catch() { ... } // from try @ 05ce40d0 with catch @ 05ce4154
                       catch() { ... } // from try @ 05ce4144 with catch @ 05ce4154 */
                    /* try { // try from 05ce4158 to 05de415b has its CatchHandler @ 05ce4164 */
  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x10),uVar2);
                    /* try { // try from 05ce415c to 05de4167 has its CatchHandler @ 05ce3f6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ce4158 with catch @ 05ce4164
                        */
  FUN_071bc31c(param_1,0);
  if (0 < param_2) {
    lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    *(int *)(param_1 + 0x28) = param_2;
    if ((*(byte *)(*(long *)(lVar4 + 8) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar2 = thunk_FUN_03d2ef40();
    FUN_06b6d004(uVar2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20));
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x18),uVar2);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28) + 0x135) & 1) == 0)
    {
      FUN_03d8f26c();
    }
    uVar2 = thunk_FUN_03d2ef40();
    FUN_05d0f5d0(uVar2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x20),uVar2);
    return;
  }
  thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
  uVar2 = thunk_FUN_03d2ef40();
  uVar3 = thunk_FUN_03d1e194(PTR_DAT_091fcda8);
  FUN_070cb7ec(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar2,param_3);
}


