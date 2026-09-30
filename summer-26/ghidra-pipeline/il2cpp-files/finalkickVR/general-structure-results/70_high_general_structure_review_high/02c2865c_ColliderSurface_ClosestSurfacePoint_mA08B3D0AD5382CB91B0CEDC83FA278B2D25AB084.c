/*
FUNCTION_NAME: ColliderSurface_ClosestSurfacePoint_mA08B3D0AD5382CB91B0CEDC83FA278B2D25AB084
ENTRY_POINT: 02c2865c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_8;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte ColliderSurface_ClosestSurfacePoint_mA08B3D0AD5382CB91B0CEDC83FA278B2D25AB084
               (undefined4 param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5
               )

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uStack_32c;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  float local_300;
  ulong local_2f8;
  undefined4 local_2f0;
  ulong *local_2e8;
  undefined8 local_2d8;
  undefined4 local_2d0;
  float fStack_2cc;
  float local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  float fStack_294;
  float local_290;
  undefined4 local_288;
  float fStack_284;
  float local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_250;
  float fStack_24c;
  float local_248;
  ulong local_240;
  undefined4 local_238;
  ulong *local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  float local_210;
  undefined4 local_20c;
  float fStack_208;
  float local_204;
  undefined4 local_200;
  float fStack_1fc;
  float local_1f8;
  ulong local_1f0;
  undefined4 local_1e8;
  ulong *local_1e0;
  undefined4 local_1d4;
  float fStack_1d0;
  float local_1cc;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  void *local_188;
  float local_17c;
  undefined8 local_178;
  float local_170;
  float local_16c;
  undefined8 local_168;
  float local_160;
  float local_15c;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  undefined8 local_120;
  float local_118;
  ulong local_110;
  undefined4 local_108;
  ulong *local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_ec;
  float fStack_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  ulong local_d0;
  float local_c8;
  ulong *local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  ulong *local_38;
  long local_30;
  byte local_21;
  
  local_60 = 0;
  local_58 = 0.0;
  local_70 = 0;
  local_68 = 0.0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = *(void **)(param_2 + 0x20);
  local_d0 = *param_3;
  local_c8 = *(float *)(param_3 + 1);
  local_c0 = param_3;
  local_50 = param_5;
  local_44 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  NullCheck(local_b8);
  local_f8 = local_d0;
  uVar1 = local_f8;
  local_f0 = local_c8;
  local_f8._0_4_ = (undefined4)local_d0;
  uVar8 = (undefined4)local_f8;
  local_f8._4_4_ = (float)(local_d0 >> 0x20);
  fVar5 = local_f8._4_4_;
  fVar7 = local_c8;
  local_f8 = uVar1;
  local_ec = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(uVar8,local_b8);
  local_138 = CONCAT44(fVar5,local_ec);
  local_100 = local_38;
  local_110 = *local_38;
  local_140 = (undefined4)local_38[1];
  local_148._0_4_ = (undefined4)local_110;
  local_148._4_4_ = (undefined4)(local_110 >> 0x20);
  uVar8 = local_148._4_4_;
  uVar6 = (undefined4)local_148;
  local_148 = local_110;
  local_130 = fVar7;
  local_108 = local_140;
  fStack_e8 = fVar5;
  local_e4 = fVar7;
  local_e0 = local_138;
  local_d8 = fVar7;
  local_15c = (float)Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                               (local_ec,fVar5,fVar7,uVar6,uVar8,local_140,0);
  local_308 = CONCAT44(fVar5,local_15c);
  local_60 = local_308;
  local_58 = fVar7;
  local_158 = local_308;
  local_150 = fVar7;
  local_12c = local_15c;
  fStack_128 = fVar5;
  local_124 = fVar7;
  local_120 = local_308;
  local_118 = fVar7;
  if (((local_15c == 0.0) &&
      (local_16c = fVar5, local_168 = local_308, local_160 = fVar7, fVar5 == 0.0)) &&
     (local_17c = fVar7, local_178 = local_308, local_170 = fVar7, fVar7 == 0.0)) {
    local_188 = *(void **)(local_30 + 0x20);
    NullCheck(local_188);
    Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(&local_1b8,local_188);
    uStack_198 = uStack_1b0;
    local_1a0 = local_1b8;
    local_190 = local_1a8;
    local_1d4 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline
                          ((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 *)&local_90,
                           (MethodInfo *)0x0);
    local_218 = CONCAT44(fVar5,local_1d4);
    local_1e0 = local_38;
    local_1f0 = *local_38;
    local_220 = (undefined4)local_38[1];
    local_228._0_4_ = (undefined4)local_1f0;
    local_228._4_4_ = (undefined4)(local_1f0 >> 0x20);
    uVar8 = local_228._4_4_;
    uVar6 = (undefined4)local_228;
    local_228 = local_1f0;
    local_210 = fVar7;
    local_1e8 = local_220;
    fStack_1d0 = fVar5;
    local_1cc = fVar7;
    local_1c8 = local_218;
    local_1c0 = fVar7;
    local_20c = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                          (local_1d4,fVar5,fVar7,uVar6,uVar8,local_220,0);
    local_230 = local_38;
    local_240 = *local_38;
    uVar8 = (undefined4)local_38[1];
    local_278._0_4_ = (undefined4)local_240;
    local_278._4_4_ = (undefined4)(local_240 >> 0x20);
    uVar6 = local_278._4_4_;
    local_68 = fVar7;
    local_280 = fVar7;
    uVar4 = (undefined4)local_278;
    local_278 = local_240;
    local_270 = uVar8;
    local_248 = fVar7;
    local_238 = uVar8;
    fStack_208 = fVar5;
    local_204 = fVar7;
    local_1f8 = fVar7;
    local_70._0_4_ = local_20c;
    local_70._4_4_ = fVar5;
    local_288 = local_20c;
    fStack_284 = fVar5;
    local_250 = local_20c;
    fStack_24c = fVar5;
    local_200 = local_20c;
    fStack_1fc = fVar5;
    local_26c = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                          (uVar4,uVar6,uVar8,local_20c,fVar5,fVar7,0);
    local_2c0 = CONCAT44(uVar6,local_26c);
    local_298 = (undefined4)local_70;
    fStack_294 = local_70._4_4_;
    local_290 = local_68;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    local_2d0 = (undefined4)local_70;
    fStack_2cc = local_70._4_4_;
    local_2c8 = local_68;
    local_2b8 = uVar8;
    uStack_268 = uVar6;
    local_264 = uVar8;
    local_260 = local_2c0;
    local_258 = uVar8;
    Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C_inline
              (local_26c,uVar6,uVar8,(undefined4)local_70,local_70._4_4_,local_68,&local_2b0,0);
    lVar3 = local_30;
    uVar2 = local_40;
    uStack_a8 = uStack_2a8;
    local_b0 = local_2b0;
    local_a0 = local_2a0;
    local_2d8 = local_40;
    std::__ndk1::numeric_limits<float>::max();
    local_21 = ColliderSurface_Raycast_m5A7ADA1EBA593EA289B4891AB090CF990E6E39D5
                         (lVar3,&local_b0,uVar2,0);
  }
  else {
    local_2e8 = local_38;
    local_2f8 = *local_38;
    local_2f0 = (undefined4)local_38[1];
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    uStack_32c = (undefined4)(local_2f8 >> 0x20);
    local_300 = fVar7;
    Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C_inline
              (local_2f8 & 0xffffffff,uStack_32c,local_2f0,local_15c,fVar5,fVar7,&local_320);
    uStack_a8 = uStack_318;
    local_b0 = local_320;
    local_a0 = local_310;
    local_21 = ColliderSurface_Raycast_m5A7ADA1EBA593EA289B4891AB090CF990E6E39D5
                         (local_44,local_30,&local_b0,local_40,0);
  }
  local_21 = local_21 & 1;
  return local_21;
}


