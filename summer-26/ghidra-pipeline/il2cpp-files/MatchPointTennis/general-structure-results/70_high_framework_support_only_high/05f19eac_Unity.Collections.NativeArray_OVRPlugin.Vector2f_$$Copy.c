/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05f19eac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar7;
  undefined8 uVar8;
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar7 = unaff_x23;
  while( true ) {
    uVar2 = uVar7 + 1;
    uVar6 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar6 <= (uint)uVar2) break;
    lVar3 = unaff_x22 + uVar2 * 0x40;
    uVar10 = *(undefined8 *)(lVar3 + 0x48);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
    uVar12 = *(undefined8 *)(lVar3 + 0x58);
    uVar11 = *(undefined8 *)(lVar3 + 0x50);
    uVar16 = *(undefined8 *)(lVar3 + 0x28);
    uVar15 = *(undefined8 *)(lVar3 + 0x20);
    uVar20 = *(undefined8 *)(lVar3 + 0x38);
    uVar19 = *(undefined8 *)(lVar3 + 0x30);
    if ((long)unaff_x23 <= (long)uVar7) {
      if (uVar6 <= (uint)uVar7) break;
      while( true ) {
        uVar6 = (uint)uVar7;
        lVar3 = unaff_x22 + (long)(int)uVar6 * 0x40;
        uVar13 = *(undefined8 *)(lVar3 + 0x48);
        uVar9 = *(undefined8 *)(lVar3 + 0x40);
        uVar21 = *(undefined8 *)(lVar3 + 0x28);
        uVar18 = *(undefined8 *)(lVar3 + 0x20);
        uVar17 = *(undefined8 *)(lVar3 + 0x38);
        uVar14 = *(undefined8 *)(lVar3 + 0x30);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_000001c0 = uVar18;
        in_stack_000001c8 = uVar21;
        in_stack_000001d0 = uVar14;
        in_stack_000001d8 = uVar17;
        in_stack_000001e0 = uVar9;
        in_stack_000001e8 = uVar13;
        iVar5 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000200,&stack0x000001c0,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar5) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_05f1a068;
        uVar9 = *(undefined8 *)(lVar3 + 0x40);
        uVar14 = *(undefined8 *)(lVar3 + 0x58);
        uVar13 = *(undefined8 *)(lVar3 + 0x50);
        uVar18 = *(undefined8 *)(lVar3 + 0x28);
        uVar17 = *(undefined8 *)(lVar3 + 0x20);
        uVar22 = *(undefined8 *)(lVar3 + 0x38);
        uVar21 = *(undefined8 *)(lVar3 + 0x30);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1) goto LAB_05f1a068;
        lVar4 = unaff_x22 + (long)(int)(uVar6 + 1) * 0x40;
        *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
        *(undefined8 *)(lVar4 + 0x40) = uVar9;
        *(undefined8 *)(lVar4 + 0x58) = uVar14;
        *(undefined8 *)(lVar4 + 0x50) = uVar13;
        *(undefined8 *)(lVar4 + 0x28) = uVar18;
        *(undefined8 *)(lVar4 + 0x20) = uVar17;
        *(undefined8 *)(lVar4 + 0x38) = uVar22;
        *(undefined8 *)(lVar4 + 0x30) = uVar21;
        thunk_FUN_044bb4b4(lVar4 + 0x20,0);
        uVar6 = uVar6 - 1;
        uVar7 = (ulong)uVar6;
        if ((int)uVar6 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_05f1a068;
      }
      uVar6 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar1 = (int)uVar7 + 1;
    if (uVar6 <= uVar1) break;
    lVar3 = unaff_x22 + (long)(int)uVar1 * 0x40;
    *(undefined8 *)(lVar3 + 0x48) = uVar10;
    *(undefined8 *)(lVar3 + 0x40) = uVar8;
    *(undefined8 *)(lVar3 + 0x58) = uVar12;
    *(undefined8 *)(lVar3 + 0x50) = uVar11;
    *(undefined8 *)(lVar3 + 0x28) = uVar16;
    *(undefined8 *)(lVar3 + 0x20) = uVar15;
    *(undefined8 *)(lVar3 + 0x38) = uVar20;
    *(undefined8 *)(lVar3 + 0x30) = uVar19;
    thunk_FUN_044bb4b4(lVar3 + 0x20,0);
    uVar7 = uVar2;
    if (uVar2 == unaff_x24) {
      return;
    }
  }
LAB_05f1a068:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


