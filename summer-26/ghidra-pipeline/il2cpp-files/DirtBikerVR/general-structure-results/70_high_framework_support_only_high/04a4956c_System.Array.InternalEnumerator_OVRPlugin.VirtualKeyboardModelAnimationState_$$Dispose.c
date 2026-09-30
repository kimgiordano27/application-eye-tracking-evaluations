/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 04a4956c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (undefined8 param_1,undefined8 ****param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong __n;
  void *__dest;
  undefined8 ***local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  local_60 = param_2;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03ac4090(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0xfc);
  __dest = (void *)((long)&local_60 - (__n + 0xf & 0x1fffffff0));
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03ac4090(lVar3);
  }
  FUN_035198d0(param_1,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80),1);
  lVar4 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03ac4090(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
    param_2 = &local_60;
  }
  memcpy(__dest,param_2,__n);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03ac4090(lVar3);
  }
  FUN_03a8a740(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20,__dest,__n);
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  FUN_03515348(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40,0);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


