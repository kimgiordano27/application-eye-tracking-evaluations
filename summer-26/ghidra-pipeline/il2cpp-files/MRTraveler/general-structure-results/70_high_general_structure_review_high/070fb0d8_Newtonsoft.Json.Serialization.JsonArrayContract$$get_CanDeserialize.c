/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_CanDeserialize
ENTRY_POINT: 070fb0d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x070fb284) */
/* WARNING: Removing unreachable block (ram,0x070fb234) */
/* WARNING: Removing unreachable block (ram,0x070fb25c) */
/* WARNING: Removing unreachable block (ram,0x070fb2ac) */
/* WARNING: Removing unreachable block (ram,0x070fb124) */

bool Newtonsoft_Json_Serialization_JsonArrayContract__get_CanDeserialize(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  undefined2 unaff_w25;
  
  uVar2 = 0x26;
  if (unaff_w20 < 0x26) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined2 *)FUN_0470d560();
    *puVar1 = unaff_w25;
    FUN_070fadc8(puVar1 + 1,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
    FUN_070fadc8(puVar1 + 5,*unaff_x21 >> 8);
    puVar1[9] = 0x2d;
    FUN_070fadc8(puVar1 + 10,(int)(short)unaff_x21[1] >> 8);
    puVar1[0xe] = 0x2d;
    FUN_070fadc8(puVar1 + 0xf,(int)*(short *)((long)unaff_x21 + 6) >> 8);
    puVar1[0x13] = 0x2d;
    FUN_070fadc8(puVar1 + 0x14,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
    puVar1[0x18] = 0x2d;
    FUN_070fadc8(puVar1 + 0x19,*(undefined1 *)((long)unaff_x21 + 10),
                 *(undefined1 *)((long)unaff_x21 + 0xb));
    FUN_070fadc8(puVar1 + 0x1d,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
    FUN_070fadc8(puVar1 + 0x21,*(undefined1 *)((long)unaff_x21 + 0xe),
                 *(undefined1 *)((long)unaff_x21 + 0xf));
    puVar1[0x25] = 0x7d;
  }
  *unaff_x19 = uVar2;
  return 0x25 < unaff_w20;
}


