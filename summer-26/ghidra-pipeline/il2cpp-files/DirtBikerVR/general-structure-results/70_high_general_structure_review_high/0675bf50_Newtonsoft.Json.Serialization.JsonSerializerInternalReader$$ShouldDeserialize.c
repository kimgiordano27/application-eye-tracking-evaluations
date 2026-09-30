/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 0675bf50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize
               (undefined8 param_1)

{
  ulong uVar1;
  int in_w8;
  long unaff_x23;
  ulong *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  long in_stack_00000098;
  
  uStack0000000000000010 = param_1;
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0675b428();
  uVar1 = FUN_0675a928(&stack0x00000010,(long)&stack0x00000008 + 4);
  if ((uVar1 & 1) == 0) {
    uVar1 = *unaff_x24;
    if (*(int *)(uVar1 + 0xe4) == 0) {
      uVar1 = thunk_FUN_03ae8be4();
    }
    if (*(long *)(unaff_x23 + 0x28) != in_stack_00000098) goto LAB_0675c054;
    FUN_0675b068(1,*(undefined8 *)PTR_DAT_084a5c88);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_0675b0f0();
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar1 = 0;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
        uVar1 = FUN_0675b068(0,*(undefined8 *)PTR_DAT_084a5c88);
      }
      goto LAB_0675c054;
    }
  }
  uVar1 = (ulong)in_stack_00000008._4_4_;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_0675c054:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


