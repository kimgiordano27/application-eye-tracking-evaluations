/*
FUNCTION_NAME: PlayFab.MultiplayerModels.GetTitleEnabledForMultiplayerServersStatusRequest$$.ctor
ENTRY_POINT: 051eec80
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


undefined8
PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusRequest___ctor(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long *unaff_x23;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar3 = FUN_051e8a04();
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((int)uVar1 < 1) {
      iVar9 = 0;
    }
    else {
      lVar7 = *(long *)(lVar3 + 0x10);
      uVar8 = 0;
      iVar9 = 0;
      do {
        if (lVar7 == 0)
        goto PlayFab_MultiplayerModels_ListTitleMultiplayerServersQuotaChangesResponse___ctor;
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_051eee14;
        iVar10 = 0;
        uVar11 = 1;
        do {
          if ((*(uint *)(lVar7 + (long)(int)uVar8 * 4 + 0x20) & uVar11) != 0) {
            uVar8 = uVar1;
            iVar2 = iVar9 + iVar10;
            break;
          }
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 << 1;
          iVar2 = iVar9 + 0x20;
        } while (iVar10 != 0x20);
        iVar9 = iVar2;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar4 = FUN_051ea8f4(lVar3,iVar9);
    FUN_051ec5b0();
    lVar7 = FUN_051e89ac(2);
    if ((lVar7 != 0) && (plVar5 = (long *)FUN_051e85ac(lVar7,uVar4), plVar5 != (long *)0x0)) {
      if ((int)plVar5[3] == 1) {
        lVar7 = plVar5[2];
        if (lVar7 == 0)
        goto PlayFab_MultiplayerModels_ListTitleMultiplayerServersQuotaChangesResponse___ctor;
        if (*(int *)(lVar7 + 0x18) == 0) {
LAB_051eee14:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        if (*(int *)(lVar7 + 0x20) == 1) {
PlayFab_MultiplayerModels_ListContainerImageTagsRequest___ctor:
          uVar4 = FUN_051edb74();
          return uVar4;
        }
      }
      if (0 < iVar9) {
        iVar10 = 0;
        do {
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (plVar5 == (long *)0x0)
          goto PlayFab_MultiplayerModels_ListTitleMultiplayerServersQuotaChangesResponse___ctor;
          uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140));
          if ((uVar6 & 1) != 0) goto PlayFab_MultiplayerModels_ListContainerImageTagsRequest___ctor;
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_051e96a8(plVar5,plVar5);
          plVar5 = (long *)FUN_051eba88();
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar9);
      }
      return 0;
    }
  }
PlayFab_MultiplayerModels_ListTitleMultiplayerServersQuotaChangesResponse___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


