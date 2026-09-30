/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$SerializeLong
ENTRY_POINT: 0339ae64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_Internal_BufferX__SerializeLong(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar9;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
                    /* catch() { ... } // from try @ 0339ae58 with catch @ 0339ae64 */
                    /* catch() { ... } // from try @ 0339ad38 with catch @ 0339ae68 */
  FUN_021dd4e8();
                    /* catch() { ... } // from try @ 0339ac88 with catch @ 0339ae6c */
                    /* catch() { ... } // from try @ 0339acf0 with catch @ 0339ae70 */
  *(undefined8 *)(unaff_x25 + 0x48) = param_1;
                    /* catch() { ... } // from try @ 0339ae54 with catch @ 0339ae74 */
                    /* catch() { ... } // from try @ 0339acb0 with catch @ 0339ae78 */
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x25 + 0x48),param_1);
                    /* catch() { ... } // from try @ 0339ae50 with catch @ 0339ae7c */
                    /* catch() { ... } // from try @ 0339ac8c with catch @ 0339ae80 */
                    /* catch() { ... } // from try @ 0339accc with catch @ 0339ae84 */
                    /* catch() { ... } // from try @ 0339ad0c with catch @ 0339ae88 */
  lVar4 = thunk_FUN_01a89d6c();
                    /* catch() { ... } // from try @ 0339ac68 with catch @ 0339ae8c */
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 0339acf4 with catch @ 0339ae90 */
                    /* catch() { ... } // from try @ 0339ae40 with catch @ 0339ae94 */
    if (*(uint *)(unaff_x24 + 3) < 2) {
LAB_0339b650:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
                    /* catch() { ... } // from try @ 0339ac28 with catch @ 0339aea0 */
    unaff_x24[5] = unaff_x25;
                    /* catch() { ... } // from try @ 0339abcc with catch @ 0339aea4 */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar4 = thunk_FUN_01a89e68(*unaff_x27);
    FUN_0339b674();
                    /* try { // try from 0339aebc to 0349aebf has its CatchHandler @ 0339aed4 */
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x50) = 0x3e4ccccd;
                    /* catch() { ... } // from try @ 0339aebc with catch @ 0339aed4 */
      *(undefined8 *)(lVar4 + 0x58) = *unaff_x19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar5 = thunk_FUN_01a89e68(*unaff_x28);
      FUN_021dd4e8();
      *(undefined8 *)(lVar4 + 0x48) = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar4 + 0x48),uVar5);
                    /* try { // try from 0339af14 to 0349af3b has its CatchHandler @ 0339af50 */
      lVar6 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar6 == 0) goto LAB_0339b654;
      if (*(uint *)(unaff_x24 + 3) < 3) goto LAB_0339b650;
      unaff_x24[6] = lVar4;
                    /* try { // try from 0339af3c to 0349af47 has its CatchHandler @ 0339aa6c */
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x24 + 6,lVar4);
      *(long **)(unaff_x23 + 0x48) = unaff_x24;
                    /* try { // try from 0339af48 to 0349af4f has its CatchHandler @ 0339af50 */
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      puVar1 = System_Collections_IStructuralComparable_TypeInfo;
                    /* catch() { ... } // from try @ 0339af14 with catch @ 0339af50
                       catch() { ... } // from try @ 0339af48 with catch @ 0339af50 */
      if (unaff_x22 != 0) {
        FUN_0224c198();
        lVar9 = *(long *)(unaff_x21 + 0x48);
        lVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                    Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunner_TypeInfo
                                  );
        *(undefined4 *)(lVar4 + 0x50) = 0xffffffff;
        FUN_027b3d9c(lVar4,0);
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)
                                       Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo
                                      ,3);
        lVar6 = thunk_FUN_01a89e68(*unaff_x27);
        FUN_0339b674();
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 0x50) = 0x3e4ccccd;
          *(undefined8 *)(lVar6 + 0x58) = *unaff_x19;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          uVar5 = thunk_FUN_01a89e68(*unaff_x28);
          FUN_021dd4e8();
          *(undefined8 *)(lVar6 + 0x48) = uVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar6 + 0x48),uVar5);
          if (plVar7 != (long *)0x0) {
            lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar8 == 0) goto LAB_0339b654;
            if ((int)plVar7[3] == 0) goto LAB_0339b650;
            plVar7[4] = lVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar6);
            lVar6 = thunk_FUN_01a89e68(*unaff_x27);
            FUN_0339b674();
            if (lVar6 != 0) {
              *(undefined4 *)(lVar6 + 0x50) = 0x3e4ccccd;
              *(undefined8 *)(lVar6 + 0x58) = *unaff_x19;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              uVar5 = thunk_FUN_01a89e68(*unaff_x28);
              FUN_021dd4e8();
              *(undefined8 *)(lVar6 + 0x48) = uVar5;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar6 + 0x48),uVar5);
              lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar8 == 0) goto LAB_0339b654;
              if (*(uint *)(plVar7 + 3) < 2) goto LAB_0339b650;
              plVar7[5] = lVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 5,lVar6);
              lVar6 = thunk_FUN_01a89e68(*unaff_x27);
              FUN_0339b674();
              if (lVar6 != 0) {
                *(undefined4 *)(lVar6 + 0x50) = 0x3e4ccccd;
                *(undefined8 *)(lVar6 + 0x58) = *unaff_x19;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                FUN_021dd4e8();
                *(undefined8 *)(lVar6 + 0x48) = uVar5;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar6 + 0x48),uVar5);
                lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar8 == 0) goto LAB_0339b654;
                if (*(uint *)(plVar7 + 3) < 3) goto LAB_0339b650;
                plVar7[6] = lVar6;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 6,lVar6);
                *(long *)(lVar4 + 0x48) = (long)plVar7;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((long *)(lVar4 + 0x48),plVar7);
                puVar1 = UniGLTF_IStorage_TypeInfo;
                if (lVar9 != 0) {
                  FUN_0224c198(lVar9,lVar4,*unaff_x29);
                  lVar9 = *(long *)(unaff_x21 + 0x48);
                  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                              Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunner_TypeInfo
                                            );
                  *(undefined4 *)(lVar4 + 0x50) = 0xffffffff;
                  FUN_027b3d9c(lVar4,0);
                  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)
                                                 Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo
                                                ,3);
                  lVar6 = thunk_FUN_01a89e68(*unaff_x27);
                  FUN_0339b674();
                  if (lVar6 != 0) {
                    *(undefined4 *)(lVar6 + 0x50) = 0x3e4ccccd;
                    *(undefined8 *)(lVar6 + 0x58) = *unaff_x19;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                    FUN_021dd4e8();
                    *(undefined8 *)(lVar6 + 0x48) = uVar5;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar6 + 0x48),uVar5);
                    if (plVar7 != (long *)0x0) {
                      lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
                      if (lVar8 == 0) goto LAB_0339b654;
                      if ((int)plVar7[3] == 0) goto LAB_0339b650;
                      plVar7[4] = lVar6;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar7 + 4,lVar6);
                      lVar6 = thunk_FUN_01a89e68(*unaff_x27);
                      FUN_0339b674();
                      if (lVar6 != 0) {
                        *(undefined4 *)(lVar6 + 0x50) = 0x3e4ccccd;
                        *(undefined8 *)(lVar6 + 0x58) = *unaff_x19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                        FUN_021dd4e8();
                        *(undefined8 *)(lVar6 + 0x48) = uVar5;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((undefined8 *)(lVar6 + 0x48),uVar5);
                        lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
                        if (lVar8 == 0) goto LAB_0339b654;
                        if (*(uint *)(plVar7 + 3) < 2) goto LAB_0339b650;
                        plVar7[5] = lVar6;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar7 + 5,lVar6);
                        lVar6 = thunk_FUN_01a89e68(*unaff_x27);
                        FUN_0339b674();
                        if (lVar6 != 0) {
                          *(undefined4 *)(lVar6 + 0x50) = 0x3e4ccccd;
                          *(undefined8 *)(lVar6 + 0x58) = *unaff_x19;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                          FUN_021dd4e8();
                          *(undefined8 *)(lVar6 + 0x48) = uVar5;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((undefined8 *)(lVar6 + 0x48),uVar5);
                          lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
                          if (lVar8 == 0) goto LAB_0339b654;
                          if (*(uint *)(plVar7 + 3) < 3) goto LAB_0339b650;
                          plVar7[6] = lVar6;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar7 + 6,lVar6);
                          *(long *)(lVar4 + 0x48) = (long)plVar7;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((long *)(lVar4 + 0x48),plVar7);
                          if (lVar9 != 0) {
                            FUN_0224c198(lVar9,lVar4,*unaff_x29);
                            puVar1 = UnityEngine_UIElements_IMGUIContainer_TypeInfo;
                            if (in_stack_00000008 != 0) {
                              FUN_01b5f01c();
                              lVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                                    
                                                  RengeGames_HealthBars_ISegmentedHealthBar_TypeInfo
                                                  );
                              FUN_0339f15c();
                              puVar3 = System_Runtime_CompilerServices_IStrongBox_TypeInfo;
                              puVar2 = Fusion_IStateAuthorityChanged_TypeInfo;
                              if (lVar4 != 0) {
                                *(undefined8 *)(lVar4 + 0x28) =
                                     *(undefined8 *)System_Collections_IStructuralEquatable_TypeInfo
                                ;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar4 + 0x28));
                                lVar9 = *(long *)(lVar4 + 0x48);
                                lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                FUN_0339b674();
                                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)puVar3;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                FUN_021dd4e8();
                                *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar6 + 0x48),uVar5);
                                puVar3 = 
                                UnityEngine_UIElements_IStylePropertyAnimationSystem_TypeInfo;
                                if (lVar9 != 0) {
                                  FUN_0224c198(lVar9,lVar6,*unaff_x29);
                                  lVar9 = *(long *)(lVar4 + 0x48);
                                  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                  *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                  FUN_0339b674();
                                  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)puVar3;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                  FUN_021dd4e8();
                                  *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ((undefined8 *)(lVar6 + 0x48),uVar5);
                                  puVar3 = UnityEngine_ISubsystem_TypeInfo;
                                  if (lVar9 != 0) {
                                    FUN_0224c198(lVar9,lVar6,*unaff_x29);
                                    lVar9 = *(long *)(lVar4 + 0x48);
                                    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                    *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                    FUN_0339b674();
                                    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)puVar3;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ();
                                    uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                    FUN_021dd4e8();
                                    *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar6 + 0x48),uVar5);
                                    puVar3 = Fusion_IStatsBuffer_TypeInfo;
                                    if (lVar9 != 0) {
                                      FUN_0224c198(lVar9,lVar6,*unaff_x29);
                                      lVar9 = *(long *)(lVar4 + 0x48);
                                      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                      *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                      FUN_0339b674();
                                      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)puVar3;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ();
                                      uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                      FUN_021dd4e8();
                                      *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ((undefined8 *)(lVar6 + 0x48),uVar5);
                                      if (lVar9 != 0) {
                                        FUN_0224c198(lVar9,lVar6,*unaff_x29);
                                        FUN_01b5f01c(in_stack_00000008,lVar4,*(undefined8 *)puVar1);
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
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_0339b654:
  uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,0);
}


