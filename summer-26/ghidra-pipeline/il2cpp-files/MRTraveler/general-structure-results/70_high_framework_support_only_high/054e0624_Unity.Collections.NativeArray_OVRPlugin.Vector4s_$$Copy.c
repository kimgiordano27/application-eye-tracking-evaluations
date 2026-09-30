/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 054e0624
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if (param_3 == param_4) {
    return;
  }
  if (param_1 == 0) {
LAB_054e07c0:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    lVar4 = param_1 + (long)(int)param_3 * 0x18;
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    if (param_4 < *(uint *)(param_1 + 0x18)) {
      lVar5 = param_1 + (long)(int)param_4 * 0x18;
      uVar2 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      if (param_2 == 0) goto LAB_054e07c0;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_000000a0 = uVar7;
      in_stack_000000a8 = uVar9;
      in_stack_000000b0 = uVar2;
      in_stack_000000c0 = uVar6;
      in_stack_000000c8 = uVar8;
      in_stack_000000d0 = uVar3;
      iVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar1 < 1) {
        return;
      }
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        in_stack_000000d0 = *(undefined8 *)(lVar4 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar4 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar4 + 0x20);
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          uVar6 = *(undefined8 *)(lVar5 + 0x28);
          uVar3 = *(undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
          thunk_FUN_03d233cc(param_1 + (long)(int)param_3 * 0x18 + 0x20,0);
          if (param_4 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = in_stack_000000d0;
            *(undefined8 *)(lVar5 + 0x28) = in_stack_000000c8;
            *(undefined8 *)(lVar5 + 0x20) = in_stack_000000c0;
            thunk_FUN_03d233cc(param_1 + (long)(int)param_4 * 0x18 + 0x20,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


