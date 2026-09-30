/*
FUNCTION_NAME: FUN_03b267bc
ENTRY_POINT: 03b267bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_03b267bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_1c0 [88];
  undefined1 auStack_168 [88];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_048393b4 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_11619);
    DAT_048393b4 = 1;
  }
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar3 = Method_Drawing_CommandBuilder_Reserve<Color32,_CommandBuilder_CircleData>__;
  }
  else {
    uVar2 = FUN_0340eec4(param_2,0);
    if ((uVar2 & 1) == 0) {
      if (-1 < param_5) {
        uVar1 = FUN_03b1dd98(param_1,param_5);
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        local_60 = 0;
        local_50 = 0;
        lVar6 = *(long *)(param_1 + 200);
        if (lVar6 == 0) {
          FUN_03b1da04(param_1);
          lVar6 = *(long *)(param_1 + 200);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        puVar3 = StringLiteral_11619;
        local_b0 = Unity_Mathematics_math__cos(lVar6);
        FUN_02616114(auStack_168,local_b0,uVar1,*(undefined8 *)puVar3);
        memcpy(&local_110,auStack_168,0x58);
        auVar7 = FUN_03b3be0c(&local_110,0);
        Unity_Mathematics_math__forward(&local_a0,auVar7._0_8_,auVar7._8_8_,0);
        memcpy(auStack_1c0,&local_a0,0x58);
        FUN_03b26658(param_1,param_2,param_3,param_4,auStack_1c0);
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_11698);
      FUN_034f7db4(uVar4,uVar5,0);
      goto Unity_Mathematics_math__rcp;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar3 = Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar3);
  FUN_034efd20(uVar4,uVar5,0);
Unity_Mathematics_math__rcp:
  uVar5 = thunk_FUN_01efb3a4(StringLiteral_11706);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


