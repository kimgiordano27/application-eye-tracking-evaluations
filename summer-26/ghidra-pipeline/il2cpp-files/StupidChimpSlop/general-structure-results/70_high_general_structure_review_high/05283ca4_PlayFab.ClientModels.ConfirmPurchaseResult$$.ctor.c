/*
FUNCTION_NAME: PlayFab.ClientModels.ConfirmPurchaseResult$$.ctor
ENTRY_POINT: 05283ca4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_ClientModels_ConfirmPurchaseResult___ctor(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long *unaff_x23;
  
  uVar6 = **(undefined8 **)(param_1 + 0xb8);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar1 = FUN_05ee2f7c(uVar6);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (**(long **)(*unaff_x22 + 0xb8) != 0) {
    plVar2 = (long *)FUN_0526b460(**(long **)(*unaff_x22 + 0xb8),0);
    lVar7 = *(long *)PTR_DAT_06648110;
    lVar4 = *(long *)(lVar7 + 0x38);
    if (lVar4 == 0) {
      FUN_02d87268(lVar7);
      lVar4 = *(long *)(lVar7 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    if (plVar2 != (long *)0x0) {
      lVar7 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      uVar8 = *(undefined8 *)System_Collections_Generic_List<ChimpRig>_TypeInfo;
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0664b728) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto PlayFab_ClientModels_GetCharacterDataRequest___ctor;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d87540(plVar2,*(long *)PTR_DAT_0664b728,1);
PlayFab_ClientModels_GetCharacterDataRequest___ctor:
      (*(code *)*puVar3)(plVar2,3,uVar8,uVar6,puVar3[1]);
      **(undefined8 **)(*unaff_x22 + 0xb8) = 0;
      thunk_FUN_02dc1ef0(*(undefined8 *)(*unaff_x22 + 0xb8),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


