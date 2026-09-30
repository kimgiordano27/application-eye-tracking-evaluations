/*
FUNCTION_NAME: FUN_06566750
ENTRY_POINT: 06566750
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long * FUN_06566750(long *param_1,long *param_2,undefined1 (*param_3) [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *local_70;
  long *local_68;
  
  if ((DAT_071ce711 & 1) == 0) {
    FUN_02f07e70(PixelCrushers_DialogueSystem_SetEnabledOnDialogueEvent_SetEnabledAction___TypeInfo)
    ;
    FUN_02f07e70(
                PixelCrushers_DialogueSystem_SetQuestStateOnDialogueEvent_SetQuestStateAction___TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d38e20);
    FUN_02f07e70(PTR_DAT_06d38928);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PixelCrushers_DialogueSystem_AssetBundleManager_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AssetDetails_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AssetDetailsList_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37dc0);
    FUN_02f07e70(Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d06580);
    FUN_02f07e70(PixelCrushers_DialogueSystem_AssetLoadedDelegate_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_AssignBinaryExpression_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo);
    FUN_02f07e70(Language_Lua_Assignment_TypeInfo);
    FUN_02f07e70(System_Xml_Schema_Asttree_TypeInfo);
    FUN_02f07e70(System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo);
    FUN_02f07e70(System_Security_Cryptography_AsymmetricSignatureDeformatter_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d09aa8);
    FUN_02f07e70(System_Security_Cryptography_AsymmetricSignatureFormatter_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02140);
    FUN_02f07e70(PTR_DAT_06d06230);
    FUN_02f07e70(System_AsyncCallback_TypeInfo);
    FUN_02f07e70(System_ComponentModel_AsyncCompletedEventArgs_TypeInfo);
    FUN_02f07e70(System_ComponentModel_AsyncCompletedEventHandler_TypeInfo);
    FUN_02f07e70(Mono_Net_Security_AsyncHandshakeRequest_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3b2f0);
    FUN_02f07e70(PTR_DAT_06d38e18);
    FUN_02f07e70(UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo);
    DAT_071ce711 = 1;
  }
  puVar3 = UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*param_1 == 0) goto LAB_06567868;
  lVar5 = FUN_0654f358(*param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar3);
  }
  puVar2 = PixelCrushers_DialogueSystem_SetQuestStateOnDialogueEvent_SetQuestStateAction___TypeInfo;
  if ((lVar5 == 0) ||
     (lVar6 = FUN_04c745ac(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                           *(undefined8 *)
                            PixelCrushers_DialogueSystem_SetQuestStateOnDialogueEvent_SetQuestStateAction___TypeInfo
                          ), lVar6 == 0)) goto LAB_06567868;
  uVar7 = FUN_0654e280(lVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar3;
    }
    param_1 = (long *)*param_1;
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    uVar11 = *(undefined8 *)System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo
    ;
    if (param_1 == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    }
    uVar10 = *(undefined8 *)PTR_DAT_06d09aa8;
LAB_06566f9c:
    uVar8 = FUN_05465734(uVar8,uVar11,uVar14,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
    }
    FUN_06561134(param_3,uVar8,0);
  }
  else {
    uVar8 = FUN_0654e594(lVar6,0);
    puVar1 = PTR_DAT_06d38928;
    if (*(int *)(*(long *)PTR_DAT_06d38928 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38928);
    }
    uVar7 = FUN_0652ff6c(uVar8,&local_68,0);
    if ((uVar7 & 1) == 0) {
      lVar9 = *param_1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_06567c00(lVar9);
      if ((uVar7 & 1) == 0) {
        uVar11 = *(undefined8 *)*param_3;
        uVar14 = *(undefined8 *)(*param_3 + 8);
        uVar8 = FUN_05465414(*(undefined8 *)Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo,
                             uVar8,*(undefined8 *)PTR_DAT_06d02140,0);
        if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
        }
        auVar16 = FUN_06550144(uVar8,0);
        auVar16 = FUN_0654d7a0(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
        *param_3 = auVar16;
        thunk_FUN_02f411dc(*param_3 + 8,0);
        return param_2;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) goto LAB_06567868;
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
      uVar11 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      puVar1 = PTR_DAT_06d3b2f0;
      uVar14 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3b2f0);
      UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController__get_trackingState
                (uVar14,uVar11,0);
      puVar2 = PTR_DAT_06d38e20;
      FUN_04c74618(lVar5,uVar10,uVar14,*(undefined8 *)PTR_DAT_06d38e20);
      FUN_04c74618(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)puVar2);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      uVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController__get_trackingState
                (uVar11,uVar10,0);
      FUN_04c74618(lVar5,uVar14,uVar11,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)*param_3;
      uVar14 = *(undefined8 *)(*param_3 + 8);
      lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,7);
      if (lVar5 == 0) goto LAB_06567868;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)Language_Lua_Assignment_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x28),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)
            System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x30));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x38) = uVar8;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x38),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x50) =
           *(undefined8 *)System_Linq_Expressions_AssignBinaryExpression_TypeInfo;
      thunk_FUN_02f411dc();
      uVar8 = FUN_0546583c(lVar5,0);
      if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
      }
      auVar16 = FUN_06550144(uVar8,0);
      auVar16 = FUN_0654d7a0(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
      *param_3 = auVar16;
    }
    else {
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar9 = *(long *)puVar3;
      }
      uVar7 = thunk_FUN_05464b70(uVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68),0);
      if ((uVar7 & 1) == 0) {
LAB_06567100:
        if (param_2 == (long *)0x0) goto LAB_06567868;
      }
      else {
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar9 = *(long *)puVar3;
        }
        puVar4 = PixelCrushers_DialogueSystem_SetEnabledOnDialogueEvent_SetEnabledAction___TypeInfo;
        uVar7 = FUN_04c74820(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)
                              PixelCrushers_DialogueSystem_SetEnabledOnDialogueEvent_SetEnabledAction___TypeInfo
                            );
        if ((uVar7 & 1) == 0) {
LAB_06567060:
          uVar11 = *(undefined8 *)*param_3;
          uVar14 = *(undefined8 *)(*param_3 + 8);
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar9 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68);
          uVar12 = *(undefined8 *)System_AsyncCallback_TypeInfo;
          uVar15 = *(undefined8 *)System_Xml_Schema_Asttree_TypeInfo;
LAB_065670a0:
          uVar10 = FUN_05465414(uVar12,uVar10,uVar15,0);
          if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
          }
          auVar16 = FUN_06550144(uVar10,0);
          auVar16 = FUN_0654d7a0(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
          *param_3 = auVar16;
          thunk_FUN_02f411dc(*param_3 + 8,0);
          goto LAB_06567100;
        }
        lVar9 = *param_1;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_06567c00(lVar9);
        if ((uVar7 & 1) == 0) goto LAB_06567060;
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = FUN_04c745ac(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_06567868;
        uVar10 = FUN_0654e594(lVar9,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar1);
        }
        uVar7 = FUN_0652ff6c(uVar10,&local_70,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = *(undefined8 *)*param_3;
          uVar14 = *(undefined8 *)(*param_3 + 8);
          uVar12 = *(undefined8 *)Language_Lua_Assignment_TypeInfo;
          uVar15 = *(undefined8 *)
                    System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo;
          goto LAB_065670a0;
        }
        if (param_2 == (long *)0x0) goto LAB_06567868;
        uVar7 = (**(code **)(*param_2 + 0x298))(param_2,local_70,*(undefined8 *)(*param_2 + 0x2a0));
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar6 = *(long *)puVar3;
          }
          uVar7 = FUN_04c74820(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                               *(undefined8 *)puVar4);
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_02f12b58(lVar6);
            lVar6 = *(long *)puVar3;
          }
          if ((uVar7 & 1) == 0) {
            uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
            uVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3b2f0);
            UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController__get_trackingState
                      (uVar8,uVar10,0);
            FUN_04c74618(lVar5,uVar11,uVar8,*(undefined8 *)PTR_DAT_06d38e20);
            uVar8 = *(undefined8 *)*param_3;
            uVar11 = *(undefined8 *)(*param_3 + 8);
            lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,8);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) =
                     *(undefined8 *)PixelCrushers_DialogueSystem_AssetLoadedDelegate_TypeInfo;
                thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x20));
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar10;
                  thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x28),uVar10);
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x30) =
                         *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo;
                    thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x30));
                    if (3 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x38) =
                           *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x38));
                      if (4 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x40) =
                             *(undefined8 *)Oculus_Platform_Models_AssetDetails_TypeInfo;
                        thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x40));
                        if (5 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x48) = uVar10;
                          thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x48),uVar10);
                          if (6 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x50) =
                                 *(undefined8 *)
                                  System_Security_Cryptography_AsymmetricSignatureFormatter_TypeInfo
                            ;
                            thunk_FUN_02f411dc();
                            param_1 = (long *)*param_1;
                            if (param_1 == (long *)0x0) {
                              uVar14 = 0;
                            }
                            else {
                              uVar14 = (**(code **)(*param_1 + 0x168))
                                                 (param_1,*(undefined8 *)(*param_1 + 0x170));
                            }
                            if (7 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x58) = uVar14;
                              thunk_FUN_02f411dc();
LAB_06567804:
                              uVar14 = FUN_0546583c(lVar5,0);
                              if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
                                thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
                              }
                              auVar16 = FUN_06550144(uVar14,0);
                              auVar16 = FUN_0654d7a0(uVar8,uVar11,auVar16._0_8_,auVar16._8_8_,0);
                              *param_3 = auVar16;
                              thunk_FUN_02f411dc(*param_3 + 8,0);
                              return local_70;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_0656786c;
            }
          }
          else {
            uVar8 = FUN_04c745ac(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),
                                 *(undefined8 *)puVar2);
            lVar5 = FUN_04c745ac(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50),
                                 *(undefined8 *)puVar2);
            if (lVar5 != 0) {
              uVar11 = FUN_0654e594(lVar5,0);
              lVar5 = FUN_0655fad4(uVar11,0);
              *param_1 = lVar5;
              thunk_FUN_02f411dc(param_1,lVar5);
              if ((*param_1 != 0) && (lVar5 = FUN_0654f358(*param_1,0), lVar5 != 0)) {
                FUN_04c74618(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38),uVar8,
                             *(undefined8 *)PTR_DAT_06d38e20);
                uVar8 = *(undefined8 *)*param_3;
                uVar11 = *(undefined8 *)(*param_3 + 8);
                lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,7);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x20) =
                         *(undefined8 *)PixelCrushers_DialogueSystem_AssetLoadedDelegate_TypeInfo;
                    thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x20));
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x28) = uVar10;
                      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x28),uVar10);
                      if (2 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x30) =
                             *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo;
                        thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x30));
                        if (3 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x38) =
                               *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                          thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x38));
                          if (4 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x40) =
                                 *(undefined8 *)Oculus_Platform_Models_AssetDetails_TypeInfo;
                            thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x40));
                            if (5 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x48) = uVar10;
                              thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x48),uVar10);
                              if (6 < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_06d06580;
                                thunk_FUN_02f411dc();
                                goto LAB_06567804;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_0656786c;
                }
              }
            }
          }
          goto LAB_06567868;
        }
        uVar11 = *(undefined8 *)*param_3;
        uVar14 = *(undefined8 *)(*param_3 + 8);
        lVar9 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,7);
        if (lVar9 == 0) goto LAB_06567868;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0656786c;
        *(undefined8 *)(lVar9 + 0x20) =
             *(undefined8 *)PixelCrushers_DialogueSystem_AssetLoadedDelegate_TypeInfo;
        thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x20));
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_0656786c;
        *(undefined8 *)(lVar9 + 0x28) = uVar10;
        thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x28),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0656786c;
        *(undefined8 *)(lVar9 + 0x30) =
             *(undefined8 *)System_ComponentModel_AsyncCompletedEventArgs_TypeInfo;
        thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x30));
        uVar10 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
        if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_0656786c;
        *(undefined8 *)(lVar9 + 0x38) = uVar10;
        thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x38),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_0656786c;
        *(undefined8 *)(lVar9 + 0x40) =
             *(undefined8 *)System_ComponentModel_AsyncCompletedEventHandler_TypeInfo;
        thunk_FUN_02f411dc();
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar13 = *(long *)puVar3;
        }
        if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_0656786c;
        *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x58);
        thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x48));
        if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_0656786c;
        *(undefined8 *)(lVar9 + 0x50) =
             *(undefined8 *)System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo;
        thunk_FUN_02f411dc();
        uVar10 = FUN_0546583c(lVar9,0);
        if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
        }
        auVar16 = FUN_06550144(uVar10,0);
        auVar16 = FUN_0654d7a0(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
        *param_3 = auVar16;
        thunk_FUN_02f411dc(*param_3 + 8,0);
      }
      uVar7 = (**(code **)(*param_2 + 0x298))(param_2,local_68,*(undefined8 *)(*param_2 + 0x2a0));
      if ((uVar7 & 1) != 0) {
        return local_68;
      }
      lVar9 = *param_1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_06567c00(lVar9);
      if ((uVar7 & 1) == 0) {
        uVar8 = *(undefined8 *)Mono_Net_Security_AsyncHandshakeRequest_TypeInfo;
        uVar11 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar14 = *(undefined8 *)PixelCrushers_DialogueSystem_AssetBundleManager_TypeInfo;
        if (local_68 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170));
        }
        goto LAB_06566f9c;
      }
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar9 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_06d38e20;
      FUN_04c74618(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)PTR_DAT_06d38e20);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      uVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3b2f0);
      UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController__get_trackingState
                (uVar11,uVar10,0);
      FUN_04c74618(lVar5,uVar14,uVar11,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)*param_3;
      uVar14 = *(undefined8 *)(*param_3 + 8);
      lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,0xb);
      if (lVar5 == 0) {
LAB_06567868:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0656786c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_06d37dc0;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x28),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x30));
      uVar10 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x38) = uVar10;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x38),uVar10);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)System_Security_Cryptography_AsymmetricSignatureDeformatter_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x50) =
           *(undefined8 *)Oculus_Platform_Models_AssetDetailsList_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x50));
      if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x58) = uVar8;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x58),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x60) =
           *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x60));
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x68));
      if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_0656786c;
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)PTR_DAT_06d06230;
      thunk_FUN_02f411dc();
      uVar8 = FUN_0546583c(lVar5,0);
      if (*(int *)(*(long *)PTR_DAT_06d38e18 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d38e18);
      }
      auVar16 = FUN_06550144(uVar8,0);
      auVar16 = FUN_0654d7a0(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
      *param_3 = auVar16;
    }
    thunk_FUN_02f411dc(*param_3 + 8,0);
    param_2 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
  }
  return param_2;
}


