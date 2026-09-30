/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 05e55268
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint unaff_w19;
  long unaff_x21;
  int iVar4;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  int iStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  int iStack0000000000000088;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x490));
  FUN_03642964(PTR_DAT_07a16480);
  FUN_03642964(PTR_DAT_07a16488);
  FUN_03642964(PTR_DAT_07a164d0);
  FUN_03642964(PTR_DAT_07a164d8);
  FUN_03642964(PTR_DAT_07a164e0);
  FUN_03642964(PTR_DAT_07a164e8);
  FUN_03642964(PTR_DAT_07a164f0);
  FUN_03642964(PTR_DAT_07a164f8);
  FUN_03642964(PTR_DAT_07a0e158);
  FUN_03642964(PTR_DAT_07a15fc8);
  *(undefined1 *)(unaff_x23 + 0xeca) = 1;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  _iStack0000000000000088 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  _iStack0000000000000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  _iStack0000000000000058 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  _iStack0000000000000040 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  _iStack0000000000000028 = 0;
  if (unaff_x21 == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar1 = thunk_FUN_0367fe20();
    FUN_05d861e8(uVar1,0);
    uVar2 = thunk_FUN_036aa1c8(PTR_DAT_07a16560);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar1,uVar2);
  }
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  _iStack0000000000000088 = 0;
  in_stack_00000068 = 0;
  _iStack0000000000000070 = 0;
  _iStack0000000000000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  _iStack0000000000000040 = 0;
  _iStack0000000000000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  if ((unaff_w19 >> 3 & 1) == 0) {
    iVar4 = 0;
joined_r0x05e553a8:
    if ((unaff_w19 & 1) != 0) {
      FUN_05e525c8(&stack0x00000060);
      if (unaff_w19 == 1) goto LAB_05e554e0;
      iVar4 = iStack0000000000000070 + iVar4;
    }
    if ((unaff_w19 >> 4 & 1) != 0) {
      FUN_05e52a7c(&stack0x00000048);
      if (unaff_w19 == 0x10) goto LAB_05e554e0;
      iVar4 = iStack0000000000000058 + iVar4;
    }
    if ((unaff_w19 >> 1 & 1) != 0) {
      FUN_05e52f64(&stack0x00000030);
      if (unaff_w19 == 2) goto LAB_05e554e0;
      iVar4 = iStack0000000000000040 + iVar4;
    }
    if ((unaff_w19 >> 2 & 1) != 0) {
      FUN_05e53398(&stack0x00000018);
      if (unaff_w19 == 4) goto LAB_05e554e0;
      iVar4 = iStack0000000000000028 + iVar4;
    }
    if ((unaff_w19 & 0xa0) == 0) {
      puVar3 = (undefined8 *)PTR_DAT_07a15fc8;
      if (unaff_w19 != 9) {
        puVar3 = (undefined8 *)PTR_DAT_07a0e158;
      }
    }
    else {
      FUN_05e5384c();
      if ((unaff_w19 == 0x80) || (puVar3 = (undefined8 *)PTR_DAT_07a0e158, unaff_w19 == 0x20))
      goto LAB_05e554e0;
    }
    uVar1 = FUN_03642a4c(*puVar3,iVar4);
    FUN_0440bec4(&stack0x00000078,uVar1,0,*(undefined8 *)PTR_DAT_07a164a0);
    iVar4 = iStack0000000000000088;
    FUN_0440bec4(&stack0x00000060,uVar1,_iStack0000000000000088 & 0xffffffff,
                 *(undefined8 *)PTR_DAT_07a164a8);
    iVar4 = iStack0000000000000070 + iVar4;
    FUN_0440bec4(&stack0x00000048,uVar1,iVar4,*(undefined8 *)PTR_DAT_07a164b0);
    iVar4 = iStack0000000000000058 + iVar4;
    FUN_0440bec4(&stack0x00000030,uVar1,iVar4,*(undefined8 *)PTR_DAT_07a164b8);
    FUN_0440bec4(&stack0x00000018,uVar1,iStack0000000000000040 + iVar4,
                 *(undefined8 *)PTR_DAT_07a164c0);
    FUN_0440bec4();
  }
  else {
    FUN_05e5208c(&stack0x00000078);
    if (unaff_w19 != 8) {
      iVar4 = iStack0000000000000088;
      goto joined_r0x05e553a8;
    }
LAB_05e554e0:
    uVar1 = FUN_0440bda8();
  }
  return uVar1;
}


