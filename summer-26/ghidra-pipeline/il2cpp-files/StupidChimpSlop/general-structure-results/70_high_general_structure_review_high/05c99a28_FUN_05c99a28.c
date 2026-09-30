/*
FUNCTION_NAME: FUN_05c99a28
ENTRY_POINT: 05c99a28
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c99d8c) */

void FUN_05c99a28(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long local_48;
  
  puVar1 = Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemAppleAppStoreInventoryItems__;
  if ((DAT_06a57baa & 1) == 0) {
    FUN_02d4dc40(Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetSteamResponse>__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyInstanceAPI_RedeemAppleAppStoreInventoryItems__);
    FUN_02d4dc40(Method_System_Linq_Enumerable_ElementAt<Column>__);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetStoreItemsResult>__);
    FUN_02d4dc40(Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTelemetryKeyResponse>__);
    FUN_02d4dc40(Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTimeResult>__);
    FUN_02d4dc40(Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTitleDataResult>__);
    FUN_02d4dc40(
                Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTitleEnabledForMultiplayerServersStatusResponse>__
                );
    DAT_06a57baa = 1;
  }
  lVar2 = *(long *)puVar1;
  local_48 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x78);
  if ((lVar2 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  plVar3 = (long *)FUN_03357408(param_2,*(undefined8 *)(lVar2 + 0x20),&local_48,lVar2,
                                *(undefined8 *)
                                 Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTitleEnabledForMultiplayerServersStatusResponse>__
                                ,0x139,*(undefined8 *)
                                        Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTelemetryKeyResponse>__
                               );
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  *(long *)(local_48 + 0x10) = param_3;
  thunk_FUN_02dc1ef0((long *)(local_48 + 0x10),param_3);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar6 = *(undefined8 *)(param_3 + 0xf8);
  *(undefined8 *)(local_48 + 0x18) = param_4;
  *(undefined8 *)(local_48 + 0x28) = uVar6;
  thunk_FUN_02dc1ef0((undefined8 *)(local_48 + 0x18),param_4);
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  *(undefined8 *)(local_48 + 0x20) = param_1;
  thunk_FUN_02dc1ef0((undefined8 *)(local_48 + 0x20),param_1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar2 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<Column>__) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_05c99be4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02d87540(plVar3,*(long *)Method_System_Linq_Enumerable_ElementAt<Column>__,0xb);
LAB_05c99be4:
  (*(code *)*puVar4)(plVar3,0,puVar4[1]);
  puVar1 = Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTitleDataResult>__;
  lVar2 = *(long *)Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTitleDataResult>__;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar9 = puVar4[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetSteamResponse>__)
    ;
    FUN_045ace5c(lVar9,uVar6,
                 *(undefined8 *)Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetTimeResult>__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar9;
    thunk_FUN_02dc1ef0(plVar5,lVar9);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar2 = *plVar3;
  lVar10 = *(long *)Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<GetStoreItemsResult>__;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_05c99cd8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar2 = FUN_02d87540(plVar3);
LAB_05c99cd8:
  lVar2 = thunk_FUN_02d6c7a8(*(undefined8 *)(lVar2 + 8),lVar10);
  (**(code **)(lVar2 + 8))(plVar3,lVar9,lVar2);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05c99d5c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d87540(plVar3,*(long *)PTR_DAT_066479a8,0);
LAB_05c99d5c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


