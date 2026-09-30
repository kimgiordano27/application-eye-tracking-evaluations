/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetType
ENTRY_POINT: 04f44318
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__get_systemHeadsetType(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar5 = System_Collections_Generic_Dictionary<PokeInteractable,_Matrix4x4>_TypeInfo;
  if ((DAT_066c99b9 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_VFX_VFXSpawnerState_var);
    FUN_02b3c81c(UnityEngine_Timeline_PlayableTrack_var);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<object,_float>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<object,_Transform>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_Dictionary<PropertyName,_object>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<PokeInteractable,_Matrix4x4>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06313300);
    DAT_066c99b9 = 1;
  }
  uVar1 = _UNK_01035fa8;
  uVar6 = _DAT_01035fa0;
  *(undefined8 *)(param_1 + 0x5c) = DAT_01030170;
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  *(undefined8 *)(param_1 + 0x4c) = uVar6;
  uVar6 = DAT_01030328;
  *(undefined4 *)(param_1 + 0x44) = 0x3fb33333;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = 0x3e99999a3e99999a;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x74) = 1;
  uVar6 = FUN_05c3c2c0(0xbf800000,0,0x3f800000,0,0);
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x78),uVar6);
  lVar7 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x84) = 0x41200000;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *(long *)puVar5;
  }
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar10 = puVar9[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar6 = *puVar9;
    lVar10 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar10,uVar6,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_TypeInfo
                 ,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar8 = lVar10;
    thunk_FUN_02bb0e9c(plVar8,lVar10);
  }
  *(long *)(param_1 + 0x88) = lVar10;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x88),lVar10);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *(long *)puVar5;
  }
  puVar4 = System_Collections_Generic_Dictionary<object,_Transform>_TypeInfo;
  puVar3 = System_Collections_Generic_Dictionary<object,_float>_TypeInfo;
  puVar2 = PTR_DAT_06313300;
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar10 = puVar9[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar6 = *puVar9;
    lVar10 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var);
    System_Collections_Generic_ArraySortHelper<IntervalTree_Entry<object>>__PickPivotAndPartition
              (lVar10,uVar6,
               *(undefined8 *)System_Collections_Generic_Dictionary<PropertyName,_object>_TypeInfo,0
              );
    plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar8 = lVar10;
    thunk_FUN_02bb0e9c(plVar8,lVar10);
  }
  *(long *)(param_1 + 0x90) = lVar10;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x90),lVar10);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03c7b5f0(uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xd8),uVar6);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_05c94cb8(uVar6,0);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xe0),uVar6);
  thunk_FUN_05c88cb0(param_1,0);
  return;
}


