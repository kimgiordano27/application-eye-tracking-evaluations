/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_IsCreated
ENTRY_POINT: 05f1b870
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,long param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
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
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uVar14 = param_4._8_8_;
  uVar12 = param_4._0_8_;
  uVar18 = param_3._8_8_;
  uVar16 = param_3._0_8_;
  uVar10 = param_2._8_8_;
  uVar8 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x38) = uVar14;
    *(undefined8 *)(param_1 + 0x30) = uVar12;
    *(undefined8 *)(param_1 + 0x48) = uVar10;
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    *(undefined8 *)(param_1 + 0x28) = uVar18;
    *(undefined8 *)(param_1 + 0x20) = uVar16;
    thunk_FUN_044bb4b4(param_5,param_6);
    if (unaff_x26 == unaff_x24) {
      return;
    }
    uVar2 = unaff_x26 + 1;
    uVar5 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar5 <= (uint)uVar2) break;
    lVar7 = unaff_x22 + uVar2 * unaff_x25;
    uVar14 = *(undefined8 *)(lVar7 + 0x38);
    uVar12 = *(undefined8 *)(lVar7 + 0x30);
    uVar10 = *(undefined8 *)(lVar7 + 0x48);
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
    uVar18 = *(undefined8 *)(lVar7 + 0x28);
    uVar16 = *(undefined8 *)(lVar7 + 0x20);
    if (unaff_x23 <= (long)unaff_x26) {
      bVar3 = uVar5 <= (uint)unaff_x26;
      while( true ) {
        if (bVar3) goto LAB_05f1b8a8;
        uVar5 = (uint)unaff_x26;
        lVar7 = unaff_x22 + (long)(int)uVar5 * (long)(int)unaff_x25;
        uVar15 = *(undefined8 *)(lVar7 + 0x38);
        uVar13 = *(undefined8 *)(lVar7 + 0x30);
        uVar11 = *(undefined8 *)(lVar7 + 0x48);
        uVar9 = *(undefined8 *)(lVar7 + 0x40);
        uVar19 = *(undefined8 *)(lVar7 + 0x28);
        uVar17 = *(undefined8 *)(lVar7 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_00000150 = uVar17;
        in_stack_00000158 = uVar19;
        in_stack_00000160 = uVar13;
        in_stack_00000168 = uVar15;
        in_stack_00000170 = uVar9;
        in_stack_00000178 = uVar11;
        in_stack_00000180 = uVar16;
        in_stack_00000188 = uVar18;
        in_stack_00000190 = uVar12;
        in_stack_00000198 = uVar14;
        in_stack_000001a0 = uVar8;
        in_stack_000001a8 = uVar10;
        iVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000180,&stack0x00000150,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar4) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_05f1b8a8;
        uVar17 = *(undefined8 *)(lVar7 + 0x30);
        uVar11 = *(undefined8 *)(lVar7 + 0x48);
        uVar9 = *(undefined8 *)(lVar7 + 0x40);
        uVar15 = *(undefined8 *)(lVar7 + 0x28);
        uVar13 = *(undefined8 *)(lVar7 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_05f1b8a8;
        lVar6 = unaff_x22 + (int)(uVar5 + 1) * unaff_x25;
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar7 + 0x38);
        *(undefined8 *)(lVar6 + 0x30) = uVar17;
        *(undefined8 *)(lVar6 + 0x48) = uVar11;
        *(undefined8 *)(lVar6 + 0x40) = uVar9;
        *(undefined8 *)(lVar6 + 0x28) = uVar15;
        *(undefined8 *)(lVar6 + 0x20) = uVar13;
        thunk_FUN_044bb4b4(lVar6 + 0x20,0);
        uVar5 = uVar5 - 1;
        unaff_x26 = (ulong)uVar5;
        if ((int)uVar5 < unaff_w21) break;
        bVar3 = *(uint *)(unaff_x22 + 0x18) <= uVar5;
      }
      uVar5 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar1 = (int)unaff_x26 + 1;
    if (uVar5 <= uVar1) break;
    param_1 = unaff_x22 + (int)uVar1 * unaff_x25;
    param_5 = param_1 + 0x20;
    param_6 = 0;
    unaff_x26 = uVar2;
  }
LAB_05f1b8a8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


