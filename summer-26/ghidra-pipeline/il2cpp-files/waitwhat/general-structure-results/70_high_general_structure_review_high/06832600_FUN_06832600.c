/*
FUNCTION_NAME: FUN_06832600
ENTRY_POINT: 06832600
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06832600(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate_TypeInfo
  ;
  puVar8 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_BurstDirectCall_TypeInfo
  ;
  puVar7 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster_RaycastHitComparer_TypeInfo
  ;
  puVar6 = UnityEngine_UIElements_Cursor_PropertyBag_TypeInfo;
  puVar5 = 
  System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
  ;
  puVar4 = System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
  ;
  puVar3 = System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo;
  puVar2 = PTR_DAT_07113a30;
  puVar1 = PTR_DAT_07113a18;
  if ((DAT_07558bc1 & 1) == 0) {
    FUN_03188a78(System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070f1fd0);
    FUN_03188a78(PTR_DAT_07113a10);
    FUN_03188a78(PTR_DAT_07113a18);
    FUN_03188a78(PTR_DAT_07113a28);
    FUN_03188a78(UnityEngine_UIElements_Cursor_PropertyBag_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster_RaycastHitComparer_TypeInfo
                );
    FUN_03188a78(PTR_DAT_07113a30);
    FUN_03188a78(PTR_DAT_07113a38);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_BurstDirectCall_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate_TypeInfo
                );
    DAT_07558bc1 = 1;
  }
  FUN_0654e8e0(param_1,0);
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar6,*(undefined8 *)puVar3);
  uVar13 = *(undefined8 *)puVar7;
  uVar14 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar13,uVar14);
  uVar13 = *(undefined8 *)puVar8;
  uVar14 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar13,uVar14);
  uVar13 = *(undefined8 *)puVar9;
  uVar14 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar13,uVar14);
  uVar13 = *(undefined8 *)puVar1;
  uVar14 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar13,uVar14);
  uVar13 = *(undefined8 *)puVar2;
  uVar14 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar13,uVar14);
  puVar1 = PTR_DAT_07113a28;
  uVar13 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar13);
  puVar1 = PTR_DAT_07113a10;
  uVar13 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar13);
  puVar1 = PTR_DAT_07113a38;
  uVar13 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar13);
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  lVar11 = FUN_0656b5dc(*(undefined8 *)(param_1 + 0x120),0);
  puVar1 = System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
  if (lVar11 == 0) {
    return;
  }
  if ((*(uint *)(lVar11 + 0x28) >> 8 & 1) == 0) {
    if ((*(uint *)(lVar11 + 0x28) >> 9 & 1) == 0) {
      return;
    }
    lVar11 = *(long *)System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar11);
      lVar11 = *(long *)puVar1;
    }
    lVar12 = *(long *)PTR_DAT_070f1fd0;
    uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 400);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x198);
  }
  else {
    lVar11 = *(long *)System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar11);
      lVar11 = *(long *)puVar1;
    }
    lVar12 = *(long *)PTR_DAT_070f1fd0;
    uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x180);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x188);
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_064fa11c(param_1,uVar10,uVar13,0);
  return;
}


