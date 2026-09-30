/*
FUNCTION_NAME: FUN_01fde78c
ENTRY_POINT: 01fde78c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01fde78c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  
  puVar3 = Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  if ((DAT_0378077c & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_XmlDeclaration_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0378077c = 1;
  }
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,1);
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_01780344(uVar9,0);
  if (plVar4 == (long *)0x0) goto LAB_01fde97c;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_01fde984:
    uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,0);
  }
  if ((int)plVar4[3] == 0) {
LAB_01fde980:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[4] = lVar5;
  puVar1 = System_Xml_XmlDeclaration_TypeInfo;
  if (param_2 == 0) {
LAB_01fde97c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar9 = FUN_0178c180(param_2,plVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  uVar7 = FUN_016aa83c(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)0x0;
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
    lVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (plVar8 == (long *)0x0) goto LAB_01fde97c;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
    goto LAB_01fde984;
    if ((int)plVar8[3] == 0) goto LAB_01fde980;
    plVar8[4] = lVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
  }
  FUN_01ffa26c(0,param_2,plVar4,plVar8,0);
  return;
}


