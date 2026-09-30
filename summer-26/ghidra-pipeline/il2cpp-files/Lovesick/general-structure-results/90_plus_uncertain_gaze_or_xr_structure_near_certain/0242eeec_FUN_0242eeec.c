/*
FUNCTION_NAME: FUN_0242eeec
ENTRY_POINT: 0242eeec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_0242eeec(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined8 local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  
  puVar4 = Method_System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_Create__;
  if ((DAT_0378239e & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_Create__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    DAT_0378239e = 1;
  }
  local_58 = 0;
  lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_78 = 0;
  local_60 = 0;
  FUN_0265f778(0,0,0x3f800000,0x3f800000,&local_78,0);
  if (lVar5 == 0)
  goto UnityEngine_XR_ARFoundation_AROcclusionManager__set_humanSegmentationStencilMode;
  uStack_8c = CONCAT44(local_60,uStack_64);
  uStack_98 = uStack_70;
  local_a0 = local_78;
  uStack_94 = uStack_6c;
  uStack_90 = uStack_68;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x34) = uStack_8c;
    *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_68,uStack_6c);
    *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(lVar5 + 0x20) = local_78;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,&local_c0,0);
    puVar3 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
    uStack_cc = CONCAT44(uStack_a8,uStack_ac);
    uStack_d0 = uStack_b0;
    uStack_d8 = uStack_b8;
    local_d4 = uStack_b4;
    uStack_e0 = local_c0;
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x50) = uStack_cc;
      *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_b0,uStack_b4);
      *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_b4,uStack_b8);
      *(undefined8 *)(lVar5 + 0x3c) = local_c0;
      uVar1 = DAT_028aa458;
      local_58 = DAT_028aa458;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar2 = 
      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_get_Count__;
      if (lVar6 != 0) {
        FUN_023ccf0c(0,lVar6,lVar5,0,&local_58,0);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar5 != 0) {
          FUN_023cd5c0(lVar5,lVar6,0,0);
          *(long *)(param_1 + 0x30) = lVar5;
          lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          local_100 = 0;
          local_e8 = 0;
          FUN_0265f778(0,0,0x3f800000,0x3f800000,&local_100,0);
          if (lVar5 != 0) {
            uStack_10c = CONCAT44(local_e8,uStack_ec);
            uStack_118 = uStack_f8;
            local_120 = local_100;
            uStack_114 = uStack_f4;
            uStack_110 = uStack_f0;
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined8 *)(lVar5 + 0x34) = uStack_10c;
              *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_f0,uStack_f4);
              *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_f4,uStack_f8);
              *(undefined8 *)(lVar5 + 0x20) = local_100;
              uStack_138 = 0;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12c = 0;
              local_140 = 0;
              uStack_128 = 0;
              FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,&local_140,0);
              uStack_14c = CONCAT44(uStack_128,uStack_12c);
              uStack_150 = uStack_130;
              uStack_158 = uStack_138;
              local_154 = uStack_134;
              uStack_160 = local_140;
              if (1 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x50) = uStack_14c;
                *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_130,uStack_134);
                *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_134,uStack_138);
                *(undefined8 *)(lVar5 + 0x3c) = local_140;
                local_58 = uVar1;
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                if (lVar6 != 0) {
                  FUN_023ccf0c(0,lVar6,lVar5,0,&local_58,0);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar5 != 0) {
                    FUN_023cd5c0(lVar5,lVar6,0,0);
                    *(long *)(param_1 + 0x38) = lVar5;
                    lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
                    uStack_178 = 0;
                    uStack_174 = 0;
                    uStack_170 = 0;
                    uStack_16c = 0;
                    local_180 = 0;
                    local_168 = 0;
                    FUN_0265f778(0,0,0x3f800000,0x3f800000,&local_180,0);
                    if (lVar5 != 0) {
                      uStack_18c = CONCAT44(local_168,uStack_16c);
                      uStack_198 = uStack_178;
                      local_1a0 = local_180;
                      uStack_194 = uStack_174;
                      uStack_190 = uStack_170;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined8 *)(lVar5 + 0x34) = uStack_18c;
                        *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_170,uStack_174);
                        *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_174,uStack_178);
                        *(undefined8 *)(lVar5 + 0x20) = local_180;
                        uStack_1b8 = 0;
                        uStack_1b4 = 0;
                        uStack_1b0 = 0;
                        uStack_1ac = 0;
                        local_1c0 = 0;
                        uStack_1a8 = 0;
                        FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,&local_1c0,0);
                        uStack_1cc = CONCAT44(uStack_1a8,uStack_1ac);
                        uStack_1d0 = uStack_1b0;
                        uStack_1d8 = uStack_1b8;
                        local_1d4 = uStack_1b4;
                        uStack_1e0 = local_1c0;
                        if (1 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x50) = uStack_1cc;
                          *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_1b0,uStack_1b4);
                          *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_1b4,uStack_1b8);
                          *(undefined8 *)(lVar5 + 0x3c) = local_1c0;
                          local_58 = uVar1;
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                          if (lVar6 != 0) {
                            FUN_023ccf0c(0,lVar6,lVar5,0,&local_58,0);
                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            if (lVar5 != 0) {
                              FUN_023cd5c0(lVar5,lVar6,0,0);
                              *(long *)(param_1 + 0x40) = lVar5;
                              lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
                              uStack_1f8 = 0;
                              uStack_1f4 = 0;
                              uStack_1f0 = 0;
                              uStack_1ec = 0;
                              local_200 = 0;
                              local_1e8 = 0;
                              FUN_0265f778(0,0,0x3f800000,0x3f800000,&local_200,0);
                              if (lVar5 != 0) {
                                uStack_20c = CONCAT44(local_1e8,uStack_1ec);
                                uStack_218 = uStack_1f8;
                                local_220 = local_200;
                                uStack_214 = uStack_1f4;
                                uStack_210 = uStack_1f0;
                                if (*(int *)(lVar5 + 0x18) != 0) {
                                  *(undefined8 *)(lVar5 + 0x34) = uStack_20c;
                                  *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_1f0,uStack_1f4);
                                  *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_1f4,uStack_1f8);
                                  *(undefined8 *)(lVar5 + 0x20) = local_200;
                                  uStack_238 = 0;
                                  uStack_234 = 0;
                                  uStack_230 = 0;
                                  uStack_22c = 0;
                                  local_240 = 0;
                                  uStack_228 = 0;
                                  FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                               &local_240,0);
                                  if (1 < *(uint *)(lVar5 + 0x18)) {
                                    *(ulong *)(lVar5 + 0x50) = CONCAT44(uStack_228,uStack_22c);
                                    *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_230,uStack_234);
                                    *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_234,uStack_238);
                                    *(undefined8 *)(lVar5 + 0x3c) = local_240;
                                    local_58 = uVar1;
                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                    if (lVar6 != 0) {
                                      FUN_023ccf0c(0,lVar6,lVar5,0,&local_58,0);
                                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                      if (lVar5 != 0) {
                                        FUN_023cd5c0(lVar5,lVar6,0,0);
                                        *(long *)(param_1 + 0x48) = lVar5;
                                        uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                        local_58 = uVar1;
                                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                        if (lVar5 != 0) {
                                          FUN_023ccf0c(0x3f000000,lVar5,uVar7,1,&local_58,0);
                                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                          if (lVar6 != 0) {
                                            FUN_023cd5c0(lVar6,lVar5,0,0);
                                            *(long *)(param_1 + 0x50) = lVar6;
                                            uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                            local_58 = uVar1;
                                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                            if (lVar5 != 0) {
                                              FUN_023ccf0c(0x3f000000,lVar5,uVar7,1,&local_58,0);
                                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                              if (lVar6 != 0) {
                                                FUN_023cd5c0(lVar6,lVar5,0,0);
                                                *(long *)(param_1 + 0x58) = lVar6;
                                                uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                                local_58 = uVar1;
                                                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                if (lVar5 != 0) {
                                                  FUN_023ccf0c(0x3f000000,lVar5,uVar7,0,&local_58,0)
                                                  ;
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar6 != 0) {
                                                    FUN_023cd5c0(lVar6,lVar5,0,0);
                                                    *(long *)(param_1 + 0x60) = lVar6;
                                                    uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                                    local_58 = uVar1;
                                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar5 != 0) {
                                                      FUN_023ccf0c(0x3f000000,lVar5,uVar7,0,
                                                                   &local_58,0);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar6 != 0) {
                                                        FUN_023cd5c0(lVar6,lVar5,0,0);
                                                        *(long *)(param_1 + 0x68) = lVar6;
                                                        FUN_023d012c(param_1,0);
                                                        return;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    goto 
                                    UnityEngine_XR_ARFoundation_AROcclusionManager__set_humanSegmentationStencilMode
                                    ;
                                  }
                                }
                                goto 
                                UnityEngine_XR_ARFoundation_AROcclusionManager__set_requestedHumanStencilMode
                                ;
                              }
                            }
                          }
                          goto 
                          UnityEngine_XR_ARFoundation_AROcclusionManager__set_humanSegmentationStencilMode
                          ;
                        }
                      }
                      goto 
                      UnityEngine_XR_ARFoundation_AROcclusionManager__set_requestedHumanStencilMode;
                    }
                  }
                }
                goto 
                UnityEngine_XR_ARFoundation_AROcclusionManager__set_humanSegmentationStencilMode;
              }
            }
            goto UnityEngine_XR_ARFoundation_AROcclusionManager__set_requestedHumanStencilMode;
          }
        }
      }
UnityEngine_XR_ARFoundation_AROcclusionManager__set_humanSegmentationStencilMode:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
UnityEngine_XR_ARFoundation_AROcclusionManager__set_requestedHumanStencilMode:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


