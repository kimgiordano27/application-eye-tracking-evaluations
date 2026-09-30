/*
FUNCTION_NAME: FUN_06542e08
ENTRY_POINT: 06542e08
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06542e08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_x7;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = param_2;
  if ((DAT_076dfad3 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280a10);
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__)
    ;
    DAT_076dfad3 = 1;
  }
  puVar3 = Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__;
  puVar2 = PTR_DAT_07280a10;
  local_70 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x90);
      if (lVar5 == 0) {
LAB_06543160:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_06543164:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (*(char *)(lVar5 + lVar8 + 0x5d) == '\0') {
        uVar1 = *(undefined4 *)(lVar5 + lVar8 + 0x58);
        lVar5 = FUN_0653ae04(param_1,uVar1);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_1 + 0x90);
          if (lVar5 == 0) goto LAB_06543160;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_06543164;
          lVar5 = lVar5 + lVar8;
          uStack_158 = *(undefined8 *)(lVar5 + 0x38);
          local_160 = *(undefined8 *)(lVar5 + 0x30);
          uStack_148 = *(undefined8 *)(lVar5 + 0x48);
          local_150 = *(undefined8 *)(lVar5 + 0x40);
          local_140 = *(undefined8 *)(lVar5 + 0x50);
          uStack_168 = *(undefined8 *)(lVar5 + 0x28);
          local_170 = *(undefined8 *)(lVar5 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uStack_1a8 = uStack_168;
          local_1b0 = local_170;
          uStack_198 = uStack_158;
          uStack_1a0 = local_160;
          uStack_188 = uStack_148;
          local_190 = local_150;
          local_180 = local_140;
          fVar9 = (float)FUN_064ceb58(&local_68,&local_1b0,0);
          if (0.0 < fVar9) {
            lVar5 = *(long *)(param_1 + 0x90);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            lVar5 = lVar5 + lVar8;
            local_140 = *(undefined8 *)(lVar5 + 0x50);
            uStack_158 = *(undefined8 *)(lVar5 + 0x38);
            local_160 = *(undefined8 *)(lVar5 + 0x30);
            uStack_148 = *(undefined8 *)(lVar5 + 0x48);
            local_150 = *(undefined8 *)(lVar5 + 0x40);
            uStack_168 = *(undefined8 *)(lVar5 + 0x28);
            local_170 = *(undefined8 *)(lVar5 + 0x20);
            if (*(char *)(lVar5 + 0x5c) == '\0') {
              uVar4 = 0;
              puVar6 = &local_f0;
              uStack_e8 = uStack_168;
              local_f0 = local_170;
              uStack_d8 = uStack_158;
              uStack_e0 = local_160;
              uStack_c8 = uStack_148;
              local_d0 = local_150;
              local_c0 = local_140;
            }
            else {
              puVar6 = &local_b0;
              uVar4 = 0x10;
              uStack_a8 = uStack_168;
              local_b0 = local_170;
              uStack_98 = uStack_158;
              local_a0 = local_160;
              uStack_88 = uStack_148;
              local_90 = local_150;
              local_80 = local_140;
            }
            local_1c0 = puVar6[6];
            uStack_1d8 = puVar6[3];
            uStack_1e0 = puVar6[2];
            uStack_1c8 = puVar6[5];
            local_1d0 = puVar6[4];
            uStack_1e8 = puVar6[1];
            local_1f0 = *puVar6;
            local_130 = local_1f0;
            uStack_128 = uStack_1e8;
            local_120 = uStack_1e0;
            uStack_118 = uStack_1d8;
            uStack_110 = local_1d0;
            uStack_108 = uStack_1c8;
            local_100 = local_1c0;
            FUN_06543d2c(param_1,param_3,param_4,uVar1,0,&local_1f0,uVar4,in_x7,0,0);
            local_70 = FUN_0657eed4(0);
            FUN_03a29058(*(undefined8 *)(param_1 + 0x440),uVar1,&local_70,*(undefined8 *)puVar3);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x40;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x88));
  }
  return;
}


