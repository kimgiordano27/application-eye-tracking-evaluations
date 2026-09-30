/*
FUNCTION_NAME: FUN_03d228b8
ENTRY_POINT: 03d228b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03d228b8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined8 local_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined8 uStack_26c;
  undefined8 local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined8 local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((DAT_0483a018 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                      );
    DAT_0483a018 = 1;
  }
  puVar4 = Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__;
  puVar3 = Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__;
  FUN_035ac8e8(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar9 = NEON_fmov(0x3f800000,4);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x24) = uVar9;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),0);
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  if (DAT_0483388a == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0483388a = '\x01';
  }
  puVar2 = Method_Unity_Collections_NativeArray<float4>_Dispose__;
  uVar1 = _UNK_00c90ac8;
  uVar9 = _DAT_00c90ac0;
  uVar10 = *(undefined8 *)
            (*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8) + 8);
  *(undefined4 *)(param_1 + 0x48) = 5;
  *(undefined8 *)(param_1 + 0x60) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined8 *)(param_1 + 0x3c) = uVar10;
  *(undefined8 *)(param_1 + 0x74) = 0x3f80000000000000;
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_04063570(lVar5,0);
  plVar8 = (long *)(param_1 + 0x98);
  *plVar8 = lVar5;
  thunk_FUN_01f51358(plVar8,lVar5);
  lVar7 = *plVar8;
  lVar5 = FUN_01f08890(*(undefined8 *)puVar3,2);
  uStack_60 = 0;
  local_68 = 0;
  local_58 = 0;
  FUN_040634b0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0,&local_68,0);
  if (lVar5 == 0) goto LAB_03d22f60;
  uStack_78 = uStack_60;
  local_80 = local_68;
  local_70 = local_58;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x28) = uStack_60;
    *(undefined8 *)(lVar5 + 0x20) = local_68;
    *(undefined4 *)(lVar5 + 0x30) = local_58;
    uStack_90 = 0;
    local_98 = 0;
    local_88 = 0;
    FUN_040634b0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,&local_98,0);
    puVar3 = Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__;
    local_a0 = local_88;
    uStack_a8 = uStack_90;
    local_b0 = local_98;
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined4 *)(lVar5 + 0x44) = local_88;
      *(undefined8 *)(lVar5 + 0x3c) = uStack_90;
      *(undefined8 *)(lVar5 + 0x34) = local_98;
      lVar6 = FUN_01f08890(*(undefined8 *)puVar3,2);
      local_b8 = 0;
      FUN_040634c0(0x3f800000,0,&local_b8,0);
      if (lVar6 == 0) goto LAB_03d22f60;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = local_b8;
        local_c0 = 0;
        FUN_040634c0(0x3f800000,0x3f800000,&local_c0,0);
        if (1 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x28) = local_c0;
          puVar3 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
          ;
          if (lVar7 != 0) {
            FUN_040638ac(lVar7,lVar5,lVar6,0);
            lVar5 = FUN_01f08890(*(undefined8 *)puVar3,2);
            local_e0 = 0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            local_c8 = 0;
            local_d0 = 0;
            uStack_cc = 0;
            FUN_04038e54(0,0,0x3f800000,0x3f800000,&local_e0,0);
            if (lVar5 != 0) {
              uStack_ec = CONCAT44(local_c8,uStack_cc);
              uStack_f8 = uStack_d8;
              local_100 = local_e0;
              uStack_f4 = uStack_d4;
              uStack_f0 = local_d0;
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x34) = uStack_ec;
                *(ulong *)(lVar5 + 0x2c) = CONCAT44(local_d0,uStack_d4);
                *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_d4,uStack_d8);
                *(undefined8 *)(lVar5 + 0x20) = local_e0;
                local_120 = 0;
                uStack_118 = 0;
                uStack_114 = 0;
                uStack_108 = 0;
                uStack_110 = 0;
                uStack_10c = 0;
                FUN_04038e54(0x3f800000,0x3f800000,0x3f800000,0xbf800000,&local_120,0);
                puVar4 = 
                Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__;
                uStack_12c = CONCAT44(uStack_108,uStack_10c);
                uStack_130 = uStack_110;
                uStack_138 = uStack_118;
                local_134 = uStack_114;
                uStack_140 = local_120;
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x50) = uStack_12c;
                  *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_110,uStack_114);
                  *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_114,uStack_118);
                  *(undefined8 *)(lVar5 + 0x3c) = local_120;
                  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                  FUN_04039790(uVar9,lVar5,0);
                  *(undefined8 *)(param_1 + 0x80) = uVar9;
                  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x80),uVar9);
                  lVar5 = FUN_01f08890(*(undefined8 *)puVar3,2);
                  local_160 = 0;
                  uStack_158 = 0;
                  uStack_154 = 0;
                  local_148 = 0;
                  local_150 = 0;
                  uStack_14c = 0;
                  FUN_04038e44(0,0x3f800000,&local_160,0);
                  if (lVar5 == 0) goto LAB_03d22f60;
                  uStack_16c = CONCAT44(local_148,uStack_14c);
                  uStack_178 = uStack_158;
                  local_180 = local_160;
                  uStack_174 = uStack_154;
                  uStack_170 = local_150;
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x34) = uStack_16c;
                    *(ulong *)(lVar5 + 0x2c) = CONCAT44(local_150,uStack_154);
                    *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_154,uStack_158);
                    *(undefined8 *)(lVar5 + 0x20) = local_160;
                    local_1a0 = 0;
                    uStack_198 = 0;
                    uStack_194 = 0;
                    uStack_188 = 0;
                    uStack_190 = 0;
                    uStack_18c = 0;
                    FUN_04038e44(0x3f800000,0x3f800000,&local_1a0,0);
                    uStack_1ac = CONCAT44(uStack_188,uStack_18c);
                    uStack_1b0 = uStack_190;
                    uStack_1b8 = uStack_198;
                    local_1b4 = uStack_194;
                    uStack_1c0 = local_1a0;
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x50) = uStack_1ac;
                      *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_190,uStack_194);
                      *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_194,uStack_198);
                      *(undefined8 *)(lVar5 + 0x3c) = local_1a0;
                      uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_04039790(uVar9,lVar5,0);
                      *(undefined8 *)(param_1 + 0x88) = uVar9;
                      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x88),uVar9);
                      lVar5 = FUN_01f08890(*(undefined8 *)puVar3,2);
                      local_1e0 = 0;
                      uStack_1d8 = 0;
                      uStack_1d4 = 0;
                      local_1c8 = 0;
                      local_1d0 = 0;
                      uStack_1cc = 0;
                      FUN_04038e44(0,0,&local_1e0,0);
                      if (lVar5 == 0) goto LAB_03d22f60;
                      uStack_1ec = CONCAT44(local_1c8,uStack_1cc);
                      uStack_1f8 = uStack_1d8;
                      local_200 = local_1e0;
                      uStack_1f4 = uStack_1d4;
                      uStack_1f0 = local_1d0;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined8 *)(lVar5 + 0x34) = uStack_1ec;
                        *(ulong *)(lVar5 + 0x2c) = CONCAT44(local_1d0,uStack_1d4);
                        *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_1d4,uStack_1d8);
                        *(undefined8 *)(lVar5 + 0x20) = local_1e0;
                        local_220 = 0;
                        uStack_218 = 0;
                        uStack_214 = 0;
                        uStack_208 = 0;
                        uStack_210 = 0;
                        uStack_20c = 0;
                        FUN_04038e44(0x3f800000,0,&local_220,0);
                        uStack_22c = CONCAT44(uStack_208,uStack_20c);
                        uStack_230 = uStack_210;
                        uStack_238 = uStack_218;
                        local_234 = uStack_214;
                        uStack_240 = local_220;
                        if (1 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x50) = uStack_22c;
                          *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_210,uStack_214);
                          *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_214,uStack_218);
                          *(undefined8 *)(lVar5 + 0x3c) = local_220;
                          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                          FUN_04039790(uVar9,lVar5,0);
                          *(undefined8 *)(param_1 + 0xe8) = uVar9;
                          thunk_FUN_01f51358((undefined8 *)(param_1 + 0xe8),uVar9);
                          uVar1 = DAT_00c8e2b8;
                          uVar9 = DAT_00c8d7f0;
                          *(undefined4 *)(param_1 + 0x90) = 0;
                          *(undefined4 *)(param_1 + 0xa0) = 0x3f400000;
                          *(undefined8 *)(param_1 + 0xa4) = uVar9;
                          *(undefined8 *)(param_1 + 0xac) = uVar1;
                          *(undefined1 *)(param_1 + 0xb4) = 0;
                          if (DAT_0483388a == '\0') {
                            thunk_FUN_01efb3a4(
                                              Method_Unity_Collections_NativeArray<float4>_Dispose__
                                              );
                            DAT_0483388a = '\x01';
                          }
                          *(undefined8 *)(param_1 + 0xb8) =
                               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                          lVar5 = FUN_01f08890(*(undefined8 *)puVar3,2);
                          local_260 = 0;
                          uStack_258 = 0;
                          uStack_254 = 0;
                          local_248 = 0;
                          local_250 = 0;
                          uStack_24c = 0;
                          FUN_04038e54(0,0,0x3f800000,0x3f800000,&local_260,0);
                          if (lVar5 == 0) goto LAB_03d22f60;
                          uStack_26c = CONCAT44(local_248,uStack_24c);
                          uStack_278 = uStack_258;
                          local_280 = local_260;
                          uStack_274 = uStack_254;
                          uStack_270 = local_250;
                          if (*(int *)(lVar5 + 0x18) != 0) {
                            *(undefined8 *)(lVar5 + 0x34) = uStack_26c;
                            *(ulong *)(lVar5 + 0x2c) = CONCAT44(local_250,uStack_254);
                            *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_254,uStack_258);
                            *(undefined8 *)(lVar5 + 0x20) = local_260;
                            local_2a0 = 0;
                            uStack_298 = 0;
                            uStack_294 = 0;
                            uStack_288 = 0;
                            uStack_290 = 0;
                            uStack_28c = 0;
                            FUN_04038e54(0x3f800000,0x3f800000,0x3f800000,0xbf800000,&local_2a0,0);
                            if (1 < *(uint *)(lVar5 + 0x18)) {
                              *(ulong *)(lVar5 + 0x50) = CONCAT44(uStack_288,uStack_28c);
                              *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_290,uStack_294);
                              *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_294,uStack_298);
                              *(undefined8 *)(lVar5 + 0x3c) = local_2a0;
                              uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                              FUN_04039790(uVar9,lVar5,0);
                              *(undefined8 *)(param_1 + 0xc0) = uVar9;
                              thunk_FUN_01f51358((undefined8 *)(param_1 + 0xc0),uVar9);
                              uVar9 = DAT_00c8d578;
                              *(undefined1 *)(param_1 + 200) = 0;
                              *(undefined8 *)(param_1 + 0xd4) = 6;
                              *(undefined8 *)(param_1 + 0xcc) = uVar9;
                              *(undefined1 *)(param_1 + 0xdc) = 0;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_03d22f5c;
            }
          }
LAB_03d22f60:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
    }
  }
LAB_03d22f5c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


