/*
FUNCTION_NAME: OVRManager$$GetSystemHeadsetTheme
ENTRY_POINT: 04f443b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetSystemHeadsetTheme(undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 in_w9;
  long unaff_x19;
  long lVar8;
  long *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0x5c) = param_2;
  *(long *)(unaff_x19 + 0x54) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x4c) = param_1._0_8_;
  uVar4 = DAT_01030328;
  *(undefined4 *)(unaff_x19 + 0x44) = 0x3fb33333;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  *(ulong *)(unaff_x19 + 0x38) = CONCAT44(in_w9,in_w9) & 0xffff0000ffff | 0x3e9900003e990000;
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  *(undefined4 *)(unaff_x19 + 0x70) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x74) = 1;
  uVar4 = FUN_05c3c2c0(0xbf800000,0,0x3f800000,0);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x78),uVar4);
  lVar5 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x84) = 0x41200000;
  if (*(int *)(lVar5 + 0xe4) == 0) {
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
    uVar4 = *puVar7;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar8,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_02bb0e9c(plVar6,lVar8);
  }
  *(long *)(unaff_x19 + 0x88) = lVar8;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x88),lVar8);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *unaff_x22;
  }
  puVar3 = System_Collections_Generic_Dictionary<object,_Transform>_TypeInfo;
  puVar2 = System_Collections_Generic_Dictionary<object,_float>_TypeInfo;
  puVar1 = PTR_DAT_06313300;
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar7[2];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar7;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var);
                    /* try { // try from 04f44520 to 05044543 has its CatchHandler @ 04f44808 */
    System_Collections_Generic_ArraySortHelper<IntervalTree_Entry<object>>__PickPivotAndPartition
              (lVar8,uVar4,
               *(undefined8 *)System_Collections_Generic_Dictionary<PropertyName,_object>_TypeInfo,0
              );
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar6 = lVar8;
    thunk_FUN_02bb0e9c(plVar6,lVar8);
  }
                    /* try { // try from 04f44544 to 0504454f has its CatchHandler @ 04f44800 */
  *(long *)(unaff_x19 + 0x90) = lVar8;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x90),lVar8);
  uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03c7b5f0(uVar4,*(undefined8 *)puVar2);
                    /* try { // try from 04f44564 to 05044567 has its CatchHandler @ 04f447d4 */
                    /* try { // try from 04f44568 to 05044577 has its CatchHandler @ 04f447f0 */
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd8),uVar4);
  uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_05c94cb8(uVar4,0);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0),uVar4);
                    /* try { // try from 04f445a8 to 050445ab has its CatchHandler @ 04f447ec */
                    /* try { // try from 04f445ac to 050445bf has its CatchHandler @ 04f44804 */
  thunk_FUN_05c88cb0();
  return;
}


