/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateParseHandling
ENTRY_POINT: 05e278ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_DateParseHandling(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w27;
  uint uStack000000000000000c;
  
  uStack000000000000000c = unaff_w25;
  if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
     (uVar1 = unaff_w25 + 1, (int)uVar1 < (int)unaff_w21)) {
    if (unaff_w21 <= unaff_w25) {
LAB_05e27988:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
      if (unaff_w21 <= uVar1) goto LAB_05e27988;
      if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
        uStack000000000000000c = unaff_w25 + 2;
        unaff_w22 = 0x10;
      }
    }
  }
  uVar1 = uStack000000000000000c;
  lVar2 = FUN_05e27bd0(unaff_w22);
  if (uStack000000000000000c == uVar1) {
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar3 = thunk_FUN_0367fe20();
    puVar4 = PTR_DAT_07a15418;
  }
  else {
    if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)uStack000000000000000c)) {
      *unaff_x20 = uStack000000000000000c;
      if (lVar2 != -0x8000000000000000) {
        unaff_w27 = 1;
      }
      if (((unaff_w22 != 10) || ((unaff_w19 >> 9 & 1) != 0)) || (unaff_w27 != 0)) {
        return lVar2;
      }
      thunk_FUN_036aa1c8(PTR_DAT_079fc228);
      uVar3 = thunk_FUN_0367fe20();
      uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a11720);
      FUN_05e272f8(uVar3,uVar5);
      goto LAB_05e27ab4;
    }
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar3 = thunk_FUN_0367fe20();
    puVar4 = PTR_DAT_07a15038;
  }
  uVar5 = thunk_FUN_036aa1c8(puVar4);
  FUN_05dffe0c(uVar3,uVar5,0);
LAB_05e27ab4:
  uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a15438);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,uVar5);
}


