/*
FUNCTION_NAME: FUN_0601a94c
ENTRY_POINT: 0601a94c
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_14;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0601bb5c) */
/* WARNING: Removing unreachable block (ram,0x0601bb60) */
/* WARNING: Removing unreachable block (ram,0x0601bcf8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0601a94c(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,float *param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float local_2d0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  undefined1 auStack_2b0 [304];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  local_2bc = param_3;
  local_2b8 = param_4;
  local_2b4 = param_1;
  if ((DAT_06a825eb & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Rpc_PatternGenePearl_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Rpc_PatternLayerProto_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Rpc_PatternMaskProto_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_InputSystem_Pen_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_PenStatus_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Rendering_PerformDynamicRes_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Unity_XR_Oculus_Performance_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_OpenXR_Features_Extensions_PerformanceSettings_PerformanceChangeNotification_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Api_PeridotCosmeticPosition_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Telemetry_PeridotHdClientTelemetryOmniProto_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Telemetry_PeridotHdTelemetryReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Telemetry_PeridotMrCommonTelemetryReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a825eb = 1;
  }
  local_e8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  lVar22 = *(long *)(param_6 + 0xf0);
  if (lVar22 == 0) {
    plVar18 = (long *)FUN_02ce7ad4(*(undefined8 *)UnityEngine_InputSystem_Pen_TypeInfo,2);
    *(long **)(param_6 + 0xf0) = plVar18;
    puVar12 = Niantic_Peridot_Telemetry_PeridotMrCommonTelemetryReflection_TypeInfo;
    lVar22 = thunk_FUN_02cea894(*(undefined8 *)
                                 Niantic_Peridot_Telemetry_PeridotMrCommonTelemetryReflection_TypeInfo
                               );
    puVar11 = 
    UnityEngine_XR_OpenXR_Features_Extensions_PerformanceSettings_PerformanceChangeNotification_TypeInfo
    ;
    FUN_03b36b00(lVar22,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Extensions_PerformanceSettings_PerformanceChangeNotification_TypeInfo
                );
    if (plVar18 == (long *)0x0) goto LAB_0601bcc0;
    if ((lVar22 != 0) &&
       (lVar24 = thunk_FUN_02cea798(lVar22,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)) {
LAB_0601bd00:
      uVar25 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar25,0);
    }
    if ((int)plVar18[3] == 0) goto LAB_0601bcc4;
    plVar18[4] = lVar22;
    plVar18 = *(long **)(param_6 + 0xf0);
    lVar22 = thunk_FUN_02cea894(*(undefined8 *)puVar12);
    FUN_03b36b00(lVar22,*(undefined8 *)puVar11);
    if (plVar18 == (long *)0x0) goto LAB_0601bcc0;
    if ((lVar22 != 0) &&
       (lVar24 = thunk_FUN_02cea798(lVar22,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
    goto LAB_0601bd00;
    if (*(uint *)(plVar18 + 3) < 2) goto LAB_0601bcc4;
    plVar18[5] = lVar22;
  }
  else {
    uVar2 = *(uint *)(lVar22 + 0x18);
    if (uVar2 == 0) goto LAB_0601bcc4;
    lVar24 = *(long *)(lVar22 + 0x20);
    if (lVar24 == 0) goto LAB_0601bcc0;
    *(undefined4 *)(lVar24 + 0x18) = 0;
    *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
    if (uVar2 < 2) goto LAB_0601bcc4;
    lVar22 = *(long *)(lVar22 + 0x28);
    if (lVar22 == 0) goto LAB_0601bcc0;
    *(undefined4 *)(lVar22 + 0x18) = 0;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
  }
  fVar36 = *param_7;
  local_2d0 = param_7[1];
  fVar38 = param_7[2];
  fVar34 = param_7[3];
  pfVar6 = param_7 + 0x1c;
  iVar16 = FUN_05fb09e4(pfVar6,0);
  fVar28 = fVar34;
  fVar39 = fVar38;
  if (iVar16 == 0) {
    local_e8 = FUN_05fb0a40(pfVar6,0);
    uVar19 = FUN_060db1ac(&local_e8,0);
    if ((uVar19 & 1) != 0) {
      local_e8 = FUN_05fb0a54(pfVar6,0);
      uVar19 = FUN_060db1ac(&local_e8,0);
      if ((uVar19 & 1) != 0) goto LAB_0601ada0;
    }
    local_e8 = FUN_05fb0a40(pfVar6,0);
    uVar19 = FUN_060db1ac(&local_e8,0);
    if ((uVar19 & 1) == 0) {
      local_e8 = FUN_05fb0a54(pfVar6,0);
      uVar19 = FUN_060db19c(&local_e8,0);
      if ((uVar19 & 1) != 0) {
        uVar19 = FUN_05fb0a40(pfVar6,0);
        local_e8 = uVar19;
        local_e8 = FUN_05fb0a40(pfVar6,0);
        if (uVar19 >> 0x20 == 1) {
          fVar39 = (local_2bc * (float)local_e8) / 100.0;
        }
        else {
          if (local_e8 >> 0x20 != 0) goto LAB_0601ada0;
          local_e8 = FUN_05fb0a40(pfVar6,0);
          fVar39 = (float)local_e8;
        }
        fVar28 = (fVar34 * fVar39) / fVar38;
        goto LAB_0601ada0;
      }
    }
    local_e8 = FUN_05fb0a40(pfVar6,0);
    uVar19 = FUN_060db1ac(&local_e8,0);
    if ((uVar19 & 1) == 0) {
      local_e8 = FUN_05fb0a54(pfVar6,0);
      uVar19 = FUN_060db1ac(&local_e8,0);
      if ((uVar19 & 1) == 0) {
        local_e8 = FUN_05fb0a40(pfVar6,0);
        uVar19 = FUN_060db19c(&local_e8,0);
        if ((uVar19 & 1) == 0) {
          uVar19 = FUN_05fb0a40(pfVar6,0);
          local_e8 = uVar19;
          local_e8 = FUN_05fb0a40(pfVar6,0);
          if (uVar19 >> 0x20 == 1) {
            fVar39 = (local_2bc * (float)local_e8) / 100.0;
          }
          else if (local_e8 >> 0x20 == 0) {
            local_e8 = FUN_05fb0a40(pfVar6,0);
            fVar39 = (float)local_e8;
          }
        }
        local_e8 = FUN_05fb0a54(pfVar6,0);
        uVar19 = FUN_060db19c(&local_e8,0);
        if ((uVar19 & 1) == 0) {
          uVar19 = FUN_05fb0a54(pfVar6,0);
          local_e8 = uVar19;
          local_e8 = FUN_05fb0a54(pfVar6,0);
          if (uVar19 >> 0x20 == 1) {
            fVar28 = (local_2b8 * (float)local_e8) / 100.0;
          }
          else if (local_e8 >> 0x20 == 0) {
            local_e8 = FUN_05fb0a54(pfVar6,0);
            fVar28 = (float)local_e8;
          }
          local_e8 = FUN_05fb0a40(pfVar6,0);
          uVar19 = FUN_060db19c(&local_e8,0);
          if ((uVar19 & 1) != 0) goto LAB_0601acb8;
        }
      }
    }
  }
  else {
    iVar16 = FUN_05fb09e4(pfVar6,0);
    if (iVar16 == 2) {
      fVar28 = local_2b8;
      if (local_2b8 / fVar34 <= local_2bc / fVar38) {
LAB_0601acb8:
        fVar39 = (fVar28 * fVar38) / fVar34;
      }
      else {
LAB_0601abb0:
        fVar28 = (local_2bc * fVar34) / fVar38;
        fVar39 = local_2bc;
      }
    }
    else {
      iVar16 = FUN_05fb09e4(pfVar6,0);
      if (iVar16 == 1) {
        fVar28 = local_2b8;
        if (local_2bc / fVar38 <= local_2b8 / fVar34) goto LAB_0601acb8;
        goto LAB_0601abb0;
      }
    }
  }
LAB_0601ada0:
  fVar34 = DAT_013ddbb0;
  if ((((local_2b8 <= DAT_013ddbb0) || (local_2bc <= DAT_013ddbb0)) || (fVar28 <= DAT_013ddbb0)) ||
     (fVar39 <= DAT_013ddbb0)) goto LAB_0601bb9c;
  local_e8 = FUN_05fb0a40(pfVar6,0);
  uVar19 = FUN_060db19c(&local_e8,0);
  fVar38 = local_2b8;
  if (((uVar19 & 1) == 0) || (param_7[0x1b] != 2.8026e-45)) {
    local_e8 = FUN_05fb0a54(pfVar6,0);
    uVar19 = FUN_060db19c(&local_e8,0);
    fVar38 = local_2bc;
    if (((uVar19 & 1) != 0) && (param_7[0x1a] == 2.8026e-45)) {
      fVar36 = 1.0 / fVar39;
      fVar39 = local_2bc * fVar36 + 0.5;
      iVar16 = -0x80000000;
      if (fVar39 != INFINITY) {
        iVar16 = (int)fVar39;
      }
      if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iVar16 = FUN_04f32070(iVar16,1,0);
      fVar39 = fVar38 / (float)iVar16;
      fVar28 = fVar36 * fVar28 * fVar39;
      goto LAB_0601af10;
    }
  }
  else {
    fVar36 = 1.0 / fVar28;
    fVar28 = local_2b8 * fVar36 + 0.5;
    iVar16 = -0x80000000;
    if (fVar28 != INFINITY) {
      iVar16 = (int)fVar28;
    }
    if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    iVar16 = FUN_04f32070(iVar16,1,0);
    fVar28 = fVar38 / (float)iVar16;
    fVar39 = fVar36 * fVar39 * fVar28;
LAB_0601af10:
    local_2d0 = 0.0;
    fVar36 = 0.0;
  }
  puVar12 = Niantic_Peridot_Telemetry_PeridotHdTelemetryReflection_TypeInfo;
  puVar11 = Niantic_Peridot_Telemetry_PeridotHdClientTelemetryOmniProto_TypeInfo;
  fVar38 = DAT_013de520;
  uVar10 = DAT_013de220;
  bVar7 = false;
  uVar19 = 0;
  plVar18 = (long *)PTR_DAT_065c8c40;
  bVar15 = true;
  do {
    bVar8 = bVar15;
    fVar31 = local_2b8;
    fVar33 = local_2bc;
    bVar15 = !bVar8;
    lVar22 = 0x68;
    if (bVar15) {
      lVar22 = 0x6c;
    }
    lVar24 = 0x58;
    if (bVar15) {
      lVar24 = 100;
    }
    lVar23 = 0x54;
    if (bVar15) {
      lVar23 = 0x60;
    }
    lVar1 = 0x50;
    if (bVar15) {
      lVar1 = 0x5c;
    }
    uVar2 = *(uint *)((long)param_7 + lVar22);
    iVar16 = *(int *)((long)param_7 + lVar1);
    fVar32 = *(float *)((long)param_7 + lVar23);
    iVar3 = *(int *)((long)param_7 + lVar24);
    fVar35 = 0.0;
    iVar26 = (int)uVar19;
    switch(uVar2) {
    case 0:
      lVar22 = *(long *)(param_6 + 0xf0);
      fVar35 = fVar28;
      if (!bVar7) {
        fVar35 = fVar39;
      }
      if (lVar22 == 0) goto LAB_0601bcc0;
      if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
      lVar22 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
      if (lVar22 == 0) goto LAB_0601bcc0;
      lVar24 = *(long *)(lVar22 + 0x10);
      lVar23 = *(long *)UnityEngine_PenStatus_TypeInfo;
      *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
      uVar9 = _UNK_013dacb8;
      uVar25 = _DAT_013dacb0;
      if (lVar24 == 0) goto LAB_0601bcc0;
      uVar17 = *(uint *)(lVar22 + 0x18);
      if (uVar17 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar17 * 0x20;
        *(uint *)(lVar22 + 0x18) = uVar17 + 1;
        *(float *)(lVar24 + 0x20) = fVar36;
        *(float *)(lVar24 + 0x24) = local_2d0;
        *(float *)(lVar24 + 0x28) = fVar39;
        *(float *)(lVar24 + 0x2c) = fVar28;
        *(undefined8 *)(lVar24 + 0x38) = uVar9;
        *(undefined8 *)(lVar24 + 0x30) = uVar25;
      }
      else {
        local_180._4_4_ = local_2d0;
        uStack_178 = CONCAT44(fVar28,fVar39);
        uStack_168 = _UNK_013dacb8;
        uStack_170 = _DAT_013dacb0;
        local_180._0_4_ = fVar36;
        FUN_03b3735c(lVar22,&local_180,
                     *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
      break;
    case 1:
      pfVar6 = &local_2b8;
      if (iVar26 != 1) {
        pfVar6 = &local_2bc;
      }
      fVar33 = fVar28;
      if (iVar26 != 1) {
        fVar33 = fVar39;
      }
      iVar21 = -0x80000000;
      if (*pfVar6 / fVar33 != INFINITY) {
        iVar21 = (int)(*pfVar6 / fVar33);
      }
      if (-1 < iVar21) {
        lVar22 = *(long *)(param_6 + 0xf0);
        if (lVar22 == 0) goto LAB_0601bcc0;
        if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
        lVar22 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
        if (lVar22 == 0) goto LAB_0601bcc0;
        lVar24 = *(long *)(lVar22 + 0x10);
        lVar23 = *(long *)UnityEngine_PenStatus_TypeInfo;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        uVar9 = _UNK_013dacb8;
        uVar25 = _DAT_013dacb0;
        if (lVar24 == 0) goto LAB_0601bcc0;
        uVar17 = *(uint *)(lVar22 + 0x18);
        if (uVar17 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + (long)(int)uVar17 * 0x20;
          *(uint *)(lVar22 + 0x18) = uVar17 + 1;
          *(float *)(lVar24 + 0x20) = fVar36;
          *(float *)(lVar24 + 0x24) = local_2d0;
          *(float *)(lVar24 + 0x28) = fVar39;
          *(float *)(lVar24 + 0x2c) = fVar28;
          *(undefined8 *)(lVar24 + 0x38) = uVar9;
          *(undefined8 *)(lVar24 + 0x30) = uVar25;
        }
        else {
          local_180._4_4_ = local_2d0;
          uStack_178 = CONCAT44(fVar28,fVar39);
          uStack_168 = _UNK_013dacb8;
          uStack_170 = _DAT_013dacb0;
          local_180._0_4_ = fVar36;
          FUN_03b3735c(lVar22,&local_180,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        fVar35 = fVar28;
        if (iVar26 != 1) {
          fVar35 = fVar39;
        }
        if (1 < iVar21) {
          lVar22 = *(long *)(param_6 + 0xf0);
          fVar33 = fVar36;
          if (iVar26 != 1) {
            fVar33 = local_2bc - fVar39;
          }
          fVar31 = local_2b8 - fVar28;
          if (iVar26 != 1) {
            fVar31 = local_2d0;
          }
          if (lVar22 == 0) goto LAB_0601bcc0;
          if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
          lVar22 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
          if (lVar22 == 0) goto LAB_0601bcc0;
          lVar24 = *(long *)(lVar22 + 0x10);
          lVar23 = *(long *)UnityEngine_PenStatus_TypeInfo;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          uVar9 = _UNK_013dacb8;
          uVar25 = _DAT_013dacb0;
          if (lVar24 == 0) goto LAB_0601bcc0;
          uVar17 = *(uint *)(lVar22 + 0x18);
          if (uVar17 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)uVar17 * 0x20;
            *(uint *)(lVar22 + 0x18) = uVar17 + 1;
            *(float *)(lVar24 + 0x20) = fVar33;
            *(float *)(lVar24 + 0x24) = fVar31;
            *(float *)(lVar24 + 0x28) = fVar39;
            *(float *)(lVar24 + 0x2c) = fVar28;
            *(undefined8 *)(lVar24 + 0x38) = uVar9;
            *(undefined8 *)(lVar24 + 0x30) = uVar25;
          }
          else {
            uStack_178 = CONCAT44(fVar28,fVar39);
            uStack_168 = _UNK_013dacb8;
            uStack_170 = _DAT_013dacb0;
            local_180._0_4_ = fVar33;
            local_180._4_4_ = fVar31;
            FUN_03b3735c(lVar22,&local_180,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            plVar18 = (long *)PTR_DAT_065c8c40;
          }
          fVar35 = local_2b8;
          if (iVar26 != 1) {
            fVar35 = local_2bc;
          }
          if (2 < iVar21) {
            fVar29 = fVar28;
            fVar37 = local_2b8;
            if (iVar26 != 1) {
              fVar29 = fVar39;
              fVar37 = local_2bc;
            }
            fVar29 = (fVar37 - fVar29 * (float)iVar21) / (float)(iVar21 + -1);
            iVar27 = 0;
            do {
              iVar27 = iVar27 + 1;
              lVar22 = *(long *)(param_6 + 0xf0);
              fVar37 = (fVar28 + fVar29) * (float)iVar27;
              if (iVar26 != 1) {
                fVar37 = fVar31;
                fVar33 = (fVar39 + fVar29) * (float)iVar27;
              }
              fVar31 = fVar37;
              if (lVar22 == 0) goto LAB_0601bcc0;
              if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
              lVar22 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
              if (lVar22 == 0) goto LAB_0601bcc0;
              lVar24 = *(long *)(lVar22 + 0x10);
              lVar23 = *(long *)UnityEngine_PenStatus_TypeInfo;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              uVar9 = _UNK_013dacb8;
              uVar25 = _DAT_013dacb0;
              if (lVar24 == 0) goto LAB_0601bcc0;
              uVar17 = *(uint *)(lVar22 + 0x18);
              if (uVar17 < *(uint *)(lVar24 + 0x18)) {
                lVar24 = lVar24 + (long)(int)uVar17 * 0x20;
                *(uint *)(lVar22 + 0x18) = uVar17 + 1;
                *(float *)(lVar24 + 0x20) = fVar33;
                *(float *)(lVar24 + 0x24) = fVar31;
                *(float *)(lVar24 + 0x28) = fVar39;
                *(float *)(lVar24 + 0x2c) = fVar28;
                *(undefined8 *)(lVar24 + 0x38) = uVar9;
                *(undefined8 *)(lVar24 + 0x30) = uVar25;
              }
              else {
                uStack_178 = CONCAT44(fVar28,fVar39);
                uStack_168 = _UNK_013dacb8;
                uStack_170 = _DAT_013dacb0;
                local_180._0_4_ = fVar33;
                local_180._4_4_ = fVar31;
                FUN_03b3735c(lVar22,&local_180,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              plVar18 = (long *)PTR_DAT_065c8c40;
            } while (iVar27 < iVar21 + -2);
          }
        }
      }
      break;
    case 2:
      fVar35 = fVar28;
      if (iVar26 != 1) {
        fVar35 = fVar39;
      }
      fVar29 = local_2b8;
      if (iVar26 != 1) {
        fVar29 = local_2bc;
      }
      fVar35 = (fVar29 + fVar35 * 0.5) / fVar35;
      iVar21 = -0x80000000;
      if (fVar35 != INFINITY) {
        iVar21 = (int)fVar35;
      }
      if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar17 = FUN_04f32070(iVar21,1,0);
      iVar21 = 1;
      if ((uVar17 & 1) != 0) {
        iVar21 = 2;
      }
      if (iVar16 != 0) {
        iVar21 = 1;
      }
      if (iVar26 != 1) {
        fVar31 = fVar33;
      }
      fVar31 = fVar31 / (float)(int)uVar17;
      fVar33 = fVar31;
      if (iVar26 != 1) {
        fVar33 = fVar28;
        fVar39 = fVar31;
      }
      fVar28 = fVar33;
      fVar35 = 0.0;
      if (0 < (int)(uVar17 + iVar21)) {
        iVar27 = 0;
        fVar33 = fVar28;
        if (iVar26 != 1) {
          fVar33 = fVar39;
        }
        fVar35 = 0.0;
        fVar29 = fVar36;
        fVar37 = local_2d0;
        do {
          lVar22 = *(long *)(param_6 + 0xf0);
          fVar14 = fVar31 * (float)iVar27;
          if (iVar26 != 1) {
            fVar14 = fVar37;
            fVar29 = fVar31 * (float)iVar27;
          }
          fVar37 = fVar14;
          if (lVar22 == 0) goto LAB_0601bcc0;
          if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
          lVar22 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
          if (lVar22 == 0) goto LAB_0601bcc0;
          lVar24 = *(long *)(lVar22 + 0x10);
          lVar23 = *(long *)UnityEngine_PenStatus_TypeInfo;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          uVar9 = _UNK_013dacb8;
          uVar25 = _DAT_013dacb0;
          if (lVar24 == 0) goto LAB_0601bcc0;
          uVar4 = *(uint *)(lVar22 + 0x18);
          if (uVar4 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar22 + 0x18) = uVar4 + 1;
            *(float *)(lVar24 + 0x20) = fVar29;
            *(float *)(lVar24 + 0x24) = fVar37;
            *(float *)(lVar24 + 0x28) = fVar39;
            *(float *)(lVar24 + 0x2c) = fVar28;
            *(undefined8 *)(lVar24 + 0x38) = uVar9;
            *(undefined8 *)(lVar24 + 0x30) = uVar25;
          }
          else {
            uStack_178 = CONCAT44(fVar28,fVar39);
            uStack_168 = _UNK_013dacb8;
            uStack_170 = _DAT_013dacb0;
            local_180._0_4_ = fVar29;
            local_180._4_4_ = fVar37;
            FUN_03b3735c(lVar22,&local_180,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          iVar27 = iVar27 + 1;
          fVar35 = fVar35 + fVar33;
          plVar18 = (long *)PTR_DAT_065c8c40;
        } while (uVar17 + iVar21 != iVar27);
      }
      break;
    case 3:
      pfVar6 = &local_2b8;
      if (iVar26 != 1) {
        pfVar6 = &local_2bc;
      }
      fVar33 = fVar28;
      if (iVar26 != 1) {
        fVar33 = fVar39;
      }
      fVar33 = (1.0 / param_5 + *pfVar6) / fVar33;
      uVar17 = 0x80000000;
      if (fVar33 != INFINITY) {
        uVar17 = (int)fVar33;
      }
      iVar21 = 1;
      if (iVar16 != 0 || (uVar17 & 1) != 0) {
        iVar21 = 2;
      }
      if (0 < (int)(uVar17 + iVar21)) {
        iVar27 = 0;
        fVar33 = fVar28;
        if (iVar26 != 1) {
          fVar33 = fVar39;
        }
        fVar35 = 0.0;
        fVar29 = fVar36;
        fVar31 = local_2d0;
        do {
          lVar22 = *(long *)(param_6 + 0xf0);
          fVar37 = fVar28 * (float)iVar27;
          if (iVar26 != 1) {
            fVar29 = fVar39 * (float)iVar27;
            fVar37 = fVar31;
          }
          fVar31 = fVar37;
          if (lVar22 == 0) goto LAB_0601bcc0;
          if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
          lVar22 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
          if (lVar22 == 0) goto LAB_0601bcc0;
          lVar24 = *(long *)(lVar22 + 0x10);
          lVar23 = *(long *)UnityEngine_PenStatus_TypeInfo;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          uVar9 = _UNK_013dacb8;
          uVar25 = _DAT_013dacb0;
          if (lVar24 == 0) goto LAB_0601bcc0;
          uVar4 = *(uint *)(lVar22 + 0x18);
          if (uVar4 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar22 + 0x18) = uVar4 + 1;
            *(float *)(lVar24 + 0x20) = fVar29;
            *(float *)(lVar24 + 0x24) = fVar31;
            *(float *)(lVar24 + 0x28) = fVar39;
            *(float *)(lVar24 + 0x2c) = fVar28;
            *(undefined8 *)(lVar24 + 0x38) = uVar9;
            *(undefined8 *)(lVar24 + 0x30) = uVar25;
          }
          else {
            uStack_178 = CONCAT44(fVar28,fVar39);
            uStack_168 = _UNK_013dacb8;
            uStack_170 = _DAT_013dacb0;
            local_180._0_4_ = fVar29;
            local_180._4_4_ = fVar31;
            FUN_03b3735c(lVar22,&local_180,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          iVar27 = iVar27 + 1;
          fVar35 = fVar35 + fVar33;
          plVar18 = (long *)PTR_DAT_065c8c40;
        } while (uVar17 + iVar21 != iVar27);
      }
    }
    if (iVar16 == 0) {
      pfVar6 = &local_2b8;
      if (!bVar7) {
        pfVar6 = &local_2bc;
      }
      fVar33 = (*pfVar6 - fVar35) * 0.5;
LAB_0601b46c:
      uVar25 = *(undefined8 *)(param_7 + 0x24);
      if (*(int *)(*plVar18 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar20 = FUN_05ef739c(uVar25,0,0);
      if ((uVar20 & 1) != 0) {
        uVar25 = *(undefined8 *)(param_7 + 0x26);
        if (*(int *)(*plVar18 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar20 = FUN_05ef739c(uVar25,0,0);
        if ((uVar20 & 1) != 0) {
          fVar31 = fVar28;
          if (!bVar7) {
            fVar31 = fVar39;
          }
          fVar31 = fVar31 * param_5;
          dVar30 = modf((double)fVar31,(double *)&local_180);
          if (0.0 <= fVar31) {
            if (dVar30 == 0.5) {
              fVar35 = 1.0;
              goto LAB_0601b540;
            }
            fVar32 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar30 == -0.5) {
            fVar35 = -1.0;
LAB_0601b540:
            fVar32 = (float)(double)CONCAT44(local_180._4_4_,(float)local_180);
            if (((long)(double)CONCAT44(local_180._4_4_,(float)local_180) & 1U) != 0) {
              fVar32 = fVar32 + fVar35;
            }
          }
          else {
            fVar32 = (float)(int)(fVar31 + -0.5);
          }
          if (ABS(fVar32 - fVar31) < fVar38) {
            fVar33 = (float)FUN_05faeee0(fVar33,param_5,uVar10,0);
          }
        }
      }
LAB_0601b7b4:
      if ((uVar2 & 0xfffffffe) == 2) {
        fVar31 = fVar28;
        if (!bVar7) {
          fVar31 = fVar39;
        }
        if (fVar34 < fVar31) {
          if (fVar33 < -fVar31) {
            fVar35 = -2.1474836e+09;
            if (-fVar33 / fVar31 != INFINITY) {
              fVar35 = (float)(int)(-fVar33 / fVar31);
            }
            fVar33 = fVar33 + fVar31 * fVar35;
          }
          if (0.0 < fVar33) {
            fVar35 = -2.1474836e+09;
            if (fVar33 / fVar31 != INFINITY) {
              fVar35 = (float)((int)(fVar33 / fVar31) + 1);
            }
            fVar33 = fVar33 - fVar31 * fVar35;
          }
        }
      }
    }
    else {
      fVar33 = 0.0;
      if (uVar2 != 1) {
        bVar15 = false;
        if (iVar3 != 0) {
          if (iVar3 == 1) {
            pfVar6 = &local_2b8;
            if (!bVar7) {
              pfVar6 = &local_2bc;
            }
            fVar33 = fVar28;
            if (!bVar7) {
              fVar33 = fVar39;
            }
            fVar32 = (fVar32 * (*pfVar6 - fVar33)) / 100.0;
            bVar15 = true;
          }
          else {
            bVar15 = false;
            fVar32 = 0.0;
          }
        }
        if ((iVar16 == 4) || (fVar33 = fVar32, iVar16 == 2)) {
          pfVar6 = &local_2b8;
          if (!bVar7) {
            pfVar6 = &local_2bc;
          }
          fVar33 = (*pfVar6 - fVar35) - fVar32;
        }
        if (bVar15) goto LAB_0601b46c;
        goto LAB_0601b7b4;
      }
    }
    lVar22 = *(long *)(param_6 + 0xf0);
    if (lVar22 == 0) goto LAB_0601bcc0;
    iVar16 = 0;
    while( true ) {
      puVar13 = Unity_XR_Oculus_Performance_TypeInfo;
      if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
      lVar24 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
      if (lVar24 == 0) goto LAB_0601bcc0;
      if (*(int *)(lVar24 + 0x18) <= iVar16) break;
      FUN_03b37008(&local_180,lVar24,iVar16,*(undefined8 *)puVar11);
      uStack_b8 = uStack_170;
      local_c0 = uStack_178;
      local_b0 = uStack_168;
      lVar22 = *(long *)(param_6 + 0xf0);
      fVar31 = (float)local_180;
      fVar35 = fVar33 + local_180._4_4_;
      if (!bVar7) {
        fVar31 = fVar33 + (float)local_180;
        fVar35 = local_180._4_4_;
      }
      if (lVar22 == 0) goto LAB_0601bcc0;
      if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0601bcc4;
      lVar22 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
      uStack_d8 = uStack_170;
      local_e0 = uStack_178;
      local_d0 = uStack_168;
      if (lVar22 == 0) goto LAB_0601bcc0;
      local_180._0_4_ = fVar31;
      local_180._4_4_ = fVar35;
      FUN_03b37068(lVar22,iVar16,&local_180,*(undefined8 *)puVar12);
      lVar22 = *(long *)(param_6 + 0xf0);
      iVar16 = iVar16 + 1;
      if (lVar22 == 0) goto LAB_0601bcc0;
    }
    bVar7 = true;
    uVar19 = 1;
    bVar15 = false;
  } while (bVar8);
  if (*(uint *)(lVar22 + 0x18) < 2) {
LAB_0601bcc4:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  if (*(long *)(lVar22 + 0x28) == 0) {
LAB_0601bcc0:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_03b37ea0(&local_180,*(long *)(lVar22 + 0x28),
               *(undefined8 *)Unity_XR_Oculus_Performance_TypeInfo);
  puVar12 = Niantic_Peridot_Rpc_PatternLayerProto_TypeInfo;
  puVar11 = Niantic_Peridot_Rpc_PatternGenePearl_TypeInfo;
  local_120 = CONCAT44(local_180._4_4_,(float)local_180);
  fVar28 = local_2b8 + param_2;
  fVar39 = local_2bc + local_2b4;
  uStack_118 = uStack_178;
  uStack_108 = uStack_168;
  local_110 = uStack_170;
  uStack_f8 = uStack_158;
  local_100 = local_160;
  while (uVar19 = FUN_048537f0(&local_120,*(undefined8 *)puVar12), (uVar19 & 1) != 0) {
    fVar34 = uStack_108._4_4_;
    fVar36 = local_110._4_4_;
    if (local_110._4_4_ < param_2) {
      fVar34 = uStack_108._4_4_ - (param_2 - local_110._4_4_);
      fVar36 = param_2;
    }
    if (fVar28 < fVar34 + fVar36) {
      fVar34 = fVar34 - ((fVar34 + fVar36) - fVar28);
    }
    uVar25 = *(undefined8 *)(param_7 + 0x26);
    if (*(int *)(*plVar18 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05ef739c(uVar25,0,0);
    lVar22 = *(long *)(param_6 + 0xf0);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(int *)(lVar22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (*(long *)(lVar22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_03b37ea0(&local_180,*(long *)(lVar22 + 0x20),*(undefined8 *)puVar13);
    local_150 = CONCAT44(local_180._4_4_,(float)local_180);
    uStack_148 = uStack_178;
    local_138 = uStack_168;
    local_140 = uStack_170;
    uStack_128 = uStack_158;
    local_130 = local_160;
    while (uVar19 = FUN_048537f0(&local_150,*(undefined8 *)puVar12), (uVar19 & 1) != 0) {
      fVar33 = (float)local_138;
      fVar38 = (float)local_140;
      if ((float)local_140 < local_2b4) {
        fVar33 = (float)local_138 - (local_2b4 - (float)local_140);
        fVar38 = local_2b4;
      }
      if (fVar39 < fVar33 + fVar38) {
        fVar33 = fVar33 - ((fVar33 + fVar38) - fVar39);
      }
      memcpy(auStack_2b0,param_7,0x130);
      FUN_0601bda0(fVar38,fVar36,fVar33,fVar34,local_2b4,param_2,local_2bc,local_2b8,param_6,
                   auStack_2b0);
    }
    FUN_048537ec(&local_150,*(undefined8 *)puVar11);
  }
  FUN_048537ec(&local_120,*(undefined8 *)puVar11);
LAB_0601bb9c:
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


