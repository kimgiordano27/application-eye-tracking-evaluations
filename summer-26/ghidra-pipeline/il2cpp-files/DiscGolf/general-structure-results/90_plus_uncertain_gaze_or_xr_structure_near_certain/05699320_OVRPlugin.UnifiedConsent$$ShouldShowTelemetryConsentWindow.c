/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 05699320
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long in_x9;
  undefined4 in_w10;
  long unaff_x19;
  long *plVar8;
  long *unaff_x20;
  undefined8 *unaff_x25;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  plVar8 = *(long **)(unaff_x19 + 0x540);
  *(undefined4 *)(in_x9 + 4) = in_w10;
  if (iVar1 == 0) {
    thunk_FUN_02df485c(param_1);
  }
  puVar5 = Unity_Properties_PropertyBag<InlineStyleAccess>_TypeInfo;
  puVar4 = System_Linq_Expressions_PrimitiveParameterExpression<ulong>_TypeInfo;
  puVar3 = System_Linq_Expressions_PrimitiveParameterExpression<uint>_TypeInfo;
  puVar2 = System_Linq_Expressions_PrimitiveParameterExpression<ushort>_TypeInfo;
  uVar6 = FUN_05699444();
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar7 = uVar6;
  LeanTween__value(puVar7,uVar6);
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = *unaff_x25;
  LeanTween__value();
                    /* try { // try from 05699398 to 057994cb has its CatchHandler @ 05699398
                       catch() { ... } // from try @ 05699398 with catch @ 05699398
                       catch() { ... } // from try @ 056994dc with catch @ 05699398
                       catch() { ... } // from try @ 05699500 with catch @ 05699398
                       catch() { ... } // from try @ 056995d8 with catch @ 05699398
                       catch() { ... } // from try @ 056996a0 with catch @ 05699398 */
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_054bee08(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar6,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  *puVar7 = uVar6;
  LeanTween__value(puVar7,uVar6);
  uVar6 = FUN_054bd424(*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8),*(undefined8 *)puVar4,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar7 = uVar6;
  LeanTween__value(puVar7,uVar6);
  uVar6 = FUN_054bd424(*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8),*(undefined8 *)puVar5,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar7 = uVar6;
  LeanTween__value(puVar7,uVar6);
  return;
}


