/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 04f2c45c
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject(long param_1)

{
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  int unaff_w23;
  uint uVar1;
  int iVar2;
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 auVar3 [12];
  undefined1 auVar5 [16];
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  auVar7._8_8_ = in_stack_00000008;
  auVar7._0_8_ = in_stack_00000000;
  auVar4._8_8_ = in_stack_00000008;
  auVar4._0_8_ = in_stack_00000000;
  auVar6._0_4_ = -_DAT_013dc470;
  auVar6._4_4_ = -_UNK_013dc474;
  auVar6._8_4_ = -_UNK_013dc478;
  auVar6._12_4_ = -_UNK_013dc47c;
  auVar4 = NEON_ushl(auVar4,_DAT_013dcd90,4);
  auVar7 = NEON_ushl(auVar7,auVar6,4);
  iVar2 = CONCAT13(auVar4[3] | auVar7[3],
                   CONCAT12(auVar4[2] | auVar7[2],
                            CONCAT11(auVar4[1] | auVar7[1],auVar4[0] | auVar7[0])));
  auVar3._0_8_ = CONCAT17(auVar4[7] | auVar7[7],
                          CONCAT16(auVar4[6] | auVar7[6],
                                   CONCAT15(auVar4[5] | auVar7[5],
                                            CONCAT14(auVar4[4] | auVar7[4],iVar2))));
  auVar3[8] = auVar4[8] | auVar7[8];
  auVar3[9] = auVar4[9] | auVar7[9];
  auVar3[10] = auVar4[10] | auVar7[10];
  auVar3[0xb] = auVar4[0xb] | auVar7[0xb];
  auVar5[0xc] = auVar4[0xc] | auVar7[0xc];
  auVar5._0_12_ = auVar3;
  auVar5[0xd] = auVar4[0xd] | auVar7[0xd];
  auVar5[0xe] = auVar4[0xe] | auVar7[0xe];
  auVar5[0xf] = auVar4[0xf] | auVar7[0xf];
  uVar1 = iVar2 + (int)((ulong)auVar3._0_8_ >> 0x20) + auVar3._8_4_ + auVar5._12_4_ + unaff_w23 * 4;
  if (unaff_w21 != 0) {
    iVar2 = *(int *)(unaff_x19 + 0x10);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6975b == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd308);
      DAT_06a6975b = '\x01';
    }
    uVar1 = uVar1 + iVar2 * -0x3d4d51c3;
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = (uVar1 >> 0xf | uVar1 * 0x20000) * 0x27d4eb2f;
    if (1 < unaff_w21) {
      iVar2 = *(int *)(unaff_x19 + 0x14);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6975b == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd308);
        DAT_06a6975b = '\x01';
      }
      uVar1 = uVar1 + iVar2 * -0x3d4d51c3;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar1 = (uVar1 >> 0xf | uVar1 * 0x20000) * 0x27d4eb2f;
      if (unaff_w21 == 3) {
        iVar2 = *(int *)(unaff_x19 + 0x18);
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (DAT_06a6975b == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd308);
          DAT_06a6975b = '\x01';
        }
        uVar1 = uVar1 + iVar2 * -0x3d4d51c3;
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar1 = (uVar1 >> 0xf | uVar1 * 0x20000) * 0x27d4eb2f;
      }
    }
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar1 = (uVar1 ^ uVar1 >> 0xf) * -0x7a143589;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51c3;
  return uVar1 ^ uVar1 >> 0x10;
}


