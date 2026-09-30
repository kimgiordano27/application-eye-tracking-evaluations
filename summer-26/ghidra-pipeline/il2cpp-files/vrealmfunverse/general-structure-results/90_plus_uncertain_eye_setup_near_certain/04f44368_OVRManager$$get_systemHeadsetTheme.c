/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetTheme
ENTRY_POINT: 04f44368
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__get_systemHeadsetTheme(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long *unaff_x22;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xff0));
                    /* try { // try from 04f44370 to 0504451f has its CatchHandler @ 04f44370
                       catch() { ... } // from try @ 04f44370 with catch @ 04f44370
                       catch() { ... } // from try @ 04f447ac with catch @ 04f44370
                       catch() { ... } // from try @ 04f447b4 with catch @ 04f44370
                       catch() { ... } // from try @ 04f44840 with catch @ 04f44370
                       catch() { ... } // from try @ 04f44908 with catch @ 04f44370 */
  FUN_02b3c81c(System_Collections_Generic_Dictionary<PropertyName,_object>_TypeInfo);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<PokeInteractable,_Matrix4x4>_TypeInfo);
  FUN_02b3c81c(PTR_DAT_06313300);
  *(undefined1 *)(unaff_x20 + 0x9b9) = 1;
  uVar1 = _UNK_01035fa8;
  uVar5 = _DAT_01035fa0;
  *(undefined8 *)(unaff_x19 + 0x5c) = DAT_01030170;
  *(undefined8 *)(unaff_x19 + 0x54) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x4c) = uVar5;
  uVar5 = DAT_01030328;
  *(undefined4 *)(unaff_x19 + 0x44) = 0x3fb33333;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x38) = 0x3e99999a3e99999a;
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  *(undefined4 *)(unaff_x19 + 0x70) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x74) = 1;
  uVar5 = FUN_05c3c2c0(0xbf800000,0,0x3f800000,0,0);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x78),uVar5);
  lVar6 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x84) = 0x41200000;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *unaff_x22;
  }
  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar8[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar5 = *puVar8;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar9,uVar5,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_TypeInfo
                 ,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar7 = lVar9;
    thunk_FUN_02bb0e9c(plVar7,lVar9);
  }
  *(long *)(unaff_x19 + 0x88) = lVar9;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x88),lVar9);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *unaff_x22;
  }
  puVar4 = System_Collections_Generic_Dictionary<object,_Transform>_TypeInfo;
  puVar3 = System_Collections_Generic_Dictionary<object,_float>_TypeInfo;
  puVar2 = PTR_DAT_06313300;
  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar8[2];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar5 = *puVar8;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var);
    System_Collections_Generic_ArraySortHelper<IntervalTree_Entry<object>>__PickPivotAndPartition
              (lVar9,uVar5,
               *(undefined8 *)System_Collections_Generic_Dictionary<PropertyName,_object>_TypeInfo,0
              );
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar7 = lVar9;
    thunk_FUN_02bb0e9c(plVar7,lVar9);
  }
  *(long *)(unaff_x19 + 0x90) = lVar9;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x90),lVar9);
  uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03c7b5f0(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar5;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd8),uVar5);
  uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_05c94cb8(uVar5,0);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar5;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0),uVar5);
  thunk_FUN_05c88cb0();
  return;
}


