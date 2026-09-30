/*
FUNCTION_NAME: FUN_063abc24
ENTRY_POINT: 063abc24
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_063abc24(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_071cd4e6 & 1) == 0) {
    FUN_02f07e70(System_Action<TransformRecordSerializeData>_TypeInfo);
    FUN_02f07e70(System_Action<Type>_TypeInfo);
    FUN_02f07e70(System_Action<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(System_Action<ulong>_TypeInfo);
    FUN_02f07e70(System_Action<UntangledEntity>_TypeInfo);
    FUN_02f07e70(System_Action<UpdatePlayerStatisticsResult>_TypeInfo);
    FUN_02f07e70(System_Action<UpdateUserTitleDisplayNameResult>_TypeInfo);
    FUN_02f07e70(PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var);
    FUN_02f07e70(System_Action<VFXOutputEventArgs>_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var);
    FUN_02f07e70(System_Action<Vector3>_TypeInfo);
    FUN_02f07e70(System_Action<VectorImageRenderInfo>_TypeInfo);
    DAT_071cd4e6 = 1;
  }
  local_88 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_118 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  puVar3 = System_Action<UpdateUserTitleDisplayNameResult>_TypeInfo;
  puVar2 = System_Action<UIToolkitSubtitleElements>_TypeInfo;
  puVar1 = System_Action<Type>_TypeInfo;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03b648f8(&local_150,param_2,*(undefined8 *)System_Action<Vector3>_TypeInfo,&local_88,
               *(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)System_Action<UIToolkitSubtitleElements>_TypeInfo);
  lVar6 = local_88;
  uStack_78 = uStack_148;
  local_80 = local_150;
  uStack_68 = uStack_138;
  uStack_70 = local_140;
  uVar4 = FUN_0628b734(&local_80,param_4,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(lVar6 + 0x10) = uVar4;
  FUN_06282c94(&local_80,0,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar4 = **(undefined8 **)(lVar6 + 0xb8);
    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Action<TransformRecordSerializeData>_TypeInfo);
    FUN_045fdd18(lVar7,uVar4,*(undefined8 *)System_Action<ulong>_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_02f411dc(plVar5,lVar7);
  }
  FUN_03b64a64(&local_80,lVar7,*(undefined8 *)puVar1);
  FUN_0628be4c(&local_80,0);
  FUN_03b648f8(&local_150,param_2,*(undefined8 *)System_Action<VectorImageRenderInfo>_TypeInfo,
               &local_b8,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar2);
  uStack_a8 = uStack_148;
  local_b0 = local_150;
  uStack_98 = uStack_138;
  uStack_a0 = local_140;
  local_c0 = *(undefined4 *)(param_5 + 0x24);
  uStack_d8 = param_5[0x21];
  local_e0 = param_5[0x20];
  uStack_c8 = param_5[0x23];
  uStack_d0 = param_5[0x22];
  uStack_e8 = param_5[0x1f];
  local_f0 = param_5[0x1e];
  FUN_066b5b18(&local_f0,0x31,0);
  uStack_d8 = uStack_d8 & 0xffffffff;
  FUN_066b5c2c(&local_f0,0,0);
  uStack_e8 = CONCAT44(uStack_e8._4_4_,1);
  uStack_138 = uStack_d8;
  local_140 = local_e0;
  uStack_128 = uStack_c8;
  local_130 = uStack_d0;
  local_120 = local_c0;
  uStack_148 = uStack_e8;
  local_150 = local_f0;
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var + 0xe0) == 0)
  {
    thunk_FUN_02f12b58();
  }
  uStack_188 = uStack_148;
  local_190 = local_150;
  uStack_178 = uStack_138;
  uStack_180 = local_140;
  uStack_168 = uStack_128;
  local_170 = local_130;
  local_160 = local_120;
  uVar4 = FUN_06385084(param_2,&local_190,
                       *(undefined8 *)Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var,1
                       ,0,1,0);
  *param_3 = uVar4;
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(local_b8 + 0x238) = *(undefined8 *)(param_1 + 0xf8);
  thunk_FUN_02f411dc(local_b8 + 0x238);
  lVar6 = local_b8;
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined4 *)(local_b8 + 0x240) = *(undefined4 *)(param_1 + 0xf0);
  memmove((void *)(local_b8 + 0x28),param_5 + 3,0x210);
  thunk_FUN_02f411dc(lVar6 + 0xe8,0);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(local_b8 + 0x20) = *param_5;
  thunk_FUN_02f411dc();
  lVar6 = local_b8;
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined1 *)(local_b8 + 0x244) = *(undefined1 *)(param_1 + 0x100);
  *(undefined1 *)(local_b8 + 0x245) = *(undefined1 *)(param_1 + 0xf4);
  uVar4 = FUN_0628b734(&local_b0,param_4,0);
  lVar7 = local_b8;
  *(undefined8 *)(lVar6 + 0x10) = uVar4;
  uVar4 = FUN_0628b3b4(&local_b0,param_3,0,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x18) = uVar4;
    FUN_06282c94(&local_b0,0,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar6);
      lVar6 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar6);
        lVar6 = *(long *)puVar3;
      }
      uVar4 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)System_Action<TransformRecordSerializeData>_TypeInfo
                                );
      FUN_045fdd18(lVar7,uVar4,*(undefined8 *)System_Action<UntangledEntity>_TypeInfo,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar5 = lVar7;
      thunk_FUN_02f411dc(plVar5,lVar7);
    }
    FUN_03b64a64(&local_b0,lVar7,*(undefined8 *)puVar1);
    FUN_0628be4c(&local_b0,0);
    FUN_03b648f8(&local_150,param_2,*(undefined8 *)System_Action<VFXOutputEventArgs>_TypeInfo,
                 &local_118,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar2);
    uStack_108 = uStack_148;
    local_110 = local_150;
    uStack_f8 = uStack_138;
    local_100 = local_140;
    if (local_118 != 0) {
      *(undefined8 *)(local_118 + 0x20) = *param_5;
      thunk_FUN_02f411dc();
      lVar6 = local_118;
      uVar4 = FUN_0628b3b4(&local_110,param_3,0,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x18) = uVar4;
        FUN_06282c94(&local_110,0,0);
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar6);
          lVar6 = *(long *)puVar3;
        }
        lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
        if (lVar7 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_02f12b58(lVar6);
            lVar6 = *(long *)puVar3;
          }
          uVar4 = **(undefined8 **)(lVar6 + 0xb8);
          lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                      System_Action<TransformRecordSerializeData>_TypeInfo);
          FUN_045fdd18(lVar7,uVar4,
                       *(undefined8 *)System_Action<UpdatePlayerStatisticsResult>_TypeInfo,0);
          plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar5 = lVar7;
          thunk_FUN_02f411dc(plVar5,lVar7);
        }
        FUN_03b64a64(&local_110,lVar7,*(undefined8 *)puVar1);
        FUN_0628be4c(&local_110,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


