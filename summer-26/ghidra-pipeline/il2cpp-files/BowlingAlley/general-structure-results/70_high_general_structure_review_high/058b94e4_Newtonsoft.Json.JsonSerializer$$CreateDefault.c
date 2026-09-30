/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 058b94e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__CreateDefault(void)

{
  uint uVar1;
  ushort uVar2;
  uint in_w8;
  uint in_w10;
  int unaff_w19;
  long unaff_x20;
  ushort *unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  int iVar3;
  ulong unaff_x24;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  ushort *unaff_x28;
  
  do {
    if (in_w10 - 0x61 < 0x1a) {
      in_w10 = in_w10 - 0x20;
    }
    if ((in_w8 & 0xffff) == (in_w10 & 0xffff)) {
      unaff_w26 = unaff_w26 + 1;
      unaff_x27 = unaff_x27 + -1;
      unaff_x28 = unaff_x28 + 1;
      if (unaff_x27 == 0) {
FUN_058b961c:
        return unaff_x24 & 0xffffffff;
      }
    }
    else {
      do {
        if (unaff_w26 == unaff_w19) goto FUN_058b961c;
        do {
          iVar3 = (int)unaff_x24;
          unaff_x24 = (ulong)(iVar3 - 1);
          if (iVar3 < 1) {
            return 0xffffffff;
          }
          uVar2 = *(ushort *)(unaff_x20 + unaff_x24 * 2);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar1 = (uint)uVar2;
          if (uVar2 - 0x61 < 0x1a) {
            uVar1 = uVar2 - 0x20;
          }
        } while ((uVar1 & 0xffff) != (unaff_w23 & 0xffff));
        unaff_w26 = 1;
        unaff_x27 = unaff_x25;
        unaff_x28 = unaff_x21;
      } while (unaff_w19 < 2);
    }
    uVar2 = *(ushort *)(unaff_x20 + (long)((int)unaff_x24 + unaff_w26) * 2);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    in_w10 = (uint)*unaff_x28;
    in_w8 = (uint)uVar2;
    if (uVar2 - 0x61 < 0x1a) {
      in_w8 = uVar2 - 0x20;
    }
  } while( true );
}


