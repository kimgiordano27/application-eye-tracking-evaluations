/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0546f554
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  uint uVar1;
  ulong uVar2;
  int in_w8;
  undefined2 *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) {
LAB_0546f5f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar2 = thunk_FUN_0536b75c(*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x50),
                               *(undefined8 *)PTR_DAT_06a1f0a0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_0546f5f0;
      uVar1 = thunk_FUN_0536b75c(*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x50),
                                 *(undefined8 *)PTR_DAT_06a1f098,0);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    in_stack_00000008._4_2_ = 0;
    FUN_0432a748((long)&stack0x00000008 + 4,uVar1 & 1,*(undefined8 *)PTR_DAT_069fcc60);
    *unaff_x19 = in_stack_00000008._4_2_;
  }
  uVar1 = FUN_0432a760();
  return uVar1 & 1;
}


