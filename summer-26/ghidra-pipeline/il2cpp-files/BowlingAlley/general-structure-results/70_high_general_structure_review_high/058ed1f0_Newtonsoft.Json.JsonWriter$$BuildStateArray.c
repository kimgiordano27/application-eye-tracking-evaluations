/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 058ed1f0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__BuildStateArray(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w9;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w28;
  int unaff_w29;
  int iStack000000000000000c;
  
  do {
    unaff_w29 = in_w9 * unaff_w29;
    while( true ) {
      uVar1 = FUN_057a62b4();
      uVar1 = uVar1 & 0xffff;
      if (uVar1 < 0x3a) {
        iVar3 = uVar1 - 0x16;
      }
      else if (uVar1 < 0x5b) {
        iVar3 = uVar1 - 0x41;
      }
      else if (uVar1 < 0x7b) {
        iVar3 = uVar1 - 0x61;
      }
      else {
        iVar3 = *(int *)(unaff_x21 + 0x14);
      }
      iVar2 = *(int *)(unaff_x21 + 0x18);
      if (*(int *)(unaff_x21 + 0x18) + unaff_w24 < unaff_w28) {
        iVar2 = unaff_w28 - unaff_w24;
        if (*(int *)(unaff_x21 + 0x1c) + unaff_w24 <= unaff_w28) {
          iVar2 = *(int *)(unaff_x21 + 0x1c);
        }
      }
      unaff_w25 = unaff_w25 + iVar3 * unaff_w29;
      if (iVar2 <= iVar3) break;
      FUN_057b7168();
      unaff_w24 = FUN_058ed3d0();
      iVar2 = FUN_057b7168();
      iVar3 = 0;
      if (iVar2 + 1 != 0) {
        iVar3 = unaff_w25 / (iVar2 + 1);
      }
      unaff_w22 = iVar3 + unaff_w22;
      iVar3 = FUN_057b7168();
      if (unaff_w22 < 0x80) {
        iStack000000000000000c = unaff_w19 + unaff_w26;
        uVar4 = thunk_FUN_032e1da0(PTR_DAT_07279558);
        uVar4 = thunk_FUN_032a52d0(uVar4,&stack0x0000000c);
        uVar5 = thunk_FUN_032e1da0(PTR_DAT_07299020);
        uVar4 = FUN_057a25c4(uVar5,uVar4,0);
        thunk_FUN_032e1da0(PTR_DAT_0727dd40);
        uVar5 = thunk_FUN_032a56a0();
        FUN_0589e7ac(uVar5,uVar4,0);
        uVar4 = thunk_FUN_032e1da0(PTR_DAT_07299028);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar5,uVar4);
      }
      iVar3 = iVar3 + 1;
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = unaff_w25 / iVar3;
      }
      FUN_057b8c5c();
      unaff_w25 = (unaff_w25 - iVar2 * iVar3) + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w26) {
                    /* WARNING: Could not recover jumptable at 0x058ed2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x23 + 0x168))();
        return;
      }
      unaff_w28 = *(int *)(unaff_x21 + 0x14);
      unaff_w26 = unaff_w26 + 1;
      unaff_w29 = 1;
    }
    unaff_w26 = unaff_w26 + 1;
    in_w9 = *(int *)(unaff_x21 + 0x14) - iVar2;
    unaff_w28 = *(int *)(unaff_x21 + 0x14) + unaff_w28;
  } while( true );
}


