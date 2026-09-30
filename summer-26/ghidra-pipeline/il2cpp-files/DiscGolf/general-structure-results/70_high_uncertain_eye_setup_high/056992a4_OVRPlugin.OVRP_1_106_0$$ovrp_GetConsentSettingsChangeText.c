/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentSettingsChangeText
ENTRY_POINT: 056992a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentSettingsChangeText(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 in_w10;
  undefined8 *unaff_x19;
  undefined8 uVar10;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  
  lVar11 = *(long *)(unaff_x21 + 0x9c0);
  uVar10 = *unaff_x19;
  iVar1 = *(int *)(*(long *)(lVar11 + 0xe0) + 0xe4);
  **(undefined4 **)(*unaff_x20 + 0xb8) = in_w10;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_054f73b4(uVar10,0);
  lVar11 = *(long *)(lVar11 + 0x98);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar11);
  }
  lVar11 = FUN_0551cf7c(uVar10,0);
  puVar3 = System_Linq_Expressions_PrimitiveParameterExpression<string>_TypeInfo;
  puVar2 = PTR_DAT_06a0f540;
  if (lVar11 != 0) {
    lVar8 = *(long *)System_Linq_Expressions_PrimitiveParameterExpression<float>_TypeInfo;
    iVar1 = *(int *)(lVar8 + 0xe4);
    *(int *)(*(long *)(*unaff_x20 + 0xb8) + 4) = (int)*(undefined8 *)(lVar11 + 0x18);
    if (iVar1 == 0) {
      thunk_FUN_02df485c(lVar8);
    }
    puVar7 = Unity_Properties_PropertyBag<InlineStyleAccess>_TypeInfo;
    puVar6 = System_Linq_Expressions_PrimitiveParameterExpression<ulong>_TypeInfo;
    puVar5 = System_Linq_Expressions_PrimitiveParameterExpression<uint>_TypeInfo;
    puVar4 = System_Linq_Expressions_PrimitiveParameterExpression<ushort>_TypeInfo;
    uVar10 = FUN_05699444();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    *puVar9 = uVar10;
    LeanTween__value(puVar9,uVar10);
    *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = *(undefined8 *)puVar3;
    LeanTween__value();
    uVar10 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_054bee08(*(undefined8 *)puVar4,*(undefined8 *)puVar5,uVar10,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
    *puVar9 = uVar10;
    LeanTween__value(puVar9,uVar10);
    uVar10 = FUN_054bd424(*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8),*(undefined8 *)puVar6,0)
    ;
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
    *puVar9 = uVar10;
    LeanTween__value(puVar9,uVar10);
    uVar10 = FUN_054bd424(*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8),*(undefined8 *)puVar7,0)
    ;
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
    *puVar9 = uVar10;
    LeanTween__value(puVar9,uVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


