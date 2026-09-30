/*
FUNCTION_NAME: FUN_05d5b0ec
ENTRY_POINT: 05d5b0ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d5b0ec(void *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_120 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 05d5b108 to 05e5b10b has its CatchHandler @ 05d5b190 */
                    /* try { // try from 05d5b10c to 05e5b14b has its CatchHandler @ 05d5ae38 */
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3932 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
                    /* try { // try from 05d5b14c to 05e5b14f has its CatchHandler @ 05d5b1a8 */
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
                    /* try { // try from 05d5b150 to 05e5b153 has its CatchHandler @ 05d5b1a4 */
                    /* try { // try from 05d5b154 to 05e5b157 has its CatchHandler @ 05d5b1a0 */
                    /* try { // try from 05d5b158 to 05e5b15f has its CatchHandler @ 05d5ae38 */
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
                    /* try { // try from 05d5b160 to 05e5b163 has its CatchHandler @ 05d5b184 */
    DAT_06bc3932 = 1;
  }
  puVar4 = Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__;
  puVar3 = Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__;
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
                    /* try { // try from 05d5b164 to 05e5b16b has its CatchHandler @ 05d5b190 */
  lVar8 = *param_4;
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
                    /* try { // try from 05d5b16c to 05e5b16f has its CatchHandler @ 05d5b180 */
                    /* try { // try from 05d5b170 to 05e5b173 has its CatchHandler @ 05d5b178 */
                    /* catch() { ... } // from try @ 05d5af60 with catch @ 05d5b174
                       try { // try from 05d5b174 to 05e5b1cb has its CatchHandler @ 05d5ae38 */
                    /* catch() { ... } // from try @ 05d5b170 with catch @ 05d5b178 */
                    /* catch() { ... } // from try @ 05d5b0b4 with catch @ 05d5b17c */
                    /* catch() { ... } // from try @ 05d5b16c with catch @ 05d5b180 */
                    /* catch() { ... } // from try @ 05d5b160 with catch @ 05d5b184 */
                    /* catch() { ... } // from try @ 05d5af70 with catch @ 05d5b188 */
                    /* catch() { ... } // from try @ 05d5b0d8 with catch @ 05d5b18c */
                    /* catch() { ... } // from try @ 05d5b108 with catch @ 05d5b190
                       catch() { ... } // from try @ 05d5b164 with catch @ 05d5b190 */
    uVar5 = FUN_05d4c208(lVar8,*(undefined8 *)
                                Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
                    /* catch() { ... } // from try @ 05d5b088 with catch @ 05d5b19c */
                    /* catch() { ... } // from try @ 05d5b154 with catch @ 05d5b1a0 */
                    /* catch() { ... } // from try @ 05d5b150 with catch @ 05d5b1a4 */
    uVar6 = FUN_05d4c208(lVar8,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 05d5b14c with catch @ 05d5b1a8 */
                    /* catch() { ... } // from try @ 05d5afcc with catch @ 05d5b1ac */
    uVar7 = FUN_05d4c208(lVar8,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 05d5b1cc to 05e5b1cf has its CatchHandler @ 05d5b1d8 */
      thunk_FUN_02f6670c(*(long *)puVar2);
    }
                    /* catch() { ... } // from try @ 05d5b1cc with catch @ 05d5b1d8 */
                    /* try { // try from 05d5b1e0 to 05e5b1e7 has its CatchHandler @ 05d5b21c */
                    /* try { // try from 05d5b1e8 to 05e5b1ff has its CatchHandler @ 05d5ae38 */
    FUN_05db0678(auStack_120,param_3,uVar5,uVar6,uVar7,param_5,0);
    memcpy(param_1,auStack_120,200);
                    /* try { // try from 05d5b200 to 05e5b203 has its CatchHandler @ 05d5b208 */
                    /* catch() { ... } // from try @ 05d5b200 with catch @ 05d5b208 */
                    /* try { // try from 05d5b20c to 05e5b213 has its CatchHandler @ 05d5b21c */
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 05d5b214 to 05e5b21f has its CatchHandler @ 05d5ae38 */
                    /* catch() { ... } // from try @ 05d5b1e0 with catch @ 05d5b21c
                       catch() { ... } // from try @ 05d5b20c with catch @ 05d5b21c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


