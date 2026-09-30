/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 05f1b6b4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
                    /* try { // try from 05f1b6d4 to 0601b753 has its CatchHandler @ 05f1b754 */
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_05f1b8ac:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar8 = (long)param_2;
    do {
      uVar2 = uVar8 + 1;
      uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
      if (uVar5 <= (uint)uVar2) {
LAB_05f1b8a8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar7 = param_1 + uVar2 * 0x30;
      uVar15 = *(undefined8 *)(lVar7 + 0x38);
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      uVar11 = *(undefined8 *)(lVar7 + 0x48);
      uVar9 = *(undefined8 *)(lVar7 + 0x40);
      uVar19 = *(undefined8 *)(lVar7 + 0x28);
      uVar17 = *(undefined8 *)(lVar7 + 0x20);
      if ((long)param_2 <= (long)uVar8) {
        bVar3 = uVar5 <= (uint)uVar8;
        while( true ) {
          if (bVar3) goto LAB_05f1b8a8;
          uVar5 = (uint)uVar8;
          lVar7 = param_1 + (long)(int)uVar5 * 0x30;
          uVar16 = *(undefined8 *)(lVar7 + 0x38);
          uVar14 = *(undefined8 *)(lVar7 + 0x30);
          uVar12 = *(undefined8 *)(lVar7 + 0x48);
          uVar10 = *(undefined8 *)(lVar7 + 0x40);
          uVar20 = *(undefined8 *)(lVar7 + 0x28);
          uVar18 = *(undefined8 *)(lVar7 + 0x20);
          if (param_4 == 0) goto LAB_05f1b8ac;
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          uStack_60 = uVar18;
          uStack_58 = uVar20;
          uStack_50 = uVar14;
          uStack_48 = uVar16;
          uStack_40 = uVar10;
          uStack_38 = uVar12;
          uStack_30 = uVar17;
          uStack_28 = uVar19;
          uStack_20 = uVar13;
          uStack_18 = uVar15;
          uStack_10 = uVar9;
          uStack_8 = uVar11;
          iVar4 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&uStack_30,&uStack_60,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar4) break;
          if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_05f1b8a8;
          uVar18 = *(undefined8 *)(lVar7 + 0x30);
          uVar12 = *(undefined8 *)(lVar7 + 0x48);
          uVar10 = *(undefined8 *)(lVar7 + 0x40);
          uVar16 = *(undefined8 *)(lVar7 + 0x28);
          uVar14 = *(undefined8 *)(lVar7 + 0x20);
          if (*(uint *)(param_1 + 0x18) <= uVar5 + 1) goto LAB_05f1b8a8;
          lVar6 = param_1 + (long)(int)(uVar5 + 1) * 0x30;
          *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar7 + 0x38);
          *(undefined8 *)(lVar6 + 0x30) = uVar18;
          *(undefined8 *)(lVar6 + 0x48) = uVar12;
          *(undefined8 *)(lVar6 + 0x40) = uVar10;
          *(undefined8 *)(lVar6 + 0x28) = uVar16;
          *(undefined8 *)(lVar6 + 0x20) = uVar14;
          thunk_FUN_044bb4b4(lVar6 + 0x20,0);
          uVar5 = uVar5 - 1;
          uVar8 = (ulong)uVar5;
          if ((int)uVar5 < param_2) break;
          bVar3 = *(uint *)(param_1 + 0x18) <= uVar5;
        }
        uVar5 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = (int)uVar8 + 1;
      if (uVar5 <= uVar1) goto LAB_05f1b8a8;
      lVar7 = param_1 + (long)(int)uVar1 * 0x30;
      *(undefined8 *)(lVar7 + 0x38) = uVar15;
      *(undefined8 *)(lVar7 + 0x30) = uVar13;
      *(undefined8 *)(lVar7 + 0x48) = uVar11;
      *(undefined8 *)(lVar7 + 0x40) = uVar9;
      *(undefined8 *)(lVar7 + 0x28) = uVar19;
      *(undefined8 *)(lVar7 + 0x20) = uVar17;
      thunk_FUN_044bb4b4(lVar7 + 0x20,0);
      uVar8 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}


