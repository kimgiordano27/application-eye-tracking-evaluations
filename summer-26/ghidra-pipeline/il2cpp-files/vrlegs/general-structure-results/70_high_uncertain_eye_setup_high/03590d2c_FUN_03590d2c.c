/*
FUNCTION_NAME: FUN_03590d2c
ENTRY_POINT: 03590d2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03590d2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7,uint *param_8,undefined8 param_9
                 )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  undefined1 local_a0 [16];
  
  if ((DAT_0412e079 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo)
    ;
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    FUN_01ab69ac(_Common_Shop_Scripts_OculusRecharge_RechargeATM_<>c_TypeInfo);
    DAT_0412e079 = 1;
  }
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if ((*(long *)(param_7 + 0x670) == 0) &&
     (FUN_03590b70(param_7,*(undefined8 *)(param_7 + 0xf8)), *(long *)(param_7 + 0x670) == 0)) {
    uVar18 = FUN_03597634(0);
    if ((uVar18 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0367b470(*(undefined8 *)_Common_Shop_Scripts_OculusRecharge_RechargeATM_<>c_TypeInfo,param_7
                 ,0);
    return;
  }
  auVar5._8_8_ = local_a0._8_8_;
  auVar5._0_8_ = local_a0._0_8_;
  auVar4._8_8_ = local_a0._8_8_;
  auVar4._0_8_ = local_a0._0_8_;
  lVar19 = *(long *)(param_7 + 0x368);
  if ((lVar19 != 0) && (lVar23 = *(long *)(lVar19 + 0x60), local_a0 = auVar4, lVar23 != 0)) {
    uVar3 = *(uint *)(param_7 + 0x688);
    lVar25 = (long)(int)uVar3;
    uVar20 = *(uint *)(lVar23 + 0x18);
    local_a0 = auVar5;
    if (uVar20 <= uVar3) goto LAB_0359124c;
    lVar24 = lVar23 + lVar25 * 0x50;
    lVar22 = *(long *)(lVar24 + 0x30);
    if (lVar22 != 0) {
      uVar21 = *param_8;
      iVar1 = uVar21 + 4;
      if (*(int *)(lVar22 + 0x18) < iVar1) {
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar20 = *(uint *)(lVar23 + 0x18);
        }
        if (uVar20 <= uVar3) goto LAB_0359124c;
        iVar2 = uVar21 + 7;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        FUN_03595b9c(lVar24 + 0x20,iVar2 >> 2,0);
        lVar19 = *(long *)(param_7 + 0x368);
        if (lVar19 == 0) goto LAB_03591250;
      }
      auVar11._8_8_ = local_a0._8_8_;
      auVar11._0_8_ = local_a0._0_8_;
      auVar10._8_8_ = local_a0._8_8_;
      auVar10._0_8_ = local_a0._0_8_;
      auVar9._8_8_ = local_a0._8_8_;
      auVar9._0_8_ = local_a0._0_8_;
      auVar8._8_8_ = local_a0._8_8_;
      auVar8._0_8_ = local_a0._0_8_;
      auVar7._8_8_ = local_a0._8_8_;
      auVar7._0_8_ = local_a0._0_8_;
      auVar6._8_8_ = local_a0._8_8_;
      auVar6._0_8_ = local_a0._0_8_;
      lVar19 = *(long *)(lVar19 + 0x60);
      if (lVar19 != 0) {
        local_a0 = auVar11;
        if (uVar3 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = *(long *)(lVar19 + lVar25 * 0x50 + 0x30);
          local_a0 = auVar6;
          if (lVar19 == 0) goto LAB_03591250;
          local_a0 = auVar11;
          if (*param_8 < *(uint *)(lVar19 + 0x18)) {
            lVar23 = lVar19 + (long)(int)*param_8 * 0xc;
            *(undefined4 *)(lVar23 + 0x20) = param_1;
            *(undefined4 *)(lVar23 + 0x24) = param_2;
            *(undefined4 *)(lVar23 + 0x28) = param_3;
            if (*param_8 + 1 < *(uint *)(lVar19 + 0x18)) {
              lVar23 = lVar19 + (long)(int)(*param_8 + 1) * 0xc;
              *(undefined4 *)(lVar23 + 0x20) = param_1;
              *(undefined4 *)(lVar23 + 0x24) = param_5;
              *(undefined4 *)(lVar23 + 0x28) = 0;
              if (*param_8 + 2 < *(uint *)(lVar19 + 0x18)) {
                lVar23 = lVar19 + (long)(int)(*param_8 + 2) * 0xc;
                *(undefined4 *)(lVar23 + 0x20) = param_4;
                *(undefined4 *)(lVar23 + 0x24) = param_5;
                *(undefined4 *)(lVar23 + 0x28) = param_6;
                if (*param_8 + 3 < *(uint *)(lVar19 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)(*param_8 + 3) * 0xc;
                  *(undefined4 *)(lVar19 + 0x20) = param_4;
                  *(undefined4 *)(lVar19 + 0x24) = param_2;
                  *(undefined4 *)(lVar19 + 0x28) = 0;
                  puVar13 = 
                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                  ;
                  local_a0 = auVar7;
                  if ((*(long *)(param_7 + 0x368) != 0) &&
                     (lVar19 = *(long *)(*(long *)(param_7 + 0x368) + 0x60), local_a0 = auVar8,
                     lVar19 != 0)) {
                    local_a0 = auVar11;
                    if (*(uint *)(lVar19 + 0x18) <= uVar3) goto LAB_0359124c;
                    lVar23 = *(long *)(param_7 + 0x678);
                    local_a0 = auVar9;
                    if (((lVar23 != 0) && (local_a0 = auVar10, *(long *)(param_7 + 0x670) != 0)) &&
                       (lVar22 = *(long *)(*(long *)(param_7 + 0x670) + 0x20), local_a0 = auVar11,
                       lVar22 != 0)) {
                      iVar1 = *(int *)(lVar23 + 0x108);
                      lVar19 = *(long *)(lVar19 + lVar25 * 0x50 + 0x48);
                      iVar2 = *(int *)(lVar23 + 0x10c);
                      local_a0 = FUN_03776e94(lVar22,0);
                      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      iVar14 = FUN_03776a58(local_a0,0);
                      iVar15 = FUN_03776a68(local_a0,0);
                      iVar16 = FUN_03776a60(local_a0,0);
                      iVar17 = FUN_03776a70(local_a0,0);
                      if (iVar15 < 0) {
                        iVar15 = iVar15 + 1;
                      }
                      if (lVar19 != 0) {
                        if (*param_8 < *(uint *)(lVar19 + 0x18)) {
                          lVar23 = lVar19 + (long)(int)*param_8 * 8;
                          fVar27 = ((float)iVar14 + (float)(iVar15 >> 1)) / (float)iVar1;
                          fVar26 = ((float)iVar17 * 0.5 + (float)iVar16) / (float)iVar2;
                          *(float *)(lVar23 + 0x20) = fVar27;
                          *(float *)(lVar23 + 0x24) = fVar26;
                          if (*param_8 + 1 < *(uint *)(lVar19 + 0x18)) {
                            lVar23 = lVar19 + (long)(int)(*param_8 + 1) * 8;
                            *(float *)(lVar23 + 0x20) = fVar27;
                            *(float *)(lVar23 + 0x24) = fVar26;
                            if (*param_8 + 2 < *(uint *)(lVar19 + 0x18)) {
                              lVar23 = lVar19 + (long)(int)(*param_8 + 2) * 8;
                              *(float *)(lVar23 + 0x20) = fVar27;
                              *(float *)(lVar23 + 0x24) = fVar26;
                              if (*param_8 + 3 < *(uint *)(lVar19 + 0x18)) {
                                lVar19 = lVar19 + (long)(int)(*param_8 + 3) * 8;
                                *(float *)(lVar19 + 0x20) = fVar27;
                                *(float *)(lVar19 + 0x24) = fVar26;
                                uVar12 = DAT_00d37f38;
                                if ((*(long *)(param_7 + 0x368) == 0) ||
                                   (lVar19 = *(long *)(*(long *)(param_7 + 0x368) + 0x60),
                                   lVar19 == 0)) goto LAB_03591250;
                                if (uVar3 < *(uint *)(lVar19 + 0x18)) {
                                  lVar19 = *(long *)(lVar19 + lVar25 * 0x50 + 0x50);
                                  if (lVar19 == 0) goto LAB_03591250;
                                  if (*param_8 < *(uint *)(lVar19 + 0x18)) {
                                    *(undefined8 *)(lVar19 + (long)(int)*param_8 * 8 + 0x20) =
                                         DAT_00d37f38;
                                    if (*param_8 + 1 < *(uint *)(lVar19 + 0x18)) {
                                      *(undefined8 *)(lVar19 + (long)(int)(*param_8 + 1) * 8 + 0x20)
                                           = uVar12;
                                      if (*param_8 + 2 < *(uint *)(lVar19 + 0x18)) {
                                        *(undefined8 *)
                                         (lVar19 + (long)(int)(*param_8 + 2) * 8 + 0x20) = uVar12;
                                        if (*param_8 + 3 < *(uint *)(lVar19 + 0x18)) {
                                          *(undefined8 *)
                                           (lVar19 + (long)(int)(*param_8 + 3) * 8 + 0x20) = uVar12;
                                          uVar21 = (uint)((ulong)param_9 >> 0x18);
                                          uVar20 = (uint)*(byte *)(param_7 + 0x147);
                                          if ((uVar21 & 0xff) <= (uint)*(byte *)(param_7 + 0x147)) {
                                            uVar20 = uVar21;
                                          }
                                          if ((*(long *)(param_7 + 0x368) == 0) ||
                                             (lVar19 = *(long *)(*(long *)(param_7 + 0x368) + 0x60),
                                             lVar19 == 0)) goto LAB_03591250;
                                          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
                                            lVar19 = *(long *)(lVar19 + lVar25 * 0x50 + 0x58);
                                            if (lVar19 == 0) goto LAB_03591250;
                                            if (*param_8 < *(uint *)(lVar19 + 0x18)) {
                                              uVar20 = (uint)param_9 & 0xffffff | uVar20 << 0x18;
                                              *(uint *)(lVar19 + (long)(int)*param_8 * 4 + 0x20) =
                                                   uVar20;
                                              if (*param_8 + 1 < *(uint *)(lVar19 + 0x18)) {
                                                *(uint *)(lVar19 + (long)(int)(*param_8 + 1) * 4 +
                                                         0x20) = uVar20;
                                                if (*param_8 + 2 < *(uint *)(lVar19 + 0x18)) {
                                                  *(uint *)(lVar19 + (long)(int)(*param_8 + 2) * 4 +
                                                           0x20) = uVar20;
                                                  if (*param_8 + 3 < *(uint *)(lVar19 + 0x18)) {
                                                    *(uint *)(lVar19 + (long)(int)(*param_8 + 3) * 4
                                                             + 0x20) = uVar20;
                                                    *param_8 = *param_8 + 4;
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
                              }
                            }
                          }
                        }
                        goto LAB_0359124c;
                      }
                    }
                  }
                  goto LAB_03591250;
                }
              }
            }
          }
        }
LAB_0359124c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
    }
  }
LAB_03591250:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


