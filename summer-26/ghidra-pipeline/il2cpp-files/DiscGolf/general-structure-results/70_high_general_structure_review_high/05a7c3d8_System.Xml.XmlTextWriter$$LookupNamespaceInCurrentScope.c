/*
FUNCTION_NAME: System.Xml.XmlTextWriter$$LookupNamespaceInCurrentScope
ENTRY_POINT: 05a7c3d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 System_Xml_XmlTextWriter__LookupNamespaceInCurrentScope(void)

{
  undefined8 uVar1;
  int in_w8;
  uint in_w9;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x104) = 8;
  *(int *)(unaff_x19 + 0x108) = in_w8;
  if (in_w8 <= (int)((in_w9 & 0xffff | 0x7fff0000) + 8)) {
    *(int *)(unaff_x19 + 0x20) = in_w8 + 8;
    if (*(int *)(unaff_x19 + 0x28) <= *(int *)(unaff_x19 + 0x20) + -1) {
      System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer___cctor();
    }
    return 3;
  }
  uVar1 = FUN_02d96870();
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1,*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<StartSessionAsHost>d__57>__
              );
}


