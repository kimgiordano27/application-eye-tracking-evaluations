/*
FUNCTION_NAME: FUN_05e04180
ENTRY_POINT: 05e04180
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void FUN_05e04180(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x24;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
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
  undefined4 local_90;
  undefined1 local_74 [4];
  
  if ((DAT_06bc3df3 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
    DAT_06bc3df3 = 1;
  }
  puVar4 = Method_System_Net_Sockets_NetworkStream_Close__;
  local_90 = 0;
  local_74[0] = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  if ((*param_3 == 0) || (lVar8 = *(long *)(*param_3 + 0x28), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar5 = *(int *)(lVar8 + 0x10);
  if (iVar5 != -1) {
    memmove(&local_100,(void *)(*(long *)(lVar8 + 0x20) + (long)iVar5 * 0x74),0x74);
    uVar6 = FUN_034dac00(0xf,*(undefined8 *)puVar4);
    FUN_05c5cb4c(local_74,param_2,uVar6,0);
    local_150 = 0;
    puStack_148 = local_74;
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)(*param_3 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar14 = *(undefined4 *)(lVar8 + 0x1e4);
    uVar15 = *(undefined4 *)(lVar8 + 0x1e8);
    uVar16 = *(undefined4 *)(lVar8 + 0x1ec);
    if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db70c8(uVar14,uVar15,uVar16,param_2,0);
    if ((param_4 & 1) == 0) {
      if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar8 = *(long *)(*param_3 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05d6cd54(&local_1d0,lVar8,0,0);
      uStack_188 = uStack_1c8;
      local_190 = local_1d0;
      uStack_178 = uStack_1b8;
      local_180 = local_1c0;
      uStack_168 = uStack_1a8;
      local_170 = local_1b0;
      uStack_158 = uStack_198;
      local_160 = local_1a0;
      if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uStack_208 = uStack_188;
      local_210 = local_190;
      uStack_1f8 = uStack_178;
      uStack_200 = local_180;
      uStack_1e8 = uStack_168;
      local_1f0 = local_170;
      uStack_1d8 = uStack_158;
      uStack_1e0 = local_160;
      FUN_05db7160(param_2,&local_210,0);
    }
    if (0 < *(int *)(param_1 + 200)) {
      lVar12 = 0;
      lVar13 = 0;
      uVar11 = 0;
      lVar8 = 0x20;
      do {
        if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar10 = *(long *)(param_1 + 0x138);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar10 = lVar10 + lVar12;
        uStack_188 = *(undefined8 *)(lVar10 + 0x68);
        local_190 = *(undefined8 *)(lVar10 + 0x60);
        uStack_178 = *(undefined8 *)(lVar10 + 0x78);
        local_180 = *(undefined8 *)(lVar10 + 0x70);
        uStack_168 = *(undefined8 *)(lVar10 + 0x88);
        local_170 = *(undefined8 *)(lVar10 + 0x80);
        uStack_158 = *(undefined8 *)(lVar10 + 0x98);
        local_160 = *(undefined8 *)(lVar10 + 0x90);
        uVar6 = *(undefined8 *)(*param_3 + 0x30);
        iVar3 = *(int *)(lVar10 + 0xe8);
        if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack_248 = uStack_188;
        local_250 = local_190;
        uStack_238 = uStack_178;
        uStack_240 = local_180;
        uStack_228 = uStack_168;
        local_230 = local_170;
        uStack_218 = uStack_158;
        uStack_220 = local_160;
        FUN_05db6bcc((float)iVar3,&local_100,iVar5,uVar6,&local_250,0);
        FUN_05db6dd8(param_2,&local_100,0);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_05c41350(param_2,*(long *)(*(long *)
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                      + 0xb8) + 0xc,0,0);
        lVar10 = *param_3;
        if ((param_4 & 1) == 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar10 = *(long *)(lVar10 + 0x50);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          puVar1 = (undefined8 *)(lVar10 + lVar8);
          uStack_138 = puVar1[1];
          local_140 = *puVar1;
          local_130 = puVar1[2];
        }
        else {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar10 = *(long *)(lVar10 + 0x58);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          unaff_x24 = unaff_x24 & 0xffffffff00000000 | (ulong)*(uint *)(lVar10 + lVar13 + 0x28);
          FUN_05cdf888(&local_190,*(undefined8 *)(lVar10 + lVar13 + 0x20),unaff_x24,0);
          local_130 = local_180;
          local_140 = local_190;
          uStack_138 = uStack_188;
        }
        lVar10 = *(long *)(param_1 + 0x138);
        local_120 = local_140;
        uStack_118 = uStack_138;
        local_110 = local_130;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
        if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar2 = lVar10 + lVar12;
        uStack_188 = *(undefined8 *)(lVar2 + 0x68);
        local_190 = *(undefined8 *)(lVar2 + 0x60);
        uStack_178 = *(undefined8 *)(lVar2 + 0x78);
        local_180 = *(undefined8 *)(lVar2 + 0x70);
        uStack_168 = *(undefined8 *)(lVar2 + 0x88);
        local_170 = *(undefined8 *)(lVar2 + 0x80);
        uStack_158 = *(undefined8 *)(lVar2 + 0x98);
        local_160 = *(undefined8 *)(lVar2 + 0x90);
        uStack_1c8 = *(undefined8 *)(lVar2 + 0x28);
        local_1d0 = *(undefined8 *)(lVar2 + 0x20);
        uStack_1b8 = *(undefined8 *)(lVar2 + 0x38);
        local_1c0 = *(undefined8 *)(lVar2 + 0x30);
        uStack_1a8 = *(undefined8 *)(lVar2 + 0x48);
        local_1b0 = *(undefined8 *)(lVar2 + 0x40);
        uStack_198 = *(undefined8 *)(lVar2 + 0x58);
        local_1a0 = *(undefined8 *)(lVar2 + 0x50);
        if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
        }
        if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uStack_288 = uStack_188;
        local_290 = local_190;
        uStack_278 = uStack_178;
        uStack_280 = local_180;
        uStack_268 = uStack_168;
        local_270 = local_170;
        uStack_258 = uStack_158;
        uStack_260 = local_160;
        uStack_2c8 = uStack_1c8;
        local_2d0 = local_1d0;
        uStack_2b8 = uStack_1b8;
        uStack_2c0 = local_1c0;
        uStack_2a8 = uStack_1a8;
        local_2b0 = local_1b0;
        uStack_298 = uStack_198;
        uStack_2a0 = local_1a0;
        FUN_05db6568(param_2,lVar2 + 0x20,&local_120,&local_290,&local_2d0,0);
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x18;
        lVar13 = lVar13 + 0xc;
        lVar12 = lVar12 + 0x1c8;
      } while ((long)uVar11 < (long)*(int *)(param_1 + 200));
    }
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar13 = *(long *)(*param_3 + 0x30);
    lVar8 = FUN_0612c1d0(&local_100,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar5 = FUN_060c34ec(lVar8,0);
    if (iVar5 == 2) {
      if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar8 = *(long *)(*param_3 + 0x30);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      cVar7 = *(char *)(lVar8 + 0x3c);
    }
    else {
      cVar7 = '\0';
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(bool *)(lVar13 + 0x59) = cVar7 != '\0';
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)(*param_3 + 0x30);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c41350(param_2,*(undefined8 *)
                          (*(long *)
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                          + 0xb8),*(int *)(lVar8 + 0x1c) == 1,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)(*param_3 + 0x30);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c41350(param_2,*(long *)(*(long *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                  + 0xb8) + 4,1 < *(int *)(lVar8 + 0x1c),0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = *(undefined8 *)(*param_3 + 0x30);
    if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db7b4c(param_2,uVar6,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05e04838(param_1,param_2,&local_100,*(undefined8 *)(*param_3 + 0x30));
    FUN_05c5cb50(local_74,0);
  }
  return;
}


