/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 03b62728
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Item
              (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  void *__src;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_210 [176];
  undefined1 auStack_160 [176];
  undefined1 auStack_b0 [176];
  
  FUN_0353936c(param_2,0x14,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58));
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (*(long *)(*param_2 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(param_2);
  }
  __src = (void *)thunk_FUN_02cea9e8(param_2);
  memcpy(auStack_210,__src,0xb0);
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
  memcpy(auStack_160,auStack_210,0xb0);
  lVar2 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar2 + (long)(int)uVar1 * 0xb0 + 0x20),auStack_160,0xb0);
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      memcpy(auStack_b0,auStack_160,0xb0);
      FUN_03b62674(param_1,auStack_b0,uVar4);
    }
    return *(int *)(param_1 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


