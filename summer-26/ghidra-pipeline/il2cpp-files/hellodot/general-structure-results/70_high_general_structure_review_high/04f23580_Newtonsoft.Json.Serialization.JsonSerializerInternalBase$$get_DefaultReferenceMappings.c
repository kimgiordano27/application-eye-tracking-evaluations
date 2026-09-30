/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 04f23580
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  uint unaff_w20;
  uint uVar5;
  long unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f8488);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9598);
                    /* try { // try from 04f2359c to 0502359f has its CatchHandler @ 04f236dc */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c98d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f6dc8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fad08);
                    /* try { // try from 04f235bc to 050235c3 has its CatchHandler @ 04f236e0 */
  *(undefined1 *)(unaff_x22 + 0x5af) = 1;
  puVar1 = PTR_DAT_065c98d0;
                    /* try { // try from 04f235c4 to 05023653 has its CatchHandler @ 04f22bd8 */
  if ((*(byte *)(unaff_x19 + 0x25) >> 3 & 1) != 0) {
                    /* try { // try from 04f23654 to 05023657 has its CatchHandler @ 04f236f4 */
                    /* try { // try from 04f23658 to 0502366b has its CatchHandler @ 04f22bd8 */
    if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
                    /* try { // try from 04f2366c to 0502366f has its CatchHandler @ 04f236e4 */
                    /* try { // try from 04f23670 to 0502370f has its CatchHandler @ 04f22bd8 */
    uVar4 = FUN_04f237a8();
    return uVar4;
  }
  if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (0xeab17b6000 < *(long *)(unaff_x19 + 0x28) + 504000000000U) {
    FUN_04f290dc();
    uVar5 = 0;
    goto LAB_04f23698;
  }
  uVar5 = *(uint *)(unaff_x19 + 0x24);
  if ((uVar5 >> 8 & 1) == 0) {
    if ((unaff_w20 >> 5 & 1) != 0) {
      if ((unaff_w20 >> 4 & 1) == 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_065c9598 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar3 = FUN_04f1174c(uVar3,2);
        *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
        goto LAB_04f236dc;
      }
                    /* catch() { ... } // from try @ 04f2366c with catch @ 04f236e4 */
                    /* catch() { ... } // from try @ 04f23534 with catch @ 04f236e8 */
      *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
                    /* catch() { ... } // from try @ 04f2351c with catch @ 04f236ec */
                    /* catch() { ... } // from try @ 04f23500 with catch @ 04f236f0 */
                    /* catch() { ... } // from try @ 04f23654 with catch @ 04f236f4 */
      uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_065f6dc8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_04e97680(uVar3,2,0);
LAB_04f23718:
      *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
      goto LAB_04f2371c;
    }
    if ((unaff_w20 >> 6 & 1) == 0) {
LAB_04f236dc:
                    /* catch() { ... } // from try @ 04f2359c with catch @ 04f236dc */
      uVar5 = 1;
                    /* catch() { ... } // from try @ 04f235bc with catch @ 04f236e0 */
      goto LAB_04f23698;
    }
    if ((unaff_w20 >> 4 & 1) == 0) {
      *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar2 = *(long *)puVar1;
      }
      uVar3 = **(undefined8 **)(lVar2 + 0xb8);
      goto LAB_04f23718;
    }
  }
  else {
LAB_04f2371c:
    if (((unaff_w20 >> 7 & 1) == 0) || ((*(byte *)(unaff_x19 + 0x25) >> 1 & 1) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((unaff_w20 >> 4 & 1) != 0) {
        uVar4 = FUN_04f239e0();
        return uVar4;
      }
      uVar4 = FUN_04f23b08();
      return uVar4;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_065c9598 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar5 = 1;
  uVar3 = FUN_04f1174c(uVar3,1);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
LAB_04f23698:
  return (ulong)uVar5;
}


