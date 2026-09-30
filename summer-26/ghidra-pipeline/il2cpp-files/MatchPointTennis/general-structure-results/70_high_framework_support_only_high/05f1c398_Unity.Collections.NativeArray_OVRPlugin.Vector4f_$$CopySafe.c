/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 05f1c398
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe
               (long param_1,uint param_2,uint param_3)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  
  if (in_ZR) {
    return;
  }
  if (param_1 != 0) {
    if (param_2 < *(uint *)(param_1 + 0x18)) {
      lVar1 = param_1 + (long)(int)param_2 * 0x38;
      uVar14 = *(undefined8 *)(lVar1 + 0x38);
      uVar12 = *(undefined8 *)(lVar1 + 0x30);
      uVar6 = *(undefined8 *)(lVar1 + 0x48);
      uVar4 = *(undefined8 *)(lVar1 + 0x40);
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        puVar3 = (undefined8 *)(param_1 + 0x20 + (long)(int)param_3 * 0x38);
        uVar15 = puVar3[3];
        uVar13 = puVar3[2];
        uVar7 = puVar3[5];
        uVar5 = puVar3[4];
        uVar11 = puVar3[1];
        uVar9 = *puVar3;
        *(undefined8 *)(lVar1 + 0x50) = puVar3[6];
        *(undefined8 *)(lVar1 + 0x38) = uVar15;
        *(undefined8 *)(lVar1 + 0x30) = uVar13;
        *(undefined8 *)(lVar1 + 0x48) = uVar7;
        *(undefined8 *)(lVar1 + 0x40) = uVar5;
        *(undefined8 *)(lVar1 + 0x28) = uVar11;
        *(undefined8 *)(lVar1 + 0x20) = uVar9;
        thunk_FUN_044bb4b4(param_1 + 0x20 + (long)(int)param_2 * 0x38 + 8,0);
        if (param_3 < *(uint *)(param_1 + 0x18)) {
          puVar3[6] = uVar2;
          puVar3[3] = uVar14;
          puVar3[2] = uVar12;
          puVar3[5] = uVar6;
          puVar3[4] = uVar4;
          puVar3[1] = uVar10;
          *puVar3 = uVar8;
          thunk_FUN_044bb4b4(param_1 + (long)(int)param_3 * 0x38 + 0x28,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


