/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserializeAfterInstanceCreation
ENTRY_POINT: 071ec580
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserializeAfterInstanceCreation
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  
  if ((*(byte *)(unaff_x20 + 0x441) & 1) == 0) {
    FUN_0373b518(Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadResult>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x441) = 1;
  }
  iVar7 = FUN_071e9d48(param_1);
  puVar13 = (undefined8 *)Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadResult>_TypeInfo
  ;
  puVar5 = Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo;
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_075d5a68(*(long *)(param_1 + 0x130),
                 *(undefined8 *)
                  Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadResult>_TypeInfo,0);
    lVar9 = *(long *)(param_1 + 0x130);
    uVar10 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (lVar9 != 0) {
      FUN_075cdbdc(lVar9,uVar10,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80),iVar7,0);
      if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x130) != 0)) {
        thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                           *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x10),
                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                           *(undefined8 *)(param_1 + 0x28),0);
        if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x130) != 0)) {
          thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                             *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x10),
                             *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x7c),
                             *(undefined8 *)(param_1 + 0x48),0);
          iVar1 = *(int *)(param_1 + 0x9c);
          if (DAT_0825393c == '\0') {
            FUN_0373b518(PTR_DAT_07d8d8d0);
            DAT_0825393c = '\x01';
          }
          if (*(long *)(param_1 + 0x130) != 0) {
            iVar8 = 0;
            if (iVar1 != 0) {
              iVar8 = (iVar7 + iVar1 + -1) / iVar1;
            }
            iVar1 = iVar8 / 0xffff + 1;
            iVar3 = 0;
            if (iVar1 != 0) {
              iVar3 = iVar8 / iVar1;
            }
            FUN_075cdbdc(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88),iVar3,0);
            if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x130) != 0)) {
              thunk_FUN_075cee2c(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                 *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x10),iVar3,iVar1,1,0);
              iVar2 = *(int *)(param_1 + 0x9c);
              lVar9 = *(long *)(param_1 + 0xd0);
              iVar8 = 0;
              if (iVar2 != 0) {
                iVar8 = iVar7 / iVar2;
              }
              if (iVar7 != iVar8 * iVar2) {
                iVar8 = iVar8 + 1;
              }
              if (lVar9 != 0) {
                lVar12 = *(long *)(param_1 + 0x130);
                uVar10 = *(undefined8 *)(param_1 + 0x100);
                if (iVar2 < iVar8) {
                  uVar11 = *(undefined4 *)(lVar9 + 0x48);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  if (lVar12 == 0) goto LAB_071ecee0;
                  thunk_FUN_075cea10(lVar12,uVar10,uVar11,
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x74),
                                     *(undefined8 *)(param_1 + 0x28),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x48),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                                     *(undefined8 *)(param_1 + 0x48),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x48),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x7c),
                                     *(undefined8 *)(param_1 + 0x58),0);
                  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_071ecee0;
                  lVar9 = *(long *)(param_1 + 0x130);
                  uVar10 = *(undefined8 *)(param_1 + 0x100);
                  uVar11 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x48);
                  iVar2 = *(int *)(param_1 + 0x9c);
                  if (DAT_08252d5d == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_08252d5d = '\x01';
                  }
                  puVar4 = PTR_DAT_07d863e8;
                  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  if (lVar9 == 0) goto LAB_071ecee0;
                  fVar15 = (float)iVar7;
                  fVar14 = (float)(int)(fVar15 / (float)(iVar2 * iVar2));
                  iVar2 = -0x80000000;
                  if (fVar14 != INFINITY) {
                    iVar2 = (int)fVar14;
                  }
                  thunk_FUN_075cee2c(lVar9,uVar10,uVar11,iVar2,1,1,0);
                  if (*(long *)(param_1 + 0x130) == 0) goto LAB_071ecee0;
                  FUN_075cdbdc(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                               *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80),iVar8,0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x10),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                                     *(undefined8 *)(param_1 + 0x58),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x10),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x7c),
                                     *(undefined8 *)(param_1 + 0x60),0);
                  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_071ecee0;
                  lVar9 = *(long *)(param_1 + 0x130);
                  uVar10 = *(undefined8 *)(param_1 + 0x100);
                  uVar11 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x10);
                  iVar8 = *(int *)(param_1 + 0x9c);
                  if (DAT_08252d5d == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_08252d5d = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  if (lVar9 == 0) goto LAB_071ecee0;
                  fVar14 = (float)(int)(fVar15 / (float)(iVar8 * iVar8));
                  iVar8 = -0x80000000;
                  if (fVar14 != INFINITY) {
                    iVar8 = (int)fVar14;
                  }
                  thunk_FUN_075cee2c(lVar9,uVar10,uVar11,iVar8,1,1,0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x74),
                                     *(undefined8 *)(param_1 + 0x58),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                                     *(undefined8 *)(param_1 + 0x60),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x7c),
                                     *(undefined8 *)(param_1 + 0x68),0);
                  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_071ecee0;
                  lVar9 = *(long *)(param_1 + 0x130);
                  uVar10 = *(undefined8 *)(param_1 + 0x100);
                  uVar11 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14);
                  iVar8 = *(int *)(param_1 + 0x9c);
                  if (DAT_08252d5d == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_08252d5d = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  if (lVar9 == 0) goto LAB_071ecee0;
                  fVar14 = (float)(int)(fVar15 / (float)(iVar8 * iVar8 * iVar8));
                  iVar8 = -0x80000000;
                  if (fVar14 != INFINITY) {
                    iVar8 = (int)fVar14;
                  }
                  thunk_FUN_075cee2c(lVar9,uVar10,uVar11,iVar8,1,1,0);
                  if (*(long *)(param_1 + 0x130) == 0) goto LAB_071ecee0;
                  FUN_075cdbdc(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                               *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x84),0,0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                                     *(undefined8 *)(param_1 + 0x60),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78),
                                     *(undefined8 *)(param_1 + 0x68),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x74),
                                     *(undefined8 *)(param_1 + 0x58),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x7c),
                                     *(undefined8 *)(param_1 + 0x50),0);
                  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_071ecee0;
                  lVar9 = *(long *)(param_1 + 0x130);
                  uVar10 = *(undefined8 *)(param_1 + 0x100);
                  uVar11 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18);
                  iVar8 = *(int *)(param_1 + 0x9c);
                  if (DAT_08252d5d == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_08252d5d = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  if (lVar9 == 0) goto LAB_071ecee0;
                  fVar14 = (float)(int)(fVar15 / (float)(iVar8 * iVar8));
                  iVar8 = (int)fVar14;
                  bVar6 = fVar14 == INFINITY;
                  puVar13 = (undefined8 *)
                            Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadResult>_TypeInfo
                  ;
                }
                else {
                  uVar11 = *(undefined4 *)(lVar9 + 0x14);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  if (lVar12 == 0) goto LAB_071ecee0;
                  thunk_FUN_075cea10(lVar12,uVar10,uVar11,
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x74),
                                     *(undefined8 *)(param_1 + 0x28),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                                     *(undefined8 *)(param_1 + 0x48),0);
                  if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(param_1 + 0x130) == 0))
                  goto LAB_071ecee0;
                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                     *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x7c),
                                     *(undefined8 *)(param_1 + 0x50),0);
                  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_071ecee0;
                  lVar9 = *(long *)(param_1 + 0x130);
                  uVar10 = *(undefined8 *)(param_1 + 0x100);
                  uVar11 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14);
                  iVar8 = *(int *)(param_1 + 0x9c);
                  if (DAT_08252d5d == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_08252d5d = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  if (lVar9 == 0) goto LAB_071ecee0;
                  fVar14 = (float)(int)((float)iVar7 / (float)(iVar8 * iVar8));
                  iVar8 = (int)fVar14;
                  bVar6 = false;
                  if (!NAN(fVar14)) {
                    bVar6 = fVar14 == INFINITY;
                  }
                }
                iVar2 = -0x80000000;
                if (!bVar6) {
                  iVar2 = iVar8;
                }
                thunk_FUN_075cee2c(lVar9,uVar10,uVar11,iVar2,1,1,0);
                lVar9 = *(long *)(param_1 + 0x130);
                uVar10 = *(undefined8 *)(param_1 + 0x100);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                if (lVar9 != 0) {
                  FUN_075cdbdc(lVar9,uVar10,
                               *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80),iVar7,0);
                  if (*(long *)(param_1 + 0x130) != 0) {
                    FUN_075cdbdc(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100),
                                 *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x84),0,0);
                    if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x130) != 0)) {
                      thunk_FUN_075cea10(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x100)
                                         ,*(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                                         *(undefined8 *)(param_1 + 0x48),0);
                      if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x130) != 0)) {
                        thunk_FUN_075cea10(*(long *)(param_1 + 0x130),
                                           *(undefined8 *)(param_1 + 0x100),
                                           *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78)
                                           ,*(undefined8 *)(param_1 + 0x50),0);
                        if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x130) != 0)) {
                          thunk_FUN_075cea10(*(long *)(param_1 + 0x130),
                                             *(undefined8 *)(param_1 + 0x100),
                                             *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar5 + 0xb8) + 0x74),
                                             *(undefined8 *)(param_1 + 0x28),0);
                          if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x130) != 0))
                          {
                            thunk_FUN_075cea10(*(long *)(param_1 + 0x130),
                                               *(undefined8 *)(param_1 + 0x100),
                                               *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x7c),
                                               *(undefined8 *)(param_1 + 0x30),0);
                            if ((*(long *)(param_1 + 0xd0) != 0) &&
                               (*(long *)(param_1 + 0x130) != 0)) {
                              thunk_FUN_075cee2c(*(long *)(param_1 + 0x130),
                                                 *(undefined8 *)(param_1 + 0x100),
                                                 *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x18),
                                                 iVar3,iVar1,1,0);
                              if (*(long *)(param_1 + 0x130) != 0) {
                                FUN_075d5c10(*(long *)(param_1 + 0x130),*puVar13,0);
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
  }
LAB_071ecee0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


