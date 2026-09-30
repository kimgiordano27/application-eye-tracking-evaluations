/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 056099b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject
               (undefined1 param_1 [16],long param_2)

{
  uint uVar1;
  long *unaff_x19;
  undefined4 unaff_w25;
  uint unaff_w26;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar3 = param_1._8_8_;
  uVar2 = param_1._0_8_;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x98) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar2;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_05609648();
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_05483054(unaff_x29 + -0xd0,&uStack_40,0x20,0);
  if ((unaff_w26 & 0xffff) == 0) {
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_05605278(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
  }
  else {
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_05604ce8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w26,unaff_w25,
                 *(undefined8 *)(unaff_x29 + -0xd8),0);
  }
  uVar1 = System_IO_Stream_NullStream__get_Position(unaff_x29 + -0xd0);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


