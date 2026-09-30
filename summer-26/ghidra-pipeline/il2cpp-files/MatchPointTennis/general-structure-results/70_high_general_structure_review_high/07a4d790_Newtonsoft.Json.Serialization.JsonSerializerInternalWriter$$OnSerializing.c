/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 07a4d790
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing(void)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined *puVar7;
  
  sVar2 = *(short *)(unaff_x23 + (long)(int)unaff_w25 * 2);
  if (sVar2 == 0x2b) {
    unaff_w25 = unaff_w25 + 1;
    in_stack_00000008._4_4_ = unaff_w25;
LAB_07a4d7d8:
    bVar3 = false;
    lVar8 = 1;
LAB_07a4d7dc:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = unaff_w25 + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= unaff_w25) {
LAB_07a4d8ac:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_07a4d8ac;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w25 = unaff_w25 + 2;
          unaff_w22 = 0x10;
          in_stack_00000008._4_4_ = unaff_w25;
        }
      }
    }
    lVar4 = FUN_07a4daf8(unaff_w22);
    if (in_stack_00000008._4_4_ == unaff_w25) {
      thunk_FUN_044adef4(PTR_DAT_09f39b78);
      uVar5 = thunk_FUN_0448520c();
      puVar7 = PTR_DAT_09f44f38;
    }
    else {
      if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)in_stack_00000008._4_4_)) {
        *unaff_x20 = in_stack_00000008._4_4_;
        if (((unaff_w19 >> 9 & 1) != 0) ||
           ((unaff_w22 != 10 || (bVar3 || lVar4 != -0x8000000000000000)))) {
          if (unaff_w22 != 10) {
            lVar8 = 1;
          }
          return lVar4 * lVar8;
        }
        thunk_FUN_044adef4(PTR_DAT_09f255e0);
        uVar5 = thunk_FUN_0448520c();
        puVar7 = PTR_DAT_09f40d80;
        goto LAB_07a4d9c8;
      }
      thunk_FUN_044adef4(PTR_DAT_09f39b78);
      uVar5 = thunk_FUN_0448520c();
      puVar7 = PTR_DAT_09f44b50;
    }
    uVar6 = thunk_FUN_044adef4(puVar7);
    FUN_07a26a04(uVar5,uVar6,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_07a4d7d8;
    if (unaff_w22 != 10) {
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar5 = thunk_FUN_0448520c();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09f44f48);
      FUN_0799d598(uVar5,uVar6,0);
      goto LAB_07a4d9d8;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      unaff_w25 = unaff_w25 + 1;
      lVar8 = -1;
      bVar3 = true;
      in_stack_00000008._4_4_ = unaff_w25;
      goto LAB_07a4d7dc;
    }
    thunk_FUN_044adef4(PTR_DAT_09f255e0);
    uVar5 = thunk_FUN_0448520c();
    puVar7 = PTR_DAT_09f44f50;
LAB_07a4d9c8:
    uVar6 = thunk_FUN_044adef4(puVar7);
    FUN_07a4d218(uVar5,uVar6);
  }
LAB_07a4d9d8:
  uVar6 = thunk_FUN_044adef4(PTR_DAT_09f44f58);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar5,uVar6);
}


