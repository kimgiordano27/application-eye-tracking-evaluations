/*
FUNCTION_NAME: FUN_07022e44
ENTRY_POINT: 07022e44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 93
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_07022e44(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float local_130;
  float fStack_12c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_78;
  
  if ((DAT_07eebd91 & 1) == 0) {
    FUN_03642964(SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo);
    FUN_03642964(SlideShowScrollViewPro_FadeCanvas_<FadeOutNow>d__7_TypeInfo);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(Sirenix_Serialization_RectFormatter_TypeInfo);
    FUN_03642964(System_Runtime_Serialization_KnownTypeDataContractResolver_TypeInfo);
    FUN_03642964(Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo);
    DAT_07eebd91 = 1;
  }
  puVar1 = SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo;
  local_78 = 0;
  local_90 = 0;
  local_c8 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if (param_3 == 0) goto LAB_07023540;
  lVar5 = FUN_06fa1008(param_3,*(undefined8 *)
                                SlideShowScrollViewPro_FadeCanvas_<FadeOutNow>d__7_TypeInfo);
  lVar6 = FUN_06fa1008(param_3,*(undefined8 *)puVar1);
  lVar13 = *(long *)(param_1 + 0xe8);
  if (lVar13 == 0) {
    return;
  }
  if (lVar6 == 0) goto LAB_07023540;
  uVar2 = FUN_06fc2f4c(lVar6,0);
  uVar7 = FUN_06f98ac0(lVar13,uVar2 & 1,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0xe8) == 0) goto LAB_07023540;
    uVar7 = FUN_06f98b04(*(long *)(param_1 + 0xe8),(long)&local_78 + 4,&local_78,0);
    if ((((uVar7 & 1) == 0) || (local_78._4_4_ == 7)) ||
       ((local_78._4_4_ == 6 &&
        ((uVar7 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
                            (param_1), (uVar7 & 1) == 0 || (local_78._4_4_ == 7)))))) {
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_07023540;
      FUN_06f991a0(*(long *)(param_1 + 0xe8),0);
      goto LAB_07023420;
    }
    uVar22 = *(undefined8 *)(lVar6 + 0x160);
    fVar16 = (float)(int)local_78 / 100.0;
    fVar17 = 1.0;
    if (fVar16 <= 1.0) {
      fVar17 = fVar16;
    }
    fStack_12c = 0.0;
    if (0.0 <= fVar16) {
      fStack_12c = fVar17;
    }
    if (DAT_07ed7e32 == '\0') {
      FUN_03642964(PTR_DAT_079fb3d0);
      DAT_07ed7e32 = '\x01';
    }
    uStack_a8 = *(undefined8 *)(lVar6 + 0x110);
    local_b0 = *(undefined8 *)(lVar6 + 0x108);
    uStack_98 = *(undefined8 *)(lVar6 + 0x120);
    local_a0 = *(undefined8 *)(lVar6 + 0x118);
    uStack_b8 = *(undefined8 *)(lVar6 + 0x100);
    local_c0 = *(undefined8 *)(lVar6 + 0xf8);
    puVar10 = *(undefined4 **)(*(long *)PTR_DAT_079fb3d0 + 0xb8);
    uVar20 = *puVar10;
    uVar21 = puVar10[1];
    uVar18 = puVar10[2];
    uVar19 = puVar10[3];
    local_90 = *(undefined4 *)(lVar6 + 0x128);
    uVar7 = FUN_071cc600(0x30,0x12,0);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_071a6688(&local_c0,0x30,0);
    }
    uStack_f8 = uStack_b8;
    local_100 = local_c0;
    uStack_e8 = uStack_a8;
    uStack_f0 = local_b0;
    uStack_d8 = uStack_98;
    local_e0 = local_a0;
    local_d0 = local_90;
    FUN_07022cb0(uVar7,&local_100);
    puVar1 = Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
    lVar13 = *(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar13 = *(long *)puVar1;
    }
    if (param_2 == 0) goto LAB_07023540;
    local_110 = 0;
    uStack_108 = 0;
    local_118 = 0;
    auVar23 = FUN_06f17114(param_2,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20),&local_118,0);
    uVar9 = auVar23._8_8_;
    uVar8 = auVar23._0_8_;
    uVar12 = 0;
    if (local_78._4_4_ < 4) {
      if (local_78._4_4_ == 1) {
        if (lVar5 == 0) goto LAB_07023540;
        auVar23 = FUN_06fc3e64(lVar5,0);
        FUN_07023544(param_1,param_2,auVar23._0_8_,auVar23._8_8_,uVar8,uVar9,0);
        uVar12 = 1;
        goto LAB_07023294;
      }
      if (local_78._4_4_ == 2) {
        if (lVar5 == 0) goto LAB_07023540;
        auVar23 = FUN_06fc3ecc(lVar5,0);
        uVar12 = 1;
        FUN_07023544(param_1,param_2,auVar23._0_8_,auVar23._8_8_,uVar8,uVar9,1);
        uVar18 = 0;
        uVar19 = 0x3f800000;
        uVar20 = DAT_01650aa0;
        uVar21 = DAT_01650e80;
        goto LAB_07023294;
      }
      if (local_78._4_4_ == 3) {
        if (lVar5 == 0) goto LAB_07023540;
        auVar23 = FUN_06fc3de4(lVar5,0);
        goto LAB_07023270;
      }
    }
    else {
      if (local_78._4_4_ == 4) {
        if (lVar5 == 0) goto LAB_07023540;
        auVar23 = FUN_06fc3dac(lVar5,0);
      }
      else {
        if (local_78._4_4_ == 5) {
          if ((*(long *)(param_1 + 0x2d0) == 0) ||
             (lVar13 = FUN_06fc6070(*(long *)(param_1 + 0x2d0),0), lVar13 == 0)) {
LAB_07023250:
            if (*(int *)(*(long *)
                          System_Runtime_Serialization_KnownTypeDataContractResolver_TypeInfo + 0xe4
                        ) == 0) {
              thunk_FUN_036a1978();
            }
            auVar23 = FUN_0702a130(0);
            goto LAB_07023270;
          }
          if (*(long *)(param_1 + 0x2d0) == 0) goto LAB_07023540;
          uVar14 = FUN_06fc6070(*(long *)(param_1 + 0x2d0),0);
        }
        else {
          if (local_78._4_4_ != 6) goto LAB_07023298;
          if (*(long *)(param_1 + 0x298) == 0) goto LAB_07023540;
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x298) + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar7 = FUN_071c0684(uVar14,0,0);
          if ((uVar7 & 1) == 0) goto LAB_07023250;
          if (*(long *)(param_1 + 0x298) == 0) goto LAB_07023540;
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x298) + 0xb8);
          if (*(int *)(*(long *)Sirenix_Serialization_RectFormatter_TypeInfo + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar14 = FUN_06eef230(uVar14,1,0);
        }
        auVar23 = FUN_06f17030(param_2,uVar14,0);
      }
LAB_07023270:
      FUN_07023544(param_1,param_2,auVar23._0_8_,auVar23._8_8_,uVar8,uVar9,0);
      uVar12 = 0;
LAB_07023294:
    }
LAB_07023298:
    plVar15 = (long *)0x0;
    if (local_78._4_4_ < 5) {
      if (local_78._4_4_ == 3) {
        lVar13 = *(long *)(param_1 + 0x170);
joined_r0x070232e4:
        if ((lVar13 != 0) && (*(long *)(lVar13 + 0xb8) != 0)) {
          puVar11 = (undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18);
          goto LAB_07023310;
        }
LAB_07023318:
        plVar15 = (long *)0x0;
      }
      else if (local_78._4_4_ == 4) {
        lVar13 = *(long *)(param_1 + 0x168);
        goto joined_r0x070232e4;
      }
    }
    else {
      if (local_78._4_4_ == 5) {
        if ((*(long *)(param_1 + 0x2d0) == 0) ||
           (lVar13 = FUN_06fc6070(*(long *)(param_1 + 0x2d0),0), lVar13 == 0)) goto LAB_07023318;
        puVar11 = (undefined8 *)(lVar13 + 0x18);
      }
      else {
        if (local_78._4_4_ != 6) goto LAB_0702331c;
        if (*(long *)(param_1 + 0x298) == 0) goto LAB_07023318;
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x298) + 0xb8);
      }
LAB_07023310:
      plVar15 = (long *)*puVar11;
    }
LAB_0702331c:
    uVar22 = NEON_scvtf(uVar22,4);
    if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    fVar17 = (float)uVar22 * fStack_12c;
    fStack_12c = (float)((ulong)uVar22 >> 0x20) * fStack_12c;
    uVar7 = FUN_071c0684(plVar15,0,0);
    local_130 = fVar17;
    if ((uVar7 & 1) != 0) {
      if (plVar15 == (long *)0x0) goto LAB_07023540;
      iVar3 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
      iVar4 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
      if ((iVar3 != 0) && (iVar4 != 0)) {
        local_130 = ((float)iVar3 * fStack_12c) / (float)iVar4;
        if (fVar17 < local_130) {
          fStack_12c = (fVar17 * (float)iVar4) / (float)iVar3;
          local_130 = fVar17;
        }
      }
    }
    uVar22 = *(undefined8 *)(lVar6 + 0x160);
    lVar13 = *(long *)(param_1 + 0xe8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (lVar13 == 0) goto LAB_07023540;
    uVar22 = NEON_scvtf(uVar22,4);
    local_130 = local_130 / (float)uVar22;
    fStack_12c = fStack_12c / (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_fmov(0x3f800000,4);
    fVar17 = (float)((ulong)uVar22 >> 0x20) - fStack_12c;
    FUN_06f99128(CONCAT44(fVar17,(float)uVar22 - local_130),fVar17,CONCAT44(fStack_12c,local_130),
                 fStack_12c,uVar20,uVar21,uVar18,uVar19,lVar13,
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20),uVar12,0);
  }
LAB_07023420:
  if ((*(long *)(param_1 + 0xe8) == 0) ||
     (uVar7 = FUN_06f98b04(*(long *)(param_1 + 0xe8),(long)&local_c8 + 4,&local_c8,0),
     (uVar7 & 1) != 0)) {
    return;
  }
  if ((*(long *)(param_1 + 0xe8) != 0) &&
     ((lVar13 = *(long *)(*(long *)(param_1 + 0xe8) + 0x90), lVar13 != 0 &&
      (*(long *)(lVar6 + 0xd8) != 0)))) {
    uVar22 = *(undefined8 *)(lVar13 + 0x48);
    uVar20 = FUN_071c60e8(*(long *)(lVar6 + 0xd8),0);
    if (lVar5 != 0) {
      auVar23 = FUN_06fc3a48(lVar5,0);
      FUN_06f5af14(param_2,uVar22,uVar20,auVar23._0_8_,auVar23._8_8_,0);
      fVar16 = *(float *)(lVar6 + 0x16c) * (float)*(int *)(lVar6 + 0x164);
      fVar17 = -2.1474836e+09;
      if (fVar16 != INFINITY) {
        fVar17 = (float)(int)fVar16;
      }
      fVar16 = (fVar17 * (float)(int)local_c8) / 100.0;
      auVar23 = FUN_06fc3a48(lVar5,0);
      FUN_06f5afcc(fVar17 * 0.25,fVar17 + fVar16 * -1.5,fVar16,param_2,uVar22,auVar23._0_8_,
                   auVar23._8_8_,0);
      return;
    }
  }
LAB_07023540:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


