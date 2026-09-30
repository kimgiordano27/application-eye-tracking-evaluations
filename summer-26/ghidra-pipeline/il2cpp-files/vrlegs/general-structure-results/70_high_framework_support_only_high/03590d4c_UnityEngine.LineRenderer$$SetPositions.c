/*
FUNCTION_NAME: UnityEngine.LineRenderer$$SetPositions
ENTRY_POINT: 03590d4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_LineRenderer__SetPositions
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,uint *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_0412e079 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo)
    ;
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    FUN_01ab69ac(_Common_Shop_Scripts_OculusRecharge_RechargeATM_<>c_TypeInfo);
    DAT_0412e079 = 1;
  }
  if ((*(long *)(param_7 + 0x670) == 0) &&
     (FUN_03590b70(param_7,*(undefined8 *)(param_7 + 0xf8)), *(long *)(param_7 + 0x670) == 0)) {
    uVar10 = FUN_03597634(0);
    if ((uVar10 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0367b470(*(undefined8 *)_Common_Shop_Scripts_OculusRecharge_RechargeATM_<>c_TypeInfo,param_7
                 ,0);
    return;
  }
  lVar11 = *(long *)(param_7 + 0x368);
  if ((lVar11 != 0) && (lVar15 = *(long *)(lVar11 + 0x60), lVar15 != 0)) {
    uVar3 = *(uint *)(param_7 + 0x688);
    lVar17 = (long)(int)uVar3;
    uVar12 = *(uint *)(lVar15 + 0x18);
    if (uVar12 <= uVar3) goto LAB_0359124c;
    lVar16 = lVar15 + lVar17 * 0x50;
    lVar14 = *(long *)(lVar16 + 0x30);
    if (lVar14 != 0) {
      uVar13 = *param_8;
      iVar1 = uVar13 + 4;
      if (*(int *)(lVar14 + 0x18) < iVar1) {
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar12 = *(uint *)(lVar15 + 0x18);
        }
        if (uVar12 <= uVar3) goto LAB_0359124c;
        iVar2 = uVar13 + 7;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        FUN_03595b9c(lVar16 + 0x20,iVar2 >> 2,0);
        lVar11 = *(long *)(param_7 + 0x368);
        if (lVar11 == 0) goto LAB_03591250;
      }
      lVar11 = *(long *)(lVar11 + 0x60);
      if (lVar11 != 0) {
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = *(long *)(lVar11 + lVar17 * 0x50 + 0x30);
          if (lVar11 == 0) goto LAB_03591250;
          if (*param_8 < *(uint *)(lVar11 + 0x18)) {
            lVar15 = lVar11 + (long)(int)*param_8 * 0xc;
            *(undefined4 *)(lVar15 + 0x20) = param_1;
            *(undefined4 *)(lVar15 + 0x24) = param_2;
            *(undefined4 *)(lVar15 + 0x28) = param_3;
            if (*param_8 + 1 < *(uint *)(lVar11 + 0x18)) {
              lVar15 = lVar11 + (long)(int)(*param_8 + 1) * 0xc;
              *(undefined4 *)(lVar15 + 0x20) = param_1;
              *(undefined4 *)(lVar15 + 0x24) = param_5;
              *(undefined4 *)(lVar15 + 0x28) = 0;
              if (*param_8 + 2 < *(uint *)(lVar11 + 0x18)) {
                lVar15 = lVar11 + (long)(int)(*param_8 + 2) * 0xc;
                *(undefined4 *)(lVar15 + 0x20) = param_4;
                *(undefined4 *)(lVar15 + 0x24) = param_5;
                *(undefined4 *)(lVar15 + 0x28) = param_6;
                if (*param_8 + 3 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*param_8 + 3) * 0xc;
                  *(undefined4 *)(lVar11 + 0x20) = param_4;
                  *(undefined4 *)(lVar11 + 0x24) = param_2;
                  *(undefined4 *)(lVar11 + 0x28) = 0;
                  puVar5 = 
                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                  ;
                  if ((*(long *)(param_7 + 0x368) != 0) &&
                     (lVar11 = *(long *)(*(long *)(param_7 + 0x368) + 0x60), lVar11 != 0)) {
                    if (*(uint *)(lVar11 + 0x18) <= uVar3) goto LAB_0359124c;
                    lVar15 = *(long *)(param_7 + 0x678);
                    if (((lVar15 != 0) && (*(long *)(param_7 + 0x670) != 0)) &&
                       (lVar14 = *(long *)(*(long *)(param_7 + 0x670) + 0x20), lVar14 != 0)) {
                      iVar1 = *(int *)(lVar15 + 0x108);
                      lVar11 = *(long *)(lVar11 + lVar17 * 0x50 + 0x48);
                      iVar2 = *(int *)(lVar15 + 0x10c);
                      FUN_03776e94(lVar14,0);
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      iVar6 = FUN_03776a58();
                      iVar7 = FUN_03776a68();
                      iVar8 = FUN_03776a60();
                      iVar9 = FUN_03776a70();
                      if (iVar7 < 0) {
                        iVar7 = iVar7 + 1;
                      }
                      if (lVar11 != 0) {
                        if (*param_8 < *(uint *)(lVar11 + 0x18)) {
                          lVar15 = lVar11 + (long)(int)*param_8 * 8;
                          fVar19 = ((float)iVar6 + (float)(iVar7 >> 1)) / (float)iVar1;
                          fVar18 = ((float)iVar9 * 0.5 + (float)iVar8) / (float)iVar2;
                          *(float *)(lVar15 + 0x20) = fVar19;
                          *(float *)(lVar15 + 0x24) = fVar18;
                          if (*param_8 + 1 < *(uint *)(lVar11 + 0x18)) {
                            lVar15 = lVar11 + (long)(int)(*param_8 + 1) * 8;
                            *(float *)(lVar15 + 0x20) = fVar19;
                            *(float *)(lVar15 + 0x24) = fVar18;
                            if (*param_8 + 2 < *(uint *)(lVar11 + 0x18)) {
                              lVar15 = lVar11 + (long)(int)(*param_8 + 2) * 8;
                              *(float *)(lVar15 + 0x20) = fVar19;
                              *(float *)(lVar15 + 0x24) = fVar18;
                              if (*param_8 + 3 < *(uint *)(lVar11 + 0x18)) {
                                lVar11 = lVar11 + (long)(int)(*param_8 + 3) * 8;
                                *(float *)(lVar11 + 0x20) = fVar19;
                                *(float *)(lVar11 + 0x24) = fVar18;
                                uVar4 = DAT_00d37f38;
                                if ((*(long *)(param_7 + 0x368) == 0) ||
                                   (lVar11 = *(long *)(*(long *)(param_7 + 0x368) + 0x60),
                                   lVar11 == 0)) goto LAB_03591250;
                                if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                                  lVar11 = *(long *)(lVar11 + lVar17 * 0x50 + 0x50);
                                  if (lVar11 == 0) goto LAB_03591250;
                                  if (*param_8 < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + (long)(int)*param_8 * 8 + 0x20) =
                                         DAT_00d37f38;
                                    if (*param_8 + 1 < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + (long)(int)(*param_8 + 1) * 8 + 0x20)
                                           = uVar4;
                                      if (*param_8 + 2 < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)
                                         (lVar11 + (long)(int)(*param_8 + 2) * 8 + 0x20) = uVar4;
                                        if (*param_8 + 3 < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)
                                           (lVar11 + (long)(int)(*param_8 + 3) * 8 + 0x20) = uVar4;
                                          uVar13 = (uint)((ulong)param_9 >> 0x18);
                                          uVar12 = (uint)*(byte *)(param_7 + 0x147);
                                          if ((uVar13 & 0xff) <= (uint)*(byte *)(param_7 + 0x147)) {
                                            uVar12 = uVar13;
                                          }
                                          if ((*(long *)(param_7 + 0x368) == 0) ||
                                             (lVar11 = *(long *)(*(long *)(param_7 + 0x368) + 0x60),
                                             lVar11 == 0)) goto LAB_03591250;
                                          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                                            lVar11 = *(long *)(lVar11 + lVar17 * 0x50 + 0x58);
                                            if (lVar11 == 0) goto LAB_03591250;
                                            if (*param_8 < *(uint *)(lVar11 + 0x18)) {
                                              uVar12 = (uint)param_9 & 0xffffff | uVar12 << 0x18;
                                              *(uint *)(lVar11 + (long)(int)*param_8 * 4 + 0x20) =
                                                   uVar12;
                                              if (*param_8 + 1 < *(uint *)(lVar11 + 0x18)) {
                                                *(uint *)(lVar11 + (long)(int)(*param_8 + 1) * 4 +
                                                         0x20) = uVar12;
                                                if (*param_8 + 2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(uint *)(lVar11 + (long)(int)(*param_8 + 2) * 4 +
                                                           0x20) = uVar12;
                                                  if (*param_8 + 3 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar11 + (long)(int)(*param_8 + 3) * 4
                                                             + 0x20) = uVar12;
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


