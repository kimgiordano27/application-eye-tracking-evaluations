/*
FUNCTION_NAME: FUN_02200890
ENTRY_POINT: 02200890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_12;functionality_gaze_retrieval_or_extraction
*/


byte FUN_02200890(long *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  byte bVar9;
  float *pfVar10;
  double *pdVar11;
  int *piVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0 [4];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 auStack_110 [24];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long local_c8;
  int local_bc;
  double local_b8;
  float local_ac;
  double local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  
  if ((DAT_037818a4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
                      );
    thunk_FUN_00d48444(System_Buffers_ArrayPool<byte>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_45);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Text_UTF8Encoding_GetByteCount__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__);
    DAT_037818a4 = 1;
  }
  puVar7 = StringLiteral_45;
  puVar6 = Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__;
  puVar5 = Method_System_Text_UTF8Encoding_GetByteCount__;
  puVar4 = Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__;
  puVar3 = 
  DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo;
  puVar2 = System_Buffers_ArrayPool<byte>_TypeInfo;
  local_a8 = 0.0;
  local_a0 = 0;
  local_ac = 0.0;
  local_b8 = 0.0;
  local_bc = 0;
  local_c8 = 0;
  if (param_1 == (long *)0x0) goto LAB_02200ed0;
  lVar18 = *param_1;
  bVar9 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 300);
  if ((bVar9 <= *(byte *)(lVar18 + 300)) &&
     (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar9 * 8 + -8) ==
      *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__)) {
    uVar17 = FUN_0220000c(param_2);
    bVar9 = FUN_02020060(param_1,uVar17,0);
    goto LAB_02200ed4;
  }
  if (lVar18 == *(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
    switch(*param_2) {
    case 1:
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        uVar15 = thunk_FUN_015fe514(param_1,*(undefined8 *)StringLiteral_45,0);
        if (((uVar15 & 1) == 0) &&
           (uVar15 = thunk_FUN_015fe514(param_1,*(undefined8 *)puVar3,0), (uVar15 & 1) == 0)) {
          uVar17 = *(undefined8 *)puVar4;
LAB_02200f8c:
          bVar9 = thunk_FUN_015fe514(param_1,uVar17,0);
          goto LAB_02200ed4;
        }
      }
      else {
        uVar15 = thunk_FUN_015fe514(param_1,*(undefined8 *)
                                             Method_System_Text_UTF8Encoding_GetByteCount__,0);
        if (((uVar15 & 1) == 0) &&
           (uVar15 = thunk_FUN_015fe514(param_1,*(undefined8 *)puVar2,0), (uVar15 & 1) == 0)) {
          uVar17 = *(undefined8 *)puVar6;
          goto LAB_02200f8c;
        }
      }
      goto LAB_022010c4;
    case 2:
      uVar15 = FUN_017568a8(param_1,&local_a8,0);
      dVar24 = local_a8;
      if ((uVar15 & 1) == 0) break;
LAB_02200e34:
      dVar25 = *(double *)(param_2 + 2);
      if (DAT_037818c1 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_037818c1 = '\x01';
      }
      goto LAB_02200e60;
    case 3:
      uVar15 = FUN_017709e0(param_1,&local_a0,0);
      if ((uVar15 & 1) != 0) {
        bVar9 = local_a0 == *(long *)(param_2 + 4);
        goto LAB_02200ed4;
      }
      break;
    case 4:
      memcpy(auStack_110,param_2,0x48);
      uStack_128 = uStack_f0;
      local_130 = local_f8;
      local_120 = local_e8;
      auVar26 = FUN_0213aedc(param_1,0);
      puVar16 = &local_130;
      goto LAB_02200f38;
    default:
      goto switchD_02200b14_default;
    }
  }
  else {
switchD_02200b14_default:
    if (lVar18 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo) {
      pfVar10 = (float *)thunk_FUN_00d624a0(param_1);
      fVar23 = *pfVar10;
      if (*param_2 != 2) {
        if (*param_2 == 4) {
          uVar17 = FUN_0220000c(param_2);
          uVar15 = FUN_017846a4(uVar17,&local_ac,0);
          fVar8 = local_ac;
          if ((uVar15 & 1) != 0) {
            if (DAT_037757b6 == '\0') {
              thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
              DAT_037757b6 = '\x01';
            }
            fVar22 = ABS(fVar8);
            fVar20 = ABS(fVar23);
            if (ABS(fVar23) <= fVar22) {
              fVar20 = fVar22;
            }
            fVar21 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) * 8.0;
            fVar22 = fVar20 * DAT_028aa898;
            if (fVar20 * DAT_028aa898 <= fVar21) {
              fVar22 = fVar21;
            }
            bVar9 = ABS(fVar8 - fVar23) < fVar22;
            goto LAB_02200ed4;
          }
          goto LAB_02200ed0;
        }
        lVar18 = *param_1;
        goto LAB_02200a2c;
      }
      dVar25 = *(double *)(param_2 + 2);
      if (DAT_037818c1 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_037818c1 = '\x01';
      }
      dVar24 = (double)fVar23;
LAB_02200e60:
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      dVar19 = (double)FUN_01772420(ABS(dVar24),ABS(dVar25),0);
      dVar19 = (double)FUN_01772420(dVar19 * DAT_0294c7b0,8,0);
      bVar9 = 0;
      if (!NAN(ABS(dVar25 - dVar24)) && !NAN(dVar19)) {
        bVar9 = ABS(dVar25 - dVar24) < dVar19;
      }
      goto LAB_02200ed4;
    }
LAB_02200a2c:
    if (lVar18 == *(long *)PTR_DAT_033f2f78) {
      pdVar11 = (double *)thunk_FUN_00d624a0(param_1);
      dVar24 = *pdVar11;
      if (*param_2 == 2) goto LAB_02200e34;
      if (*param_2 == 4) {
        uVar17 = FUN_0220000c(param_2);
        uVar15 = FUN_017568a8(uVar17,&local_b8,0);
        dVar25 = local_b8;
        if ((uVar15 & 1) == 0) goto LAB_02200ed0;
        if (DAT_037818c1 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_037818c1 = '\x01';
        }
        goto LAB_02200e60;
      }
      lVar18 = *param_1;
    }
    if (lVar18 == *(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
       ) {
      piVar12 = (int *)thunk_FUN_00d624a0(param_1);
      iVar1 = *piVar12;
      if (*param_2 == 3) {
        bVar9 = *(long *)(param_2 + 4) == (long)iVar1;
        goto LAB_02200ed4;
      }
      if (*param_2 == 4) {
        uVar17 = FUN_0220000c(param_2);
        uVar15 = FUN_0176f230(uVar17,&local_bc,0);
        if ((uVar15 & 1) != 0) {
          bVar9 = iVar1 == local_bc;
          goto LAB_02200ed4;
        }
        goto LAB_02200ed0;
      }
      lVar18 = *param_1;
    }
    if (lVar18 == *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo) {
      plVar13 = (long *)thunk_FUN_00d624a0(param_1);
      lVar18 = *plVar13;
      if (*param_2 == 3) {
        local_c8 = *(long *)(param_2 + 4);
      }
      else {
        if (*param_2 != 4) {
          lVar18 = *param_1;
          goto LAB_02200a68;
        }
        uVar17 = FUN_0220000c(param_2);
        uVar15 = FUN_017709e0(uVar17,&local_c8,0);
        if ((uVar15 & 1) == 0) goto LAB_02200ed0;
      }
      bVar9 = lVar18 == local_c8;
      goto LAB_02200ed4;
    }
LAB_02200a68:
    if (lVar18 == *(long *)StringLiteral_9958) {
      pbVar14 = (byte *)thunk_FUN_00d624a0(param_1);
      if (*param_2 == 1) {
        bVar9 = *pbVar14 == (*(byte *)(param_2 + 1) & 1);
        goto LAB_02200ed4;
      }
      if (*param_2 != 4) {
        lVar18 = *param_1;
        goto LAB_02200a7c;
      }
      if (*pbVar14 == 0) {
        memcpy(auStack_110,param_2,0x48);
        uStack_1a8 = uStack_f0;
        local_1b0 = local_f8;
        local_1a0 = local_e8;
        local_98 = FUN_0213aedc(*(undefined8 *)puVar3,0);
        local_88 = 0;
        uVar15 = FUN_021ffb94(&local_1b0,local_98);
        if ((uVar15 & 1) == 0) {
          memcpy(auStack_110,param_2,0x48);
          auVar26 = FUN_0213aedc(*(undefined8 *)puVar7,0);
          uStack_1c8 = uStack_f0;
          local_1d0 = local_f8;
          local_1c0 = local_e8;
          local_88 = 0;
          local_98 = auVar26;
          uVar15 = FUN_021ffb94(&local_1d0,local_98);
          if ((uVar15 & 1) == 0) {
            memcpy(auStack_110,param_2,0x48);
            auVar26 = FUN_0213aedc(*(undefined8 *)puVar4,0);
            puVar16 = local_1f0;
            goto LAB_02200f38;
          }
        }
      }
      else {
        memcpy(auStack_110,param_2,0x48);
        uStack_148 = uStack_f0;
        local_150 = local_f8;
        local_140 = local_e8;
        local_98 = FUN_0213aedc(*(undefined8 *)puVar2,0);
        local_88 = 0;
        uVar15 = FUN_021ffb94(&local_150,local_98);
        if ((uVar15 & 1) == 0) {
          memcpy(auStack_110,param_2,0x48);
          auVar26 = FUN_0213aedc(*(undefined8 *)puVar5,0);
          uStack_168 = uStack_f0;
          local_170 = local_f8;
          local_160 = local_e8;
          local_88 = 0;
          local_98 = auVar26;
          uVar15 = FUN_021ffb94(&local_170,local_98);
          if ((uVar15 & 1) == 0) {
            memcpy(auStack_110,param_2,0x48);
            auVar26 = FUN_0213aedc(*(undefined8 *)puVar6,0);
            uStack_188 = uStack_f0;
            local_190 = local_f8;
            local_180 = local_e8;
            puVar16 = &local_190;
            goto LAB_02200f38;
          }
        }
      }
LAB_022010c4:
      bVar9 = 1;
      goto LAB_02200ed4;
    }
LAB_02200a7c:
    puVar2 = 
    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
    ;
    bVar9 = *(byte *)(*(long *)
                       Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                     + 300);
    if ((bVar9 <= *(byte *)(lVar18 + 300)) &&
       (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar9 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
       )) {
      if (*param_2 == 4) {
        memcpy(auStack_110,param_2,0x48);
        uStack_208 = uStack_f0;
        local_210 = local_f8;
        local_200 = local_e8;
        uVar17 = thunk_FUN_00d93c64(param_1,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar17 = FUN_017a5008(uVar17,param_1,0);
        auVar26 = FUN_0213aedc(uVar17,0);
        uStack_228 = uStack_208;
        local_230 = local_210;
        local_220 = local_200;
        puVar16 = &local_230;
LAB_02200f38:
        local_88 = 0;
        local_98 = auVar26;
        bVar9 = FUN_021ffb94(puVar16,local_98);
        goto LAB_02200ed4;
      }
      if (*param_2 == 3) {
        if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar18 = Newtonsoft_Json_JsonConvert__ToStringInternal(param_1,0);
        bVar9 = lVar18 == *(long *)(param_2 + 4);
        goto LAB_02200ed4;
      }
    }
  }
LAB_02200ed0:
  bVar9 = 0;
LAB_02200ed4:
  return bVar9 & 1;
}


