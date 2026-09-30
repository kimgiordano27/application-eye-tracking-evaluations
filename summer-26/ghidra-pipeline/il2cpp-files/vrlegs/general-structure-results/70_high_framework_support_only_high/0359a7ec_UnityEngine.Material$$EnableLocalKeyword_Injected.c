/*
FUNCTION_NAME: UnityEngine.Material$$EnableLocalKeyword_Injected
ENTRY_POINT: 0359a7ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Material__EnableLocalKeyword_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e0b8 & 1) == 0) {
    FUN_01ab69ac(_Common_Gameplay_Scripts_GameFlow_RushDebugStart_<>c__DisplayClass25_0_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Scripts_GameFlow_RushSceneLoader_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ccbbe8);
    FUN_01ab69ac(HurricaneVR_Framework_Core_Utils_SFXPlayer_PlayEvent_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd6f90);
    FUN_01ab69ac(SQLite_SQLite3_Result_TypeInfo);
    FUN_01ab69ac(SQLite_SQLiteAsyncConnection_<>c__DisplayClass50_0_TypeInfo);
    FUN_01ab69ac(SQLite_SQLiteAsyncConnection_<>c__DisplayClass56_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc34e8);
    FUN_01ab69ac(SQLite_SQLiteCommand_Binding_TypeInfo);
    FUN_01ab69ac(SQLite_SQLiteConnection_<>c_TypeInfo);
    FUN_01ab69ac(SQLite_SQLiteConnection_<>c__DisplayClass127_0_TypeInfo);
    FUN_01ab69ac(SQLite_SQLiteConnectionPool_Entry_TypeInfo);
    FUN_01ab69ac(SQLite_SQLiteConnectionWithLock_FakeLockWrapper_TypeInfo);
    FUN_01ab69ac(SQLite_SQLiteConnectionWithLock_LockWrapper_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc3560);
    FUN_01ab69ac(ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_ElemHandler_TypeInfo);
    FUN_01ab69ac(ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_Handlers_TypeInfo);
    FUN_01ab69ac(ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_LinearGradientExData_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc3568);
    FUN_01ab69ac(ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_RadialGradientExData_TypeInfo);
    FUN_01ab69ac(Crosstales_BWF_Manager_PunctuationManager_<containsAsync>d__26_TypeInfo);
    FUN_01ab69ac(ToolBuddy_ThirdParty_VectorGraphics_SVGStyleResolver_<>c_TypeInfo);
    FUN_01ab69ac(OVRPlugin_HandStatus_TypeInfo);
    FUN_01ab69ac(ToolBuddy_ThirdParty_VectorGraphics_SVGStyleResolver_<SortedClasses>d__12_TypeInfo)
    ;
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    DAT_0412e0b8 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_036cee6c(uVar9,0,0);
  if (((uVar7 & 1) != 0) &&
     (uVar7 = FUN_025be440(*(undefined8 *)(param_1 + 0x40),0), (uVar7 & 1) != 0)) {
    FUN_0359ae40(param_1);
  }
  plVar11 = (long *)(param_1 + 0x38);
  if (*plVar11 == 0) {
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_Handlers_TypeInfo);
    FUN_0219a4f0(lVar8,*(undefined8 *)SQLite_SQLiteConnectionPool_Entry_TypeInfo);
    *plVar11 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar8);
  }
  else {
    FUN_0219c0c4(*plVar11,*(undefined8 *)SQLite_SQLiteAsyncConnection_<>c__DisplayClass56_0_TypeInfo
                );
  }
  plVar10 = (long *)(param_1 + 200);
  if (*plVar10 == 0) {
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_RadialGradientExData_TypeInfo
                              );
    FUN_0219a4f0(lVar8,*(undefined8 *)SQLite_SQLiteConnectionWithLock_FakeLockWrapper_TypeInfo);
    *plVar10 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar8);
  }
  else {
    FUN_0219c0c4(*plVar10,*(undefined8 *)SQLite_SQLite3_Result_TypeInfo);
  }
  puVar5 = ToolBuddy_ThirdParty_VectorGraphics_SVGStyleResolver_<SortedClasses>d__12_TypeInfo;
  puVar4 = SQLite_SQLiteConnection_<>c__DisplayClass127_0_TypeInfo;
  puVar3 = SQLite_SQLiteCommand_Binding_TypeInfo;
  puVar2 = HurricaneVR_Framework_Core_Utils_SFXPlayer_PlayEvent_TypeInfo;
  puVar1 = OVRPlugin_HandStatus_TypeInfo;
  lVar8 = *(long *)(param_1 + 0xc0);
  if (lVar8 != 0) {
    iVar12 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar12) {
        plVar11 = (long *)(param_1 + 0x30);
        if (*plVar11 == 0) {
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc3568);
          FUN_0219a4f0(lVar8,*(undefined8 *)PTR_DAT_03cc3560);
          *plVar11 = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar8);
        }
        else {
          FUN_0219c0c4(*plVar11,*(undefined8 *)PTR_DAT_03cd6f90);
        }
        puVar2 = ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_ElemHandler_TypeInfo;
        plVar13 = (long *)(param_1 + 0xb8);
        if (*plVar13 == 0) {
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                      ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_LinearGradientExData_TypeInfo
                                    );
          FUN_0219a4f0(lVar8,*(undefined8 *)SQLite_SQLiteConnectionWithLock_LockWrapper_TypeInfo);
          *plVar13 = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar8);
        }
        else {
          FUN_0219c0c4(*plVar13,*(undefined8 *)
                                 SQLite_SQLiteAsyncConnection_<>c__DisplayClass50_0_TypeInfo);
        }
        lVar8 = *(long *)(param_1 + 0xb0);
        if (lVar8 != 0) {
          iVar12 = 0;
          goto LAB_0359abe0;
        }
        break;
      }
      FUN_02215a88(lVar8,iVar12,&stack0x00000008,*(undefined8 *)puVar5);
      lVar8 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
      if (lVar8 == 0) break;
      iVar6 = FUN_03776e5c(lVar8,0);
      if (*plVar11 == 0) break;
      iStack0000000000000008 = iVar6;
      uVar7 = FUN_0219c130(*plVar11,&stack0x00000008,*(undefined8 *)puVar3);
      if ((uVar7 & 1) == 0) {
        if (*plVar11 == 0) break;
        in_stack_00000000._4_4_ = iVar12;
        iStack0000000000000008 = iVar6;
        FUN_0219b9a4(*plVar11,&stack0x00000008,(long)&stack0x00000000 + 4,*(undefined8 *)puVar2);
      }
      if (*plVar10 == 0) break;
      iStack0000000000000008 = iVar6;
      uVar7 = FUN_0219c130(*plVar10,&stack0x00000008,*(undefined8 *)puVar4);
      if ((uVar7 & 1) == 0) {
        if (*plVar10 == 0) break;
        iStack0000000000000008 = iVar6;
        FUN_0219b9a4(*plVar10,&stack0x00000008,lVar8,
                     *(undefined8 *)
                      _Common_Gameplay_Scripts_GameFlow_RushDebugStart_<>c__DisplayClass25_0_TypeInfo
                    );
      }
      lVar8 = *(long *)(param_1 + 0xc0);
      iVar12 = iVar12 + 1;
    } while (lVar8 != 0);
  }
  goto LAB_0359ad4c;
LAB_0359abe0:
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar12) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      return;
    }
    FUN_02215a88(lVar8,iVar12,&stack0x00000008,*(undefined8 *)puVar1);
    lVar8 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
    if (lVar8 != 0) {
      if (*plVar10 == 0) break;
      iVar6 = *(int *)(lVar8 + 0x28);
      iStack0000000000000008 = iVar6;
      uVar7 = FUN_0219c130(*plVar10,&stack0x00000008,*(undefined8 *)puVar4);
      if ((uVar7 & 1) != 0) {
        if (*plVar10 == 0) break;
        in_stack_00000000._4_4_ = iVar6;
        FUN_0219b634(*plVar10,(long)&stack0x00000000 + 4,&stack0x00000008,*(undefined8 *)puVar2);
        *(ulong *)(lVar8 + 0x20) = CONCAT44(uStack000000000000000c,iStack0000000000000008);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        *(long *)(lVar8 + 0x18) = param_1;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar8 + 0x18),param_1);
        if (*(long *)(param_1 + 0xb0) == 0) break;
        FUN_02215a88(*(long *)(param_1 + 0xb0),iVar12,&stack0x00000008,*(undefined8 *)puVar1);
        if ((CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) || (*plVar11 == 0))
        break;
        iVar6 = *(int *)(CONCAT44(uStack000000000000000c,iStack0000000000000008) + 0x38);
        iStack0000000000000008 = iVar6;
        uVar7 = FUN_0219c130(*plVar11,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc34e8);
        if ((uVar7 & 1) == 0) {
          if (*plVar11 == 0) break;
          in_stack_00000000._4_4_ = iVar12;
          iStack0000000000000008 = iVar6;
          FUN_0219b9a4(*plVar11,&stack0x00000008,(long)&stack0x00000000 + 4,
                       *(undefined8 *)PTR_DAT_03ccbbe8);
        }
        if (*(long *)(param_1 + 0xb0) == 0) break;
        FUN_02215a88(*(long *)(param_1 + 0xb0),iVar12,&stack0x00000008,*(undefined8 *)puVar1);
        if (CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) break;
        iVar6 = *(int *)(CONCAT44(uStack000000000000000c,iStack0000000000000008) + 0x14);
        if (iVar6 != 0xfffe) {
          if (*plVar13 == 0) break;
          iStack0000000000000008 = iVar6;
          uVar7 = FUN_0219c130(*plVar13,&stack0x00000008,
                               *(undefined8 *)SQLite_SQLiteConnection_<>c_TypeInfo);
          if ((uVar7 & 1) == 0) {
            if (*plVar13 == 0) break;
            iStack0000000000000008 = iVar6;
            FUN_0219b9a4(*plVar13,&stack0x00000008,lVar8,
                         *(undefined8 *)
                          _Common_Gameplay_Scripts_GameFlow_RushSceneLoader_<>c_TypeInfo);
          }
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0xb0);
    iVar12 = iVar12 + 1;
  } while (lVar8 != 0);
LAB_0359ad4c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


