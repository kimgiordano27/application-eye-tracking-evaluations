/*
FUNCTION_NAME: FUN_05da26ec
ENTRY_POINT: 05da26ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05da26ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar2 = PTR_DAT_067cb280;
  if ((DAT_06bc3ad9 & 1) == 0) {
    FUN_02f08768(Method_System_Reflection_Emit_PropertyBuilder_GetIndexParameters__);
    FUN_02f08768(Method_System_Reflection_Emit_PropertyBuilder_GetSetMethod__);
    FUN_02f08768(Method_System_Reflection_Emit_PropertyBuilder_GetValue__);
    FUN_02f08768(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cca18);
    FUN_02f08768(PTR_DAT_067cca10);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__);
    FUN_02f08768(PTR_DAT_067c9370);
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067d13f0);
    FUN_02f08768(Method_System_Reflection_Emit_PropertyBuilder_IsDefined__);
    DAT_06bc3ad9 = 1;
  }
  puVar1 = PTR_DAT_067c9370;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar8 = FUN_05dd2fec(0);
  *param_1 = 0x100000001;
  uVar10 = FUN_060fbd10(0x4a,0x10,0);
  local_a0 = *param_1;
  uVar14 = 0x4a;
  if ((uVar10 & 1) == 0) {
    uVar14 = 0x30;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 1;
  local_80 = 2;
  FUN_060d69f4(&local_a0,uVar14,0);
  FUN_060d7044(&local_a0,0,0);
  uStack_98 = CONCAT44(uStack_98._4_4_,1);
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  uStack_d8 = uStack_98;
  local_e0 = local_a0;
  local_b0 = local_70;
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  uStack_118 = uStack_d8;
  local_120 = local_e0;
  uStack_108 = uStack_c8;
  uStack_110 = local_d0;
  uStack_f8 = uStack_b8;
  local_100 = local_c0;
  local_f0 = local_b0;
  FUN_060d5390(lVar11,&local_120,0);
  param_1[1] = lVar11;
  puVar2 = Method_System_Reflection_Emit_PropertyBuilder_IsDefined__;
  if (lVar11 != 0) {
    thunk_FUN_060f6284(lVar11,*(undefined8 *)
                               Method_System_Reflection_Emit_PropertyBuilder_IsDefined__,0);
    if (param_1[1] != 0) {
      FUN_060cc000(param_1[1],1,0);
      if (param_1[1] != 0) {
        FUN_060f74cc(param_1[1],0x3d,0);
        puVar3 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
        if (param_1[1] != 0) {
          FUN_060d4cf4(param_1[1],0);
          uVar15 = param_1[1];
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar15 = FUN_05c9f41c(uVar15,1,0);
          param_1[3] = uVar15;
          if (param_1[1] != 0) {
            FUN_060d597c(&local_154,param_1[1],0);
            lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            uStack_188 = uStack_14c;
            local_190 = local_154;
            uStack_178 = uStack_13c;
            uStack_180 = local_144;
            uStack_168 = uStack_12c;
            local_170 = local_134;
            local_160 = local_124;
            FUN_060d5390(lVar11,&local_190,0);
            param_1[2] = lVar11;
            if (lVar11 != 0) {
              thunk_FUN_060f6284(lVar11,*(undefined8 *)puVar2,0);
              if (param_1[2] != 0) {
                FUN_060cc000(param_1[2],1,0);
                puVar7 = Method_System_Reflection_Emit_PropertyBuilder_GetValue__;
                puVar6 = Method_System_Reflection_Emit_PropertyBuilder_GetSetMethod__;
                puVar5 = Method_System_Reflection_Emit_PropertyBuilder_GetIndexParameters__;
                puVar4 = OVRPlugin_OVRP_1_94_0_TypeInfo;
                puVar3 = PTR_DAT_067d13f0;
                puVar1 = PTR_DAT_067cca18;
                puVar2 = PTR_DAT_067cca10;
                if (param_1[2] != 0) {
                  FUN_060f74cc(param_1[2],0x3d,0);
                  uVar9 = FUN_060fb824(0);
                  if (uVar9 == 0) {
                    iVar13 = -3;
                  }
                  else {
                    iVar13 = (int)((long)((double)((ulong)uVar9 | 0x4330000000000000) +
                                         -4503599627370496.0) >> 0x34) + -0x401;
                  }
                  local_1a0 = 0;
                  uStack_1b8 = 0;
                  local_1c0 = 0;
                  uStack_1a8 = 0;
                  uStack_1b0 = 0;
                  FUN_05d73400(&local_1c0,iVar13,2,4,0);
                  uVar15 = *(undefined8 *)puVar7;
                  param_1[8] = local_1a0;
                  param_1[5] = uStack_1b8;
                  param_1[4] = local_1c0;
                  param_1[7] = uStack_1a8;
                  param_1[6] = uStack_1b0;
                  uVar15 = thunk_FUN_02f45270(uVar15);
                  FUN_048932a8(uVar15,iVar8,*(undefined8 *)puVar5);
                  uVar12 = *(undefined8 *)puVar4;
                  param_1[9] = uVar15;
                  uVar15 = thunk_FUN_02f45270(uVar12);
                  FUN_0484e61c(uVar15,iVar8,*(undefined8 *)puVar6);
                  uVar12 = *(undefined8 *)puVar2;
                  param_1[10] = uVar15;
                  uVar15 = thunk_FUN_02f45270(uVar12);
                  FUN_03a6b9cc(uVar15,iVar8,*(undefined8 *)puVar1);
                  uVar12 = *(undefined8 *)puVar2;
                  param_1[0xb] = uVar15;
                  uVar15 = thunk_FUN_02f45270(uVar12);
                  FUN_03a6b9cc(uVar15,iVar8,*(undefined8 *)puVar1);
                  uVar12 = *(undefined8 *)puVar3;
                  param_1[0xc] = uVar15;
                  uVar15 = FUN_02f0880c(uVar12,iVar8);
                  uVar12 = *(undefined8 *)puVar3;
                  param_1[0xd] = uVar15;
                  uVar15 = FUN_02f0880c(uVar12,iVar8);
                  uVar12 = *(undefined8 *)puVar3;
                  param_1[0xe] = uVar15;
                  uVar15 = FUN_02f0880c(uVar12,iVar8);
                  uVar12 = *(undefined8 *)puVar3;
                  param_1[0xf] = uVar15;
                  uVar15 = FUN_02f0880c(uVar12,iVar8 * 7);
                  param_1[0x10] = uVar15;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


