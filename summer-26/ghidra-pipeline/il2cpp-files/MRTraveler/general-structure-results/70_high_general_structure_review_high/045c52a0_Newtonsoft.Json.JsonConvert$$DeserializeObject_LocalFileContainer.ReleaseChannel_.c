/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<LocalFileContainer.ReleaseChannel>
ENTRY_POINT: 045c52a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<LocalFileContainer_ReleaseChannel>(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
  FUN_084bae28();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    uVar1 = FUN_06b295f4(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,*unaff_x28)
    ;
    if ((uVar1 & 1) == 0) {
      lVar3 = *(long *)(unaff_x20 + 0x30);
      uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
      FUN_04d6ed0c();
      if (lVar3 == 0) goto LAB_045c5350;
      FUN_06b293e8(lVar3,in_stack_00000000,in_stack_00000008,uVar2,*unaff_x29);
    }
    return;
  }
LAB_045c5350:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


