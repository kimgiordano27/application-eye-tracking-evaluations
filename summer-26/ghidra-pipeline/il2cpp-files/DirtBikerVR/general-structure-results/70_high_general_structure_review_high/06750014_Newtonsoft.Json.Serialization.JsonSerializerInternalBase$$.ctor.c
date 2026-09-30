/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 06750014
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  undefined4 uVar4;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xac4) = in_w8;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06762bd8(0x30,0);
  }
  if (DAT_089760b7 == '\0') {
    FUN_03a8a718(PTR_DAT_08493e18);
    DAT_089760b7 = '\x01';
  }
  puVar1 = PTR_DAT_084a5b08;
  if (unaff_x20 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_065cab58();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  }
                    /* try { // try from 06750074 to 0685007f has its CatchHandler @ 067500a4 */
  uVar3 = FUN_066d0fa4();
                    /* try { // try from 06750080 to 06850083 has its CatchHandler @ 06750098 */
                    /* try { // try from 06750084 to 06850087 has its CatchHandler @ 06750094 */
                    /* try { // try from 06750088 to 0685008b has its CatchHandler @ 067500a4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0675008c to 068500c3 has its CatchHandler @ 0674fd94 */
    thunk_FUN_03ae8be4(*(long *)puVar1);
  }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06750084 with catch @ 06750094
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06750080 with catch @ 06750098
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0674ff2c with catch @ 0675009c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0674fec8 with catch @ 067500a0
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06750074 with catch @ 067500a4
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 06750088 with catch @ 067500a4
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0674ff5c with catch @ 067500a8
                        */
  Newtonsoft_Json_Serialization_JsonProperty__set_ItemReferenceLoopHandling(uVar2,uVar4,7,uVar3);
  return;
}


