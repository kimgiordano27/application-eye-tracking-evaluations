/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Converters
ENTRY_POINT: 04f9e210
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9e32c) */

undefined8 Newtonsoft_Json_JsonSerializerSettings__get_Converters(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 unaff_w20;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar4 = *unaff_x22;
  lVar1 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar4);
      lVar1 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
    }
    uVar2 = FUN_047cc89c(lVar1,unaff_w20,&stack0x00000018,*(undefined8 *)PTR_DAT_06778358);
    if ((uVar2 & 1) != 0) goto LAB_04f9e298;
    lVar4 = *unaff_x22;
  }
  uVar3 = thunk_FUN_02d9d534(lVar4);
  FUN_04f9d984(uVar3,unaff_w20,0,1);
  in_stack_00000018 = uVar3;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_04f9dfe8(uVar3);
LAB_04f9e298:
  uVar3 = in_stack_00000018;
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  return uVar3;
}


