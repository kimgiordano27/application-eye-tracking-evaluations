/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
ENTRY_POINT: 01bbeca4
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  puVar1 = PTR_DAT_06dee988;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  FUN_020029c0(&stack0x00000030,param_2,0,param_4,*unaff_x25);
  in_stack_00000028 = uStack0000000000000038;
  in_stack_00000020 = uStack0000000000000030;
  uVar2 = thunk_FUN_015d01b0(*(undefined8 *)puVar1,&stack0x00000020);
  lVar3 = thunk_FUN_015d056c(*unaff_x23);
  if (lVar3 != 0) {
    FUN_02d76b34(lVar3,0);
    FUN_01bbf374(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x30) = lVar3;
    thunk_FUN_01656ef8((long *)(unaff_x20 + 0x30),lVar3);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_020029c0(&stack0x00000010,*(undefined8 *)(unaff_x20 + 0x28),
                 *(undefined4 *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x20 + 0x44),*unaff_x25);
    uVar2 = thunk_FUN_015d01b0(*(undefined8 *)puVar1);
    lVar3 = thunk_FUN_015d056c(*unaff_x23);
    if (lVar3 != 0) {
      FUN_02d76b34(lVar3,0);
      FUN_01bbf374(lVar3,uVar2);
      *(long *)(unaff_x20 + 0x38) = lVar3;
      thunk_FUN_01656ef8((long *)(unaff_x20 + 0x38),lVar3);
      *(undefined1 *)(unaff_x19 + 0x14) = 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


