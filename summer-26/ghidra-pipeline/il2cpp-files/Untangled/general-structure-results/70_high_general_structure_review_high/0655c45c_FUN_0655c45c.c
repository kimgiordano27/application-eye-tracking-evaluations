/*
FUNCTION_NAME: FUN_0655c45c
ENTRY_POINT: 0655c45c
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


byte FUN_0655c45c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_06d3b2f0;
  if ((DAT_071ce6c4 & 1) == 0) {
    FUN_02f07e70(PixelCrushers_DialogueSystem_SetEnabledOnDialogueEvent_SetEnabledAction___TypeInfo)
    ;
    FUN_02f07e70(PlayFab_EconomyModels_AddInventoryItemsResponse_TypeInfo);
    FUN_02f07e70(
                PixelCrushers_DialogueSystem_SetQuestStateOnDialogueEvent_SetQuestStateAction___TypeInfo
                );
    FUN_02f07e70(PlayFab_GroupsModels_AddMembersRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_AddOrUpdateContactEmailRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_AddOrUpdateContactEmailResult_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_AddOvfInstruction_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_AddReferenceImageJobState_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson___TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_InputControlScheme_DeviceRequirement___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03010);
    FUN_02f07e70(PTR_DAT_06d3b2f0);
    DAT_071ce6c4 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if ((DAT_071ce6c5 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071ce6c5 = 1;
  }
  if (param_2 == 0) {
LAB_0655c758:
    bVar5 = 0;
    goto switchD_0655c5ac_caseD_6;
  }
  iVar6 = FUN_0654e2e0(param_1);
  iVar7 = FUN_0654e2e0(param_2);
  if (iVar6 != iVar7) goto LAB_0655c758;
  uVar8 = FUN_0654e2e0(param_1);
  bVar5 = 1;
  switch(uVar8) {
  case 0:
    lVar9 = FUN_0654d184(param_1);
    lVar10 = FUN_0654d184(param_2);
    puVar1 = UnityEngine_InputSystem_InputControlScheme_DeviceRequirement___TypeInfo;
    if ((lVar9 == 0) || (lVar10 == 0)) goto LAB_0655c854;
    if (*(int *)(lVar9 + 0x18) != *(int *)(lVar10 + 0x18)) goto LAB_0655c758;
    if (0 < *(int *)(lVar9 + 0x18)) {
      iVar6 = 0;
      do {
        lVar11 = FUN_03fd09cc(lVar9,iVar6,*(undefined8 *)puVar1);
        uVar13 = FUN_03fd09cc(lVar10,iVar6,*(undefined8 *)puVar1);
        if (lVar11 == 0) goto LAB_0655c854;
        bVar5 = FUN_0655c45c(lVar11,uVar13);
      } while (((bVar5 & 1) != 0) && (iVar6 = iVar6 + 1, iVar6 < *(int *)(lVar9 + 0x18)));
      break;
    }
    goto LAB_0655c828;
  case 1:
    lVar9 = FUN_0654f358(param_1);
    lVar10 = FUN_0654f358(param_2);
    puVar1 = PlayFab_EconomyModels_AddInventoryItemsResponse_TypeInfo;
    if ((lVar9 == 0) ||
       (iVar6 = FUN_04c742fc(lVar9,*(undefined8 *)
                                    PlayFab_EconomyModels_AddInventoryItemsResponse_TypeInfo),
       lVar10 == 0)) {
LAB_0655c854:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar7 = FUN_04c742fc(lVar10,*(undefined8 *)puVar1);
    if (iVar6 == iVar7) {
      lVar11 = FUN_04c7430c(lVar9,*(undefined8 *)PlayFab_GroupsModels_AddMembersRequest_TypeInfo);
      if (lVar11 != 0) {
        FUN_03e34280(&local_68,lVar11,
                     *(undefined8 *)UnityEngine_XR_ARSubsystems_AddReferenceImageJobState_TypeInfo);
        puVar3 = PlayFab_ClientModels_AddOrUpdateContactEmailResult_TypeInfo;
        puVar2 = 
        PixelCrushers_DialogueSystem_SetQuestStateOnDialogueEvent_SetQuestStateAction___TypeInfo;
        puVar1 = PixelCrushers_DialogueSystem_SetEnabledOnDialogueEvent_SetEnabledAction___TypeInfo;
        do {
          uVar12 = FUN_04e99840(&local_68,*(undefined8 *)puVar3);
          uVar13 = local_58;
          if ((uVar12 & 1) == 0) {
            iVar6 = 0x17;
            goto LAB_0655c834;
          }
          uVar12 = FUN_04c74820(lVar10,local_58,*(undefined8 *)puVar1);
          if ((uVar12 & 1) == 0) break;
          lVar11 = FUN_04c745ac(lVar9,uVar13,*(undefined8 *)puVar2);
          uVar13 = FUN_04c745ac(lVar10,uVar13,*(undefined8 *)puVar2);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0(uVar13,uVar13);
          }
          uVar12 = FUN_0655c45c(lVar11);
        } while ((uVar12 & 1) != 0);
        iVar6 = 0x16;
LAB_0655c834:
        FUN_04e9983c(&local_68,
                     *(undefined8 *)PlayFab_ClientModels_AddOrUpdateContactEmailRequest_TypeInfo);
        bVar5 = iVar6 != 0x16;
        break;
      }
      goto LAB_0655c854;
    }
    goto LAB_0655c758;
  case 2:
    dVar15 = (double)FUN_06554b84(param_1);
    dVar16 = (double)FUN_06554b84(param_2);
    if (dVar15 != dVar16) {
      dVar15 = (double)FUN_06554b84(param_1);
      dVar16 = (double)FUN_06554b84(param_2);
      if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      bVar5 = ABS(dVar15 - dVar16) < 4.94065645841247e-324;
      break;
    }
LAB_0655c828:
    bVar5 = 1;
    break;
  case 3:
    lVar9 = FUN_065512f0(param_1);
    lVar10 = FUN_065512f0(param_2);
    bVar5 = lVar9 == lVar10;
    break;
  case 4:
    bVar5 = FUN_06554adc(param_1);
    bVar4 = FUN_06554adc(param_2);
    bVar5 = bVar5 ^ bVar4 ^ 1;
    break;
  case 5:
    uVar13 = FUN_0654e594(param_1);
    uVar14 = FUN_0654e594(param_2);
    bVar5 = thunk_FUN_05464b70(uVar13,uVar14,0);
    break;
  case 6:
    break;
  default:
    thunk_FUN_02f239f0(PTR_DAT_06d021d0);
    uVar13 = thunk_FUN_02ef1808();
    uVar14 = thunk_FUN_02f239f0(UnityEngine_XR_ARSubsystems_AddReferenceImageJobStatus_TypeInfo);
    FUN_05639edc(uVar13,uVar14,0);
    uVar14 = thunk_FUN_02f239f0(PlayFab_ClientModels_AddSharedGroupMembersRequest_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar13,uVar14);
  }
switchD_0655c5ac_caseD_6:
  return bVar5 & 1;
}


