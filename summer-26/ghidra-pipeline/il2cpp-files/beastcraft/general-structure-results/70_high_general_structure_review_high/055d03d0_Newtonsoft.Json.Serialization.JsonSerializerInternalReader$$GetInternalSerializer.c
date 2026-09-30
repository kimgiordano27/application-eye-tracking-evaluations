/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 055d03d0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02e3ca1c(PTR_DAT_06a7ba90);
  *(undefined1 *)(unaff_x21 + 0x5bb) = 1;
  in_stack_00000010 = 0;
  if (unaff_x19 == 0) {
    thunk_FUN_02ea289c(PTR_DAT_06a2f438);
    uVar2 = thunk_FUN_02e78ab8();
    uVar3 = thunk_FUN_02ea289c(PTR_DAT_06a71e48);
    FUN_055723d8(uVar2,uVar3,0);
  }
  else {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      if (*(long *)(unaff_x20 + 0x18) != unaff_x19) {
        thunk_FUN_02ea289c(PTR_DAT_06a31178);
        uVar2 = thunk_FUN_02e78ab8();
        uVar3 = thunk_FUN_02ea289c(PTR_DAT_06a83230);
        Newtonsoft_Json_Converters_XTextWrapper__get_ParentNode(uVar2,uVar3,0);
        goto LAB_055d04f0;
      }
      if (*(char *)(unaff_x19 + 0x54) != '\0') {
        in_stack_00000010 = FUN_046dc300();
        uVar1 = FUN_046bbe38(&stack0x00000010,*(undefined8 *)PTR_DAT_06a7ba88);
        FUN_055d0f04(in_stack_00000018);
        return uVar1;
      }
    }
    thunk_FUN_02ea289c(PTR_DAT_06a30728);
    uVar2 = thunk_FUN_02e78ab8();
    uVar3 = thunk_FUN_02ea289c(PTR_DAT_06a83230);
    FUN_0557a944(uVar2,uVar3,0);
  }
LAB_055d04f0:
  uVar3 = thunk_FUN_02ea289c(PTR_DAT_06a83238);
                    /* WARNING: Subroutine does not return */
  FUN_02e3cb88(uVar2,uVar3);
}


