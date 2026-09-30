/*
FUNCTION_NAME: UnityEngine.Material$$DisableKeyword
ENTRY_POINT: 0359aa44
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Material__DisableKeyword(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long unaff_x25;
  undefined8 *puVar9;
  long unaff_x27;
  undefined8 *puVar10;
  long unaff_x28;
  undefined8 *puVar11;
  long unaff_x29;
  undefined8 *puVar12;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar1 = OVRPlugin_HandStatus_TypeInfo;
  puVar12 = *(undefined8 **)(unaff_x29 + 0x720);
  puVar10 = *(undefined8 **)(unaff_x27 + 0x6c8);
  puVar9 = *(undefined8 **)(unaff_x25 + 0x6d8);
  puVar11 = *(undefined8 **)(unaff_x28 + 0x6a8);
  iVar7 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar7) {
      plVar6 = (long *)(unaff_x19 + 0x30);
      if (*plVar6 == 0) {
        lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc3568);
        FUN_0219a4f0(lVar5,*(undefined8 *)PTR_DAT_03cc3560);
        *plVar6 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar5);
      }
      else {
        FUN_0219c0c4(*plVar6,*(undefined8 *)PTR_DAT_03cd6f90);
      }
      puVar2 = ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_ElemHandler_TypeInfo;
      plVar8 = (long *)(unaff_x19 + 0xb8);
      if (*plVar8 == 0) {
        lVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                    ToolBuddy_ThirdParty_VectorGraphics_SVGDocument_LinearGradientExData_TypeInfo
                                  );
        FUN_0219a4f0(lVar5,*(undefined8 *)SQLite_SQLiteConnectionWithLock_LockWrapper_TypeInfo);
        *plVar8 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar5);
      }
      else {
        FUN_0219c0c4(*plVar8,*(undefined8 *)
                              SQLite_SQLiteAsyncConnection_<>c__DisplayClass50_0_TypeInfo);
      }
      lVar5 = *(long *)(unaff_x19 + 0xb0);
      if (lVar5 != 0) {
        iVar7 = 0;
        goto LAB_0359abe0;
      }
      break;
    }
    FUN_02215a88(param_1,iVar7,&stack0x00000008,*puVar12);
    lVar5 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
    if (lVar5 == 0) break;
    iVar3 = FUN_03776e5c(lVar5,0);
    if (*unaff_x21 == 0) break;
    iStack0000000000000008 = iVar3;
    uVar4 = FUN_0219c130(*unaff_x21,&stack0x00000008,*puVar10);
    if ((uVar4 & 1) == 0) {
      if (*unaff_x21 == 0) break;
      in_stack_00000000._4_4_ = iVar7;
      iStack0000000000000008 = iVar3;
      FUN_0219b9a4(*unaff_x21,&stack0x00000008,(long)&stack0x00000000 + 4,*puVar11);
    }
    if (*unaff_x20 == 0) break;
    iStack0000000000000008 = iVar3;
    uVar4 = FUN_0219c130(*unaff_x20,&stack0x00000008,*puVar9);
    if ((uVar4 & 1) == 0) {
      if (*unaff_x20 == 0) break;
      iStack0000000000000008 = iVar3;
      FUN_0219b9a4(*unaff_x20,&stack0x00000008,lVar5,
                   *(undefined8 *)
                    _Common_Gameplay_Scripts_GameFlow_RushDebugStart_<>c__DisplayClass25_0_TypeInfo)
      ;
    }
    param_1 = *(long *)(unaff_x19 + 0xc0);
    iVar7 = iVar7 + 1;
  } while (param_1 != 0);
  goto LAB_0359ad4c;
LAB_0359abe0:
  do {
    if (*(int *)(lVar5 + 0x18) <= iVar7) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 0;
      return;
    }
    FUN_02215a88(lVar5,iVar7,&stack0x00000008,*(undefined8 *)puVar1);
    lVar5 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
    if (lVar5 != 0) {
      if (*unaff_x20 == 0) break;
      iVar3 = *(int *)(lVar5 + 0x28);
      iStack0000000000000008 = iVar3;
      uVar4 = FUN_0219c130(*unaff_x20,&stack0x00000008,*puVar9);
      if ((uVar4 & 1) != 0) {
        if (*unaff_x20 == 0) break;
        in_stack_00000000._4_4_ = iVar3;
        FUN_0219b634(*unaff_x20,(long)&stack0x00000000 + 4,&stack0x00000008,*(undefined8 *)puVar2);
        *(ulong *)(lVar5 + 0x20) = CONCAT44(uStack000000000000000c,iStack0000000000000008);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        *(long *)(lVar5 + 0x18) = unaff_x19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if (*(long *)(unaff_x19 + 0xb0) == 0) break;
        FUN_02215a88(*(long *)(unaff_x19 + 0xb0),iVar7,&stack0x00000008,*(undefined8 *)puVar1);
        if ((CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) || (*plVar6 == 0)) break;
        iVar3 = *(int *)(CONCAT44(uStack000000000000000c,iStack0000000000000008) + 0x38);
        iStack0000000000000008 = iVar3;
        uVar4 = FUN_0219c130(*plVar6,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc34e8);
        if ((uVar4 & 1) == 0) {
          if (*plVar6 == 0) break;
          in_stack_00000000._4_4_ = iVar7;
          iStack0000000000000008 = iVar3;
          FUN_0219b9a4(*plVar6,&stack0x00000008,(long)&stack0x00000000 + 4,
                       *(undefined8 *)PTR_DAT_03ccbbe8);
        }
        if (*(long *)(unaff_x19 + 0xb0) == 0) break;
        FUN_02215a88(*(long *)(unaff_x19 + 0xb0),iVar7,&stack0x00000008,*(undefined8 *)puVar1);
        if (CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) break;
        iVar3 = *(int *)(CONCAT44(uStack000000000000000c,iStack0000000000000008) + 0x14);
        if (iVar3 != 0xfffe) {
          if (*plVar8 == 0) break;
          iStack0000000000000008 = iVar3;
          uVar4 = FUN_0219c130(*plVar8,&stack0x00000008,
                               *(undefined8 *)SQLite_SQLiteConnection_<>c_TypeInfo);
          if ((uVar4 & 1) == 0) {
            if (*plVar8 == 0) break;
            iStack0000000000000008 = iVar3;
            FUN_0219b9a4(*plVar8,&stack0x00000008,lVar5,
                         *(undefined8 *)
                          _Common_Gameplay_Scripts_GameFlow_RushSceneLoader_<>c_TypeInfo);
          }
        }
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0xb0);
    iVar7 = iVar7 + 1;
  } while (lVar5 != 0);
LAB_0359ad4c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


