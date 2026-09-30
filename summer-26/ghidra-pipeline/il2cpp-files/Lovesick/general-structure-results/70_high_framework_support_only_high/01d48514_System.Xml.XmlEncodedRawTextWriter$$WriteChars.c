/*
FUNCTION_NAME: System.Xml.XmlEncodedRawTextWriter$$WriteChars
ENTRY_POINT: 01d48514
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d485b0) */

void System_Xml_XmlEncodedRawTextWriter__WriteChars(long param_1)

{
  undefined *puVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  int iVar2;
  int unaff_w24;
  long in_stack_00000008;
  
  puVar1 = OVRPlugin_Hand_TypeInfo;
  iVar2 = 0;
  while( true ) {
    FUN_0132138c(param_1,iVar2,&stack0x00000008,*(undefined8 *)puVar1);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < *(int *)(in_stack_00000008 + 0x44)) {
      FUN_01d8d378(in_stack_00000008,unaff_w22,unaff_w21,unaff_w20,0);
    }
    iVar2 = iVar2 + 1;
    if (unaff_w24 == iVar2) break;
    param_1 = *(long *)(unaff_x19 + 0x78);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  iVar2 = *(int *)(unaff_x19 + 0x80) + -1;
  *(int *)(unaff_x19 + 0x80) = iVar2;
  if (iVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
  }
  return;
}


