/*
FUNCTION_NAME: FUN_05c50e00
ENTRY_POINT: 05c50e00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05c50e00(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
  ;
  if ((DAT_06dc28d4 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<SymbolStore_Key,_Symbol>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                );
    DAT_06dc28d4 = 1;
  }
  lVar2 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_0552aca4(lVar2,0);
  if (lVar2 == 0) goto LAB_05c50f50;
  plVar8 = (long *)(lVar2 + 0x10);
  *plVar8 = param_2;
  LeanTween__value(plVar8,param_2);
  *(long *)(lVar2 + 0x18) = param_1;
  LeanTween__value((long *)(lVar2 + 0x18),param_1);
  lVar7 = *plVar8;
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    if ((lVar7 != 0) && (uVar4 = FUN_055331b0(lVar3,lVar7,0), (uVar4 & 1) != 0)) {
LAB_05c50f54:
      uVar5 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_set_Item__
                                );
      uVar6 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<SymbolStore_Key,_Symbol>_Add__
                                );
      uVar5 = FUN_0534e494(uVar5,uVar6,0);
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar6 = thunk_FUN_02dd3144();
      FUN_054e8008(uVar6,uVar5,0);
      uVar5 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<SymbolStore_Key,_Symbol>_TryGetValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar5);
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_05c50f50;
      if (*(long *)(*(long *)(param_1 + 0x40) + 0x18) != 0) goto LAB_05c50f54;
    }
    return;
  }
  *(long *)(param_1 + 0x50) = lVar7;
  LeanTween__value((long *)(param_1 + 0x50));
  lVar3 = *(long *)(param_1 + 0x40);
  if (*plVar8 == 0) {
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = 0;
      uVar5 = 0;
      goto LAB_05c50f40;
    }
  }
  else {
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_0533ff3c(uVar5,lVar2,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<SymbolStore_Key,_Symbol>__ctor__,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = uVar5;
LAB_05c50f40:
      LeanTween__value(lVar3 + 0x18,uVar5);
      return;
    }
  }
LAB_05c50f50:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


