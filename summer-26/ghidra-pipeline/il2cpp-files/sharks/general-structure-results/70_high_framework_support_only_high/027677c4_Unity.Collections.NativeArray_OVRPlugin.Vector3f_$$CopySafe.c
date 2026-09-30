/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 027677c4
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_02767948:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar7 = (long)param_2;
    do {
      uVar2 = uVar7 + 1;
      uVar6 = (uint)*(undefined8 *)(param_1 + 0x18);
      if (uVar6 <= (uint)uVar2) {
LAB_02767944:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar3 = param_1 + uVar2 * 0x20;
      uVar14 = *(undefined8 *)(lVar3 + 0x28);
      uVar12 = *(undefined8 *)(lVar3 + 0x20);
      uVar10 = *(undefined8 *)(lVar3 + 0x38);
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
      if ((long)param_2 <= (long)uVar7) {
        if (uVar6 <= (uint)uVar7) goto LAB_02767944;
        while( true ) {
          uVar6 = (uint)uVar7;
          lVar3 = param_1 + (long)(int)uVar6 * 0x20;
          uVar15 = *(undefined8 *)(lVar3 + 0x28);
          uVar13 = *(undefined8 *)(lVar3 + 0x20);
          uVar11 = *(undefined8 *)(lVar3 + 0x38);
          uVar9 = *(undefined8 *)(lVar3 + 0x30);
          if (param_4 == 0) goto LAB_02767948;
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          in_stack_000000e0 = uVar13;
          in_stack_000000e8 = uVar15;
          in_stack_000000f0 = uVar9;
          in_stack_000000f8 = uVar11;
          in_stack_00000100 = uVar12;
          in_stack_00000108 = uVar14;
          in_stack_00000110 = uVar8;
          in_stack_00000118 = uVar10;
          iVar5 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000100,&stack0x000000e0,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar5) break;
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_02767944;
          uVar13 = *(undefined8 *)(lVar3 + 0x20);
          uVar11 = *(undefined8 *)(lVar3 + 0x38);
          uVar9 = *(undefined8 *)(lVar3 + 0x30);
          if (*(uint *)(param_1 + 0x18) <= uVar6 + 1) goto LAB_02767944;
          lVar4 = param_1 + (long)(int)(uVar6 + 1) * 0x20;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = uVar13;
          *(undefined8 *)(lVar4 + 0x38) = uVar11;
          *(undefined8 *)(lVar4 + 0x30) = uVar9;
          thunk_FUN_0188fd20(lVar4 + 0x20,0);
          uVar6 = uVar6 - 1;
          uVar7 = (ulong)uVar6;
          if ((int)uVar6 < param_2) break;
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_02767944;
        }
        uVar6 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = (int)uVar7 + 1;
      if (uVar6 <= uVar1) goto LAB_02767944;
      lVar3 = param_1 + (long)(int)uVar1 * 0x20;
      *(undefined8 *)(lVar3 + 0x28) = uVar14;
      *(undefined8 *)(lVar3 + 0x20) = uVar12;
      *(undefined8 *)(lVar3 + 0x38) = uVar10;
      *(undefined8 *)(lVar3 + 0x30) = uVar8;
      thunk_FUN_0188fd20(lVar3 + 0x20,0);
      uVar7 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}


