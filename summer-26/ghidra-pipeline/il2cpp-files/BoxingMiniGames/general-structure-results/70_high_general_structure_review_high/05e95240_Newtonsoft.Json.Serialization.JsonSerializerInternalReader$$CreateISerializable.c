/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 05e95240
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = 0;
  lVar7 = 0x20;
  while (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
    lVar5 = *(long *)(unaff_x19 + lVar7);
    if (lVar5 == 0) {
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar2 = thunk_FUN_0367fe20();
      uVar3 = thunk_FUN_036aa1c8(PTR_DAT_079ff128);
      uVar4 = thunk_FUN_036aa1c8(PTR_DAT_079ff130);
      FUN_05d7e218(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a17d28);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar2,uVar3);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar1 = thunk_FUN_0367fd24(lVar5,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar1 == 0) {
      uVar2 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar2,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= uVar6) break;
    *(long *)((long)unaff_x21 + lVar7) = lVar5;
    thunk_FUN_036b7ad0((long)unaff_x21 + lVar7,lVar5);
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 8;
    if (unaff_w20 == uVar6) {
      FUN_05e9537c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


