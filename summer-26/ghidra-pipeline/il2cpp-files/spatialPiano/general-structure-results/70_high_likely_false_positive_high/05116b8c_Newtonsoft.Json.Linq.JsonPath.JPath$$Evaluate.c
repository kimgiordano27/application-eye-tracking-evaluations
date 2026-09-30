/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.JPath$$Evaluate
ENTRY_POINT: 05116b8c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05116c48) */
/* WARNING: Removing unreachable block (ram,0x05116c84) */

long Newtonsoft_Json_Linq_JsonPath_JPath__Evaluate(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  undefined8 uStack0000000000000000;
  long lStack0000000000000008;
  undefined8 in_stack_00000018;
  
  lVar1 = *unaff_x21;
  lStack0000000000000008 = (long)&stack0x00000018 + 4;
  uStack0000000000000000 = 0;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar1 = *unaff_x21;
  }
  FUN_05136fe0(**(undefined8 **)(lVar1 + 0xb8),(long)&stack0x00000018 + 4,0);
  lVar1 = **(long **)(*unaff_x21 + 0xb8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) == 0) {
      lVar2 = 0;
    }
    else {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar1 = **(long **)(*unaff_x21 + 0xb8);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      lVar2 = *(long *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    if (in_stack_00000018._4_1_ != '\0') {
      lVar1 = *unaff_x21;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar1 = *unaff_x21;
      }
      thunk_FUN_02f16354(**(undefined8 **)(lVar1 + 0xb8),0);
    }
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  UnityEngine_UIElements_DataBindingManager_BindingRequest_var);
      FUN_04f93cb8(lVar2,0);
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


