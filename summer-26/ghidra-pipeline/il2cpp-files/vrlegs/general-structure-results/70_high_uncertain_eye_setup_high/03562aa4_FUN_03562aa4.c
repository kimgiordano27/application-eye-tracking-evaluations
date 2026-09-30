/*
FUNCTION_NAME: FUN_03562aa4
ENTRY_POINT: 03562aa4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03562aa4(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  float fVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((DAT_0412df85 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df85 = 1;
    param_6 = extraout_x1;
  }
  auVar12._8_8_ = param_6;
  auVar12._0_8_ = *(long *)puVar2;
  lVar6 = *(long *)(param_5 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    auVar12 = thunk_FUN_01a58e78();
  }
  if (lVar6 != 0) {
    auVar12 = FUN_03699d3c(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x8c),0);
    if ((auVar12._0_8_ & 1) == 0) {
      return;
    }
    auVar12._8_8_ = auVar12._8_8_;
    auVar12._0_8_ = *(long *)puVar2;
    lVar6 = *(long *)(param_5 + 0x110);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      auVar12 = thunk_FUN_01a58e78();
    }
    if (lVar6 != 0) {
      uVar3 = FUN_036996d8(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x8c),0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      auVar12 = FUN_036d35a8(uVar3,0,0);
      if ((auVar12._0_8_ & 1) != 0) {
        return;
      }
      auVar12._8_8_ = auVar12._8_8_;
      auVar12._0_8_ = *(long *)puVar2;
      lVar6 = *(long *)(param_5 + 0x110);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        auVar12 = thunk_FUN_01a58e78();
      }
      if (lVar6 != 0) {
        fVar7 = (float)thunk_FUN_0369ba60(lVar6,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar2 + 0xb8) + 0x94),0);
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        uVar4 = (ulong)(uint)(param_2 * DAT_00d38a10);
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        uVar8 = (ulong)(uint)(param_3 * DAT_00d38a10);
        uVar11 = *puVar5;
        uVar10 = puVar5[1];
        uVar9 = puVar5[2];
        uVar3 = FUN_036c0af4(fVar7 * DAT_00d38a10,uVar4,uVar8,0);
        if (DAT_0411f16a == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f16a = '\x01';
        }
        FUN_036bc7e0(&local_f0,uVar11,uVar10,uVar9,uVar3,uVar4,uVar8,param_4,0);
        uStack_88 = uStack_c8;
        local_90 = local_d0;
        uStack_78 = uStack_b8;
        uStack_80 = uStack_c0;
        uStack_a8 = uStack_e8;
        local_b0 = local_f0;
        uStack_98 = uStack_d8;
        uStack_a0 = uStack_e0;
        *(undefined8 *)(param_5 + 0x784) = uStack_c8;
        *(undefined8 *)(param_5 + 0x77c) = local_d0;
        *(undefined8 *)(param_5 + 0x794) = uStack_b8;
        *(undefined8 *)(param_5 + 0x78c) = uStack_c0;
        *(undefined8 *)(param_5 + 0x764) = uStack_e8;
        *(undefined8 *)(param_5 + 0x75c) = local_f0;
        *(undefined8 *)(param_5 + 0x774) = uStack_d8;
        *(undefined8 *)(param_5 + 0x76c) = uStack_e0;
        uVar4 = CONCAT44(0,*(uint *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90));
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar4;
        auVar12 = auVar1 << 0x40;
        if (*(long *)(param_5 + 0x110) != 0) {
          uStack_128 = uStack_e8;
          local_130 = local_f0;
          uStack_118 = uStack_d8;
          uStack_120 = uStack_e0;
          uStack_108 = uStack_c8;
          local_110 = local_d0;
          uStack_f8 = uStack_b8;
          uStack_100 = uStack_c0;
          FUN_0369d35c(*(long *)(param_5 + 0x110),uVar4,&local_130,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c(auVar12._0_8_,auVar12._8_8_);
}


