/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaImport$$set_Namespace
ENTRY_POINT: 053cfe18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Xml_Schema_XmlSchemaImport__set_Namespace(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x28) = unaff_x21;
  thunk_FUN_02bb0e9c();
  in_stack_00000008 = 0;
  lVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(unaff_x22 + 0x28),&stack0x00000008);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_02b79548(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar3,0);
  }
  if (2 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[6] = lVar1;
    thunk_FUN_02bb0e9c(unaff_x20 + 6,lVar1);
    FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_116_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_053d7134();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


