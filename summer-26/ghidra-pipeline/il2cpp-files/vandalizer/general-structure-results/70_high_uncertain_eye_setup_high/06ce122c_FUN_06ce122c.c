/*
FUNCTION_NAME: FUN_06ce122c
ENTRY_POINT: 06ce122c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06ce122c(undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 local_170;
  float fStack_168;
  float fStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  if ((DAT_07a50aab & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759bb18);
    FUN_031f20f4(
                System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>_TypeInfo
                );
    FUN_031f20f4(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    FUN_031f20f4(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
    FUN_031f20f4(OVRTask<OVRResult<Int32Enum>>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(PTR_DAT_075d64f0);
    FUN_031f20f4(PTR_DAT_075de8a0);
    FUN_031f20f4(PTR_DAT_075de8a8);
    FUN_031f20f4(System_Collections_Generic_HashSet<DerObjectIdentifier>_TypeInfo);
    DAT_07a50aab = 1;
  }
  local_170 = 0;
  fStack_168 = 0.0;
  fStack_164 = 0.0;
  local_158 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_94 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_160 = 0;
  uStack_15c = 0;
  uVar7 = param_2;
  uVar26 = param_3;
  if (*(int *)(param_4 + 0x268) == 0) {
    uVar11 = *(undefined8 *)(param_4 + 0x278);
    if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar7 = FUN_06e587d8(uVar11,0,0);
    if ((uVar7 & 1) == 0) {
      lVar12 = FUN_06e5502c(param_4,0);
    }
    else {
      lVar12 = *(long *)(param_4 + 0x278);
    }
    if (lVar12 == 0) goto LAB_06ce1df8;
    uVar11 = FUN_06e6a5c4(lVar12,0);
    uVar7 = param_2;
    uVar26 = param_3;
    fVar14 = (float)FUN_06e6af04(lVar12,0);
    fVar28 = *(float *)(param_4 + 0x270);
    fVar23 = (float)uVar11;
    fVar33 = fVar23 + fVar14 * fVar28;
    fVar21 = (float)param_2;
    fVar14 = fVar21 + (float)uVar7 * fVar28;
    fVar17 = (float)param_3;
    fVar28 = fVar17 + (float)uVar26 * fVar28;
    uVar7 = (ulong)DAT_014ba634;
    uVar26 = (ulong)(uint)DAT_014baa64;
    FUN_06df6840(DAT_014baa1c,uVar7,uVar26,DAT_014ba638,0);
    iVar6 = *(int *)(param_4 + 0x2ac);
    if (iVar6 == 2) {
      fVar17 = tanf(*(float *)(param_4 + 0x2b4) * DAT_014ba890 * 0.5);
      fVar16 = (float)uVar26;
      fVar29 = *(float *)(param_4 + 0x270);
      fVar17 = fVar17 * fVar29;
      fVar21 = (float)FUN_06e6ae04(lVar12,0);
      fVar23 = fVar17 * fVar29;
      fVar22 = fVar17 * fVar16;
      fVar15 = (float)FUN_06e6ad04(lVar12,0);
      FUN_06df6360(uVar11,param_2,param_3,fVar33,fVar14,fVar28,0);
      FUN_06df6360(uVar11,param_2,param_3,fVar33 + fVar17 * fVar15,fVar14 + fVar17 * fVar29,
                   fVar28 + fVar17 * fVar16,0);
      FUN_06df6360(uVar11,param_2,param_3,fVar33 - fVar17 * fVar15,fVar14 - fVar17 * fVar29,
                   fVar28 - fVar17 * fVar16,0);
      FUN_06df6360(uVar11,param_2,param_3,fVar33 + fVar17 * fVar21,fVar14 + fVar23,fVar28 + fVar22,0
                  );
      FUN_06df6360(uVar11,param_2,param_3,fVar33 - fVar17 * fVar21,fVar14 - fVar23,fVar28 - fVar22,0
                  );
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 == 0) {
          FUN_06df6360(uVar11,param_2,param_3,fVar33,fVar14,fVar28,0);
          uVar7 = param_2;
          uVar26 = param_3;
        }
        goto LAB_06ce1660;
      }
      fVar22 = (float)FUN_06e6ae04(lVar12,0);
      fVar29 = *(float *)(param_4 + 0x2b0);
      fVar22 = fVar22 * fVar29;
      fVar34 = (float)uVar7;
      fVar15 = fVar34 * fVar29;
      fVar32 = (float)uVar26;
      fVar29 = fVar32 * fVar29;
      fVar16 = (float)FUN_06e6ad04(lVar12,0);
      fVar30 = *(float *)(param_4 + 0x2b0);
      fVar16 = fVar16 * fVar30;
      fVar34 = fVar34 * fVar30;
      fVar32 = fVar32 * fVar30;
      FUN_06df63f4(uVar11,param_2,param_3,0);
      FUN_06df6360(fVar23 + fVar16,fVar21 + fVar34,fVar17 + fVar32,fVar33 + fVar16,fVar14 + fVar34,
                   fVar28 + fVar32,0);
      FUN_06df6360(fVar23 - fVar16,fVar21 - fVar34,fVar17 - fVar32,fVar33 - fVar16,fVar14 - fVar34,
                   fVar28 - fVar32,0);
      FUN_06df6360(fVar23 + fVar22,fVar21 + fVar15,fVar17 + fVar29,fVar33 + fVar22,fVar14 + fVar15,
                   fVar28 + fVar29,0);
      FUN_06df6360(fVar23 - fVar22,fVar21 - fVar15,fVar17 - fVar29,fVar33 - fVar22,fVar14 - fVar15,
                   fVar28 - fVar29,0);
      fVar17 = *(float *)(param_4 + 0x2b0);
    }
    uVar7 = (ulong)(uint)fVar14;
    uVar26 = (ulong)(uint)fVar28;
    FUN_06df63f4(fVar33,uVar7,uVar26,fVar17,0);
  }
LAB_06ce1660:
  if (*(int *)(*(long *)PTR_DAT_0759bb18 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar8 = FUN_06ddacac(0);
  if ((((uVar8 & 1) == 0) || (*(long *)(param_4 + 1000) == 0)) ||
     (*(int *)(*(long *)(param_4 + 1000) + 0x18) < 2)) {
    return;
  }
  local_190 = 0.0;
  uVar8 = FUN_06ce3860(param_4,&local_b0,&local_190);
  if ((uVar8 & 1) != 0) {
    uVar7 = (ulong)DAT_014ba634;
    uVar26 = (ulong)(uint)DAT_014baa64;
    FUN_06df6840(DAT_014baa1c,uVar7,uVar26,DAT_014ba638,0);
    uVar11 = FUN_06eec168(&local_b0,0);
    uVar8 = uVar7;
    uVar27 = uVar26;
    fVar33 = (float)FUN_06eec168(&local_b0,0);
    fVar14 = (float)uVar8;
    fVar28 = (float)uVar27;
    fVar17 = (float)FUN_06eec180(&local_b0,0);
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3ca81 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar21 = SQRT(fVar28 * fVar28 + fVar17 * fVar17 + fVar14 * fVar14);
    if (fVar21 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar17 = *pfVar9;
      fVar14 = pfVar9[1];
      fVar28 = pfVar9[2];
    }
    else {
      fVar17 = fVar17 / fVar21;
      fVar14 = fVar14 / fVar21;
      fVar28 = fVar28 / fVar21;
    }
    FUN_06df6360(uVar11,uVar7,uVar26,fVar33 + fVar17 * DAT_014bae78,
                 (float)uVar8 + fVar14 * DAT_014bae78,(float)uVar27 + fVar28 * DAT_014bae78,0);
  }
  local_190 = 0.0;
  uVar8 = FUN_06ce38cc(param_4,&uStack_100,&local_190);
  if ((uVar8 & 1) != 0) {
    FUN_06df6840(DAT_014baa1c,DAT_014ba634,DAT_014baa64,DAT_014ba638,0);
    fVar14 = uStack_d8._4_4_;
    fVar28 = (float)local_d0;
    uVar7 = local_d0 & 0xffffffff;
    fVar33 = local_d0._4_4_;
    uVar26 = (ulong)(uint)local_d0._4_4_;
    fVar17 = (float)uStack_c8;
    fVar21 = uStack_c8._4_4_;
    fVar23 = (float)uStack_c0;
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3ca81 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar22 = SQRT(fVar23 * fVar23 + fVar17 * fVar17 + fVar21 * fVar21);
    if (fVar22 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar17 = *pfVar9;
      fVar21 = pfVar9[1];
      fVar23 = pfVar9[2];
    }
    else {
      fVar17 = fVar17 / fVar22;
      fVar21 = fVar21 / fVar22;
      fVar23 = fVar23 / fVar22;
    }
    FUN_06df6360(fVar14,uVar7,uVar26,fVar14 + fVar17 * DAT_014bae78,fVar28 + fVar21 * DAT_014bae78,
                 fVar33 + fVar23 * DAT_014bae78,0);
  }
  local_190 = 0.0;
  uVar8 = UnityEngine_Camera__get_rect(param_4,&local_150,&local_190);
  if ((uVar8 & 1) != 0) {
    fVar21 = DAT_014baa64;
    FUN_06df6840(DAT_014baa1c,DAT_014ba634,DAT_014baa64,DAT_014ba638,0);
    FUN_06c0fcdc(&local_190,&local_150,0);
    fVar14 = local_190;
    uVar7 = (ulong)(uint)fStack_18c;
    uVar26 = (ulong)(uint)fStack_188;
    FUN_06c0fcdc(&local_190,&local_150,0);
    fVar17 = fStack_188;
    fVar33 = fStack_18c;
    fVar28 = local_190;
    FUN_06c0fcdc(&local_190,&local_150,0);
    local_170 = CONCAT44(fStack_18c,local_190);
    fStack_168 = fStack_188;
    uStack_15c = (undefined4)uStack_17c;
    local_158 = (undefined4)((ulong)uStack_17c >> 0x20);
    fStack_164 = fStack_184;
    local_160 = uStack_180;
    fVar23 = fStack_184;
    if (*(int *)(*(long *)PTR_DAT_075d64f0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar22 = (float)FUN_06e6844c(&local_170,0);
    FUN_06df6360(fVar14,uVar7,uVar26,fVar28 + fVar22 * DAT_014bae78,fVar33 + fVar23 * DAT_014bae78,
                 fVar17 + fVar21 * DAT_014bae78,0);
  }
  iVar6 = FUN_06ce09b4(param_4);
  puVar5 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
  uVar4 = DAT_014bae7c;
  uVar3 = DAT_014badf0;
  uVar2 = DAT_014bade0;
  uVar1 = DAT_014bab8c;
  uVar25 = DAT_014ba63c;
  lVar12 = *(long *)(param_4 + 1000);
  if (lVar12 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar12 + 0x18) <= iVar13) {
        if (*(int *)(param_4 + 0x268) == 2) {
          lVar12 = *(long *)(param_4 + 0x400);
          if (lVar12 == 0) break;
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_06ce1e24;
          uVar7 = (ulong)*(uint *)(lVar12 + 0x24);
          uVar26 = (ulong)*(uint *)(lVar12 + 0x28);
          uVar11 = FUN_0690ad78(*(undefined4 *)(lVar12 + 0x20),uVar7,uVar26,0);
          lVar12 = *(long *)(param_4 + 0x400);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_06ce1e24;
          uVar8 = (ulong)*(uint *)(lVar12 + 0x30);
          uVar25 = *(undefined4 *)(lVar12 + 0x34);
          uVar19 = FUN_0690ad78(*(undefined4 *)(lVar12 + 0x2c),uVar8,0);
          lVar12 = *(long *)(param_4 + 0x400);
          if (lVar12 == 0) break;
LAB_06ce1c5c:
          if (*(uint *)(lVar12 + 0x18) < 3) {
LAB_06ce1e24:
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          FUN_0690ad78(*(undefined4 *)(lVar12 + 0x38),0);
          if (*(int *)(*(long *)System_Collections_Generic_HashSet<DerObjectIdentifier>_TypeInfo +
                      0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_06ce1e7c(uVar11,uVar7,uVar26,uVar19,uVar8,uVar25);
        }
        else if (*(int *)(param_4 + 0x268) == 1) {
          lVar12 = *(long *)(param_4 + 0x408);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_06ce1e24;
            uVar7 = (ulong)*(uint *)(lVar12 + 0x24);
            uVar26 = (ulong)*(uint *)(lVar12 + 0x28);
            uVar11 = FUN_0690ad78(*(undefined4 *)(lVar12 + 0x20),uVar7,uVar26,0);
            lVar12 = *(long *)(param_4 + 0x408);
            if (lVar12 != 0) {
              if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_06ce1e24;
              uVar8 = (ulong)*(uint *)(lVar12 + 0x30);
              uVar25 = *(undefined4 *)(lVar12 + 0x34);
              uVar19 = FUN_0690ad78(*(undefined4 *)(lVar12 + 0x2c),uVar8,0);
              lVar12 = *(long *)(param_4 + 0x408);
              if (lVar12 != 0) goto LAB_06ce1c5c;
            }
          }
          break;
        }
        puVar5 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
        uVar1 = DAT_014ba724;
        uVar25 = DAT_014ba600;
        if (*(char *)(param_4 + 0x2c0) == '\0') {
          return;
        }
        lVar12 = *(long *)(param_4 + 0x260);
        if (lVar12 != 0) {
          uVar10 = 0;
          do {
            if (*(int *)(lVar12 + 0x18) <= (int)uVar10) {
              return;
            }
            FUN_06df6840(0x3f800000,uVar25,uVar1,0x3f800000,0);
            iVar6 = 0;
            do {
              if (((*(long *)(param_4 + 0x260) == 0) ||
                  (lVar12 = FUN_047af170(*(long *)(param_4 + 0x260),uVar10,*(undefined8 *)puVar5),
                  lVar12 == 0)) || (*(long *)(param_4 + 0x260) == 0)) goto LAB_06ce1df8;
              uVar11 = *(undefined8 *)(lVar12 + 0x10);
              fVar14 = *(float *)(lVar12 + 0x18);
              lVar12 = FUN_047af170(*(long *)(param_4 + 0x260),uVar10 | 1,*(undefined8 *)puVar5);
              if ((lVar12 == 0) || (*(long *)(param_4 + 0x260) == 0)) goto LAB_06ce1df8;
              uVar19 = *(undefined8 *)(lVar12 + 0x10);
              fVar28 = *(float *)(lVar12 + 0x18);
              lVar12 = FUN_047af170(*(long *)(param_4 + 0x260),uVar10,*(undefined8 *)puVar5);
              if ((lVar12 == 0) || (*(long *)(param_4 + 0x260) == 0)) goto LAB_06ce1df8;
              uVar35 = *(undefined8 *)(lVar12 + 0x10);
              fVar33 = *(float *)(lVar12 + 0x18);
              lVar12 = FUN_047af170(*(long *)(param_4 + 0x260),uVar10,*(undefined8 *)puVar5);
              if (lVar12 == 0) goto LAB_06ce1df8;
              fVar17 = (float)iVar6 * 0.25;
              fVar21 = (float)((ulong)uVar11 >> 0x20) +
                       ((float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar35 >> 0x20)) * fVar17;
              FUN_06df63f4(CONCAT44(fVar21,(float)uVar11 + ((float)uVar19 - (float)uVar35) * fVar17)
                           ,fVar21,fVar14 + fVar17 * (fVar28 - fVar33),
                           *(undefined4 *)(lVar12 + 0x1c),0);
              iVar6 = iVar6 + 1;
            } while (iVar6 != 5);
            lVar12 = *(long *)(param_4 + 0x260);
            uVar10 = uVar10 + 2;
          } while (lVar12 != 0);
        }
        break;
      }
      uVar11 = FUN_049e4e9c(lVar12,iVar13,*(undefined8 *)puVar5);
      if ((iVar6 == 0) ||
         (uVar31 = 0x3f000000, uVar20 = uVar3, uVar18 = uVar2, uVar24 = uVar2, iVar13 < iVar6)) {
        uVar31 = 0x3f400000;
        uVar20 = uVar4;
        uVar18 = uVar25;
        uVar24 = uVar1;
      }
      FUN_06df6840(uVar18,uVar20,uVar24,uVar31,0);
      uVar8 = uVar7;
      uVar27 = uVar26;
      FUN_0690ad78(uVar11,uVar7,uVar26,0);
      FUN_06df6494(0);
      lVar12 = *(long *)(param_4 + 1000);
      if (lVar12 == 0) break;
      if (iVar13 < *(int *)(lVar12 + 0x18) + -1) {
        uVar19 = FUN_049e4e9c(lVar12,iVar13 + 1,*(undefined8 *)puVar5);
        uVar11 = FUN_0690ad78(uVar11,uVar7,uVar26,0);
        uVar19 = FUN_0690ad78(uVar19,uVar8,uVar27,0);
        FUN_06df6360(uVar11,uVar7,uVar26,uVar19,uVar8,uVar27,0);
        lVar12 = *(long *)(param_4 + 1000);
        uVar8 = uVar7;
        uVar27 = uVar26;
      }
      uVar7 = uVar8;
      uVar26 = uVar27;
      iVar13 = iVar13 + 1;
    } while (lVar12 != 0);
  }
LAB_06ce1df8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


