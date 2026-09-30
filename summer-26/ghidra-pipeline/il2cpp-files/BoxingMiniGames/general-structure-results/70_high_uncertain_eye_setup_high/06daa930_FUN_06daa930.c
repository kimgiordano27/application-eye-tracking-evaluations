/*
FUNCTION_NAME: FUN_06daa930
ENTRY_POINT: 06daa930
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06daba0c) */
/* WARNING: Removing unreachable block (ram,0x06daba20) */
/* WARNING: Removing unreachable block (ram,0x06dab6cc) */

void FUN_06daa930(long param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_ed0 [208];
  undefined1 auStack_e00 [208];
  undefined1 auStack_d30 [208];
  undefined1 auStack_c60 [208];
  long local_b90;
  undefined1 *local_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  uint local_ae8;
  undefined8 local_ae4;
  undefined8 uStack_adc;
  undefined8 local_ad4;
  undefined8 uStack_acc;
  undefined8 local_ac4;
  undefined8 uStack_abc;
  undefined4 local_ab4;
  undefined1 auStack_a90 [152];
  undefined1 auStack_9f8 [152];
  undefined1 auStack_960 [208];
  undefined1 auStack_890 [208];
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined1 auStack_7a0 [208];
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 auStack_5e8 [208];
  undefined1 auStack_518 [208];
  undefined1 auStack_448 [208];
  undefined1 auStack_378 [16];
  undefined8 local_368;
  undefined1 auStack_360 [220];
  ushort local_284 [2];
  undefined1 auStack_280 [208];
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar15 = tpidr_el0;
  local_68 = *(long *)(lVar15 + 0x28);
  if ((DAT_07eead3a & 1) == 0) {
    FUN_03642964(Oculus_Interaction_Surfaces_ISurface_TypeInfo);
    FUN_03642964(Oculus_Interaction_Surfaces_ISurfacePatch_TypeInfo);
    FUN_03642964(System_Runtime_Serialization_ISurrogateSelector_TypeInfo);
    FUN_03642964(System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    FUN_03642964(Mono_ISystemCertificateProvider_TypeInfo);
    FUN_03642964(Mono_ISystemDependencyProvider_TypeInfo);
    FUN_03642964(PTR_DAT_07a052b0);
    FUN_03642964(System_Threading_Tasks_ITaskCompletionAction_TypeInfo);
    FUN_03642964(Unity_InferenceEngine_ITensorData_TypeInfo);
    FUN_03642964(PTR_DAT_07a052b8);
    FUN_03642964(PTR_DAT_07a052c0);
    FUN_03642964(UnityEngine_UIElements_ITextEdition_TypeInfo);
    FUN_03642964(UnityEngine_InputSystem_LowLevel_ITextInputReceiver_TypeInfo);
    FUN_03642964(TMPro_ITextPreprocessor_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_ITextSelection_TypeInfo);
    FUN_03642964(PTR_DAT_079fe240);
    FUN_03642964(System_Threading_IThreadPoolWorkItem_TypeInfo);
    FUN_03642964(Oculus_Interaction_Throw_IThrowVelocityCalculator_TypeInfo);
    FUN_03642964(Zenject_ITickable_TypeInfo);
    FUN_03642964(System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo);
    FUN_03642964(PTR_DAT_07a052c8);
    FUN_03642964(System_Security_ISecurityEncodable_TypeInfo);
    FUN_03642964(DuckStream_Scoring_IScoringControllerDuckStream_TypeInfo);
    FUN_03642964(PTR_DAT_079fb380);
    FUN_03642964(System_Runtime_CompilerServices_IStrongBox_TypeInfo);
    FUN_03642964(PTR_DAT_07a04ce8);
    FUN_03642964(System_Collections_IStructuralComparable_TypeInfo);
    FUN_03642964(PTR_DAT_07a0af80);
    FUN_03642964(System_Collections_IStructuralEquatable_TypeInfo);
    FUN_03642964(PadsWorkout_IScoringController_TypeInfo);
    FUN_03642964(PTR_DAT_079fb378);
    FUN_03642964(PTR_DAT_079f8a78);
    FUN_03642964(PTR_DAT_07a203e0);
    DAT_07eead3a = 1;
  }
  local_284[0] = 0;
  memset(auStack_378,0,0xf0);
  memset(auStack_448,0,0xd0);
  memset(auStack_518,0,0xd0);
  memset(auStack_5e8,0,0xd0);
  memset(&local_6b8,0,0xd0);
  uStack_6c8 = 0;
  local_6d0 = 0;
  memset(auStack_7a0,0,0xd0);
  uStack_7b8 = 0;
  local_7c0 = 0;
  local_7b0 = 0;
  memset(auStack_890,0,0xd0);
  memset(auStack_960,0,0xd0);
  memset(auStack_9f8,0,0x98);
  local_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  memset(auStack_a90,0,0x98);
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if (param_2 == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar11 = thunk_FUN_0367fe20();
    uVar21 = thunk_FUN_036aa1c8(PTR_DAT_079fe010);
    FUN_05d7e1a0(uVar11,uVar21,0);
    if (*(long *)(lVar15 + 0x28) == local_68) {
      uVar21 = thunk_FUN_036aa1c8(UnityEngine_Timeline_ITimeControl_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar11,uVar21);
    }
    goto LAB_06dabbe0;
  }
  local_284[0] = *(ushort *)(param_1 + 0x40);
  puVar1 = (ushort *)(param_2 + 0x40);
  if ((*(ushort *)(param_1 + 0x40) & 0xff) != 0) {
    puVar1 = local_284;
  }
  *(ushort *)(param_1 + 0x40) = *puVar1;
  uVar9 = FUN_06ce4a64(param_1 + 0x28,0);
  if ((uVar9 & 1) != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    thunk_FUN_036b7ad0(param_1 + 0x28,0);
  }
  plVar17 = (long *)(param_1 + 0x20);
  lVar19 = *plVar17;
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar9 = FUN_05e30794(lVar19,0,0);
  if ((uVar9 & 1) == 0) {
    plVar10 = (long *)*plVar17;
    if (plVar10 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar10 + 0x298))
                        (plVar10,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(*plVar10 + 0x2a0));
      if ((uVar9 & 1) != 0) goto LAB_06daac88;
      goto LAB_06daac98;
    }
    goto LAB_06daba40;
  }
LAB_06daac88:
  *plVar17 = *(long *)(param_2 + 0x20);
  thunk_FUN_036b7ad0(plVar17);
LAB_06daac98:
  puVar5 = TMPro_ITextPreprocessor_TypeInfo;
  puVar4 = Oculus_Interaction_Surfaces_ISurface_TypeInfo;
  uVar8 = FUN_06ce4a64(param_1 + 0x28,0);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  }
  puVar18 = (undefined8 *)(param_1 + 0x88);
  uVar11 = FUN_03b8c374(*(undefined8 *)(param_2 + 0x88),*puVar18,*(undefined8 *)puVar4);
  *puVar18 = uVar11;
  thunk_FUN_036b7ad0(puVar18,uVar11);
  uStack_b78 = *(undefined8 *)(param_2 + 0x70);
  local_b80 = *(undefined8 *)(param_2 + 0x68);
  uStack_b68 = *(undefined8 *)(param_2 + 0x80);
  local_b70 = *(undefined8 *)(param_2 + 0x78);
  FUN_0427e608(param_1 + 0x68,&local_b80,*(undefined8 *)puVar5);
  puVar18 = (undefined8 *)(param_1 + 0x98);
  uVar9 = FUN_05c97640(*puVar18,0);
  if ((uVar9 & 1) != 0) {
    *puVar18 = *(undefined8 *)(param_2 + 0x98);
    thunk_FUN_036b7ad0(puVar18);
  }
  lVar19 = *(long *)(param_2 + 0x90);
  plVar17 = (long *)(param_1 + 0x90);
  if (*plVar17 == 0) {
LAB_06dab93c:
    *plVar17 = lVar19;
    thunk_FUN_036b7ad0(plVar17,lVar19);
  }
  else if (lVar19 != 0) {
    lVar12 = thunk_FUN_0367fe20(*(undefined8 *)PadsWorkout_IScoringController_TypeInfo);
    System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__Sort
              (lVar12,*(undefined8 *)DuckStream_Scoring_IScoringControllerDuckStream_TypeInfo);
    lVar13 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fb378);
    FUN_0459e7d4(lVar13,*(undefined8 *)PTR_DAT_079fb380);
    if (*(int *)(*(long *)PTR_DAT_079fe240 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar19 = FUN_06dabbe8(lVar19,lVar13);
    lVar14 = FUN_06dabbe8(*plVar17,0);
    if (lVar14 == 0) {
      lVar15 = *(long *)(lVar15 + 0x28);
LAB_06dabac0:
      if (lVar15 == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_06dabbe0;
    }
    FUN_056d9e6c(&local_b80,lVar14,*(undefined8 *)Oculus_Interaction_Surfaces_ISurfacePatch_TypeInfo
                );
    memcpy(auStack_378,&local_b80,0xf0);
    puVar6 = System_ComponentModel_ISynchronizeInvoke_TypeInfo;
    puVar5 = PTR_DAT_07a203e0;
    puVar4 = PTR_DAT_07a052b8;
    local_b90 = 0;
    local_b88 = auStack_378;
LAB_06daae18:
    uVar9 = FUN_059603b0(auStack_378,*(undefined8 *)Unity_InferenceEngine_ITensorData_TypeInfo);
    uVar11 = local_368;
    lVar14 = local_b90;
    if ((uVar9 & 1) != 0) {
      memcpy(auStack_448,auStack_360,0xd0);
      if (lVar19 == 0) {
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_06dabbe0;
      }
      uVar9 = FUN_056db650(lVar19,uVar11,auStack_518,*(undefined8 *)puVar6);
      memcpy(&local_6b8,auStack_448,0xd0);
      if ((uVar9 & 1) != 0) {
        memcpy(auStack_c60,auStack_518,0xd0);
        FUN_06dabfec(&local_b80,&local_6b8,auStack_c60);
        memcpy(auStack_5e8,&local_b80,0xd0);
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_5e8,0xd0);
              thunk_FUN_036b7ad0(lVar14 + 0x20,0);
            }
            else {
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_5e8,0xd0);
              FUN_046db640(lVar12,&local_1b0,uVar21);
            }
            FUN_056dafd4(lVar19,uVar11,
                         *(undefined8 *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo);
            goto LAB_06daae18;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_06dabbe0;
      }
      uStack_6c8 = uStack_690;
      local_6d0 = local_698;
      uVar9 = FUN_06ce4a64(&local_6d0,0);
      if ((uVar9 & 1) != 0) {
LAB_06daafbc:
        if ((uVar8 & 1) == 0) {
          if (lVar13 == 0) {
            if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_06dabbe0;
          }
          if (0 < *(int *)(lVar13 + 0x18)) {
            iVar20 = 0;
            bVar3 = false;
            do {
              uVar22 = *(undefined8 *)(param_1 + 0x30);
              uVar21 = FUN_0459ed6c(lVar13,iVar20,*(undefined8 *)PTR_DAT_07a0af80);
              if (*(int *)(*(long *)PTR_DAT_079fe240 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar9 = FUN_06dac37c(uVar22,uVar21);
              if ((uVar9 & 1) != 0) {
                uVar21 = FUN_0459ed6c(lVar13,iVar20,*(undefined8 *)PTR_DAT_07a0af80);
                uVar21 = FUN_05c981c8(uVar11,*(undefined8 *)puVar5,uVar21,0);
                uVar9 = FUN_056db650(lVar19,uVar21,auStack_518,*(undefined8 *)puVar6);
                if ((uVar9 & 1) != 0) {
                  memcpy(&local_6b8,auStack_448,0xd0);
                  memcpy(auStack_d30,auStack_518,0xd0);
                  FUN_06dabfec(&local_b80,&local_6b8,auStack_d30);
                  memcpy(auStack_7a0,&local_b80,0xd0);
                  if (lVar12 != 0) {
                    lVar14 = *(long *)(lVar12 + 0x10);
                    lVar16 = *(long *)
                              System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar14 != 0) {
                      uVar2 = *(uint *)(lVar12 + 0x18);
                      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                        memcpy((void *)(lVar14 + 0x20),auStack_7a0,0xd0);
                        thunk_FUN_036b7ad0(lVar14 + 0x20,0);
                      }
                      else {
                        uVar22 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
                        memcpy(&local_1b0,auStack_7a0,0xd0);
                        FUN_046db640(lVar12,&local_1b0,uVar22);
                      }
                      FUN_056dafd4(lVar19,uVar21,
                                   *(undefined8 *)
                                    System_Runtime_Serialization_ISurrogateSelector_TypeInfo);
                      bVar3 = true;
                      goto LAB_06dab314;
                    }
                  }
                  if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  goto LAB_06dabbe0;
                }
              }
LAB_06dab314:
              iVar20 = iVar20 + 1;
            } while (iVar20 < *(int *)(lVar13 + 0x18));
            if (bVar3) goto LAB_06daae18;
          }
        }
        else {
          if (lVar13 == 0) {
            if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_06dabbe0;
          }
          FUN_0459fb44(&local_b80,lVar13,*(undefined8 *)PTR_DAT_07a052c8);
          bVar3 = false;
          local_1b0 = 0;
          local_7b0 = local_b70;
          local_1a8 = &local_7c0;
          uStack_7b8 = uStack_b78;
          local_7c0 = local_b80;
          while (uVar9 = FUN_05897b28(&local_7c0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
            uVar21 = FUN_05c981c8(uVar11,*(undefined8 *)puVar5,local_7b0,0);
            uVar9 = FUN_056db650(lVar19,uVar21,auStack_518,*(undefined8 *)puVar6);
            if ((uVar9 & 1) != 0) {
              memcpy(&local_6b8,auStack_448,0xd0);
              memcpy(auStack_e00,auStack_518,0xd0);
              FUN_06dabfec(&local_b80,&local_6b8,auStack_e00);
              memcpy(auStack_890,&local_b80,0xd0);
              if (lVar12 == 0) {
                if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                goto LAB_06dabbe0;
              }
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar16 = *(long *)System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo
              ;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) {
                if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                goto LAB_06dabbe0;
              }
              uVar2 = *(uint *)(lVar12 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                memcpy((void *)(lVar14 + 0x20),auStack_890,0xd0);
                thunk_FUN_036b7ad0(lVar14 + 0x20,0);
              }
              else {
                uVar22 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
                memcpy(auStack_280,auStack_890,0xd0);
                FUN_046db640(lVar12,auStack_280,uVar22);
              }
              bVar3 = true;
              FUN_056dafd4(lVar19,uVar21,
                           *(undefined8 *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo);
            }
          }
          FUN_05897b24(&local_7c0,*(undefined8 *)PTR_DAT_07a052b0);
          if (bVar3) goto LAB_06daae18;
        }
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_448,0xd0);
              thunk_FUN_036b7ad0(lVar14 + 0x20,0);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_448,0xd0);
              FUN_046db640(lVar12,&local_1b0,uVar11);
            }
            goto LAB_06daae18;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_06dabbe0;
      }
      memcpy(&local_6b8,auStack_448,0xd0);
      uVar22 = uStack_690;
      uVar21 = local_698;
      if (*(int *)(*(long *)PTR_DAT_079fe240 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07eead98 == '\0') {
        FUN_03642964(PTR_DAT_079fe240);
        DAT_07eead98 = '\x01';
      }
      lVar14 = *(long *)PTR_DAT_079fe240;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar14 = *(long *)PTR_DAT_079fe240;
      }
      uVar9 = FUN_06cdb808(uVar21,uVar22,**(undefined8 **)(lVar14 + 0xb8),
                           (*(undefined8 **)(lVar14 + 0xb8))[1],0);
      if ((uVar9 & 1) != 0) goto LAB_06daafbc;
      memcpy(&local_6b8,auStack_448,0xd0);
      local_6d0 = local_6b8;
      uStack_6c8 = local_6b0;
      uVar9 = FUN_056db650(lVar19,local_6b0,auStack_518,*(undefined8 *)puVar6);
      if ((uVar9 & 1) != 0) {
        memcpy(&local_6b8,auStack_448,0xd0);
        memcpy(auStack_ed0,auStack_518,0xd0);
        FUN_06dabfec(&local_b80,&local_6b8,auStack_ed0);
        memcpy(auStack_960,&local_b80,0xd0);
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_960,0xd0);
              thunk_FUN_036b7ad0(lVar14 + 0x20,0);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_960,0xd0);
              FUN_046db640(lVar12,&local_1b0,uVar11);
            }
            memcpy(&local_6b8,auStack_448,0xd0);
            local_6d0 = local_6b8;
            uStack_6c8 = local_6b0;
            FUN_056dafd4(lVar19,local_6b0,
                         *(undefined8 *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo);
            goto LAB_06daae18;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_06dabbe0;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar21 = *(undefined8 *)(param_1 + 0x30);
      memcpy(&local_6b8,auStack_448,0xd0);
      uVar7 = uStack_690;
      uVar22 = local_698;
      if (*(int *)(*(long *)PTR_DAT_079fe240 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar9 = FUN_06dac4a8(uVar11,uVar21,uVar22,uVar7);
      if ((uVar9 & 1) != 0) {
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_448,0xd0);
              thunk_FUN_036b7ad0(lVar14 + 0x20,0);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_448,0xd0);
              FUN_046db640(lVar12,&local_1b0,uVar11);
            }
            goto LAB_06daae18;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_06dabbe0;
      }
      goto LAB_06daae18;
    }
    FUN_05960520(local_b88,*(undefined8 *)System_Threading_Tasks_ITaskCompletionAction_TypeInfo);
    if (lVar14 != 0) {
      if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(lVar14);
      }
      goto LAB_06dabbe0;
    }
    if ((uVar8 & 1) == 0) {
      if ((lVar12 == 0) || (lVar19 == 0)) goto LAB_06daba40;
      iVar20 = *(int *)(lVar12 + 0x18);
      uVar11 = FUN_056d9680(lVar19,*(undefined8 *)Mono_ISystemCertificateProvider_TypeInfo);
      uVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                   UnityEngine_InputSystem_LowLevel_ITextInputReceiver_TypeInfo);
      FUN_0415f5fc(uVar21,param_1,*(undefined8 *)UnityEngine_UIElements_ITextSelection_TypeInfo,0);
      uVar11 = FUN_03cc86d0(uVar11,uVar21,*(undefined8 *)Mono_ISystemDependencyProvider_TypeInfo);
      FUN_046db8a8(lVar12,uVar11,*(undefined8 *)Zenject_ITickable_TypeInfo);
      puVar5 = System_Collections_IStructuralEquatable_TypeInfo;
      puVar4 = System_Collections_IStructuralComparable_TypeInfo;
      if (iVar20 < *(int *)(lVar12 + 0x18)) {
        do {
          FUN_046db2b0(&local_b80,lVar12,iVar20,*(undefined8 *)puVar4);
          memcpy(auStack_a90,&local_b80,0x98);
          uStack_d8 = uStack_adc;
          local_e0 = local_ae4;
          uStack_c8 = uStack_acc;
          local_d0 = local_ad4;
          uVar8 = local_ae8 & 0xfffffff7;
          uStack_b8 = uStack_abc;
          local_c0 = local_ac4;
          local_b0 = local_ab4;
          memcpy(&local_b80,auStack_a90,0x98);
          uStack_adc = uStack_d8;
          local_ae4 = local_e0;
          uStack_acc = uStack_c8;
          local_ad4 = local_d0;
          uStack_abc = uStack_b8;
          local_ac4 = local_c0;
          local_ab4 = local_b0;
          local_ae8 = uVar8;
          FUN_046db314(lVar12,iVar20,&local_b80,*(undefined8 *)puVar5);
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(lVar12 + 0x18));
      }
    }
    else {
      if ((lVar12 == 0) || (lVar19 == 0)) {
LAB_06daba40:
        lVar15 = *(long *)(lVar15 + 0x28);
        goto LAB_06dabac0;
      }
      iVar20 = *(int *)(lVar12 + 0x18);
      uVar11 = FUN_056d9680(lVar19,*(undefined8 *)Mono_ISystemCertificateProvider_TypeInfo);
      FUN_046db8a8(lVar12,uVar11,*(undefined8 *)Zenject_ITickable_TypeInfo);
      puVar5 = System_Collections_IStructuralEquatable_TypeInfo;
      puVar4 = System_Collections_IStructuralComparable_TypeInfo;
      if (iVar20 < *(int *)(lVar12 + 0x18)) {
        do {
          FUN_046db2b0(&local_b80,lVar12,iVar20,*(undefined8 *)puVar4);
          memcpy(auStack_9f8,&local_b80,0x98);
          uStack_98 = uStack_adc;
          local_a0 = local_ae4;
          uStack_88 = uStack_acc;
          local_90 = local_ad4;
          uVar8 = local_ae8 & 0xfffffff7;
          uStack_78 = uStack_abc;
          local_80 = local_ac4;
          local_70 = local_ab4;
          memcpy(&local_b80,auStack_9f8,0x98);
          uStack_adc = uStack_98;
          local_ae4 = local_a0;
          uStack_acc = uStack_88;
          local_ad4 = local_90;
          uStack_abc = uStack_78;
          local_ac4 = local_80;
          local_ab4 = local_70;
          local_ae8 = uVar8;
          FUN_046db314(lVar12,iVar20,&local_b80,*(undefined8 *)puVar5);
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(lVar12 + 0x18));
      }
    }
    lVar19 = FUN_046dd5e8(lVar12,*(undefined8 *)System_Security_ISecurityEncodable_TypeInfo);
    goto LAB_06dab93c;
  }
  if (*(long *)(lVar15 + 0x28) == local_68) {
    return;
  }
LAB_06dabbe0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


