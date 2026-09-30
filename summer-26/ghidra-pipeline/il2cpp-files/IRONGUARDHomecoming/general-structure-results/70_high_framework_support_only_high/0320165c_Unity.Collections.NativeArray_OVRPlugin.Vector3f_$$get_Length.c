/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Length
ENTRY_POINT: 0320165c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Length
              (long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_024240e8(param_2,0x14,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58));
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_2);
  }
  puVar3 = (undefined8 *)thunk_FUN_01f11920(param_2);
  uVar5 = *puVar3;
  uVar1 = *(undefined4 *)(puVar3 + 1);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      *(undefined4 *)(lVar4 + 0x28) = uVar1;
    }
    else {
      FUN_032015dc(param_1,uVar5,uVar1,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    return *(int *)(param_1 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


