/*
FUNCTION_NAME: FUN_05db00b4
ENTRY_POINT: 05db00b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05db00b4(void *param_1,undefined4 param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_120 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3b48 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3b48 = 1;
  }
  if (*param_3 != 0) {
    uVar3 = FUN_05d4c208(*param_3,*(undefined8 *)
                                   Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    if (*param_3 != 0) {
      uVar4 = FUN_05d4c208(*param_3,*(undefined8 *)
                                     Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
      puVar2 = 
      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
      ;
      if (*param_3 != 0) {
        uVar5 = FUN_05d4c208(*param_3,*(undefined8 *)
                                       Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar2);
        }
        FUN_05db0214(auStack_120,param_2,uVar3,uVar4,uVar5,param_4);
        memcpy(param_1,auStack_120,200);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto LAB_05db0210;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05db0210:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


