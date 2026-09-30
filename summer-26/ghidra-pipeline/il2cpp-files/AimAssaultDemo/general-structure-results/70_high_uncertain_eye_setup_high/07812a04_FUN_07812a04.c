/*
FUNCTION_NAME: FUN_07812a04
ENTRY_POINT: 07812a04
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_07812a04(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0827231f & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    DAT_0827231f = 1;
  }
  local_90 = param_4[6];
  uStack_a8 = param_4[3];
  local_b0 = param_4[2];
  uStack_98 = param_4[5];
  uStack_a0 = param_4[4];
  uStack_b8 = param_4[1];
  local_c0 = *param_4;
  FUN_07720da4(param_1,param_2,param_3,&local_c0,0);
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(param_2);
    }
  }
  uStack_e8 = param_4[3];
  local_f0 = param_4[2];
  uStack_d8 = param_4[5];
  local_e0 = param_4[4];
  local_d0 = param_4[6];
  uStack_f8 = param_4[1];
  local_100 = *param_4;
  plVar3 = *(long **)(param_1 + 0x88);
  if (plVar3 != (long *)0x0) {
    local_80 = local_100;
    uStack_78 = uStack_f8;
    uStack_70 = local_f0;
    uStack_68 = uStack_e8;
    local_60 = local_e0;
    uStack_58 = uStack_d8;
    local_50 = local_d0;
    uVar4 = (**(code **)(*plVar3 + 0x178))
                      (plVar3,param_3,&local_80,*(undefined8 *)(*plVar3 + 0x180));
    if (param_2 != (long *)0x0) {
      FUN_07810fb8(param_2,uVar4);
      uStack_128 = param_4[3];
      local_130 = param_4[2];
      uStack_118 = param_4[5];
      local_120 = param_4[4];
      local_110 = param_4[6];
      uStack_138 = param_4[1];
      local_140 = *param_4;
      if (*(long *)(param_1 + 0x90) != 0) {
        local_180 = local_140;
        uStack_178 = uStack_138;
        uStack_170 = local_130;
        uStack_168 = uStack_128;
        local_160 = local_120;
        uStack_158 = uStack_118;
        local_150 = local_110;
        FUN_0775f430(&local_80,*(long *)(param_1 + 0x90),param_3,&local_180,0);
        uStack_198 = uStack_78;
        local_1a0 = local_80;
        uStack_188 = uStack_68;
        uStack_190 = uStack_70;
        FUN_07811100(param_2,&local_1a0);
        plVar3 = *(long **)(param_1 + 0x98);
        if (plVar3 != (long *)0x0) {
          local_80 = *param_4;
          uStack_78 = param_4[1];
          uStack_70 = param_4[2];
          uStack_68 = param_4[3];
          local_60 = param_4[4];
          uStack_58 = param_4[5];
          local_50 = param_4[6];
          uVar2 = (**(code **)(*plVar3 + 0x178))
                            (plVar3,param_3,&local_80,*(undefined8 *)(*plVar3 + 0x180));
          FUN_078113fc(param_2,uVar2 & 1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


