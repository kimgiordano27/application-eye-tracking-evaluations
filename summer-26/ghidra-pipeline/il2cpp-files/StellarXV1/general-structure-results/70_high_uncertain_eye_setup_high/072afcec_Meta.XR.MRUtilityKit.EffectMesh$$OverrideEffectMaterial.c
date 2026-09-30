/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$OverrideEffectMaterial
ENTRY_POINT: 072afcec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__OverrideEffectMaterial(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar4;
  long *unaff_x22;
  
  uVar1 = FUN_05009514(param_2,**(undefined8 **)(param_1 + 0x828));
  *unaff_x20 = uVar1;
  thunk_FUN_040ec700();
  uVar1 = *unaff_x20;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_089cc398(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    FUN_072afde0();
  }
  plVar4 = (long *)(unaff_x19 + 0x50);
  if (*plVar4 == 0) {
    lVar3 = FUN_089c7604();
    if (lVar3 == 0) goto LAB_072afddc;
    lVar3 = FUN_05009d4c(lVar3,*(undefined8 *)PTR_DAT_092c2830);
    *plVar4 = lVar3;
    thunk_FUN_040ec700(plVar4,lVar3);
  }
  plVar4 = (long *)(unaff_x19 + 0x60);
  if (*plVar4 != 0) {
    return;
  }
  lVar3 = FUN_089c7604();
  if (lVar3 != 0) {
    lVar3 = FUN_05009514(lVar3,*(undefined8 *)PTR_DAT_092c2820);
    *plVar4 = lVar3;
    thunk_FUN_040ec700(plVar4);
    return;
  }
LAB_072afddc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


