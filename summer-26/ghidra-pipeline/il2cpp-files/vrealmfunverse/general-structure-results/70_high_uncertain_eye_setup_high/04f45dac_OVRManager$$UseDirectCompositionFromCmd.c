/*
FUNCTION_NAME: OVRManager$$UseDirectCompositionFromCmd
ENTRY_POINT: 04f45dac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UseDirectCompositionFromCmd(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x22;
  
  FUN_02b3c81c();
  FUN_02b3c81c(System_Collections_Generic_Dictionary<RenderGraphState,_string>_TypeInfo);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<RenderTextureFormat,_bool>_TypeInfo);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_TypeInfo);
  FUN_02b3c81c(PTR_DAT_06313300);
  *(undefined1 *)(unaff_x20 + 0x9c4) = 1;
  lVar5 = *unaff_x22;
  iVar1 = *(int *)(lVar5 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0x38) = DAT_01030da0;
  if (iVar1 == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *unaff_x22;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
                    /* try { // try from 04f45e54 to 05045e5b has its CatchHandler @ 04f460cc */
    FUN_049b830c(lVar8,uVar9,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<RenderGraphState,_string>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_02bb0e9c(plVar6,lVar8);
  }
  *(long *)(unaff_x19 + 0x40) = lVar8;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x40),lVar8);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *unaff_x22;
  }
  puVar4 = System_Collections_Generic_Dictionary<object,_Transform>_TypeInfo;
  puVar3 = System_Collections_Generic_Dictionary<object,_float>_TypeInfo;
  puVar2 = PTR_DAT_06313300;
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar7[2];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var);
    System_Collections_Generic_ArraySortHelper<IntervalTree_Entry<object>>__PickPivotAndPartition
              (lVar8,uVar9,
               *(undefined8 *)
                System_Collections_Generic_Dictionary<RenderTextureFormat,_bool>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar6 = lVar8;
    thunk_FUN_02bb0e9c(plVar6,lVar8);
  }
  *(long *)(unaff_x19 + 0x48) = lVar8;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x48),lVar8);
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03c7b5f0(uVar9,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x78),uVar9);
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_05c94cb8(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar9;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x80),uVar9);
  thunk_FUN_05c88cb0();
  return;
}


