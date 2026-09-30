/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 054aea4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x054aeab8) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(void)

{
  long lVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  uint uVar3;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  
  LeanTween__value();
  in_stack_00000058 = unaff_x23[1];
  in_stack_00000050 = *unaff_x23;
  uVar2 = FUN_05415d34(&stack0x00000050,0);
  if ((uVar2 & 1) == 0) {
    in_stack_00000078._4_4_ = 2;
    *unaff_x19 = 2;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000050;
    LeanTween__value(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0353b784(unaff_x19 + 2,&stack0x00000050);
    uVar3 = 5;
  }
  else {
    FUN_05415e74(&stack0x00000050,0);
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined4 *)(in_stack_00000070 + 0x44) = 0;
    uVar3 = 0x14;
  }
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000028 == 0) || (lVar1 = FUN_054a9814(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0554fe30(lVar1,0);
  }
  if ((uVar3 < 0x1d) && ((1 << (ulong)uVar3 & 0x10100001U) != 0)) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05410914(unaff_x19 + 2,0);
  }
  return;
}


