/*
FUNCTION_NAME: UnityEngine.LineRenderer$$SetPositionsWithNativeContainer
ENTRY_POINT: 03590de4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_LineRenderer__SetPositionsWithNativeContainer(long param_1)

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
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  
  lVar13 = *(long *)(param_1 + 0x60);
  if (lVar13 != 0) {
    uVar3 = *(uint *)(unaff_x21 + 0x688);
    lVar15 = (long)(int)uVar3;
    uVar10 = *(uint *)(lVar13 + 0x18);
    if (uVar10 <= uVar3) goto LAB_0359124c;
    lVar14 = lVar13 + lVar15 * 0x50;
    lVar12 = *(long *)(lVar14 + 0x30);
    if (lVar12 != 0) {
      uVar11 = *unaff_x19;
      iVar1 = uVar11 + 4;
      if (*(int *)(lVar12 + 0x18) < iVar1) {
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar10 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar10 <= uVar3) goto LAB_0359124c;
        iVar2 = uVar11 + 7;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        FUN_03595b9c(lVar14 + 0x20,iVar2 >> 2,0);
        param_1 = *(long *)(unaff_x21 + 0x368);
        if (param_1 == 0) goto LAB_03591250;
      }
      lVar13 = *(long *)(param_1 + 0x60);
      if (lVar13 != 0) {
        if (uVar3 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = *(long *)(lVar13 + lVar15 * 0x50 + 0x30);
          if (lVar13 == 0) goto LAB_03591250;
          if (*unaff_x19 < *(uint *)(lVar13 + 0x18)) {
            lVar12 = lVar13 + (long)(int)*unaff_x19 * 0xc;
            *(undefined4 *)(lVar12 + 0x20) = unaff_s12;
            *(undefined4 *)(lVar12 + 0x24) = unaff_s9;
            *(undefined4 *)(lVar12 + 0x28) = unaff_s13;
            if (*unaff_x19 + 1 < *(uint *)(lVar13 + 0x18)) {
              lVar12 = lVar13 + (long)(int)(*unaff_x19 + 1) * 0xc;
              *(undefined4 *)(lVar12 + 0x20) = unaff_s12;
              *(undefined4 *)(lVar12 + 0x24) = unaff_s11;
              *(undefined4 *)(lVar12 + 0x28) = 0;
              if (*unaff_x19 + 2 < *(uint *)(lVar13 + 0x18)) {
                lVar12 = lVar13 + (long)(int)(*unaff_x19 + 2) * 0xc;
                *(undefined4 *)(lVar12 + 0x20) = unaff_s8;
                *(undefined4 *)(lVar12 + 0x24) = unaff_s11;
                *(undefined4 *)(lVar12 + 0x28) = unaff_s10;
                if (*unaff_x19 + 3 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*unaff_x19 + 3) * 0xc;
                  *(undefined4 *)(lVar13 + 0x20) = unaff_s8;
                  *(undefined4 *)(lVar13 + 0x24) = unaff_s9;
                  *(undefined4 *)(lVar13 + 0x28) = 0;
                  puVar5 = 
                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                  ;
                  if ((*(long *)(unaff_x21 + 0x368) != 0) &&
                     (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x368) + 0x60), lVar13 != 0)) {
                    if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_0359124c;
                    lVar12 = *(long *)(unaff_x21 + 0x678);
                    if (((lVar12 != 0) && (*(long *)(unaff_x21 + 0x670) != 0)) &&
                       (lVar14 = *(long *)(*(long *)(unaff_x21 + 0x670) + 0x20), lVar14 != 0)) {
                      iVar1 = *(int *)(lVar12 + 0x108);
                      lVar13 = *(long *)(lVar13 + lVar15 * 0x50 + 0x48);
                      iVar2 = *(int *)(lVar12 + 0x10c);
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
                      if (lVar13 != 0) {
                        if (*unaff_x19 < *(uint *)(lVar13 + 0x18)) {
                          lVar12 = lVar13 + (long)(int)*unaff_x19 * 8;
                          fVar17 = ((float)iVar6 + (float)(iVar7 >> 1)) / (float)iVar1;
                          fVar16 = ((float)iVar9 * 0.5 + (float)iVar8) / (float)iVar2;
                          *(float *)(lVar12 + 0x20) = fVar17;
                          *(float *)(lVar12 + 0x24) = fVar16;
                          if (*unaff_x19 + 1 < *(uint *)(lVar13 + 0x18)) {
                            lVar12 = lVar13 + (long)(int)(*unaff_x19 + 1) * 8;
                            *(float *)(lVar12 + 0x20) = fVar17;
                            *(float *)(lVar12 + 0x24) = fVar16;
                            if (*unaff_x19 + 2 < *(uint *)(lVar13 + 0x18)) {
                              lVar12 = lVar13 + (long)(int)(*unaff_x19 + 2) * 8;
                              *(float *)(lVar12 + 0x20) = fVar17;
                              *(float *)(lVar12 + 0x24) = fVar16;
                              if (*unaff_x19 + 3 < *(uint *)(lVar13 + 0x18)) {
                                lVar13 = lVar13 + (long)(int)(*unaff_x19 + 3) * 8;
                                *(float *)(lVar13 + 0x20) = fVar17;
                                *(float *)(lVar13 + 0x24) = fVar16;
                                uVar4 = DAT_00d37f38;
                                if ((*(long *)(unaff_x21 + 0x368) == 0) ||
                                   (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x368) + 0x60),
                                   lVar13 == 0)) goto LAB_03591250;
                                if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                                  lVar13 = *(long *)(lVar13 + lVar15 * 0x50 + 0x50);
                                  if (lVar13 == 0) goto LAB_03591250;
                                  if (*unaff_x19 < *(uint *)(lVar13 + 0x18)) {
                                    *(undefined8 *)(lVar13 + (long)(int)*unaff_x19 * 8 + 0x20) =
                                         DAT_00d37f38;
                                    if (*unaff_x19 + 1 < *(uint *)(lVar13 + 0x18)) {
                                      *(undefined8 *)
                                       (lVar13 + (long)(int)(*unaff_x19 + 1) * 8 + 0x20) = uVar4;
                                      if (*unaff_x19 + 2 < *(uint *)(lVar13 + 0x18)) {
                                        *(undefined8 *)
                                         (lVar13 + (long)(int)(*unaff_x19 + 2) * 8 + 0x20) = uVar4;
                                        if (*unaff_x19 + 3 < *(uint *)(lVar13 + 0x18)) {
                                          *(undefined8 *)
                                           (lVar13 + (long)(int)(*unaff_x19 + 3) * 8 + 0x20) = uVar4
                                          ;
                                          uVar11 = (uint)((ulong)unaff_x20 >> 0x18);
                                          uVar10 = (uint)*(byte *)(unaff_x21 + 0x147);
                                          if ((uVar11 & 0xff) <= (uint)*(byte *)(unaff_x21 + 0x147))
                                          {
                                            uVar10 = uVar11;
                                          }
                                          if ((*(long *)(unaff_x21 + 0x368) == 0) ||
                                             (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x368) + 0x60
                                                                ), lVar13 == 0)) goto LAB_03591250;
                                          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                                            lVar13 = *(long *)(lVar13 + lVar15 * 0x50 + 0x58);
                                            if (lVar13 == 0) goto LAB_03591250;
                                            if (*unaff_x19 < *(uint *)(lVar13 + 0x18)) {
                                              uVar10 = (uint)unaff_x20 & 0xffffff | uVar10 << 0x18;
                                              *(uint *)(lVar13 + (long)(int)*unaff_x19 * 4 + 0x20) =
                                                   uVar10;
                                              if (*unaff_x19 + 1 < *(uint *)(lVar13 + 0x18)) {
                                                *(uint *)(lVar13 + (long)(int)(*unaff_x19 + 1) * 4 +
                                                         0x20) = uVar10;
                                                if (*unaff_x19 + 2 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar13 + (long)(int)(*unaff_x19 + 2) * 4
                                                           + 0x20) = uVar10;
                                                  if (*unaff_x19 + 3 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar13 + (long)(int)(*unaff_x19 + 3) *
                                                                       4 + 0x20) = uVar10;
                                                    *unaff_x19 = *unaff_x19 + 4;
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


