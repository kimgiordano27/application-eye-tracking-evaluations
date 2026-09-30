/*
FUNCTION_NAME: FUN_0548a174
ENTRY_POINT: 0548a174
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0548a174(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if ((DAT_06a53a33 & 1) == 0) {
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(PlayFab_EconomyModels_DeleteItemRequest_var);
    FUN_02d4dc40(Photon_Realtime_WebRpcCallbacksContainer_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0664d150);
    FUN_02d4dc40(PlayFab_EconomyModels_SubtractInventoryItemsRequest_TypeInfo);
    DAT_06a53a33 = 1;
  }
  puVar2 = PTR_DAT_0664d150;
  if (param_2 == (long *)0x0) {
    return;
  }
  *(long *)(param_1 + 0x20) = (long)param_2;
  thunk_FUN_02dc1ef0((long *)(param_1 + 0x20),param_2);
  *(long *)(param_1 + 0x28) = param_3;
  thunk_FUN_02dc1ef0((long *)(param_1 + 0x28),param_3);
  lVar6 = (**(code **)(*param_2 + 0x4c8))
                    (param_2,*(undefined8 *)puVar2,*(undefined8 *)(*param_2 + 0x4d0));
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = lVar6;
  thunk_FUN_02dc1ef0(plVar9,lVar6);
  puVar10 = (undefined8 *)(param_1 + 0x18);
  *puVar10 = **(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
  thunk_FUN_02dc1ef0(puVar10);
  if ((*plVar9 == 0) || (*(int *)(*plVar9 + 0x10) == 0)) {
    *plVar9 = *(long *)PlayFab_EconomyModels_SubtractInventoryItemsRequest_TypeInfo;
    thunk_FUN_02dc1ef0(plVar9);
  }
  puVar2 = UnityEngine_InputSystem_Controls_DpadControl_var;
  if (param_3 != 0) {
    FUN_05440660(param_3,*puVar10,0);
    plVar7 = (long *)(**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    puVar5 = Photon_Realtime_WebRpcCallbacksContainer_TypeInfo;
    puVar4 = UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo;
    puVar3 = PlayFab_EconomyModels_DeleteItemRequest_var;
    for (; plVar7 != (long *)0x0;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210))) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
          (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) &&
         (uVar8 = FUN_05490050(plVar7,*(undefined8 *)puVar5,*(undefined8 *)puVar4,0),
         (uVar8 & 1) != 0)) {
        FUN_0548a3d8(param_1,plVar7);
      }
    }
    lVar6 = *plVar9;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar6 = FUN_0565ac08(lVar6,0);
    *plVar9 = lVar6;
    thunk_FUN_02dc1ef0(plVar9,lVar6);
    if (*(long *)(param_3 + 0x28) != 0) {
      lVar6 = FUN_05452348(*(long *)(param_3 + 0x28),*plVar9,0);
      if (lVar6 != 0) {
        return;
      }
      FUN_0543c448(param_3,*plVar9,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


