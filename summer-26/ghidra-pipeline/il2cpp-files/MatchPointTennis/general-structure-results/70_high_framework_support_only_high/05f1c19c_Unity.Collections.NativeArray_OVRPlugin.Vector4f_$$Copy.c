/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05f1c19c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  if (param_1 == 0) {
LAB_05f1c370:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    lVar4 = param_1 + (long)(int)param_3 * 0x38;
    uVar15 = *(undefined8 *)(lVar4 + 0x38);
    uVar13 = *(undefined8 *)(lVar4 + 0x30);
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    uVar11 = *(undefined8 *)(lVar4 + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    if (param_4 < *(uint *)(param_1 + 0x18)) {
      lVar5 = param_1 + (long)(int)param_4 * 0x38;
      uVar2 = *(undefined8 *)(lVar5 + 0x50);
      uVar12 = *(undefined8 *)(lVar5 + 0x38);
      uVar10 = *(undefined8 *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x48);
      uVar6 = *(undefined8 *)(lVar5 + 0x40);
      uVar16 = *(undefined8 *)(lVar5 + 0x28);
      uVar14 = *(undefined8 *)(lVar5 + 0x20);
      if (param_2 == 0) goto LAB_05f1c370;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_00000180 = uVar14;
      in_stack_00000188 = uVar16;
      in_stack_00000190 = uVar10;
      in_stack_00000198 = uVar12;
      in_stack_000001a0 = uVar6;
      in_stack_000001a8 = uVar8;
      in_stack_000001b0 = uVar2;
      in_stack_000001c0 = uVar9;
      in_stack_000001c8 = uVar11;
      in_stack_000001d0 = uVar13;
      in_stack_000001d8 = uVar15;
      in_stack_000001e0 = uVar3;
      in_stack_000001e8 = uVar7;
      iVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x000001c0,&stack0x00000180,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar1 < 1) {
        return;
      }
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        uVar2 = *(undefined8 *)(lVar4 + 0x38);
        uVar15 = *(undefined8 *)(lVar4 + 0x30);
        uVar9 = *(undefined8 *)(lVar4 + 0x48);
        uVar7 = *(undefined8 *)(lVar4 + 0x40);
        uVar3 = *(undefined8 *)(lVar4 + 0x50);
        uVar13 = *(undefined8 *)(lVar4 + 0x28);
        uVar11 = *(undefined8 *)(lVar4 + 0x20);
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          uVar16 = *(undefined8 *)(lVar5 + 0x38);
          uVar14 = *(undefined8 *)(lVar5 + 0x30);
          uVar8 = *(undefined8 *)(lVar5 + 0x48);
          uVar6 = *(undefined8 *)(lVar5 + 0x40);
          uVar12 = *(undefined8 *)(lVar5 + 0x28);
          uVar10 = *(undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar5 + 0x50);
          *(undefined8 *)(lVar4 + 0x38) = uVar16;
          *(undefined8 *)(lVar4 + 0x30) = uVar14;
          *(undefined8 *)(lVar4 + 0x48) = uVar8;
          *(undefined8 *)(lVar4 + 0x40) = uVar6;
          *(undefined8 *)(lVar4 + 0x28) = uVar12;
          *(undefined8 *)(lVar4 + 0x20) = uVar10;
          thunk_FUN_044bb4b4(param_1 + (long)(int)param_3 * 0x38 + 0x28,0);
          if (param_4 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x50) = uVar3;
            *(undefined8 *)(lVar5 + 0x38) = uVar2;
            *(undefined8 *)(lVar5 + 0x30) = uVar15;
            *(undefined8 *)(lVar5 + 0x48) = uVar9;
            *(undefined8 *)(lVar5 + 0x40) = uVar7;
            *(undefined8 *)(lVar5 + 0x28) = uVar13;
            *(undefined8 *)(lVar5 + 0x20) = uVar11;
            thunk_FUN_044bb4b4(param_1 + (long)(int)param_4 * 0x38 + 0x28,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


