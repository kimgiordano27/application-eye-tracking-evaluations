/*
FUNCTION_NAME: FUN_05d5aeb8
ENTRY_POINT: 05d5aeb8
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


void FUN_05d5aeb8(void *param_1,undefined8 param_2,undefined4 param_3,long *param_4,
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
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3930 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3930 = 1;
  }
  puVar4 = Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__;
  puVar3 = Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__;
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar8 = *param_4;
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
                    /* try { // try from 05d5af60 to 05e5af63 has its CatchHandler @ 05d5b174 */
    uVar5 = FUN_05d4c208(lVar8,*(undefined8 *)
                                Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
                    /* try { // try from 05d5af70 to 05e5af77 has its CatchHandler @ 05d5b188 */
    uVar6 = FUN_05d4c208(lVar8,*(undefined8 *)puVar3);
    uVar7 = FUN_05d4c208(lVar8,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar2);
    }
    FUN_05db0214(auStack_120,param_3,uVar5,uVar6,uVar7,param_5,0);
    memcpy(param_1,auStack_120,200);
                    /* try { // try from 05d5afcc to 05e5b037 has its CatchHandler @ 05d5b1ac */
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


