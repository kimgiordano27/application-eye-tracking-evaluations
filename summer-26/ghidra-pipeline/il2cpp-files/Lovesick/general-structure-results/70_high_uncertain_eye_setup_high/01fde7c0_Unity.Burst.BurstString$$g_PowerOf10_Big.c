/*
FUNCTION_NAME: Unity.Burst.BurstString$$g_PowerOf10_Big
ENTRY_POINT: 01fde7c0
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


void Unity_Burst_BurstString__g_PowerOf10_Big(ulong param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar6;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_XmlDeclaration_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    *(undefined1 *)(unaff_x23 + 0x77c) = 1;
  }
  plVar2 = (long *)FUN_00da4fb8(*unaff_x24,1);
  uVar6 = *unaff_x21;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x22);
  }
  lVar3 = FUN_01780344(uVar6,0);
  if (plVar2 == (long *)0x0) goto LAB_01fde97c;
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_01fde984:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar2[3] == 0) {
LAB_01fde980:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar2[4] = lVar3;
  puVar1 = System_Xml_XmlDeclaration_TypeInfo;
  if (unaff_x19 == 0) {
LAB_01fde97c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = FUN_0178c180();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  uVar5 = FUN_016aa83c(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
  }
  else {
    plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
    lVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (plVar2 == (long *)0x0) goto LAB_01fde97c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_01fde984;
    if ((int)plVar2[3] == 0) goto LAB_01fde980;
    plVar2[4] = lVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
  }
  FUN_01ffa26c(0);
  return;
}


