/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$CalculateMap
ENTRY_POINT: 014a1fd8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__CalculateMap(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_720);
  thunk_FUN_00d48444(Mono_Security_Interface_TlsProtocols_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_13513);
  *(undefined1 *)(unaff_x20 + 0xcad) = 1;
  puVar6 = StringLiteral_13513;
  puVar5 = StringLiteral_720;
  puVar4 = Method_System_Collections_Generic_List<XmlQualifiedName>_Clear__;
  puVar3 = Method_System_Collections_Generic_List<DebugData>_Add__;
  puVar2 = Mono_Security_Interface_TlsProtocols_TypeInfo;
  puVar1 = System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_TypeInfo;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(unaff_x19 + 0x20),&stack0x00000008,
               *(undefined8 *)
                Method_System_Collections_Generic_List<DynamicBoneColliderBase>_get_Item__);
  while( true ) {
    uVar7 = FUN_012b894c(&stack0x00000008,*(undefined8 *)puVar3);
    if ((uVar7 & 1) == 0) {
      FUN_012b8948(&stack0x00000008,*(undefined8 *)puVar4);
      return;
    }
    lVar8 = FUN_00bc3684(&stack0x00000008,*(undefined8 *)puVar1);
    FUN_014a2178();
    if (lVar8 == 0) break;
    uVar9 = FUN_0268b6ac(lVar8,0);
    uVar9 = FUN_01600424(*(undefined8 *)puVar2,uVar9,*(undefined8 *)puVar6,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_014ded68(uVar9,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


