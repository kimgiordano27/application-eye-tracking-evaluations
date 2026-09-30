/*
FUNCTION_NAME: FUN_0537bbfc
ENTRY_POINT: 0537bbfc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_6;telemetry_or_network_hits_9
*/


void FUN_0537bbfc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  puVar2 = PTR_DAT_0664b498;
  if ((DAT_06a5306f & 1) == 0) {
    FUN_02d4dc40(PlayFab_ClientModels_GetPlayerStatisticsResult_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPlayerTagsRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPlayerTagsResult_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b460);
    FUN_02d4dc40(PlayFab_ClientModels_GetPlayerTradesRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b428);
    FUN_02d4dc40(PTR_DAT_0664b490);
    FUN_02d4dc40(PTR_DAT_0664b498);
    FUN_02d4dc40(PlayFab_ClientModels_GetPlayerTradesResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPublisherDataRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPublisherDataResult_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPurchaseRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06646708);
    DAT_06a5306f = 1;
  }
  puVar3 = PTR_DAT_0664b490;
  puVar1 = PTR_DAT_06646708;
  puStack_58 = (undefined8 *)0x0;
  local_60 = 0;
  local_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  plVar4 = (long *)FUN_032f3d48(1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_0664b460;
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0664b460) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0537bd64;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_0664b460,0);
LAB_0537bd64:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar1 = PTR_DAT_0664b428;
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_0664b428;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar7 = *(long *)puVar1;
      }
      lVar9 = **(long **)(lVar7 + 0xb8);
      if (lVar9 != 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
          if (lVar9 == 0) goto System_Data_ZeroOpNode__IsConstant;
        }
        FUN_036a68ac(&local_78,lVar9,
                     *(undefined8 *)PlayFab_ClientModels_GetPlayerTradesRequest_TypeInfo);
        puVar3 = PlayFab_ClientModels_GetPlayerTagsRequest_TypeInfo;
        puStack_58 = puStack_70;
        local_60 = local_78;
        local_50 = local_68;
        local_78 = 0;
        puStack_70 = &local_60;
        while (uVar8 = FUN_049c6928(&local_60,*(undefined8 *)puVar3), uVar6 = local_50,
              (uVar8 & 1) != 0) {
          lVar9 = *plVar4;
          lVar7 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                goto LAB_0537be54;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d87540(plVar4,lVar7,7);
LAB_0537be54:
          (*(code *)*puVar5)(plVar4,uVar6,puVar5[1]);
        }
        FUN_049c6924(&local_60,
                     *(undefined8 *)PlayFab_ClientModels_GetPlayerStatisticsResult_TypeInfo);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar1;
        }
        **(undefined8 **)(lVar7 + 0xb8) = 0;
        thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
      }
      lVar9 = *plVar4;
      lVar7 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0537bef8;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d87540(plVar4,lVar7,2);
LAB_0537bef8:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    puVar2 = PlayFab_ClientModels_GetPlayerTradesResponse_TypeInfo;
    lVar7 = *(long *)(param_1 + 0x28);
    puVar5 = (undefined8 *)PlayFab_ClientModels_GetPublisherDataRequest_TypeInfo;
    while (PlayFab_ClientModels_GetPublisherDataRequest_TypeInfo = (undefined *)puVar5, lVar7 != 0)
    {
      if (*(int *)(lVar7 + 0x20) < 1) {
        lVar7 = *(long *)(param_1 + 0x30);
        while (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x20) < 1) {
            return;
          }
          lVar7 = FUN_03a8bc6c(lVar7,*puVar5);
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
          }
          lVar7 = *(long *)(param_1 + 0x30);
        }
        break;
      }
      uVar6 = FUN_03a8bc6c(lVar7,*(undefined8 *)puVar2);
      FUN_05ee3a84(param_1,uVar6,0);
      puVar5 = (undefined8 *)PlayFab_ClientModels_GetPublisherDataRequest_TypeInfo;
      lVar7 = *(long *)(param_1 + 0x28);
    }
  }
System_Data_ZeroOpNode__IsConstant:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


