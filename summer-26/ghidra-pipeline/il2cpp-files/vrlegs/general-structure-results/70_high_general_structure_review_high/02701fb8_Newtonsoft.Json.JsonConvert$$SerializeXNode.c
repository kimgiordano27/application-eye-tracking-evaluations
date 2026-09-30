/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 02701fb8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  int iStack0000000000000014;
  long lStack0000000000000018;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xbc8));
  FUN_01ab69ac(PTR_DAT_03cf7ba8);
  *(undefined1 *)(unaff_x23 + 0x796) = 1;
  lStack0000000000000018 = 0;
  iStack0000000000000014 = 0;
  *unaff_x19 = 0;
  *unaff_x20 = unaff_x22;
  unaff_x20[1] = unaff_x21;
  *(undefined4 *)((long)unaff_x20 + 0x14) = 0xffffffff;
  *(int *)(unaff_x20 + 3) = (int)unaff_x21;
  do {
    do {
      FUN_02702460();
      sVar1 = *(short *)(unaff_x20 + 2);
    } while (sVar1 == 9);
  } while (sVar1 == 0x20);
  if (sVar1 == 0x2d) {
    FUN_02702460();
  }
  sVar2 = FUN_027024ac();
  if (sVar2 == 0x3a) {
    uVar3 = FUN_02702538();
joined_r0x027020ac:
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar3 = FUN_027026f8();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lStack0000000000000018 = (long)iStack0000000000000014 * 864000000000;
    if (*(short *)(unaff_x20 + 2) == 0x2e) {
      FUN_02702460();
      uVar3 = FUN_02702538();
      goto joined_r0x027020ac;
    }
  }
  if (sVar1 != 0x2d) {
    if (lStack0000000000000018 < 0) goto Newtonsoft_Json_JsonConvert__DeserializeXNode;
  }
  else {
    lStack0000000000000018 = -lStack0000000000000018;
    if (0 < lStack0000000000000018) goto Newtonsoft_Json_JsonConvert__DeserializeXNode;
  }
  while ((*(short *)(unaff_x20 + 2) == 9 || (*(short *)(unaff_x20 + 2) == 0x20))) {
    FUN_02702460();
  }
  if (*(int *)(unaff_x20 + 3) <= *(int *)((long)unaff_x20 + 0x14)) {
    *unaff_x19 = lStack0000000000000018;
    return 1;
  }
Newtonsoft_Json_JsonConvert__DeserializeXNode:
  FUN_026fcec8();
  return 0;
}


