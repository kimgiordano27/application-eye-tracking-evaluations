/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 05e9d44c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long *unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 auVar6 [16];
  undefined *puVar5;
  
  *(undefined1 *)(unaff_x26 + 0x1e5) = 1;
  puVar1 = PTR_DAT_07a0b8b0;
  puVar5 = PTR_DAT_079fe5f8;
  if ((unaff_x25 == 0) || (unaff_x24 == 0)) {
    puVar5 = PTR_DAT_079ff530;
    if (unaff_x25 != 0) {
      puVar5 = PTR_DAT_07a0b8a0;
    }
    uVar2 = thunk_FUN_036aa1c8(puVar5);
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar4 = thunk_FUN_0367fe20();
    uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a0b8c0);
    FUN_05d86244(uVar4,uVar2,uVar3,0);
  }
  else {
    if (-1 < (int)(unaff_w19 | unaff_w22)) {
      if ((int)(*(int *)(unaff_x25 + 0x18) - unaff_w22) < (int)unaff_w19) {
        thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
        uVar2 = thunk_FUN_0367fe20();
        uVar3 = thunk_FUN_036aa1c8(PTR_DAT_079ff530);
        puVar5 = PTR_DAT_07a0b6d0;
      }
      else {
        if (-1 < unaff_w23) {
          if (unaff_w23 <= *(int *)(unaff_x24 + 0x18)) {
            auVar6 = FUN_04e658dc();
            FUN_03daae28(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar5);
            auVar6 = FUN_04e66994();
            FUN_03daae30(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar1);
                    /* WARNING: Could not recover jumptable at 0x05e9d50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x21 + 0x1d8))();
            return;
          }
        }
        thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
        uVar2 = thunk_FUN_0367fe20();
        uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a0b8e8);
        puVar5 = PTR_DAT_079fd430;
      }
      uVar4 = thunk_FUN_036aa1c8(puVar5);
      FUN_05d81a8c(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a18010);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar2,uVar3);
    }
    puVar5 = PTR_DAT_07a0b900;
    if ((int)unaff_w22 < 0) {
      puVar5 = PTR_DAT_07a0b8e0;
    }
    uVar2 = thunk_FUN_036aa1c8(puVar5);
    thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
    uVar4 = thunk_FUN_0367fe20();
    uVar3 = thunk_FUN_036aa1c8(PTR_DAT_079fd440);
    FUN_05d81a8c(uVar4,uVar2,uVar3,0);
  }
  uVar2 = thunk_FUN_036aa1c8(PTR_DAT_07a18010);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar4,uVar2);
}


