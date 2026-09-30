/*
FUNCTION_NAME: FUN_03b2a488
ENTRY_POINT: 03b2a488
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03b2a488(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_180 [22];
  int local_128 [22];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_70 [16];
  
  if ((DAT_048393c7 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_11707);
    thunk_FUN_01efb3a4(StringLiteral_11619);
    thunk_FUN_01efb3a4(StringLiteral_11765);
    thunk_FUN_01efb3a4(StringLiteral_11766);
    thunk_FUN_01efb3a4(StringLiteral_11693);
    thunk_FUN_01efb3a4(StringLiteral_11767);
    thunk_FUN_01efb3a4(StringLiteral_11768);
    thunk_FUN_01efb3a4(StringLiteral_11769);
    thunk_FUN_01efb3a4(StringLiteral_11770);
    thunk_FUN_01efb3a4(StringLiteral_11771);
    DAT_048393c7 = 1;
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(
                               Method_Drawing_CommandBuilder_Reserve<Color32,_CommandBuilder_CircleData>__
                               );
    FUN_034efd20(uVar8,uVar10,0);
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11772);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar10);
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11765);
  FUN_03b2a854();
  puVar6 = StringLiteral_11771;
  puVar5 = StringLiteral_11770;
  puVar4 = StringLiteral_11769;
  puVar3 = StringLiteral_11767;
  puVar2 = StringLiteral_11766;
  puVar1 = StringLiteral_11693;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = FUN_03b2a8f0(lVar7,param_1);
  *(undefined4 *)(lVar7 + 0xf4) = 0x3d4ccccd;
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar3);
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar6);
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar2);
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar5);
  FUN_03b2aa68(uVar8,*(undefined8 *)puVar4);
  FUN_03b2c1e4();
  *(uint *)(lVar7 + 0x168) = *(uint *)(lVar7 + 0x168) | 0x200;
  uVar8 = FUN_03b41740(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),0);
  uVar9 = FUN_0340e600(uVar8,*(undefined8 *)puVar1,0);
  if ((uVar9 & 1) != 0) {
    uVar8 = *(undefined8 *)StringLiteral_11768;
    FUN_03b2c1e4(lVar7);
    *(undefined8 *)(lVar7 + 0xc0) = uVar8;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0xc0),uVar8);
  }
  if (param_2 < 0) {
    return lVar7;
  }
  local_70 = FUN_03b1c7b8(param_1);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_2 < local_70._12_4_) {
    FUN_02616114(local_128,local_70,param_2,*(undefined8 *)StringLiteral_11619);
    memcpy(&local_d0,local_128,0x58);
    uVar9 = FUN_03b31370(&local_d0,0);
    if ((uVar9 & 1) == 0) {
      FUN_03b2ac14(lVar7,param_2);
      return lVar7;
    }
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_11619);
    thunk_FUN_02616114(local_180,local_70,param_2,uVar8);
    memcpy(local_128,local_180,0x58);
    memcpy(local_180,local_128,0x58);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_11665);
    uVar8 = thunk_FUN_01f113fc(uVar8,local_180);
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11774);
    uVar8 = FUN_0340f2f0(uVar10,uVar8,param_1,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar11 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar11,uVar8,0);
  }
  else {
    local_128[0] = param_2;
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar8 = thunk_FUN_01f113fc(uVar8,local_128);
    thunk_FUN_01efb3a4(StringLiteral_11707);
    local_180[0] = local_70._12_4_;
    uVar10 = thunk_FUN_01efb3a4(puVar1);
    uVar10 = thunk_FUN_01f113fc(uVar10,local_180);
    uVar11 = thunk_FUN_01efb3a4(StringLiteral_11581);
    uVar8 = FUN_0340f334(uVar11,uVar8,param_1,uVar10,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar11 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11773);
    FUN_034f3578(uVar11,uVar8,uVar10,0);
  }
  uVar8 = thunk_FUN_01efb3a4(StringLiteral_11772);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar11,uVar8);
}


