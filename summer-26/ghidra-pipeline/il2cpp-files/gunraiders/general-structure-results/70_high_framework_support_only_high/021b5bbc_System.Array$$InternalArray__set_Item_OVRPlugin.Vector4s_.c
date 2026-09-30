/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 021b5bbc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__set_Item<OVRPlugin_Vector4s>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x22;
  long *unaff_x23;
  
  FUN_01c5d288();
  FUN_01c5d288(System_Runtime_Remoting_Contexts_IDynamicMessageSink_TypeInfo);
  FUN_01c5d288(System_Dynamic_IDynamicMetaObjectProvider_TypeInfo);
  FUN_01c5d288(System_Xml_IDtdParserAdapterWithValidation_TypeInfo);
  FUN_01c5d288(System_Runtime_Remoting_Contexts_IDynamicProperty_TypeInfo);
  FUN_01c5d288(PTR_DAT_042392c0);
  *(undefined1 *)(unaff_x20 + 0xf1a) = 1;
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  uVar2 = thunk_FUN_01c496e0(*unaff_x23);
  FUN_03245f44();
  plVar3 = (long *)FUN_033170a4(uVar6,uVar2,0);
  lVar4 = *unaff_x23;
  if (plVar3 == (long *)0x0) {
    lVar5 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  else {
    if (*plVar3 != lVar4) goto LAB_021b5cdc;
    lVar5 = *(long *)(*unaff_x22 + 0xb8);
    *(long **)(lVar5 + 8) = plVar3;
    if (*plVar3 != lVar4) goto LAB_021b5cdc;
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x18);
  uVar2 = thunk_FUN_01c496e0(lVar4);
  FUN_03245f44();
  plVar3 = (long *)FUN_033170a4(uVar6,uVar2,0);
  if (plVar3 == (long *)0x0) {
    lVar4 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  else {
    lVar5 = *unaff_x23;
    if (*plVar3 != lVar5) {
LAB_021b5cdc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    lVar4 = *(long *)(*unaff_x22 + 0xb8);
    *(long **)(lVar4 + 0x18) = plVar3;
    if (*plVar3 != lVar5) goto LAB_021b5cdc;
  }
  puVar1 = System_Buffers_ArrayPool<char>_TypeInfo;
  uVar6 = *(undefined8 *)(lVar4 + 0x30);
  uVar2 = thunk_FUN_01c496e0(*(undefined8 *)System_Buffers_ArrayPool<char>_TypeInfo);
  System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>__System_Collections_IDictionary_Add
            ();
  lVar4 = FUN_033170a4(uVar6,uVar2,0);
  uVar2 = *(undefined8 *)puVar1;
  if (lVar4 == 0) {
    lVar4 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar4 + 0x30) = 0;
  }
  else {
    lVar5 = thunk_FUN_01c495e4(lVar4,uVar2);
    if (lVar5 == 0) goto LAB_021b5e1c;
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = lVar5;
    uVar2 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_01c495e4(lVar4,uVar2);
    if (lVar5 == 0) goto LAB_021b5e1c;
    uVar2 = *(undefined8 *)puVar1;
    lVar4 = *(long *)(*unaff_x22 + 0xb8);
  }
  uVar6 = *(undefined8 *)(lVar4 + 0x38);
  uVar2 = thunk_FUN_01c496e0(uVar2);
  System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>__System_Collections_IDictionary_Add
            ();
  lVar4 = FUN_033170a4(uVar6,uVar2,0);
  if (lVar4 == 0) {
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38) = 0;
    return;
  }
  uVar2 = *(undefined8 *)puVar1;
  lVar5 = thunk_FUN_01c495e4(lVar4,uVar2);
  if (lVar5 != 0) {
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38) = lVar5;
    uVar2 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_01c495e4(lVar4,uVar2);
    if (lVar5 != 0) {
      return;
    }
  }
LAB_021b5e1c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748(lVar4,uVar2);
}


