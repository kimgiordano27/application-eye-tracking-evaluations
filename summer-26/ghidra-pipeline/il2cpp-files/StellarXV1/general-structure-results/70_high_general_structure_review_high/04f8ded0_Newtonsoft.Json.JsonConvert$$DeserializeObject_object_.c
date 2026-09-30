/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 04f8ded0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonConvert__DeserializeObject<object>(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w23;
  
                    /* try { // try from 04f8ded0 to 0508dedb has its CatchHandler @ 04f8df24 */
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 04f8def4 to 0508def7 has its CatchHandler @ 04f8df18 */
                    /* try { // try from 04f8def8 to 0508defb has its CatchHandler @ 04f8df14 */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092860c0) {
                    /* catch() { ... } // from try @ 04f8ddf4 with catch @ 04f8df18
                       catch() { ... } // from try @ 04f8def4 with catch @ 04f8df18 */
                    /* catch() { ... } // from try @ 04f8dde8 with catch @ 04f8df1c */
                    /* catch() { ... } // from try @ 04f8ddb4 with catch @ 04f8df20 */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_04f8df24;
      }
                    /* catch() { ... } // from try @ 04f8de24 with catch @ 04f8defc
                       try { // try from 04f8defc to 0508df43 has its CatchHandler @ 04f8dd58 */
      uVar3 = uVar3 - 1;
                    /* catch() { ... } // from try @ 04f8de5c with catch @ 04f8df00 */
      piVar4 = piVar4 + 4;
                    /* catch() { ... } // from try @ 04f8de04 with catch @ 04f8df04 */
    } while (uVar3 != 0);
  }
                    /* catch() { ... } // from try @ 04f8de70 with catch @ 04f8df08 */
                    /* catch() { ... } // from try @ 04f8deb8 with catch @ 04f8df0c */
                    /* catch() { ... } // from try @ 04f8dea8 with catch @ 04f8df10 */
  puVar1 = (undefined8 *)FUN_040b1e00();
                    /* catch() { ... } // from try @ 04f8de44 with catch @ 04f8df14
                       catch() { ... } // from try @ 04f8def8 with catch @ 04f8df14 */
LAB_04f8df24:
                    /* catch() { ... } // from try @ 04f8ded0 with catch @ 04f8df24 */
                    /* catch() { ... } // from try @ 04f8ddcc with catch @ 04f8df28 */
                    /* catch() { ... } // from try @ 04f8dda8 with catch @ 04f8df2c */
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
                    /* try { // try from 04f8df44 to 0508df5b has its CatchHandler @ 04f8dfb4 */
    return unaff_w23 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


