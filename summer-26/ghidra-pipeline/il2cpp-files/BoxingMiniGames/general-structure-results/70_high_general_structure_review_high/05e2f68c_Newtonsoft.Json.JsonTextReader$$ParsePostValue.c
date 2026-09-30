/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 05e2f68c
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


long Newtonsoft_Json_JsonTextReader__ParsePostValue(ulong param_1,double param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong in_x9;
  double dVar4;
  
  if ((in_x9 & 0x7fffffffffffffff) < (param_1 & 0xffffffffffff | 0x7ff0000000000000)) {
    dVar4 = -0.5;
    if (0.0 <= param_2) {
      dVar4 = 0.5;
    }
    dVar4 = dVar4 + (double)param_3 * param_2;
    if ((dVar4 <= DAT_0164ff50) && (DAT_0164f950 <= dVar4)) {
      lVar1 = 0;
      if (dVar4 != INFINITY) {
        lVar1 = (long)dVar4 * 10000;
      }
      return lVar1;
    }
    thunk_FUN_036aa1c8(PTR_DAT_079fc228);
    uVar2 = thunk_FUN_0367fe20();
    uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a155f0);
    FUN_05e272f8(uVar2,uVar3);
  }
  else {
    thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
    uVar2 = thunk_FUN_0367fe20();
    uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a15620);
    FUN_05d84c94(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a15628);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar3);
}


