/*
FUNCTION_NAME: FUN_054525fc
ENTRY_POINT: 054525fc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_3
*/


undefined8
FUN_054525fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  
  if ((DAT_06a53885 & 1) == 0) {
    FUN_02d4dc40(UnityEngine_UIElements_TimerEventScheduler_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_Linq_TimerFrame_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_ReviewItemResponse_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b140);
    FUN_02d4dc40(UnityEngine_UIElements_TimerState_TypeInfo);
    FUN_02d4dc40(System_Net_ResponseStream_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RenderGraphModule_TextureResource_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_TextureXR_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(System_Net_TimerThread_TypeInfo);
    FUN_02d4dc40(Mono_Security_Interface_TlsException_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066541e0);
    FUN_02d4dc40(PTR_DAT_06648658);
    FUN_02d4dc40(Mono_Security_Interface_TlsProtocols_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo);
    DAT_06a53885 = 1;
  }
  puVar3 = PTR_DAT_066462a0;
  local_58 = 0;
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_0501afe8(param_5,0,0);
  if ((uVar5 & 1) != 0) {
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar12 = thunk_FUN_02d8a638();
    uVar10 = thunk_FUN_02db45e8(System_Globalization_ThaiBuddhistCalendar_TypeInfo);
    FUN_04f681bc(uVar12,uVar10,0);
    uVar10 = thunk_FUN_02db45e8(System_Net_TlsStream_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar12,uVar10);
  }
  uVar12 = *(undefined8 *)UnityEngine_Rendering_RenderGraphModule_TextureResource_TypeInfo;
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar12 = FUN_050121a8(uVar12,0);
  uVar5 = FUN_0501afe8(param_5,uVar12,0);
  if (((uVar5 & 1) != 0) && (param_4 != (long *)0x0)) {
    bVar1 = *(byte *)(*param_4 + 0x130);
    bVar2 = *(byte *)(*(long *)PlayFab_EconomyModels_ReviewItemResponse_TypeInfo + 0x130);
    if ((bVar2 <= bVar1) &&
       (lVar11 = *(long *)(*param_4 + 200),
       *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) ==
       *(long *)PlayFab_EconomyModels_ReviewItemResponse_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) !=
          *(long *)PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo)) {
        bVar2 = *(byte *)(*(long *)System_Net_ResponseStream_TypeInfo + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)System_Net_ResponseStream_TypeInfo
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(param_4);
        }
        uVar12 = *(undefined8 *)UnityEngine_UIElements_TimerState_TypeInfo;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar11 = FUN_050121a8(uVar12,0);
        plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06648658,7);
        lVar7 = FUN_050121a8(*(long *)(puVar3 + 0x90) + 0x20,0);
        if (plVar6 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_05453008:
            uVar12 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar12,0);
          }
          if ((int)plVar6[3] != 0) {
            plVar6[4] = lVar7;
            thunk_FUN_02dc1ef0(plVar6 + 4,lVar7);
            lVar7 = FUN_050121a8(*(long *)(puVar3 + 0x90) + 0x20,0);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_05453008;
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
              plVar6[5] = lVar7;
              thunk_FUN_02dc1ef0(plVar6 + 5,lVar7);
              puVar3 = PTR_DAT_066541e0;
              lVar7 = FUN_050121a8(*(undefined8 *)PTR_DAT_066541e0,0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_05453008;
              if (2 < *(uint *)(plVar6 + 3)) {
                plVar6[6] = lVar7;
                thunk_FUN_02dc1ef0(plVar6 + 6,lVar7);
                lVar7 = FUN_050121a8(*(undefined8 *)puVar3,0);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_05453008;
                if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                  plVar6[7] = lVar7;
                  thunk_FUN_02dc1ef0(plVar6 + 7,lVar7);
                  lVar7 = FUN_050121a8(*(undefined8 *)
                                        UnityEngine_UIElements_TimerEventScheduler_TypeInfo,0);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
                     ) goto LAB_05453008;
                  if (4 < *(uint *)(plVar6 + 3)) {
                    plVar6[8] = lVar7;
                    thunk_FUN_02dc1ef0(plVar6 + 8,lVar7);
                    puVar3 = System_Net_TimerThread_TypeInfo;
                    lVar7 = FUN_050121a8(*(undefined8 *)System_Net_TimerThread_TypeInfo,0);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_05453008;
                    if (5 < *(uint *)(plVar6 + 3)) {
                      plVar6[9] = lVar7;
                      thunk_FUN_02dc1ef0(plVar6 + 9,lVar7);
                      lVar7 = FUN_050121a8(*(undefined8 *)puVar3,0);
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_05453008;
                      if (6 < *(uint *)(plVar6 + 3)) {
                        plVar6[10] = lVar7;
                        thunk_FUN_02dc1ef0(plVar6 + 10,lVar7);
                        if (lVar11 != 0) {
                          uVar12 = FUN_0501d188(lVar11,plVar6,0);
                          if (*(int *)(*(long *)PTR_DAT_0664b140 + 0xe4) == 0) {
                            thunk_FUN_02dabd98(*(long *)PTR_DAT_0664b140);
                          }
                          uVar5 = FUN_04f3e0c4(uVar12,0,0);
                          if ((uVar5 & 1) == 0) goto LAB_05452794;
                          plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,7);
                          lVar11 = (**(code **)(*param_4 + 0x178))
                                             (param_4,*(undefined8 *)(*param_4 + 0x180));
                          if (plVar6 != (long *)0x0) {
                            if ((lVar11 != 0) &&
                               (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar7 == 0)) goto LAB_05453008;
                            if ((int)plVar6[3] == 0) goto LAB_05453004;
                            plVar6[4] = lVar11;
                            thunk_FUN_02dc1ef0(plVar6 + 4,lVar11);
                            local_58 = FUN_0547d950(param_4,0);
                            lVar11 = FUN_05453020(&local_58);
                            if (lVar11 == 0) goto LAB_05453014;
                            lVar11 = *(long *)(lVar11 + 0x90);
                            if ((lVar11 != 0) &&
                               (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar7 == 0)) goto LAB_05453008;
                            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                              plVar6[5] = lVar11;
                              thunk_FUN_02dc1ef0(plVar6 + 5,lVar11);
                              lVar11 = FUN_0547c2bc(param_4,0);
                              if ((lVar11 != 0) &&
                                 (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar6 + 0x40))
                                 , lVar7 == 0)) goto LAB_05453008;
                              if (2 < *(uint *)(plVar6 + 3)) {
                                plVar6[6] = lVar11;
                                thunk_FUN_02dc1ef0(plVar6 + 6,lVar11);
                                lVar11 = FUN_0547c2c8(param_4,0);
                                if ((lVar11 != 0) &&
                                   (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)
                                                                       (*plVar6 + 0x40)), lVar7 == 0
                                   )) goto LAB_05453008;
                                if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                                  plVar6[7] = lVar11;
                                  thunk_FUN_02dc1ef0(plVar6 + 7,lVar11);
                                  local_5c = (**(code **)(*param_4 + 0x278))
                                                       (param_4,*(undefined8 *)(*param_4 + 0x280));
                                  lVar11 = thunk_FUN_02d8a270(*(undefined8 *)
                                                                                                                              
                                                  Cysharp_Threading_Tasks_Linq_TimerFrame_TypeInfo,
                                                  &local_5c);
                                  if ((lVar11 != 0) &&
                                     (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)
                                                                         (*plVar6 + 0x40)),
                                     lVar7 == 0)) goto LAB_05453008;
                                  if (4 < *(uint *)(plVar6 + 3)) {
                                    plVar6[8] = lVar11;
                                    thunk_FUN_02dc1ef0(plVar6 + 8,lVar11);
                                    local_60 = (**(code **)(*param_4 + 0x298))
                                                         (param_4,*(undefined8 *)(*param_4 + 0x2a0))
                                    ;
                                    puVar3 = Mono_Security_Interface_TlsException_TypeInfo;
                                    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)
                                                                                                                                  
                                                  Mono_Security_Interface_TlsException_TypeInfo,
                                                  &local_60);
                                    if ((lVar11 != 0) &&
                                       (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)
                                                                           (*plVar6 + 0x40)),
                                       lVar7 == 0)) goto LAB_05453008;
                                    if (5 < *(uint *)(plVar6 + 3)) {
                                      plVar6[9] = lVar11;
                                      thunk_FUN_02dc1ef0(plVar6 + 9,lVar11);
                                      local_64 = (**(code **)(*param_4 + 0x2d8))
                                                           (param_4,*(undefined8 *)
                                                                     (*param_4 + 0x2e0));
                                      lVar11 = thunk_FUN_02d8a270(*(undefined8 *)puVar3,&local_64);
                                      if ((lVar11 != 0) &&
                                         (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)
                                                                             (*plVar6 + 0x40)),
                                         lVar7 == 0)) goto LAB_05453008;
                                      if (6 < *(uint *)(plVar6 + 3)) {
                                        plVar9 = plVar6 + 10;
                                        *plVar9 = lVar11;
                                        goto LAB_05452d08;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_05453004;
                          }
                        }
                        goto LAB_05453014;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_05453004:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
      }
      else {
        uVar12 = *(undefined8 *)Mono_Security_Interface_TlsProtocols_TypeInfo;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar11 = FUN_050121a8(uVar12,0);
        plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06648658,3);
        lVar7 = FUN_050121a8(*(long *)(puVar3 + 0x90) + 0x20,0);
        if (plVar6 != (long *)0x0) {
          if ((lVar7 == 0) ||
             (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 != 0)) {
            if ((int)plVar6[3] != 0) {
              plVar6[4] = lVar7;
              thunk_FUN_02dc1ef0(plVar6 + 4,lVar7);
              lVar7 = FUN_050121a8(*(undefined8 *)PTR_DAT_066541e0,0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_05453008;
              if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                plVar6[5] = lVar7;
                thunk_FUN_02dc1ef0(plVar6 + 5,lVar7);
                lVar7 = FUN_050121a8(*(long *)(puVar3 + 0x28) + 0x20,0);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_05453008;
                if (2 < *(uint *)(plVar6 + 3)) {
                  plVar6[6] = lVar7;
                  thunk_FUN_02dc1ef0(plVar6 + 6,lVar7);
                  if (lVar11 != 0) {
                    uVar12 = FUN_0501d188(lVar11,plVar6,0);
                    if (*(int *)(*(long *)PTR_DAT_0664b140 + 0xe4) == 0) {
                      thunk_FUN_02dabd98(*(long *)PTR_DAT_0664b140);
                    }
                    uVar5 = FUN_04f3e0c4(uVar12,0,0);
                    if ((uVar5 & 1) == 0) goto LAB_05452794;
                    plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
                    lVar11 = (**(code **)(*param_4 + 0x178))
                                       (param_4,*(undefined8 *)(*param_4 + 0x180));
                    if (plVar6 != (long *)0x0) {
                      if ((lVar11 != 0) &&
                         (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar7 == 0)) goto LAB_05453008;
                      if ((int)plVar6[3] != 0) {
                        plVar6[4] = lVar11;
                        thunk_FUN_02dc1ef0(plVar6 + 4,lVar11);
                        lVar11 = FUN_05488fcc(param_4,0);
                        if ((lVar11 != 0) &&
                           (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar7 == 0)) goto LAB_05453008;
                        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                          plVar6[5] = lVar11;
                          thunk_FUN_02dc1ef0(plVar6 + 5,lVar11);
                          uVar4 = FUN_05489f84(param_4,0);
                          local_5c = CONCAT31(local_5c._1_3_,uVar4) & 0xffffff01;
                          lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x28),&local_5c);
                          if ((lVar11 != 0) &&
                             (lVar7 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar7 == 0)) goto LAB_05453008;
                          if (2 < *(uint *)(plVar6 + 3)) {
                            plVar9 = plVar6 + 6;
                            *plVar9 = lVar11;
LAB_05452d08:
                            thunk_FUN_02dc1ef0(plVar9,lVar11);
                            uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                         UnityEngine_Rendering_TextureXR_TypeInfo);
                            FUN_0580ffd0(uVar10,uVar12,plVar6,0);
                            return uVar10;
                          }
                        }
                      }
                      goto LAB_05453004;
                    }
                  }
                  goto LAB_05453014;
                }
              }
            }
            goto LAB_05453004;
          }
          goto LAB_05453008;
        }
      }
LAB_05453014:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
LAB_05452794:
  uVar12 = FUN_057e8140(param_1,param_2,param_3,param_4,param_5,0);
  return uVar12;
}


