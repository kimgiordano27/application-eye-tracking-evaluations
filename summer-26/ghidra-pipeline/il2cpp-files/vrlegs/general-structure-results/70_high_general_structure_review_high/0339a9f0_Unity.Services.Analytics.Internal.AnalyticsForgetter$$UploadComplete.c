/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.AnalyticsForgetter$$UploadComplete
ENTRY_POINT: 0339a9f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void Unity_Services_Analytics_Internal_AnalyticsForgetter__UploadComplete(void)

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
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  FUN_021dd4e8();
  *(undefined8 *)(unaff_x25 + 0x48) = unaff_x26;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar4 = thunk_FUN_01a89d6c();
  if (lVar4 != 0) {
    if (*(uint *)(unaff_x24 + 3) < 2) {
LAB_0339b650:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x24[5] = unaff_x25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar4 = thunk_FUN_01a89e68(*unaff_x27);
    FUN_0339b674();
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x50) = 0x3e4ccccd;
      *(undefined8 *)(lVar4 + 0x58) = *unaff_x19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    /* try { // try from 0339aa6c to 0349abcb has its CatchHandler @ 0339aa6c
                       catch() { ... } // from try @ 0339aa6c with catch @ 0339aa6c
                       catch() { ... } // from try @ 0339ad78 with catch @ 0339aa6c
                       catch() { ... } // from try @ 0339ae44 with catch @ 0339aa6c
                       catch() { ... } // from try @ 0339ae5c with catch @ 0339aa6c
                       catch() { ... } // from try @ 0339af3c with catch @ 0339aa6c */
      uVar5 = thunk_FUN_01a89e68(*unaff_x28);
      FUN_021dd4e8();
      *(undefined8 *)(lVar4 + 0x48) = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar4 + 0x48),uVar5);
      lVar6 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar6 == 0) goto LAB_0339b654;
      if (*(uint *)(unaff_x24 + 3) < 3) goto LAB_0339b650;
      unaff_x24[6] = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x24 + 6,lVar4);
      *(long **)(unaff_x23 + 0x48) = unaff_x24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      puVar1 = UnityEngine_UIElements_IStyle_TypeInfo;
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
                puVar1 = UniJSON_IStore_TypeInfo;
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
                          puVar1 = System_Collections_IStructuralComparable_TypeInfo;
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
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
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
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ();
                                    uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                    FUN_021dd4e8();
                                    *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar6 + 0x48),uVar5);
                                    lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40)
                                                              );
                                    if (lVar8 == 0) goto LAB_0339b654;
                                    if (*(uint *)(plVar7 + 3) < 3) goto LAB_0339b650;
                                    plVar7[6] = lVar6;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (plVar7 + 6,lVar6);
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
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ();
                                      plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)
                                                                                                                                          
                                                  Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo
                                                  ,3);
                                      lVar6 = thunk_FUN_01a89e68(*unaff_x27);
                                      FUN_0339b674();
                                      if (lVar6 != 0) {
                                        *(undefined4 *)(lVar6 + 0x50) = 0x3e4ccccd;
                                        *(undefined8 *)(lVar6 + 0x58) = *unaff_x19;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ();
                                        uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                        FUN_021dd4e8();
                                        *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ((undefined8 *)(lVar6 + 0x48),uVar5);
                                        if (plVar7 != (long *)0x0) {
                                          lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)
                                                                            (*plVar7 + 0x40));
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
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      ();
                                            uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                            FUN_021dd4e8();
                                            *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      ((undefined8 *)(lVar6 + 0x48),uVar5);
                                            lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)
                                                                              (*plVar7 + 0x40));
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
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        ();
                                              uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                              FUN_021dd4e8();
                                              *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        ((undefined8 *)(lVar6 + 0x48),uVar5);
                                              lVar8 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)
                                                                                (*plVar7 + 0x40));
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
                                                puVar1 = 
                                                UnityEngine_UIElements_IMGUIContainer_TypeInfo;
                                                if (in_stack_00000008 != 0) {
                                                  FUN_01b5f01c();
                                                  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                                                                            
                                                  RengeGames_HealthBars_ISegmentedHealthBar_TypeInfo
                                                  );
                                                  FUN_0339f15c();
                                                  puVar3 = 
                                                  System_Runtime_CompilerServices_IStrongBox_TypeInfo
                                                  ;
                                                  puVar2 = Fusion_IStateAuthorityChanged_TypeInfo;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_IStructuralEquatable_TypeInfo;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar4 + 0x28));
                                                  lVar9 = *(long *)(lVar4 + 0x48);
                                                  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                                  *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                                  FUN_0339b674();
                                                  *(undefined8 *)(lVar6 + 0x28) =
                                                       *(undefined8 *)puVar3;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                                  FUN_021dd4e8();
                                                  *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x48),uVar5);
                                                  puVar3 = 
                                                  UnityEngine_UIElements_IStylePropertyAnimationSystem_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_0224c198(lVar9,lVar6,*unaff_x29);
                                                    lVar9 = *(long *)(lVar4 + 0x48);
                                                    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2
                                                                              );
                                                    *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                                    FUN_0339b674();
                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                         *(undefined8 *)puVar3;
                                                                                                        
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
                                                    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2
                                                                              );
                                                    *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                                    FUN_0339b674();
                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                         *(undefined8 *)puVar3;
                                                                                                        
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
                                                    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2
                                                                              );
                                                    *(undefined4 *)(lVar6 + 100) = 0x3f800000;
                                                    FUN_0339b674();
                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                         *(undefined8 *)puVar3;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  uVar5 = thunk_FUN_01a89e68(*unaff_x28);
                                                  FUN_021dd4e8();
                                                  *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x48),uVar5);
                                                  if (lVar9 != 0) {
                                                    FUN_0224c198(lVar9,lVar6,*unaff_x29);
                                                    FUN_01b5f01c(in_stack_00000008,lVar4,
                                                                 *(undefined8 *)puVar1);
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


