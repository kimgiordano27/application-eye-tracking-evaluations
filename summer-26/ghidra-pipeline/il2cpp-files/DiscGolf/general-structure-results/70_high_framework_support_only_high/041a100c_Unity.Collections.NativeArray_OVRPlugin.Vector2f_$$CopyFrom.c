/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 041a100c
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


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 != (long *)0x0) {
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(param_1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    puVar4 = (undefined8 *)thunk_FUN_02dd328c();
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar3 = *(uint *)(unaff_x19 + 0x18);
      if (uVar3 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
        puVar4 = (undefined8 *)(lVar5 + 0x20);
        *puVar4 = uVar1;
        *(undefined8 *)(lVar5 + 0x28) = uVar2;
        LeanTween__value(puVar4,0);
      }
      else {
        FUN_041a0f4c();
      }
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


