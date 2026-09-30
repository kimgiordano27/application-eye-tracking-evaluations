/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03c6ec5c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 unaff_x20;
  
  thunk_FUN_02d6ec50(param_1,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 8) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if ((**(char **)(lVar4 + 0xb8) != '\0') && (*(int *)(param_1 + 0x18) == 0)) {
      uVar3 = thunk_FUN_02d93fb0(0);
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
    thunk_FUN_02dd37b4();
  }
  thunk_FUN_02d6ec70(param_1,0);
  return iVar1 < 8;
}


