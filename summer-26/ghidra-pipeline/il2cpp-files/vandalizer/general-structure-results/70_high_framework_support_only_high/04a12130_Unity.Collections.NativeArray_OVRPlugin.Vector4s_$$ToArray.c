/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 04a12130
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray
               (undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  if (param_3 < *(uint *)(unaff_x19 + 0x18)) {
    lVar1 = unaff_x19 + (long)(int)param_3 * 0x20;
    uVar10 = *(undefined8 *)(lVar1 + 0x28);
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 0x38);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    if (param_4 < *(uint *)(unaff_x19 + 0x18)) {
      lVar2 = unaff_x19 + (long)(int)param_4 * 0x20;
      uVar11 = *(undefined8 *)(lVar2 + 0x28);
      uVar9 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_000000c0 = uVar9;
      in_stack_000000c8 = uVar11;
      in_stack_000000d0 = uVar5;
      in_stack_000000d8 = uVar7;
      in_stack_000000e0 = uVar8;
      in_stack_000000e8 = uVar10;
      in_stack_000000f0 = uVar4;
      in_stack_000000f8 = uVar6;
      iVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x000000e0,&stack0x000000c0,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar3 < 1) {
        return;
      }
      if (param_3 < *(uint *)(unaff_x19 + 0x18)) {
        uVar10 = *(undefined8 *)(lVar1 + 0x28);
        uVar8 = *(undefined8 *)(lVar1 + 0x20);
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        uVar4 = *(undefined8 *)(lVar1 + 0x30);
        if (param_4 < *(uint *)(unaff_x19 + 0x18)) {
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          uVar7 = *(undefined8 *)(lVar2 + 0x38);
          uVar5 = *(undefined8 *)(lVar2 + 0x30);
          *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
          *(undefined8 *)(lVar1 + 0x20) = uVar9;
          *(undefined8 *)(lVar1 + 0x38) = uVar7;
          *(undefined8 *)(lVar1 + 0x30) = uVar5;
          thunk_FUN_0329bf60(unaff_x19 + (long)(int)param_3 * 0x20 + 0x30,0);
          if (param_4 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x28) = uVar10;
            *(undefined8 *)(lVar2 + 0x20) = uVar8;
            *(undefined8 *)(lVar2 + 0x38) = uVar6;
            *(undefined8 *)(lVar2 + 0x30) = uVar4;
            thunk_FUN_0329bf60(unaff_x19 + (long)(int)param_4 * 0x20 + 0x30,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


