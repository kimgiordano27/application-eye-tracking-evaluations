/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 058ae6f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonConvert__SerializeObject(ushort *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_w8;
  ushort *in_x9;
  
  do {
    in_w8 = in_w8 + 1;
    puVar3 = param_1;
    do {
      while( true ) {
        if (in_x9 <= puVar3) {
          if (in_w8 < 3) {
            iVar1 = param_2 + 3;
            if (-1 < param_2) {
              iVar1 = param_2;
            }
            return *(int *)(&DAT_014aa90c + (long)(int)in_w8 * 4) + (iVar1 >> 2) * 3;
          }
          thunk_FUN_032e1da0(PTR_DAT_0728f6d0);
          uVar4 = thunk_FUN_032a56a0();
          uVar5 = thunk_FUN_032e1da0(PTR_DAT_07296c88);
          FUN_0590c438(uVar4,uVar5,0);
          uVar5 = thunk_FUN_032e1da0(PTR_DAT_07296ca8);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar4,uVar5);
        }
        param_1 = puVar3 + 1;
        uVar2 = *puVar3;
        puVar3 = param_1;
        if (0x20 < uVar2) break;
        param_2 = param_2 + -1;
      }
    } while (uVar2 != 0x3d);
    param_2 = param_2 + -1;
  } while( true );
}


