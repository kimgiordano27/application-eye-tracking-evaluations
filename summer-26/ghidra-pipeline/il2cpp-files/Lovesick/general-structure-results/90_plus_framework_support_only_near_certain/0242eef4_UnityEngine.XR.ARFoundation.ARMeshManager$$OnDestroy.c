/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARMeshManager$$OnDestroy
ENTRY_POINT: 0242eef4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_XR_ARFoundation_ARMeshManager__OnDestroy(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_8;
  
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
  uStack_8 = 0;
  lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_10 = 0;
  FUN_0265f778(0,0,0x3f800000,0x3f800000,&uStack_28,0);
  if (lVar5 == 0)
  goto UnityEngine_XR_ARFoundation_AROcclusionManager__set_humanSegmentationStencilMode;
  uStack_3c = CONCAT44(uStack_10,uStack_14);
  uStack_48 = uStack_20;
  uStack_50 = uStack_28;
  uStack_44 = uStack_1c;
  uStack_40 = uStack_18;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x34) = uStack_3c;
    *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_18,uStack_1c);
    *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)(lVar5 + 0x20) = uStack_28;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_70,0);
    puVar3 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
    uStack_7c = CONCAT44(uStack_58,uStack_5c);
    uStack_80 = uStack_60;
    uStack_88 = uStack_68;
    uStack_84 = uStack_64;
    uStack_90 = uStack_70;
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x50) = uStack_7c;
      *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_60,uStack_64);
      *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_64,uStack_68);
      *(undefined8 *)(lVar5 + 0x3c) = uStack_70;
      uVar1 = DAT_028aa458;
      uStack_8 = DAT_028aa458;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar2 = 
      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_get_Count__;
      if (lVar6 != 0) {
        FUN_023ccf0c(0,lVar6,lVar5,0,&uStack_8,0);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar5 != 0) {
          FUN_023cd5c0(lVar5,lVar6,0,0);
          *(long *)(param_1 + 0x30) = lVar5;
          lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          FUN_0265f778(0,0,0x3f800000,0x3f800000,&uStack_b0,0);
          if (lVar5 != 0) {
            uStack_bc = CONCAT44(uStack_98,uStack_9c);
            uStack_c8 = uStack_a8;
            uStack_d0 = uStack_b0;
            uStack_c4 = uStack_a4;
            uStack_c0 = uStack_a0;
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined8 *)(lVar5 + 0x34) = uStack_bc;
              *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_a0,uStack_a4);
              *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_a4,uStack_a8);
              *(undefined8 *)(lVar5 + 0x20) = uStack_b0;
              uStack_e8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_dc = 0;
              uStack_f0 = 0;
              uStack_d8 = 0;
              FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_f0,0);
              uStack_fc = CONCAT44(uStack_d8,uStack_dc);
              uStack_100 = uStack_e0;
              uStack_108 = uStack_e8;
              uStack_104 = uStack_e4;
              uStack_110 = uStack_f0;
              if (1 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x50) = uStack_fc;
                *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_e0,uStack_e4);
                *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_e4,uStack_e8);
                *(undefined8 *)(lVar5 + 0x3c) = uStack_f0;
                uStack_8 = uVar1;
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                if (lVar6 != 0) {
                  FUN_023ccf0c(0,lVar6,lVar5,0,&uStack_8,0);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar5 != 0) {
                    FUN_023cd5c0(lVar5,lVar6,0,0);
                    *(long *)(param_1 + 0x38) = lVar5;
                    lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
                    uStack_128 = 0;
                    uStack_124 = 0;
                    uStack_120 = 0;
                    uStack_11c = 0;
                    uStack_130 = 0;
                    uStack_118 = 0;
                    FUN_0265f778(0,0,0x3f800000,0x3f800000,&uStack_130,0);
                    if (lVar5 != 0) {
                      uStack_13c = CONCAT44(uStack_118,uStack_11c);
                      uStack_148 = uStack_128;
                      uStack_150 = uStack_130;
                      uStack_144 = uStack_124;
                      uStack_140 = uStack_120;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined8 *)(lVar5 + 0x34) = uStack_13c;
                        *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_120,uStack_124);
                        *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_124,uStack_128);
                        *(undefined8 *)(lVar5 + 0x20) = uStack_130;
                        uStack_168 = 0;
                        uStack_164 = 0;
                        uStack_160 = 0;
                        uStack_15c = 0;
                        uStack_170 = 0;
                        uStack_158 = 0;
                        FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_170,0);
                        uStack_17c = CONCAT44(uStack_158,uStack_15c);
                        uStack_180 = uStack_160;
                        uStack_188 = uStack_168;
                        uStack_184 = uStack_164;
                        uStack_190 = uStack_170;
                        if (1 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x50) = uStack_17c;
                          *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_160,uStack_164);
                          *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_164,uStack_168);
                          *(undefined8 *)(lVar5 + 0x3c) = uStack_170;
                          uStack_8 = uVar1;
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                          if (lVar6 != 0) {
                            FUN_023ccf0c(0,lVar6,lVar5,0,&uStack_8,0);
                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            if (lVar5 != 0) {
                              FUN_023cd5c0(lVar5,lVar6,0,0);
                              *(long *)(param_1 + 0x40) = lVar5;
                              lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,2);
                              uStack_1a8 = 0;
                              uStack_1a4 = 0;
                              uStack_1a0 = 0;
                              uStack_19c = 0;
                              uStack_1b0 = 0;
                              uStack_198 = 0;
                              FUN_0265f778(0,0,0x3f800000,0x3f800000,&uStack_1b0,0);
                              if (lVar5 != 0) {
                                uStack_1bc = CONCAT44(uStack_198,uStack_19c);
                                uStack_1c8 = uStack_1a8;
                                uStack_1d0 = uStack_1b0;
                                uStack_1c4 = uStack_1a4;
                                uStack_1c0 = uStack_1a0;
                                if (*(int *)(lVar5 + 0x18) != 0) {
                                  *(undefined8 *)(lVar5 + 0x34) = uStack_1bc;
                                  *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_1a0,uStack_1a4);
                                  *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_1a4,uStack_1a8);
                                  *(undefined8 *)(lVar5 + 0x20) = uStack_1b0;
                                  uStack_1e8 = 0;
                                  uStack_1e4 = 0;
                                  uStack_1e0 = 0;
                                  uStack_1dc = 0;
                                  uStack_1f0 = 0;
                                  uStack_1d8 = 0;
                                  FUN_0265f778(0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                               &uStack_1f0,0);
                                  if (1 < *(uint *)(lVar5 + 0x18)) {
                                    *(ulong *)(lVar5 + 0x50) = CONCAT44(uStack_1d8,uStack_1dc);
                                    *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_1e0,uStack_1e4);
                                    *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_1e4,uStack_1e8);
                                    *(undefined8 *)(lVar5 + 0x3c) = uStack_1f0;
                                    uStack_8 = uVar1;
                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                    if (lVar6 != 0) {
                                      FUN_023ccf0c(0,lVar6,lVar5,0,&uStack_8,0);
                                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                      if (lVar5 != 0) {
                                        FUN_023cd5c0(lVar5,lVar6,0,0);
                                        *(long *)(param_1 + 0x48) = lVar5;
                                        uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                        uStack_8 = uVar1;
                                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                        if (lVar5 != 0) {
                                          FUN_023ccf0c(0x3f000000,lVar5,uVar7,1,&uStack_8,0);
                                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                          if (lVar6 != 0) {
                                            FUN_023cd5c0(lVar6,lVar5,0,0);
                                            *(long *)(param_1 + 0x50) = lVar6;
                                            uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                            uStack_8 = uVar1;
                                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                            if (lVar5 != 0) {
                                              FUN_023ccf0c(0x3f000000,lVar5,uVar7,1,&uStack_8,0);
                                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                              if (lVar6 != 0) {
                                                FUN_023cd5c0(lVar6,lVar5,0,0);
                                                *(long *)(param_1 + 0x58) = lVar6;
                                                uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                                uStack_8 = uVar1;
                                                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                if (lVar5 != 0) {
                                                  FUN_023ccf0c(0x3f000000,lVar5,uVar7,0,&uStack_8,0)
                                                  ;
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar6 != 0) {
                                                    FUN_023cd5c0(lVar6,lVar5,0,0);
                                                    *(long *)(param_1 + 0x60) = lVar6;
                                                    uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                                                    uStack_8 = uVar1;
                                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar5 != 0) {
                                                      FUN_023ccf0c(0x3f000000,lVar5,uVar7,0,
                                                                   &uStack_8,0);
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


