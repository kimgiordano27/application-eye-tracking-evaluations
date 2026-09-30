/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 041a0fc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom
              (long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  FUN_0384870c(param_2,0x14,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58));
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_2);
    }
    puVar4 = (undefined8 *)thunk_FUN_02dd328c(param_2);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar3 = *(uint *)(param_1 + 0x18);
      if (uVar3 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
        *(uint *)(param_1 + 0x18) = uVar3 + 1;
        puVar4 = (undefined8 *)(lVar5 + 0x20);
        *puVar4 = uVar1;
        *(undefined8 *)(lVar5 + 0x28) = uVar2;
        LeanTween__value(puVar4,0);
      }
      else {
        FUN_041a0f4c(param_1,uVar1,uVar2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      return *(int *)(param_1 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


