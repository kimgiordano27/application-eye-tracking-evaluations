/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 05901a08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  long unaff_x19;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_DAT_070fbbf0;
  if (in_NG == in_OV) {
    iVar4 = 0;
    do {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar1 = *(undefined4 *)(unaff_x19 + 0x60);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      iVar3 = FUN_05904980(uVar5,uVar6,iVar4,uVar1,(long)&stack0x00000008 + 4,0);
      if (in_stack_00000008._4_4_ != 0) {
        uVar5 = FUN_05901240();
        thunk_FUN_031edd38(PTR_DAT_070fbbf0);
        FUN_02d35640();
        uVar5 = FUN_05903dfc(uVar5,in_stack_00000008._4_4_,0);
        uVar6 = thunk_FUN_031edd38(PTR_DAT_07104f10);
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar5,uVar6);
      }
      unaff_w24 = unaff_w24 - iVar3;
      iVar4 = iVar3 + iVar4;
    } while (0 < unaff_w24);
  }
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x68) + (long)*(int *)(unaff_x19 + 100);
  return;
}


