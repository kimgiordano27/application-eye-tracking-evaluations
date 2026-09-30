/*
FUNCTION_NAME: FUN_05dbcab4
ENTRY_POINT: 05dbcab4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05dbcab4(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong unaff_x23;
  ulong unaff_x24;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  ulong extraout_d0;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_2c0 [2];
  undefined8 uStack_2b0;
  undefined8 local_2a0;
  undefined8 uStack_290;
  undefined1 local_278 [8];
  float local_270;
  undefined8 local_268;
  float local_260;
  float local_258;
  float fStack_254;
  float local_250;
  float local_248;
  float fStack_244;
  float local_240;
  undefined8 local_238;
  float fStack_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  float fStack_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 auStack_134 [116];
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  
  if ((DAT_06bc3bd7 & 1) == 0) {
    FUN_02f08768(Method_System_Runtime_Remoting_Messaging_RemotingSurrogate_GetObjectData__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                );
    FUN_02f08768(PTR_DAT_067ce5d8);
    DAT_06bc3bd7 = 1;
  }
  memset(auStack_134,0,0x94);
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0.0;
  local_1a8 = 0;
  local_1b0 = 0.0;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1d0 = 0.0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  memmove(auStack_134,(void *)(*param_1 + (long)param_2 * 0x74),0x74);
  iVar8 = FUN_0612c25c(auStack_134,0);
  if ((iVar8 == 2) || (iVar8 = FUN_0612c25c(auStack_134,0), iVar8 == 0)) {
    puVar14 = Method_System_Runtime_Remoting_Messaging_RemotingSurrogate_GetObjectData__;
    puVar2 = PTR_DAT_067ce5d8;
    FUN_0612c270(&local_238,auStack_134,0);
    local_2c0[0] = local_238;
    uStack_2b0 = local_228;
    local_2a0 = local_218;
    uStack_290 = local_208;
    FUN_05bf21a0(local_278,local_2c0,0);
    fVar16 = local_240;
    fVar36 = fStack_244;
    fVar33 = local_248;
    fVar37 = local_250;
    fVar15 = fStack_254;
    fVar29 = local_258;
    FUN_04da8978(local_278,param_1 + 7,(int)param_1[0x22],*(undefined8 *)puVar14);
    fVar28 = -(fVar33 * local_270 + fVar36 * local_260 + fVar16 * local_250 + local_240);
    fStack_244 = local_278._4_4_ * fVar33 + (float)((ulong)local_268 >> 0x20) * fVar36 +
                 fStack_254 * fVar16 + fStack_244;
    uVar13 = CONCAT44(fStack_244,
                      local_278._0_4_ * fVar33 + (float)local_268 * fVar36 + local_258 * fVar16 +
                      local_248);
    local_c0 = uVar13;
    local_b8 = fVar28;
    if (*(float *)(param_1 + 0x20) <= fVar28) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar13,fStack_244,fVar28,param_1);
    }
    FUN_04da8978(&local_238,param_1 + 7,(int)param_1[0x22],*(undefined8 *)puVar14);
    if (DAT_06bc2c7c == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bc2c7c = '\x01';
    }
    puVar14 = PTR_DAT_067c8f80;
    fVar33 = (float)local_238 * fVar29 + (float)local_228 * fVar15 + (float)local_218 * fVar37 +
             (float)local_208 * 0.0;
    fVar36 = (float)((ulong)local_238 >> 0x20) * fVar29 + (float)((ulong)local_228 >> 0x20) * fVar15
             + (float)((ulong)local_218 >> 0x20) * fVar37 + (float)((ulong)local_208 >> 0x20) * 0.0;
    fVar29 = fVar29 * fStack_230 + fVar15 * local_220 + fVar37 * fStack_210 + local_200 * 0.0;
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar15 = 1.0 / SQRT(fVar29 * fVar29 + fVar33 * fVar33 + fVar36 * fVar36);
    local_b4 = CONCAT44(fVar36 * fVar15,fVar33 * fVar15);
    local_ac = -(fVar29 * fVar15);
    fVar29 = (float)FUN_0612c294(auStack_134,0);
    fVar15 = (float)UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                              (auStack_134,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar37 = DAT_011b074c;
    fVar33 = (float)FUN_05dbf02c(fVar15);
    if (DAT_06bc2c5b == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bc2c5b = '\x01';
    }
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    dVar19 = cos((double)(fVar29 * 0.5 * fVar37));
    local_a8 = (float)dVar19;
    local_a4 = fVar15 * local_a8;
    fVar29 = (float)FUN_05dbf02c(*(float *)(param_1 + 0x20) - local_b8);
    if (DAT_06bc2c7c == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bc2c7c = '\x01';
    }
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbf034(local_c0._4_4_,local_b8,fVar15,(int)param_1[0x20],&local_140,&local_148);
    uVar11 = local_c0;
    uVar10 = local_140;
    uVar13 = local_148;
    uVar18 = local_140._4_4_;
    uVar17 = local_148._4_4_;
    uVar9 = FUN_05dbf290(local_c0 & 0xffffffff,local_140 & 0xffffffff,local_140._4_4_,auStack_134);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar11 & 0xffffffff,uVar10 & 0xffffffff,uVar18,param_1);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05dbf290(uVar11 & 0xffffffff,uVar13 & 0xffffffff,uVar17,auStack_134);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar11 & 0xffffffff,uVar13 & 0xffffffff,uVar17,param_1);
    }
    fVar37 = local_b8;
    uVar13 = local_c0;
    lVar12 = param_1[0x20];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbf034(uVar13 & 0xffffffff,fVar37,fVar15,(int)lVar12,SQRT(fVar33 - fVar29),&local_150,
                 &local_158);
    uVar10 = local_150;
    uVar13 = local_158;
    uVar20 = local_c0._4_4_;
    uVar18 = local_150._4_4_;
    uVar17 = local_158._4_4_;
    uVar11 = FUN_05dbf290(local_150 & 0xffffffff,local_c0._4_4_,local_150._4_4_,auStack_134);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar10 & 0xffffffff,uVar20,uVar18,param_1);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05dbf290(uVar13 & 0xffffffff,uVar20,uVar17,auStack_134);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar13 & 0xffffffff,uVar20,uVar17,param_1);
    }
    iVar8 = FUN_0612c25c(auStack_134,0);
    fVar37 = local_a4;
    if (iVar8 == 0) {
      if (DAT_06bc2c7c == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bc2c7c = '\x01';
      }
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar40 = local_a4;
      fVar31 = local_ac;
      fVar42 = local_b8;
      fVar36 = DAT_011b0568;
      fVar34 = (float)local_b4;
      fVar38 = local_b4._4_4_;
      fVar26 = local_b4._4_4_ * local_a4;
      fVar27 = local_ac * local_a4;
      fVar16 = (float)local_c0;
      fVar28 = local_c0._4_4_;
      if (DAT_011b0568 <= ABS(ABS((float)local_b4) + -1.0)) {
        fVar39 = (float)local_b4 * 0.0;
        fVar35 = local_b4._4_4_ * 0.0;
        fVar41 = local_ac * 0.0;
        if (DAT_06bc2c7c == '\0') {
          FUN_02f08768(PTR_DAT_067c8f80);
          DAT_06bc2c7c = '\x01';
        }
        fVar38 = fVar39 - fVar38;
        fVar35 = fVar35 - fVar41;
        fVar31 = fVar31 - fVar39;
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar39 = 1.0 / SQRT(fVar38 * fVar38 + fVar31 * fVar31 + fVar35 * fVar35);
        fVar35 = fVar35 * fVar39;
        fVar31 = fVar31 * fVar39;
        fVar38 = fVar38 * fVar39;
      }
      else {
        fVar35 = 0.0;
        fVar38 = 0.0;
        fVar31 = 1.0;
      }
      fVar41 = SQRT(fVar15 * fVar15 - fVar37 * fVar37);
      fVar28 = fVar28 + fVar26;
      fVar42 = fVar42 + fVar27;
      fVar37 = fVar38 * local_b4._4_4_;
      fVar27 = fVar31 * local_ac;
      fVar39 = (float)local_b4 * fVar31 - fVar35 * local_b4._4_4_;
      fVar26 = fVar35 * local_ac - (float)local_b4 * fVar38;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar16 = fVar16 + fVar34 * fVar40;
      fVar37 = fVar37 - fVar27;
      UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
                (fVar28,fVar42,fVar41,fVar31,fVar38,fVar26,fVar39,&local_160,&local_168);
      fVar34 = (float)local_168;
      fVar40 = local_168._4_4_;
      fVar30 = fVar42 + fVar38 * (float)local_160 + fVar39 * local_160._4_4_;
      fVar27 = *(float *)(param_1 + 0x20);
      fVar38 = fVar42 + fVar38 * (float)local_168 + fVar39 * local_168._4_4_;
      if (fVar27 <= fVar30) {
        fVar22 = fVar35 * (float)local_160;
        fVar39 = fVar31 * (float)local_160;
        fVar25 = fVar37 * local_160._4_4_;
        fVar27 = fVar26 * local_160._4_4_;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(fVar16 + fVar22 + fVar25,fVar28 + fVar39 + fVar27,fVar30,param_1);
        fVar27 = *(float *)(param_1 + 0x20);
      }
      if (fVar27 <= fVar38) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(fVar16 + fVar35 * fVar34 + fVar37 * fVar40,
                     fVar28 + fVar31 * fVar34 + fVar26 * fVar40,fVar38,param_1);
      }
      fVar34 = local_ac;
      fVar37 = (float)local_b4;
      if (fVar36 <= ABS(ABS(local_b4._4_4_) + -1.0)) {
        fVar38 = local_b4._4_4_ * 0.0;
        fVar36 = local_ac * 0.0;
        fVar31 = (float)local_b4 * 0.0;
        if (DAT_06bc2c7c == '\0') {
          FUN_02f08768(PTR_DAT_067c8f80);
          DAT_06bc2c7c = '\x01';
        }
        fVar37 = fVar37 - fVar38;
        fVar38 = fVar38 - fVar34;
        fVar36 = fVar36 - fVar31;
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar34 = 1.0 / SQRT(fVar37 * fVar37 + fVar38 * fVar38 + fVar36 * fVar36);
        fVar38 = fVar38 * fVar34;
        fVar36 = fVar36 * fVar34;
        fVar37 = fVar37 * fVar34;
      }
      else {
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 1.0;
      }
      fVar34 = fVar38 * local_ac;
      fVar26 = (float)local_b4 * fVar37;
      fVar31 = (float)local_b4 * fVar36 - fVar38 * local_b4._4_4_;
      fVar40 = fVar37 * local_b4._4_4_ - fVar36 * local_ac;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar34 = fVar34 - fVar26;
      UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
                (fVar16,fVar42,fVar41,fVar38,fVar37,fVar40,fVar31,&local_170,&local_178);
      fVar26 = (float)local_178;
      fVar27 = local_178._4_4_;
      fVar39 = fVar42 + fVar37 * (float)local_170 + fVar31 * local_170._4_4_;
      fVar35 = *(float *)(param_1 + 0x20);
      fVar37 = fVar42 + fVar37 * (float)local_178 + fVar31 * local_178._4_4_;
      if (fVar35 <= fVar39) {
        fVar30 = fVar38 * (float)local_170;
        fVar35 = fVar36 * (float)local_170;
        fVar22 = fVar40 * local_170._4_4_;
        fVar31 = fVar34 * local_170._4_4_;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(fVar16 + fVar30 + fVar22,fVar28 + fVar35 + fVar31,fVar39,param_1);
        fVar35 = *(float *)(param_1 + 0x20);
      }
      if (fVar35 <= fVar37) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(fVar16 + fVar38 * fVar26 + fVar40 * fVar27,
                     fVar28 + fVar36 * fVar26 + fVar34 * fVar27,fVar37,param_1);
        fVar35 = *(float *)(param_1 + 0x20);
      }
      fVar37 = local_ac;
      uVar13 = local_b4;
      uVar17 = local_b4._4_4_;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05dbf578(fVar16,fVar28,fVar42,uVar13 & 0xffffffff,uVar17,fVar37,fVar41,fVar35,
                            &local_188,&local_198);
      uVar17 = local_180;
      uVar13 = local_188;
      if ((uVar10 & 1) != 0) {
        uVar18 = local_188._4_4_;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar13 & 0xffffffff,uVar18,uVar17,param_1);
        FUN_05dbef10(local_198 & 0xffffffff,local_198._4_4_,local_190,param_1);
      }
      fVar37 = local_ac;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar37 = (float)FUN_05dbf02c(fVar37);
      if (DAT_06bc2c7c == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bc2c7c = '\x01';
      }
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar36 = fVar41 * SQRT(1.0 - fVar37);
      fVar37 = fVar42 - fVar36;
      bVar4 = true;
      if (((uint)ABS(local_b8) < 0x7f800001) && (bVar4 = false, !NAN(fVar37) && !NAN(local_b8))) {
        bVar4 = fVar37 < local_b8;
      }
      if (!bVar4) {
        fVar37 = local_b8;
      }
      if (fVar37 <= *(float *)(param_1 + 0x20)) {
        fVar36 = fVar42 + fVar36;
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        if ((uint)ABS(local_b8) < 0x7f800001) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar36) && !NAN(local_b8)) {
            bVar4 = fVar36 < local_b8;
            bVar5 = fVar36 == local_b8;
            bVar6 = false;
          }
        }
        if (bVar5 || bVar4 != bVar6) {
          fVar36 = local_b8;
        }
        bVar4 = *(float *)(param_1 + 0x20) <= fVar36;
      }
      else {
        bVar4 = false;
      }
      if (((float)local_b4 * local_c0._4_4_ - local_b4._4_4_ * (float)local_c0) +
          (local_ac * (float)local_c0 - local_b8 * (float)local_b4) +
          (local_b8 * local_b4._4_4_ - local_ac * local_c0._4_4_) != 0.0) {
        if (DAT_06bc2c7c == '\0') {
          FUN_02f08768(PTR_DAT_067c8f80);
          DAT_06bc2c7c = '\x01';
        }
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
      }
      lVar12 = *(long *)puVar2;
      if (bVar4) {
        fVar37 = fVar41 / local_a4;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbf77c();
        uVar23 = (undefined4)(local_c0 >> 0x20);
        uVar20 = (undefined4)local_c0;
        uVar17 = FUN_05dbf9ec((int)param_1[0x20],local_c0 & 0xffffffff,local_c0 >> 0x20,local_b8,
                              local_b4 & 0xffffffff,local_b4._4_4_,local_ac,fVar37);
        uVar21 = (undefined4)local_c0;
        uVar24 = (undefined4)(local_c0 >> 0x20);
        uVar18 = FUN_05dbf9ec((int)param_1[0x20],local_c0 & 0xffffffff,local_c0 >> 0x20,local_b8,
                              local_b4 & 0xffffffff,local_b4._4_4_,local_ac);
        uVar13 = FUN_05dbfba4(uVar17,uVar20,uVar23,auStack_134);
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05dbef10(uVar17,uVar20,uVar23,param_1);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar13 = FUN_05dbfba4(uVar18,uVar21,uVar24,auStack_134);
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05dbef10(uVar18,uVar21,uVar24,param_1);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbf77c();
        uVar23 = (undefined4)(local_c0 >> 0x20);
        uVar20 = (undefined4)local_c0;
        uVar17 = FUN_05dbf9ec((int)param_1[0x20],local_c0 & 0xffffffff,local_c0 >> 0x20,local_b8,
                              local_b4 & 0xffffffff,local_b4._4_4_,local_ac,fVar37);
        uVar21 = (undefined4)local_c0;
        uVar24 = (undefined4)(local_c0 >> 0x20);
        uVar18 = FUN_05dbf9ec((int)param_1[0x20],local_c0 & 0xffffffff,local_c0 >> 0x20,local_b8,
                              local_b4 & 0xffffffff,local_b4._4_4_,local_ac,fVar37);
        uVar13 = FUN_05dbfba4(uVar17,uVar20,uVar23,auStack_134);
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05dbef10(uVar17,uVar20,uVar23,param_1);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar13 = FUN_05dbfba4(uVar18,uVar21,uVar24,auStack_134);
        lVar12 = *(long *)puVar2;
        if ((uVar13 & 1) != 0) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05dbef10(uVar18,uVar21,uVar24,param_1);
          lVar12 = *(long *)puVar2;
        }
      }
      fVar34 = local_a8;
      fVar36 = local_ac;
      uVar10 = local_b4;
      fVar37 = local_b8;
      uVar13 = local_c0;
      uVar17 = local_c0._4_4_;
      uVar18 = local_b4._4_4_;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbfcc0(uVar13 & 0xffffffff,uVar17,fVar37,uVar10 & 0xffffffff,uVar18,fVar36,fVar34,fVar41
                   ,&local_1a8,&local_1b8);
      fVar38 = (float)FUN_04da8450(param_1 + 0x19,(int)param_1[0x22],
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                  );
      fVar34 = local_1a0;
      fVar37 = (float)local_1a8;
      fVar36 = local_1a8._4_4_;
      fVar31 = (float)local_1a8 * 0.0 + local_1a8._4_4_;
      fVar38 = (((float)local_c0 * -0.0 - local_c0._4_4_) - fVar38 * local_b8) /
               (fVar31 + fVar38 * local_1a0);
      if (((0.0 <= fVar38) && (fVar38 <= 1.0)) &&
         (fVar40 = local_b8 + local_1a0 * fVar38, *(float *)(param_1 + 0x20) <= fVar40)) {
        fVar26 = (float)local_c0 + (float)local_1a8 * fVar38;
        fVar38 = local_c0._4_4_ + local_1a8._4_4_ * fVar38;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(fVar26,fVar38,fVar40,param_1);
      }
      fVar38 = (float)FUN_04da8450(param_1 + 0x1a,(int)param_1[0x22],
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                  );
      fVar38 = (((float)local_c0 * -0.0 - local_c0._4_4_) - fVar38 * local_b8) /
               (fVar31 + fVar34 * fVar38);
      if (((0.0 <= fVar38) && (fVar38 <= 1.0)) &&
         (fVar40 = local_b8 + fVar34 * fVar38, *(float *)(param_1 + 0x20) <= fVar40)) {
        fVar26 = (float)local_c0 + fVar37 * fVar38;
        fVar38 = local_c0._4_4_ + fVar36 * fVar38;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(fVar26,fVar38,fVar40,param_1);
      }
      FUN_05dbb234((long)param_1 + 0x106,0,*(ushort *)((long)param_1 + 0xfc) - 1);
      fVar38 = local_1b0;
      if (*(short *)((long)param_1 + 0x106) < (short)param_1[0x21]) {
        fVar40 = (float)local_1b8;
        fVar26 = local_1b8._4_4_;
        iVar8 = (int)*(short *)((long)param_1 + 0x106);
        fVar27 = (float)local_1b8 * 0.0 + local_1b8._4_4_;
        do {
          puVar3 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
          ;
          iVar8 = iVar8 + 1;
          local_1c0 = CONCAT44(0x80007fff,(float)local_1c0);
          fVar22 = (float)FUN_04da8450(param_1 + 0x19,(int)param_1[0x22],
                                       *(undefined8 *)
                                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                      );
          fVar30 = (float)FUN_04da8450(param_1 + 0x1a,(int)param_1[0x22],*(undefined8 *)puVar3);
          fVar35 = (float)local_c0;
          fVar39 = local_c0._4_4_;
          fVar22 = fVar22 + (fVar30 - fVar22) * *(float *)((long)param_1 + 0xc4) * (float)iVar8;
          fVar30 = ((float)local_c0 * -0.0 - local_c0._4_4_) + local_b8 * fVar22;
          fVar25 = fVar30 / (fVar31 - fVar34 * fVar22);
          bVar5 = false;
          bVar6 = true;
          if (0.0 <= fVar25) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar25)) {
              bVar5 = fVar25 == 1.0;
              bVar6 = 1.0 <= fVar25;
            }
          }
          if ((!bVar6 || bVar5) &&
             (fVar32 = local_b8 + fVar34 * fVar25, *(float *)(param_1 + 0x20) <= fVar32)) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar39 = (float)FUN_05dc0180(fVar35 + fVar37 * fVar25,fVar39 + fVar36 * fVar25,fVar32,
                                         param_1);
            fVar35 = (float)((int)param_1[0x1f] + -1);
            bVar5 = false;
            bVar6 = false;
            bVar7 = false;
            if ((uint)ABS(fVar39) < 0x7f800001) {
              bVar5 = false;
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar39) && !NAN(fVar35)) {
                bVar5 = fVar39 < fVar35;
                bVar6 = fVar39 == fVar35;
                bVar7 = false;
              }
            }
            if (bVar6 || bVar5 != bVar7) {
              fVar35 = fVar39;
            }
            bVar5 = true;
            if (((uint)ABS(fVar35) < 0x7f800001) && (bVar5 = false, !NAN(fVar35))) {
              bVar5 = fVar35 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar5) {
              dVar19 = (double)fVar35;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            FUN_05dbb1a8((long)&local_1c0 + 4,iVar1);
            fVar30 = ((float)local_c0 * -0.0 - local_c0._4_4_) + fVar22 * local_b8;
            fVar35 = (float)local_c0;
            fVar39 = local_c0._4_4_;
          }
          fVar30 = fVar30 / (fVar27 - fVar22 * fVar38);
          bVar5 = false;
          bVar6 = true;
          if (0.0 <= fVar30) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar30)) {
              bVar5 = fVar30 == 1.0;
              bVar6 = 1.0 <= fVar30;
            }
          }
          if ((!bVar6 || bVar5) &&
             (fVar25 = local_b8 + fVar38 * fVar30, *(float *)(param_1 + 0x20) <= fVar25)) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar39 = (float)FUN_05dc0180(fVar35 + fVar40 * fVar30,fVar39 + fVar26 * fVar30,fVar25,
                                         param_1);
            fVar35 = (float)((int)param_1[0x1f] + -1);
            bVar5 = false;
            bVar6 = false;
            bVar7 = false;
            if ((uint)ABS(fVar39) < 0x7f800001) {
              bVar5 = false;
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar39) && !NAN(fVar35)) {
                bVar5 = fVar39 < fVar35;
                bVar6 = fVar39 == fVar35;
                bVar7 = false;
              }
            }
            if (bVar6 || bVar5 != bVar7) {
              fVar35 = fVar39;
            }
            bVar5 = true;
            if (((uint)ABS(fVar35) < 0x7f800001) && (bVar5 = false, !NAN(fVar35))) {
              bVar5 = fVar35 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar5) {
              dVar19 = (double)fVar35;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            FUN_05dbb1a8((long)&local_1c0 + 4,iVar1);
          }
          fVar35 = local_ac;
          uVar13 = local_b4;
          uVar17 = local_b4._4_4_;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_05dc0220(fVar22,fVar16,fVar28,fVar42,uVar13 & 0xffffffff,uVar17,fVar35,
                               &local_1c8,&local_1d8);
          uVar10 = local_1c0;
          uVar13 = local_1c8;
          uVar11 = extraout_d0;
          if ((uVar9 & 1) != 0) {
            fVar35 = *(float *)(param_1 + 0x20);
            if (fVar35 <= (float)local_1c0) {
              uVar17 = local_1c8._4_4_;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar39 = (float)FUN_05dc0180(uVar13 & 0xffffffff,uVar17,uVar10 & 0xffffffff,param_1);
              fVar35 = (float)((int)param_1[0x1f] + -1);
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if ((uint)ABS(fVar39) < 0x7f800001) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar39) && !NAN(fVar35)) {
                  bVar5 = fVar39 < fVar35;
                  bVar6 = fVar39 == fVar35;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar35 = fVar39;
              }
              bVar5 = true;
              if (((uint)ABS(fVar35) < 0x7f800001) && (bVar5 = false, !NAN(fVar35))) {
                bVar5 = fVar35 < 0.0;
              }
              dVar19 = 0.0;
              if (!bVar5) {
                dVar19 = (double)fVar35;
              }
              iVar1 = 0;
              if (dVar19 != INFINITY) {
                iVar1 = (int)dVar19;
              }
              FUN_05dbb1a8((long)&local_1c0 + 4,iVar1);
              fVar35 = *(float *)(param_1 + 0x20);
            }
            fVar39 = local_1d0;
            uVar13 = local_1d8;
            uVar11 = (ulong)(uint)fVar35;
            if (fVar35 <= local_1d0) {
              uVar17 = local_1d8._4_4_;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar39 = (float)FUN_05dc0180(uVar13 & 0xffffffff,uVar17,fVar39,param_1);
              fVar35 = (float)((int)param_1[0x1f] + -1);
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if ((uint)ABS(fVar39) < 0x7f800001) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar39) && !NAN(fVar35)) {
                  bVar5 = fVar39 < fVar35;
                  bVar6 = fVar39 == fVar35;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar35 = fVar39;
              }
              bVar5 = true;
              if (((uint)ABS(fVar35) < 0x7f800001) && (bVar5 = false, !NAN(fVar35))) {
                bVar5 = fVar35 < 0.0;
              }
              dVar19 = 0.0;
              if (!bVar5) {
                dVar19 = (double)fVar35;
              }
              iVar1 = 0;
              if (dVar19 != INFINITY) {
                iVar1 = (int)dVar19;
              }
              uVar11 = FUN_05dbb1a8((long)&local_1c0 + 4,iVar1);
            }
          }
          fVar30 = local_a4;
          fVar39 = local_ac;
          uVar10 = local_b4;
          fVar35 = local_b8;
          uVar13 = local_c0;
          if (bVar4) {
            fVar25 = *(float *)(param_1 + 0x20);
            uVar17 = local_c0._4_4_;
            uVar18 = local_b4._4_4_;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c(uVar11,local_c0 & 0xffffffff,local_c0._4_4_,local_b8);
            }
            fVar22 = fVar22 * fVar25;
            FUN_05dc04b8(fVar25,uVar13 & 0xffffffff,uVar17,fVar35,uVar10 & 0xffffffff,uVar18,fVar39)
            ;
            uVar17 = FUN_05dbf9ec((int)param_1[0x20],local_c0 & 0xffffffff,local_c0._4_4_,local_b8,
                                  local_b4 & 0xffffffff,local_b4._4_4_,local_ac,fVar41 / fVar30);
            uVar20 = (undefined4)param_1[0x20];
            uVar18 = FUN_05dbf9ec(uVar20,local_c0 & 0xffffffff,local_c0._4_4_,local_b8,
                                  local_b4 & 0xffffffff,local_b4._4_4_,local_ac,fVar41 / fVar30);
            lVar12 = param_1[0x20];
            uVar13 = FUN_05dbfba4(uVar17,fVar22,uVar20,auStack_134);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar39 = (float)FUN_05dc0180(uVar17,fVar22,uVar20,param_1);
              fVar35 = (float)((int)param_1[0x1f] + -1);
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if ((uint)ABS(fVar39) < 0x7f800001) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar39) && !NAN(fVar35)) {
                  bVar5 = fVar39 < fVar35;
                  bVar6 = fVar39 == fVar35;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar35 = fVar39;
              }
              bVar5 = true;
              if (((uint)ABS(fVar35) < 0x7f800001) && (bVar5 = false, !NAN(fVar35))) {
                bVar5 = fVar35 < 0.0;
              }
              dVar19 = 0.0;
              if (!bVar5) {
                dVar19 = (double)fVar35;
              }
              iVar1 = 0;
              if (dVar19 != INFINITY) {
                iVar1 = (int)dVar19;
              }
              FUN_05dbb1a8((long)&local_1c0 + 4,iVar1);
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar13 = FUN_05dbfba4(uVar18,fVar22,(int)lVar12,auStack_134);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar39 = (float)FUN_05dc0180(uVar18,fVar22,(int)lVar12,param_1);
              fVar35 = (float)((int)param_1[0x1f] + -1);
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if ((uint)ABS(fVar39) < 0x7f800001) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar39) && !NAN(fVar35)) {
                  bVar5 = fVar39 < fVar35;
                  bVar6 = fVar39 == fVar35;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar35 = fVar39;
              }
              bVar5 = true;
              if (((uint)ABS(fVar35) < 0x7f800001) && (bVar5 = false, !NAN(fVar35))) {
                bVar5 = fVar35 < 0.0;
              }
              dVar19 = 0.0;
              if (!bVar5) {
                dVar19 = (double)fVar35;
              }
              iVar1 = 0;
              if (dVar19 != INFINITY) {
                iVar1 = (int)dVar19;
              }
              FUN_05dbb1a8((long)&local_1c0 + 4,iVar1);
            }
          }
          uVar17 = local_1c0._4_4_;
          iVar1 = iVar8 + *(int *)((long)param_1 + 0x10c);
          unaff_x24 = 0;
          puVar14 = (undefined *)
                    ((ulong)puVar14 & 0xffffffff00000000 |
                    (ulong)*(uint *)(param_1[4] + (long)(iVar1 + 1) * 4));
          uVar18 = FUN_05dbb2f8(puVar14,local_1c0._4_4_);
          *(undefined4 *)(param_1[4] + (long)(iVar1 + 1) * 4) = uVar18;
          unaff_x23 = unaff_x23 & 0xffffffff00000000 |
                      (ulong)*(uint *)(param_1[4] + (long)iVar1 * 4);
          uVar17 = FUN_05dbb2f8(unaff_x23,uVar17);
          *(undefined4 *)(param_1[4] + (long)iVar1 * 4) = uVar17;
        } while (iVar8 < (short)param_1[0x21]);
      }
    }
    FUN_05dbb234((undefined4 *)((long)param_1 + 0x106),0,*(ushort *)((long)param_1 + 0xfc) - 1);
    if (*(short *)((long)param_1 + 0x106) < (short)param_1[0x21]) {
      iVar8 = (int)*(short *)((long)param_1 + 0x106);
      do {
        puVar3 = 
        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
        ;
        iVar8 = iVar8 + 1;
        local_1e0 = CONCAT44(0x80007fff,(undefined4)local_1e0);
        fVar36 = (float)FUN_04da8450(param_1 + 0x19,(int)param_1[0x22],
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                    );
        fVar16 = (float)FUN_04da8450(param_1 + 0x1a,(int)param_1[0x22],*(undefined8 *)puVar3);
        fVar37 = local_b8;
        uVar13 = local_c0;
        fVar28 = *(float *)((long)param_1 + 0xc4);
        uVar17 = local_c0._4_4_;
        lVar12 = param_1[0x20];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dc0918(uVar13 & 0xffffffff,uVar17,fVar37,fVar15,(int)lVar12,SQRT(fVar33 - fVar29),
                     fVar36 + (fVar16 - fVar36) * fVar28 * (float)iVar8,&local_1e8,&local_1f8);
        uVar10 = local_1e0;
        uVar13 = local_1e8;
        uVar17 = local_1e8._4_4_;
        uVar11 = FUN_05dbf290(local_1e8 & 0xffffffff,local_1e8._4_4_,local_1e0 & 0xffffffff,
                              auStack_134);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar36 = (float)FUN_05dc0180(uVar13 & 0xffffffff,uVar17,uVar10 & 0xffffffff,param_1);
          fVar37 = (float)((int)param_1[0x1f] + -1);
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if ((uint)ABS(fVar36) < 0x7f800001) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar36) && !NAN(fVar37)) {
              bVar4 = fVar36 < fVar37;
              bVar5 = fVar36 == fVar37;
              bVar6 = false;
            }
          }
          if (bVar5 || bVar4 != bVar6) {
            fVar37 = fVar36;
          }
          bVar4 = true;
          if (((uint)ABS(fVar37) < 0x7f800001) && (bVar4 = false, !NAN(fVar37))) {
            bVar4 = fVar37 < 0.0;
          }
          dVar19 = 0.0;
          if (!bVar4) {
            dVar19 = (double)fVar37;
          }
          iVar1 = 0;
          if (dVar19 != INFINITY) {
            iVar1 = (int)dVar19;
          }
          FUN_05dbb1a8((long)&local_1e0 + 4,iVar1);
        }
        uVar18 = local_1f0;
        uVar13 = local_1f8;
        uVar17 = local_1f8._4_4_;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_05dbf290(uVar13 & 0xffffffff,uVar17,uVar18,auStack_134);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar36 = (float)FUN_05dc0180(uVar13 & 0xffffffff,uVar17,uVar18,param_1);
          fVar37 = (float)((int)param_1[0x1f] + -1);
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if ((uint)ABS(fVar36) < 0x7f800001) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar36) && !NAN(fVar37)) {
              bVar4 = fVar36 < fVar37;
              bVar5 = fVar36 == fVar37;
              bVar6 = false;
            }
          }
          if (bVar5 || bVar4 != bVar6) {
            fVar37 = fVar36;
          }
          bVar4 = true;
          if (((uint)ABS(fVar37) < 0x7f800001) && (bVar4 = false, !NAN(fVar37))) {
            bVar4 = fVar37 < 0.0;
          }
          dVar19 = 0.0;
          if (!bVar4) {
            dVar19 = (double)fVar37;
          }
          iVar1 = 0;
          if (dVar19 != INFINITY) {
            iVar1 = (int)dVar19;
          }
          FUN_05dbb1a8((long)&local_1e0 + 4,iVar1);
        }
        uVar13 = local_1e0 >> 0x20;
        iVar1 = iVar8 + *(int *)((long)param_1 + 0x10c);
        unaff_x23 = unaff_x23 & 0xffffffff00000000 | uVar13;
        unaff_x24 = unaff_x24 & 0xffffffff00000000 |
                    (ulong)*(uint *)(param_1[4] + (long)(iVar1 + 1) * 4);
        uVar17 = FUN_05dbb2f8(unaff_x24,unaff_x23);
        puVar14 = (undefined *)((ulong)puVar14 & 0xffffffff00000000 | uVar13);
        *(undefined4 *)(param_1[4] + (long)(iVar1 + 1) * 4) = uVar17;
        uVar17 = FUN_05dbb2f8(*(undefined4 *)(param_1[4] + (long)iVar1 * 4),puVar14);
        *(undefined4 *)(param_1[4] + (long)iVar1 * 4) = uVar17;
      } while (iVar8 < (short)param_1[0x21]);
    }
    *(undefined4 *)(param_1[4] + (long)*(int *)((long)param_1 + 0x10c) * 4) =
         *(undefined4 *)((long)param_1 + 0x106);
  }
  return;
}


