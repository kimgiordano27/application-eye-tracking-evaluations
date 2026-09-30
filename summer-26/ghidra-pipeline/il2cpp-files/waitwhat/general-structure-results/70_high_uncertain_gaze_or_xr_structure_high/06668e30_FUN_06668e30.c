/*
FUNCTION_NAME: FUN_06668e30
ENTRY_POINT: 06668e30
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_possible_biometrics_hits_4
*/


void FUN_06668e30(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined2 *puVar12;
  void *__dest;
  long *plVar13;
  int iVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined1 local_64 [4];
  
  plVar15 = (long *)
            System_Security_Authentication_ExtendedProtection_ExtendedProtectionPolicy_TypeInfo;
                    /* catch() { ... } // from try @ 06668ce8 with catch @ 06668e30 */
  puVar7 = System_Diagnostics_ExceptionExtensions_TypeInfo;
                    /* catch() { ... } // from try @ 06668d6c with catch @ 06668e34 */
                    /* catch() { ... } // from try @ 06668d1c with catch @ 06668e38 */
                    /* catch() { ... } // from try @ 06668cb0 with catch @ 06668e3c */
                    /* catch() { ... } // from try @ 06668d4c with catch @ 06668e40 */
                    /* catch() { ... } // from try @ 06668e14 with catch @ 06668e44 */
                    /* catch() { ... } // from try @ 06668e10 with catch @ 06668e48 */
                    /* catch() { ... } // from try @ 06668b2c with catch @ 06668e4c */
                    /* catch() { ... } // from try @ 06668ca0 with catch @ 06668e50 */
                    /* try { // try from 06668e6c to 06768e6f has its CatchHandler @ 06668e88 */
                    /* try { // try from 06668e70 to 06768e8b has its CatchHandler @ 066689d4 */
  if ((DAT_07557d72 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f7830);
                    /* catch() { ... } // from try @ 06668e6c with catch @ 06668e88 */
                    /* try { // try from 06668e8c to 06768e93 has its CatchHandler @ 06668eec */
    FUN_03188a78(UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo);
                    /* try { // try from 06668e94 to 06768eb3 has its CatchHandler @ 066689d4 */
                    /* catch() { ... } // from try @ 06668b1c with catch @ 06668e98 */
    FUN_03188a78(Fusion_Photon_Realtime_Extensions_TypeInfo);
    FUN_03188a78(System_Security_Authentication_ExtendedProtection_ExtendedProtectionPolicy_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_UIR_ExtraRenderChainVEData_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Eyes_TypeInfo);
    FUN_03188a78(Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_F2mCurve_TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_F2mFieldElement_TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_F2mPoint_TypeInfo);
    FUN_03188a78(System_Runtime_ExceptionServices_ExceptionDispatchInfo_TypeInfo);
    FUN_03188a78(System_Diagnostics_ExceptionExtensions_TypeInfo);
    FUN_03188a78(PTR_DAT_07138120);
    FUN_03188a78(PTR_DAT_070f3548);
    DAT_07557d72 = 1;
  }
  local_64[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uVar10 = FUN_03b9c340(8,*(undefined8 *)puVar7);
  FUN_065e0fa8(local_64,uVar10,0);
  local_c0 = 0;
  puStack_b8 = local_64;
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar3 = *(int *)(param_4 + 0x294);
  lVar11 = FUN_04611490(*(long *)(param_1 + 0x30) + 0x18,*(undefined4 *)(param_4 + 0x298),
                        *(undefined8 *)
                         Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeInfo);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar4 = *(undefined4 *)(lVar11 + 0x6c);
  uVar1 = *(undefined4 *)(lVar11 + 100);
  uVar2 = *(undefined4 *)(lVar11 + 0x68);
  uVar5 = *(undefined4 *)(lVar11 + 0x70);
  lVar11 = FUN_03b2783c(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68),
                        *(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
  auVar16 = FUN_03b26b00(lVar11 + (long)*(int *)(param_4 + 0x2a4) * 0x4c,
                         *(undefined4 *)(param_4 + 0x2a8),1,
                         *(undefined8 *)UnityEngine_UIElements_UIR_ExtraRenderChainVEData_TypeInfo);
  if (*(char *)(param_4 + 0x2c1) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_06a01734(*(long *)(param_2 + 0x18),1,0);
  }
  if (*(char *)(param_4 + 0x2c2) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    thunk_FUN_06a04c98(*(long *)(param_2 + 0x18),*(undefined4 *)(param_4 + 0x2c4),0);
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    thunk_FUN_06a04cf0(*(long *)(param_2 + 0x18),0,*(undefined4 *)(param_4 + 0x2c8),0);
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    thunk_FUN_06a04cf0(*(long *)(param_2 + 0x18),1,*(undefined4 *)(param_4 + 0x2cc),0);
  }
  plVar13 = (long *)(param_1 + 0x58);
  if (*plVar13 == 0) {
    uVar9 = FUN_064b5b9c(4,0);
    local_1d0 = 0;
    FUN_046082e8(&local_1d0,8,uVar9,
                 *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_F2mPoint_TypeInfo)
    ;
    *plVar13 = local_1d0;
  }
  FUN_046089c4(plVar13,iVar3,0,
               *(undefined8 *)
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_F2mFieldElement_TypeInfo);
  puVar8 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_F2mCurve_TypeInfo;
  puVar7 = UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo;
  if (0 < iVar3) {
    iVar14 = 0;
    do {
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      puVar12 = (undefined2 *)FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_06654eb4(param_3,puVar12,&local_80);
      __dest = (void *)FUN_046083f0(plVar13,iVar14,*(undefined8 *)puVar8);
      local_160 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      local_180 = 0;
      local_168 = 0;
      uStack_170 = 0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      FUN_06a09bdc(&local_1d0,local_70 & 0xffffffff,0);
      memcpy(__dest,&local_1d0,0x78);
      lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      if (*(char *)(lVar11 + 0x14) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_070f3548 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar11 = FUN_0665ab5c(param_3,*puVar12);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar10 = *(undefined8 *)(lVar11 + 0xb8);
        FUN_0661c5f0(&local_1d0,uVar10,0);
        uStack_a8 = uStack_1c8;
        local_b0 = local_1d0;
        uStack_98 = uStack_1b8;
        uStack_a0 = local_1c0;
        local_90 = local_1b0;
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
        uVar9 = *(undefined4 *)(lVar11 + 0x18);
        lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
        local_1b0 = 0;
        local_d0 = local_90;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_e8 = uStack_a8;
        local_f0 = local_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        FUN_069f59ec(&local_1d0,&local_f0,uVar9,0xffffffff,*(undefined4 *)(lVar11 + 0x1c),0);
        local_100 = local_1b0;
        uStack_118 = uStack_1c8;
        local_120 = local_1d0;
        uStack_108 = uStack_1b8;
        uStack_110 = local_1c0;
        UnityEngine_UIElements_BaseListView__<get_untilManualBindingSourceSelectionMode>b__68_0
                  (__dest,&local_120,0);
        lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
        plVar15 = (long *)
                  System_Security_Authentication_ExtendedProtection_ExtendedProtectionPolicy_TypeInfo
        ;
        if (*(int *)(lVar11 + 0x10) != 1) {
          if (*(int *)(*(long *)
                        System_Security_Authentication_ExtendedProtection_ExtendedProtectionPolicy_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
          if (*(int *)(lVar11 + 0x10) != 2) goto LAB_066692e8;
        }
        FUN_0661c5f0(&local_1d0,uVar10,0);
        local_130 = local_1b0;
        uStack_148 = uStack_1c8;
        local_150 = local_1d0;
        uStack_138 = uStack_1b8;
        uStack_140 = local_1c0;
        FUN_06a09b1c(__dest,&local_150,0);
      }
LAB_066692e8:
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      FUN_06a09adc(__dest,*(undefined4 *)(lVar11 + 0xc),0);
      lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      FUN_06a09ae4(__dest,*(undefined4 *)(lVar11 + 0x10),0);
      lVar11 = FUN_056f403c(param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      if (*(int *)(lVar11 + 0xc) == 1) {
        FUN_06a09b34(0x3f800000,0,0,0x3f800000,__dest,0);
        FUN_06a09b40(0x3f800000,__dest,0);
        FUN_06a09b48(__dest,0,0);
        FUN_066525ec(&local_1d0,param_3,puVar12,1);
        if ((iVar14 == 0) && (*(char *)(param_4 + 0x2c0) != '\0')) {
          FUN_06a09b40(0x3f800000,local_168._4_4_,local_160 & 0xffffffff,local_160._4_4_,__dest,0);
        }
        else {
          FUN_06a09b34(local_168 & 0xffffffff,__dest,0);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar3 != iVar14);
  }
  auVar17 = FUN_046088b8(plVar13,*(undefined8 *)UnityEngine_XR_Eyes_TypeInfo);
  cVar6 = *(char *)(param_4 + 0x2c0);
  auVar18 = FUN_049f3298(*(undefined8 *)PTR_DAT_07138120);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_06a0486c(*(long *)(param_2 + 0x18),uVar1,uVar2,uVar4,uVar5,auVar17._0_8_,auVar17._8_8_,
                 cVar6 + -1,*(undefined4 *)(param_4 + 700),auVar16,auVar18,0);
    **(undefined1 **)(*(long *)PTR_DAT_070f7830 + 0xb8) = 1;
    FUN_065e0fb4(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


