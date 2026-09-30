/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 05932e60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(void)

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
  
  if (unaff_w21 <= unaff_w25) goto LAB_05932f84;
  sVar2 = *(short *)(unaff_x23 + (long)(int)unaff_w25 * 2);
  if (sVar2 == 0x2b) {
    unaff_w25 = unaff_w25 + 1;
    in_stack_00000008._4_4_ = unaff_w25;
LAB_05932eb0:
    bVar3 = false;
    lVar8 = 1;
LAB_05932eb4:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = unaff_w25 + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= unaff_w25) {
LAB_05932f84:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_05932f84;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w25 = unaff_w25 + 2;
          unaff_w22 = 0x10;
          in_stack_00000008._4_4_ = unaff_w25;
        }
      }
    }
    lVar4 = FUN_059331dc(unaff_w22);
    if (in_stack_00000008._4_4_ == unaff_w25) {
      thunk_FUN_032e1da0(PTR_DAT_0728f6d0);
      uVar5 = thunk_FUN_032a56a0();
      puVar7 = PTR_DAT_0729a1f0;
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
        thunk_FUN_032e1da0(PTR_DAT_0727ddc8);
        uVar5 = thunk_FUN_032a56a0();
        puVar7 = PTR_DAT_07296b68;
        goto LAB_059330a0;
      }
      thunk_FUN_032e1da0(PTR_DAT_0728f6d0);
      uVar5 = thunk_FUN_032a56a0();
      puVar7 = PTR_DAT_07299e38;
    }
    uVar6 = thunk_FUN_032e1da0(puVar7);
    FUN_0590c438(uVar5,uVar6,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_05932eb0;
    if (unaff_w22 != 10) {
      thunk_FUN_032e1da0(PTR_DAT_0727dd40);
      uVar5 = thunk_FUN_032a56a0();
      uVar6 = thunk_FUN_032e1da0(PTR_DAT_0729a200);
      FUN_0589e7ac(uVar5,uVar6,0);
      goto LAB_059330b0;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      unaff_w25 = unaff_w25 + 1;
      lVar8 = -1;
      bVar3 = true;
      in_stack_00000008._4_4_ = unaff_w25;
      goto LAB_05932eb4;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727ddc8);
    uVar5 = thunk_FUN_032a56a0();
    puVar7 = PTR_DAT_0729a208;
LAB_059330a0:
    uVar6 = thunk_FUN_032e1da0(puVar7);
    FUN_059328f4(uVar5,uVar6);
  }
LAB_059330b0:
  uVar6 = thunk_FUN_032e1da0(PTR_DAT_0729a210);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar5,uVar6);
}


