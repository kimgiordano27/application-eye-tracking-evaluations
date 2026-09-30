/*
FUNCTION_NAME: FUN_071e78b4
ENTRY_POINT: 071e78b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_071e78b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  int *piVar25;
  long lVar26;
  long *plVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  ulong local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  undefined8 uStack_2c8;
  ulong local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long local_2a0;
  long lStack_298;
  ulong local_290;
  undefined8 uStack_288;
  double dStack_280;
  undefined8 uStack_278;
  ulong local_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  ulong local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong local_230;
  undefined8 uStack_228;
  double local_220;
  long local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulong local_150;
  undefined8 uStack_148;
  double local_140;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  ulong local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined7 local_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((DAT_08268426 & 1) == 0) {
    FUN_0373b518(System_Func<TextShadow,_TextShadow,_bool>_TypeInfo);
    FUN_0373b518(System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
    FUN_0373b518(System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
    FUN_0373b518(System_Func<Touch,_Touch,_TwoFingerDragGesture>_TypeInfo);
    FUN_0373b518(System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
    FUN_0373b518(System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
    FUN_0373b518(System_Func<Touch,_Touch,_TwoFingerDragGesture>_TypeInfo);
    FUN_0373b518(System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    FUN_0373b518(System_Func<Translate,_Translate,_bool>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_byte,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_Decimal,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_double,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_short,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_int,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_long,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_sbyte,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_float,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_ushort,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_uint,_object>_TypeInfo);
    FUN_0373b518(System_Func<ushort,_ulong,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_byte,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_Decimal,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_double,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_short,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_int,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_long,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_sbyte,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_float,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_ushort,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_uint,_object>_TypeInfo);
    FUN_0373b518(System_Func<uint,_ulong,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_byte,_object>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d88b70);
    FUN_0373b518(PTR_DAT_07d88b80);
    FUN_0373b518(PTR_DAT_07d969f0);
    FUN_0373b518(System_Func<int,_float,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_Decimal,_object>_TypeInfo);
    FUN_0373b518(System_Func<short,_double,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_double,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_short,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_int,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_sbyte,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_float,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_ushort,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_uint,_object>_TypeInfo);
    FUN_0373b518(System_Func<ulong,_ulong,_object>_TypeInfo);
    FUN_0373b518(System_Func<VFXEventAttribute,_int,_bool>_TypeInfo);
    FUN_0373b518(
                System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
                );
    FUN_0373b518(
                System_Func<LightCookieManager_LightCookieMapping,_LightCookieManager_LightCookieMapping,_int>_TypeInfo
                );
    FUN_0373b518(System_Func<Assembly,_string,_bool,_Type>_TypeInfo);
    FUN_0373b518(System_Func<string,_uint,_uint>_TypeInfo);
    DAT_08268426 = 1;
  }
  local_120._8_8_ = 0;
  local_120._0_8_ = 0;
  local_130._8_8_ = 0;
  local_130._0_8_ = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_140 = 0.0;
  local_88 = 0;
  uStack_81 = 0;
  uStack_80 = 0;
  local_160 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0.0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0.0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0.0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  dStack_260 = 0.0;
  plVar27 = (long *)(param_1 + 0x28);
  *plVar27 = param_4;
  thunk_FUN_037aeb94(plVar27);
  if (*plVar27 != 0) {
    uVar14 = FUN_078ce114(*plVar27,0);
    *(undefined4 *)(param_1 + 0x34) = uVar14;
    puVar9 = System_Func<ulong,_ushort,_object>_TypeInfo;
    puVar8 = System_Func<ulong,_sbyte,_object>_TypeInfo;
    puVar7 = System_Func<ulong,_byte,_object>_TypeInfo;
    puVar6 = System_Func<uint,_double,_object>_TypeInfo;
    puVar5 = PTR_DAT_07d88b70;
    if (*(long *)(param_1 + 0x28) != 0) {
      bVar13 = FUN_078ce28c(*(long *)(param_1 + 0x28),0);
      *(byte *)(param_1 + 0x30) = bVar13 & 1;
      lVar16 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
      FUN_053b2e84(lVar16,*(undefined8 *)puVar8);
      iVar15 = FUN_04131438(param_2,param_3,*(undefined8 *)puVar5);
      lVar17 = thunk_FUN_037788cc(*(undefined8 *)puVar7);
      FUN_049ce6c0(lVar17,*(undefined8 *)puVar6);
      puVar8 = System_Func<Assembly,_string,_bool,_Type>_TypeInfo;
      puVar7 = PTR_DAT_07d969f0;
      puVar6 = PTR_DAT_07d88b80;
      puVar5 = PTR_DAT_07d86548;
      if (0 < iVar15) {
        iVar28 = 0;
        do {
          auVar33 = FUN_04131270(param_2,param_3,iVar28,*(undefined8 *)puVar6);
          local_120 = auVar33;
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar18 = FUN_075c5fa4(local_120,0);
          uVar30 = *(undefined8 *)puVar8;
          if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)(puVar5 + 0xe0));
          }
          uVar30 = FUN_062519f8(uVar30,0);
          uVar19 = FUN_0625b9c4(uVar18,uVar30,0);
          uVar30 = local_120._8_8_;
          uVar18 = local_120._0_8_;
          if ((uVar19 & 1) == 0) {
            if (*(int *)(*(long *)System_Func<short,_double,_object>_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            auVar33 = FUN_052a1d00(uVar18,uVar30,
                                   *(undefined8 *)System_Func<ulong,_Decimal,_object>_TypeInfo);
            local_130 = auVar33;
            lVar20 = FUN_052a1bfc(local_130,*(undefined8 *)System_Func<int,_float,_object>_TypeInfo)
            ;
            if (lVar20 != 0) {
              if (lVar17 == 0) goto LAB_071e889c;
              lVar22 = *(long *)(lVar17 + 0x10);
              lVar23 = *(long *)System_Func<ushort,_double,_object>_TypeInfo;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_071e889c;
              uVar21 = *(uint *)(lVar17 + 0x18);
              if (uVar21 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar21 + 1;
                *(long *)(lVar22 + (long)(int)uVar21 * 8 + 0x20) = lVar20;
                thunk_FUN_037aeb94();
              }
              else {
                FUN_049ceef4(lVar17,lVar20,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          iVar28 = iVar28 + 1;
        } while (iVar15 != iVar28);
      }
      uVar18 = thunk_FUN_037788cc(*(undefined8 *)
                                   System_Func<LightCookieManager_LightCookieMapping,_LightCookieManager_LightCookieMapping,_int>_TypeInfo
                                 );
      FUN_062855bc(uVar18,0);
      puVar29 = (undefined8 *)System_Func<ulong,_short,_object>_TypeInfo;
      puVar6 = System_Func<uint,_sbyte,_object>_TypeInfo;
      puVar5 = System_Func<ushort,_short,_object>_TypeInfo;
      if (lVar17 != 0) {
        FUN_049d0818(lVar17,uVar18,*(undefined8 *)System_Func<ushort,_long,_object>_TypeInfo);
        FUN_049cf910(&local_e0,lVar17,*(undefined8 *)puVar5);
        puVar24 = (undefined8 *)((ulong)&local_e0 | 1);
        uStack_148 = uStack_d8;
        local_150 = local_e0;
        local_140 = local_d0;
        while( true ) {
          uVar19 = FUN_05d64e98(&local_150,
                                *(undefined8 *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
          dVar10 = local_140;
          if ((uVar19 & 1) == 0) break;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(int *)(lVar16 + 0x18) == 0) {
            uStack_198 = 0;
            local_1a0 = 0;
            local_188 = 0;
            local_190 = 0;
            uStack_1b8 = 0;
            local_1c0 = 0;
            uStack_1a8 = 0;
            local_1b0 = 0.0;
            uStack_1d8 = 0;
            local_1e0 = 0;
            uStack_1c8 = 0;
            local_1d0 = 0;
            uStack_208 = 0;
            local_210 = 0;
            uStack_1f8 = 0;
            local_200 = 0;
            uStack_1e8 = 0;
            local_1f0 = 0.0;
            if (local_140 == 0.0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
LAB_071e7fa8:
            local_188 = 0;
            local_190 = 0;
            uStack_198 = 0;
            local_1a0 = 0;
            uStack_1a8 = 0;
            local_1b0 = 0.0;
            uStack_1b8 = 0;
            local_1c0 = 0;
            uStack_1c8 = 0;
            local_1d0 = 0;
            uStack_1d8 = 0;
            local_1e0 = 0;
            uStack_1e8 = 0;
            local_1f0 = 0.0;
            local_200 = 0;
            uStack_208 = *(undefined8 *)((long)dVar10 + 0x10);
            local_210 = (ulong)*(uint *)((long)dVar10 + 0x24) << 0x20;
            local_210 = CONCAT53(local_210._3_5_,*(undefined3 *)((long)dVar10 + 0x20));
            uVar21 = *(uint *)((long)dVar10 + 0x34);
            fVar31 = *(float *)((long)dVar10 + 0x38);
            uStack_1f8 = *(undefined8 *)((long)dVar10 + 0x34);
            uVar14 = 0;
            if (*(long *)((long)dVar10 + 0x40) != 0) {
              uVar14 = FUN_071e8a8c();
              uVar21 = *(uint *)((long)dVar10 + 0x34);
              fVar31 = *(float *)((long)dVar10 + 0x38);
            }
            local_1f0 = (double)uVar21 * (double)fVar31;
            uStack_1e8 = CONCAT44(uStack_1e8._4_4_,uVar14);
            uStack_1c8 = uStack_208;
            local_1d0 = local_210;
            uStack_1b8 = uStack_1f8;
            local_1c0 = local_200;
            uStack_1a8 = uStack_1e8;
            uStack_198 = uStack_1d8;
            local_1a0 = local_1e0;
            local_1b0 = local_1f0;
            thunk_FUN_037aeb94(&local_1a0,0);
            uVar18 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
            FUN_04ba4dd4(uVar18,*(undefined8 *)System_Func<ushort,_ulong,_object>_TypeInfo);
            local_190 = uVar18;
            thunk_FUN_037aeb94(&local_190,uVar18);
            uVar18 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ushort,_object>_TypeInfo);
            Unity_Collections_NativeArray<NativePlane>__Copy
                      (uVar18,*(undefined8 *)System_Func<uint,_byte,_object>_TypeInfo);
            local_188 = uVar18;
            thunk_FUN_037aeb94(&local_188,uVar18);
            uVar18 = *(undefined8 *)System_Func<ulong,_int,_object>_TypeInfo;
            memcpy(&local_e0,&local_1d0,0x50);
            FUN_053b3678(lVar16,&local_e0,uVar18);
          }
          else {
            if (local_140 == 0.0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            dVar32 = *(double *)((long)local_140 + 0x10);
            FUN_053b3480(&local_e0,lVar16,*(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo
                        );
            if (local_d0 < dVar32) goto LAB_071e7fa8;
            cVar2 = *(char *)((long)dVar10 + 0x20);
            FUN_053b3480(&local_e0,lVar16,*(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo
                        );
            if ((cVar2 != '\0') == ((local_e0 & 1) == 0)) goto LAB_071e7fa8;
            if (*(char *)((long)dVar10 + 0x20) == '\0') {
              if (*(char *)((long)dVar10 + 0x21) == '\0') {
                FUN_053b3480(&local_e0,lVar16,
                             *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo);
                if ((local_e0 & 0x10000) == 0) goto LAB_071e7f14;
              }
              goto LAB_071e7fa8;
            }
LAB_071e7f14:
            iVar15 = *(int *)((long)dVar10 + 0x24);
            FUN_053b3480(&local_e0,lVar16,*(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo
                        );
            if ((iVar15 != local_e0._4_4_) || (*(int *)((long)dVar10 + 0x34) != 0))
            goto LAB_071e7fa8;
          }
          FUN_053b34d0(&local_e0,lVar16,*puVar29);
          uVar19 = local_e0;
          uVar11 = (undefined1)local_e0;
          local_160 = local_a8;
          local_88 = (undefined7)*puVar24;
          uStack_81 = (undefined1)*(undefined8 *)((long)puVar24 + 7);
          uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar24 + 7) >> 8);
          uStack_178 = uStack_c0;
          local_180 = local_c8;
          uStack_168 = uStack_b0;
          uStack_170 = uStack_b8;
          dVar32 = *(double *)((long)dVar10 + 0x18);
          if (*(int *)(*(long *)System_Func<string,_uint,_uint>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar18 = FUN_071e77e8(dVar10,param_4);
          lVar17 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
          FUN_04ba4efc(lVar17,uVar18,*(undefined8 *)System_Func<ushort,_uint,_object>_TypeInfo);
          if ((uVar19 & 1) == 0) {
            lVar20 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_uint,_object>_TypeInfo);
            FUN_048d6070(lVar20,*(undefined8 *)System_Func<uint,_Decimal,_object>_TypeInfo);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (0 < *(int *)(lVar17 + 0x18)) {
              iVar15 = 0;
              do {
                Unity_Collections_NativeArray<NetworkEndpoint>__Dispose
                          (&local_e0,lVar17,iVar15,
                           *(undefined8 *)System_Func<uint,_float,_object>_TypeInfo);
                local_2c0 = 0;
                uStack_2d8 = 0;
                local_2e0 = 0;
                uStack_2c8 = 0;
                local_2d0 = 0.0;
                uStack_288 = uStack_d8;
                local_290 = local_e0;
                uStack_278 = local_c8;
                dStack_280 = local_d0;
                FUN_056ef254(&local_2e0,&local_e0,iVar15,
                             *(undefined8 *)
                              System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
                            );
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                uStack_108 = uStack_2d8;
                local_110 = local_2e0;
                uStack_f8 = uStack_2c8;
                local_100 = local_2d0;
                local_f0 = local_2c0;
                lVar22 = *(long *)(lVar20 + 0x10);
                lVar23 = *(long *)System_Func<ushort,_Decimal,_object>_TypeInfo;
                *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                uVar21 = *(uint *)(lVar20 + 0x18);
                if (uVar21 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar20 + 0x18) = uVar21 + 1;
                  lVar22 = lVar22 + (long)(int)uVar21 * 0x28;
                  *(ulong *)(lVar22 + 0x40) = local_2c0;
                  *(undefined8 *)(lVar22 + 0x28) = uStack_2d8;
                  *(ulong *)(lVar22 + 0x20) = local_2e0;
                  *(undefined8 *)(lVar22 + 0x38) = uStack_2c8;
                  *(double *)(lVar22 + 0x30) = local_2d0;
                  thunk_FUN_037aeb94(lVar22 + 0x28,0);
                }
                else {
                  uStack_d8 = uStack_2d8;
                  local_e0 = local_2e0;
                  local_c8 = uStack_2c8;
                  local_d0 = local_2d0;
                  uStack_c0 = local_2c0;
                  FUN_048d6994(lVar20,&local_e0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < *(int *)(lVar17 + 0x18));
            }
            lVar17 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar17);
              lVar17 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
            }
            lVar22 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
            if (lVar22 == 0) {
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar17);
                lVar17 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
              }
              uVar18 = **(undefined8 **)(lVar17 + 0xb8);
              lVar22 = thunk_FUN_037788cc(*(undefined8 *)
                                           System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
              FUN_05815814(lVar22,uVar18,*(undefined8 *)System_Func<ulong,_ulong,_object>_TypeInfo,0
                          );
              plVar27 = (long *)(*(long *)(*(long *)
                                            System_Func<VFXEventAttribute,_int,_bool>_TypeInfo +
                                          0xb8) + 8);
              *plVar27 = lVar22;
              thunk_FUN_037aeb94(plVar27,lVar22);
            }
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_048d87fc(lVar20,lVar22,*(undefined8 *)System_Func<ushort,_int,_object>_TypeInfo);
            lVar17 = RootMotion_FinalIK_Finger___ctor
                               (*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo,
                                *(undefined4 *)((long)dVar10 + 0x30));
            lVar22 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
            FUN_04ba4dd4(lVar22,*(undefined8 *)System_Func<ushort,_ulong,_object>_TypeInfo);
            if (0 < *(int *)(lVar20 + 0x18)) {
              iVar15 = 0;
              do {
                FUN_048d65d4(&local_e0,lVar20,iVar15,*(undefined8 *)puVar6);
                uVar18 = local_c8;
                uVar14 = (undefined4)local_c8;
                uVar12 = local_c8._4_4_;
                uStack_228 = uStack_d8;
                local_230 = local_e0;
                local_220 = local_d0;
                FUN_048d65d4(&local_e0,lVar20,iVar15,*(undefined8 *)puVar6);
                if ((long)(int)uStack_c0 < (long)(ulong)(uint)(*(int *)((long)dVar10 + 0x30) << 1))
                {
                  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  iVar28 = (int)uStack_c0;
                  if ((int)uStack_c0 < 0) {
                    iVar28 = (int)uStack_c0 + 1;
                  }
                  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  iVar1 = *(int *)(local_98 + 0x18);
                  uVar21 = iVar28 >> 1;
                  if ((uStack_c0 & 1) == 0) {
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7bc();
                    }
                    piVar25 = (int *)(lVar17 + (long)(int)uVar21 * 8 + 0x20);
                    uVar14 = 1;
                  }
                  else {
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7bc();
                    }
                    piVar25 = (int *)(lVar17 + (long)(int)uVar21 * 8 + 0x24);
                    uVar14 = 2;
                  }
                  *piVar25 = iVar15 + *(int *)(local_a0 + 0x18);
                  uStack_2d8 = uStack_228;
                  local_2e0 = local_230;
                  local_2d0 = local_220;
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  uStack_108 = uStack_228;
                  local_110 = local_230;
                  local_100 = local_220;
                  lVar23 = *(long *)(lVar22 + 0x10);
                  lVar26 = *(long *)System_Func<ushort,_byte,_object>_TypeInfo;
                  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  uVar3 = *(uint *)(lVar22 + 0x18);
                  iVar1 = iVar1 + uVar21;
                  if (uVar3 < *(uint *)(lVar23 + 0x18)) {
                    *(uint *)(lVar22 + 0x18) = uVar3 + 1;
                    lVar23 = lVar23 + (long)(int)uVar3 * 0x20;
                    *(int *)(lVar23 + 0x38) = iVar1;
                    *(undefined4 *)(lVar23 + 0x3c) = uVar14;
                    *(double *)(lVar23 + 0x30) = local_220;
                    *(undefined8 *)(lVar23 + 0x28) = uStack_228;
                    *(ulong *)(lVar23 + 0x20) = local_230;
                    thunk_FUN_037aeb94(lVar23 + 0x28,0);
                  }
                  else {
                    uStack_d8 = uStack_228;
                    local_e0 = local_230;
                    local_d0 = local_220;
                    local_c8 = CONCAT44(uVar14,iVar1);
                    FUN_04ba56a8(lVar22,&local_e0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                else {
                  uStack_2d8 = uStack_228;
                  local_2e0 = local_230;
                  local_2d0 = local_220;
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  uStack_108 = uStack_228;
                  local_110 = local_230;
                  local_100 = local_220;
                  lVar23 = *(long *)(lVar22 + 0x10);
                  lVar26 = *(long *)System_Func<ushort,_byte,_object>_TypeInfo;
                  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  uVar21 = *(uint *)(lVar22 + 0x18);
                  if (uVar21 < *(uint *)(lVar23 + 0x18)) {
                    *(uint *)(lVar22 + 0x18) = uVar21 + 1;
                    lVar23 = lVar23 + (long)(int)uVar21 * 0x20;
                    *(undefined4 *)(lVar23 + 0x38) = uVar14;
                    *(undefined4 *)(lVar23 + 0x3c) = uVar12;
                    *(double *)(lVar23 + 0x30) = local_220;
                    *(undefined8 *)(lVar23 + 0x28) = uStack_228;
                    *(ulong *)(lVar23 + 0x20) = local_230;
                    thunk_FUN_037aeb94(lVar23 + 0x28,0);
                  }
                  else {
                    uStack_d8 = uStack_228;
                    local_e0 = local_230;
                    local_d0 = local_220;
                    local_c8 = uVar18;
                    FUN_04ba56a8(lVar22,&local_e0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < *(int *)(lVar20 + 0x18));
            }
            if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_04ba30e0(local_98,lVar17,
                         *(undefined8 *)System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo
                        );
            if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_04ba5904(local_a0,lVar22,
                         *(undefined8 *)System_Func<Translate,_Translate,_bool>_TypeInfo);
          }
          else {
            lVar20 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
            if (*(int *)(lVar20 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar20);
              lVar20 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
            }
            lVar22 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x10);
            if (lVar22 == 0) {
              if (*(int *)(lVar20 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar20);
                lVar20 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
              }
              uVar18 = **(undefined8 **)(lVar20 + 0xb8);
              lVar22 = thunk_FUN_037788cc(*(undefined8 *)
                                           System_Func<Touch,_Touch,_TwoFingerDragGesture>_TypeInfo)
              ;
              FUN_0586fb18(lVar22,uVar18,*(undefined8 *)System_Func<ulong,_uint,_object>_TypeInfo,0)
              ;
              plVar27 = (long *)(*(long *)(*(long *)
                                            System_Func<VFXEventAttribute,_int,_bool>_TypeInfo +
                                          0xb8) + 0x10);
              *plVar27 = lVar22;
              thunk_FUN_037aeb94(plVar27,lVar22);
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_04ba7344(lVar17,lVar22,*(undefined8 *)System_Func<ushort,_sbyte,_object>_TypeInfo);
            if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_04ba5904(local_a0,lVar17,
                         *(undefined8 *)System_Func<Translate,_Translate,_bool>_TypeInfo);
          }
          uVar18 = *(undefined8 *)System_Func<ulong,_int,_object>_TypeInfo;
          local_e0 = CONCAT71(local_e0._1_7_,uVar11);
          *(ulong *)((long)puVar24 + 7) = CONCAT71(uStack_80,uStack_81);
          *puVar24 = CONCAT17(uStack_81,local_88);
          local_a8 = local_160;
          uStack_c0 = uStack_178;
          local_c8 = local_180;
          uStack_b0 = uStack_168;
          uStack_b8 = uStack_170;
          local_d0 = dVar32;
          FUN_053b3678(lVar16,&local_e0,uVar18);
          puVar29 = (undefined8 *)System_Func<ulong,_short,_object>_TypeInfo;
        }
        FUN_05d64e94(&local_150,*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
        if (lVar16 != 0) {
          lVar17 = RootMotion_FinalIK_Finger___ctor
                             (*(undefined8 *)System_Func<TextShadow,_TextShadow,_bool>_TypeInfo,
                              *(undefined4 *)(lVar16 + 0x18));
          plVar27 = (long *)(param_1 + 0x38);
          *plVar27 = lVar17;
          thunk_FUN_037aeb94(plVar27,lVar17);
          lVar17 = *plVar27;
          if (lVar17 != 0) {
            lVar20 = 0;
            uVar19 = 0;
            while( true ) {
              if ((long)*(int *)(lVar17 + 0x18) <= (long)uVar19) {
                if (*(long *)(lVar4 + 0x28) == local_78) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              FUN_053b34d0(&local_2e0,lVar16,*puVar29);
              lVar23 = lStack_298;
              lVar22 = local_2a0;
              uStack_248 = uStack_2b8;
              local_250 = local_2c0;
              uStack_238 = uStack_2a8;
              uStack_240 = uStack_2b0;
              uStack_268 = uStack_2d8;
              local_270 = local_2e0;
              uStack_258 = uStack_2c8;
              dStack_260 = local_2d0;
              lVar17 = *plVar27;
              if (lVar17 == 0) break;
              if (*(uint *)(lVar17 + 0x18) <= uVar19) {
LAB_071e88f8:
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              lVar17 = lVar17 + lVar20;
              *(undefined8 *)(lVar17 + 0x48) = uStack_2b8;
              *(ulong *)(lVar17 + 0x40) = local_2c0;
              *(undefined8 *)(lVar17 + 0x58) = uStack_2a8;
              *(undefined8 *)(lVar17 + 0x50) = uStack_2b0;
              *(undefined8 *)(lVar17 + 0x28) = uStack_2d8;
              *(ulong *)(lVar17 + 0x20) = local_2e0;
              *(undefined8 *)(lVar17 + 0x38) = uStack_2c8;
              *(double *)(lVar17 + 0x30) = local_2d0;
              thunk_FUN_037aeb94(lVar17 + 0x50,0);
              lVar17 = *plVar27;
              if ((lVar17 == 0) || (lVar23 == 0)) break;
              uVar18 = FUN_04ba48b4(lVar23,*(undefined8 *)
                                            System_Func<ushort,_ushort,_object>_TypeInfo);
              if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_071e88f8;
              *(undefined8 *)(lVar17 + lVar20 + 0x58) = uVar18;
              thunk_FUN_037aeb94();
              lVar17 = *plVar27;
              if ((lVar17 == 0) || (lVar22 == 0)) break;
              uVar18 = FUN_04ba73d8(lVar22,*(undefined8 *)
                                            System_Func<ushort,_float,_object>_TypeInfo);
              if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_071e88f8;
              *(undefined8 *)(lVar17 + lVar20 + 0x50) = uVar18;
              uVar19 = uVar19 + 1;
              lVar20 = lVar20 + 0x40;
              thunk_FUN_037aeb94();
              lVar17 = *plVar27;
              if (lVar17 == 0) break;
            }
          }
        }
      }
    }
  }
LAB_071e889c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


