/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 058b95c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling
                (short *param_1,ulong param_2)

{
  undefined1 in_ZR;
  long in_x9;
  int iVar1;
  long lVar2;
  short *psVar3;
  int unaff_w19;
  long unaff_x20;
  int iVar4;
  ulong unaff_x24;
  uint unaff_w25;
  
  do {
    iVar4 = (int)unaff_x24;
    if ((bool)in_ZR) {
      iVar1 = 1;
      lVar2 = in_x9;
      psVar3 = param_1;
      if (1 < unaff_w19) {
        while (*(short *)(unaff_x20 + (long)(iVar4 + iVar1) * 2) == *psVar3) {
          iVar1 = iVar1 + 1;
          lVar2 = lVar2 + -1;
          psVar3 = psVar3 + 1;
          if (lVar2 == 0) goto FUN_058b961c;
        }
      }
      if (iVar1 == unaff_w19) {
FUN_058b961c:
        return unaff_x24 & 0xffffffff;
      }
    }
    unaff_x24 = (ulong)(iVar4 - 1);
    if (iVar4 < 1) {
      return param_2;
    }
    in_ZR = *(ushort *)(unaff_x20 + unaff_x24 * 2) == unaff_w25;
  } while( true );
}


