/*
FUNCTION_NAME: FUN_020df2e4
ENTRY_POINT: 020df2e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_020df2e4(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_0482fa59 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_AnySerializer_WriteValueWeak__);
    thunk_FUN_01efb3a4(Method_AppDeeplinkUI_LaunchOtherApp__);
    thunk_FUN_01efb3a4(Method_AppDeeplinkUI_LaunchSelf__);
    thunk_FUN_01efb3a4(Method_AppDeeplinkUI_LaunchUnrealDeeplinkSample__);
    thunk_FUN_01efb3a4(Method_UnityEngine_AndroidJavaObject__Call__);
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Dictation_AppDictationExperience_<OnEnable>b__37_0__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Voice_Dictation_AppDictationExperience_OnAudioDurationTrackerFinished__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Dictation_AppDictationExperience_OnComplete__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Voice_Dictation_AppDictationExperience_OnDictationSessionStarted__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Dictation_AppDictationExperience_OnFullTranscription__);
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Dictation_AppDictationExperience_OnPartialTranscription__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Voice_Dictation_AppDictationExperience_OnPlatformServiceNotAvailable__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Dictation_AppDictationExperience_OnRequestInit__);
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Dictation_AppDictationExperience_OnStarted__);
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Dictation_AppDictationExperience_OnStopped__);
    DAT_0482fa59 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (long *)0x0;
  lVar16 = *(long *)(param_1 + 0x48);
  if (lVar16 != 0) {
    iVar2 = *(int *)(lVar16 + 0x18);
    *(undefined4 *)(lVar16 + 0x18) = 0;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (0 < iVar2) {
      FUN_0358d1e4(*(undefined8 *)(lVar16 + 0x10),0,iVar2,0);
    }
    lVar16 = *(long *)(param_1 + 0x50);
    if (lVar16 != 0) {
      iVar2 = *(int *)(lVar16 + 0x18);
      *(undefined4 *)(lVar16 + 0x18) = 0;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (0 < iVar2) {
        FUN_0358d1e4(*(undefined8 *)(lVar16 + 0x10),0,iVar2,0);
      }
      lVar16 = *(long *)(param_1 + 0x58);
      if (lVar16 != 0) {
        iVar2 = *(int *)(lVar16 + 0x18);
        *(undefined4 *)(lVar16 + 0x18) = 0;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (0 < iVar2) {
          FUN_0358d1e4(*(undefined8 *)(lVar16 + 0x10),0,iVar2,0);
        }
        puVar7 = Method_AppDeeplinkUI_LaunchUnrealDeeplinkSample__;
        if (*(long *)(param_1 + 0x60) != 0) {
          lVar16 = FUN_02b6b114(*(long *)(param_1 + 0x60),
                                *(undefined8 *)Method_AppDeeplinkUI_LaunchUnrealDeeplinkSample__);
          puVar12 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnRequestInit__;
          puVar11 = 
          Method_Oculus_Voice_Dictation_AppDictationExperience_OnPlatformServiceNotAvailable__;
          puVar10 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnDictationSessionStarted__
          ;
          puVar9 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnComplete__;
          puVar8 = Method_Oculus_Voice_Dictation_AppDictationExperience_<OnEnable>b__37_0__;
          puVar6 = Method_AppDeeplinkUI_LaunchSelf__;
          puVar5 = Method_Sirenix_Serialization_AnySerializer_WriteValueWeak__;
          if (lVar16 != 0) {
            FUN_0300123c(&local_b8,lVar16,
                         *(undefined8 *)
                          Method_Oculus_Voice_Dictation_AppDictationExperience_OnPlatformServiceNotAvailable__
                        );
            plVar1 = (long *)(param_1 + 0x68);
            uStack_78 = uStack_b0;
            local_80 = local_b8;
            local_70 = local_a8;
            while (uVar14 = FUN_02ce9cdc(&local_80,*(undefined8 *)puVar10), plVar13 = local_70,
                  (uVar14 & 1) != 0) {
              if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar14 = FUN_02b6b4d8(*plVar1,local_70,*(undefined8 *)puVar5);
              if ((uVar14 & 1) == 0) {
                lVar16 = *(long *)(param_1 + 0x48);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar17 = *(long *)(lVar16 + 0x10);
                lVar19 = *(long *)puVar12;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar4 = *(uint *)(lVar16 + 0x18);
                if (uVar4 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                  puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
                  *puVar18 = plVar13;
                  thunk_FUN_01f51358(puVar18,plVar13);
                }
                else {
                  FUN_030f2bb4(lVar16,plVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                lVar16 = *(long *)(param_1 + 0x58);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar17 = *(long *)(lVar16 + 0x10);
                lVar19 = *(long *)puVar12;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar4 = *(uint *)(lVar16 + 0x18);
                if (uVar4 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                  puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
                  *puVar18 = plVar13;
                  thunk_FUN_01f51358(puVar18,plVar13);
                }
                else {
                  FUN_030f2bb4(lVar16,plVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            FUN_02ce9cd8(&local_80,*(undefined8 *)puVar8);
            if ((*plVar1 != 0) &&
               (lVar16 = FUN_02b6b114(*plVar1,*(undefined8 *)puVar7), lVar16 != 0)) {
              FUN_0300123c(&local_b8,lVar16,*(undefined8 *)puVar11);
              uStack_78 = uStack_b0;
              local_80 = local_b8;
              local_70 = local_a8;
              while (uVar14 = FUN_02ce9cdc(&local_80,*(undefined8 *)puVar10), plVar13 = local_70,
                    (uVar14 & 1) != 0) {
                if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar14 = FUN_02b6b4d8(*(long *)(param_1 + 0x60),local_70,*(undefined8 *)puVar5);
                if ((uVar14 & 1) == 0) {
                  lVar16 = *(long *)(param_1 + 0x50);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar17 = *(long *)(lVar16 + 0x10);
                  lVar19 = *(long *)puVar12;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar4 = *(uint *)(lVar16 + 0x18);
                  if (uVar4 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                    puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
                    *puVar18 = plVar13;
                    thunk_FUN_01f51358(puVar18,plVar13);
                  }
                  else {
                    FUN_030f2bb4(lVar16,plVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              FUN_02ce9cd8(&local_80,*(undefined8 *)puVar8);
              puVar5 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnStopped__;
              puVar7 = 
              Method_Oculus_Voice_Dictation_AppDictationExperience_OnAudioDurationTrackerFinished__;
              if (*(long *)(param_1 + 0x50) != 0) {
                FUN_030f35d0(&local_b8,*(long *)(param_1 + 0x50),
                             *(undefined8 *)
                              Method_Oculus_Voice_Dictation_AppDictationExperience_OnStopped__);
                uStack_98 = uStack_b0;
                local_a0 = local_b8;
                local_90 = local_a8;
                while (uVar14 = FUN_02c7ab6c(&local_a0,*(undefined8 *)puVar9), plVar13 = local_90,
                      (uVar14 & 1) != 0) {
                  if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar16 = FUN_02b6b264(*plVar1,local_90,*(undefined8 *)puVar6);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  (**(code **)(*plVar13 + 0x1b8))
                            (plVar13,param_1,*(undefined4 *)(lVar16 + 0x18),0,
                             *(undefined8 *)(*plVar13 + 0x1c0));
                }
                FUN_02c7ab68(&local_a0,*(undefined8 *)puVar7);
                if (*(long *)(param_1 + 0x48) != 0) {
                  FUN_030f35d0(&local_b8,*(long *)(param_1 + 0x48),*(undefined8 *)puVar5);
                  uStack_98 = uStack_b0;
                  local_a0 = local_b8;
                  local_90 = local_a8;
                  while (uVar14 = FUN_02c7ab6c(&local_a0,*(undefined8 *)puVar9), plVar13 = local_90,
                        (uVar14 & 1) != 0) {
                    if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar16 = FUN_02b6b264(*(long *)(param_1 + 0x60),local_90,*(undefined8 *)puVar6);
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    (**(code **)(*plVar13 + 0x1b8))
                              (plVar13,param_1,0,*(undefined4 *)(lVar16 + 0x18),
                               *(undefined8 *)(*plVar13 + 0x1c0));
                  }
                  FUN_02c7ab68(&local_a0,*(undefined8 *)puVar7);
                  if (*(long *)(param_1 + 0x58) != 0) {
                    FUN_030f35d0(&local_b8,*(long *)(param_1 + 0x58),*(undefined8 *)puVar5);
                    uStack_98 = uStack_b0;
                    local_a0 = local_b8;
                    local_90 = local_a8;
                    while( true ) {
                      uVar14 = FUN_02c7ab6c(&local_a0,*(undefined8 *)puVar9);
                      plVar13 = local_90;
                      if ((uVar14 & 1) == 0) {
                        FUN_02c7ab68(&local_a0,*(undefined8 *)puVar7);
                        uVar20 = *(undefined8 *)(param_1 + 0x60);
                        uVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                                     Method_UnityEngine_AndroidJavaObject__Call__);
                        FUN_02b6ab48(uVar15,uVar20,
                                     *(undefined8 *)Method_AppDeeplinkUI_LaunchOtherApp__);
                        *(undefined8 *)(param_1 + 0x68) = uVar15;
                        thunk_FUN_01f51358(plVar1,uVar15);
                        return;
                      }
                      if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar16 = FUN_02b6b264(*(long *)(param_1 + 0x60),local_90,*(undefined8 *)puVar6
                                           );
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      if (*plVar1 == 0) break;
                      uVar3 = *(undefined4 *)(lVar16 + 0x18);
                      lVar16 = FUN_02b6b264(*plVar1,plVar13,*(undefined8 *)puVar6);
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      (**(code **)(*plVar13 + 0x1b8))
                                (plVar13,param_1,*(undefined4 *)(lVar16 + 0x18),uVar3,
                                 *(undefined8 *)(*plVar13 + 0x1c0));
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


