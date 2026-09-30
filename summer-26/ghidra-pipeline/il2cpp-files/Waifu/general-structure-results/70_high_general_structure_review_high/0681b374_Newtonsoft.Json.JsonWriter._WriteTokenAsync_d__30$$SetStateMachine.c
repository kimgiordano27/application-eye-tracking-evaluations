/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter.<WriteTokenAsync>d__30$$SetStateMachine
ENTRY_POINT: 0681b374
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonWriter_<WriteTokenAsync>d__30__SetStateMachine(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (unaff_w22 < uVar1) {
      lVar2 = *(long *)(param_1 + (long)(int)unaff_w22 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_0681beb8;
      if (0xd < *(uint *)(lVar2 + 0x18)) {
        if (*(int *)(lVar2 + 0x54) != 0x14) {
Newtonsoft_Json_Utilities_AsyncUtils__CancelIfRequestedAsync:
          *unaff_x20 = 0xd;
          return 1;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          FUN_033b9870();
          param_1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x420) + 0xb8) + 8);
          if (param_1 == 0) goto LAB_0681beb8;
          uVar1 = *(uint *)(param_1 + 0x18);
        }
        if (unaff_w22 < uVar1) {
          lVar2 = *(long *)(param_1 + (long)(int)unaff_w22 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_0681beb8;
          if (0xc < *(uint *)(lVar2 + 0x18)) {
            if (0x14 < *(int *)(lVar2 + 0x50)) {
              *(undefined4 *)(unaff_x21 + 0x10) = in_stack_00000008;
              *(undefined2 *)(unaff_x21 + 0x14) = in_stack_00000000._4_2_;
              *unaff_x20 = 0xc;
              return 1;
            }
            goto Newtonsoft_Json_Utilities_AsyncUtils__CancelIfRequestedAsync;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_0681beb8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


