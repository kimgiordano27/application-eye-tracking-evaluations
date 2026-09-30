/*
FUNCTION_NAME: Sirenix.Serialization.BaseFormatter<Nullable<int>>$$Deserialize
ENTRY_POINT: 04f52534
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Sirenix_Serialization_BaseFormatter<Nullable<int>>__Deserialize(void)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x23;
  long unaff_x25;
  
  ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock();
  if (*(uint *)(unaff_x25 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 04f52368 with catch @ 04f5260c
                       catch() { ... } // from try @ 04f523b8 with catch @ 04f5260c
                       catch() { ... } // from try @ 04f5257c with catch @ 04f5260c */
    FUN_0160eebc();
  }
                    /* try { // try from 04f5257c to 0505257f has its CatchHandler @ 04f5260c */
                    /* try { // try from 04f52580 to 050525a7 has its CatchHandler @ 04f52608 */
  ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock();
  puVar1 = PTR_DAT_06dbb650;
  if (unaff_x23 != (long *)0x0) {
                    /* try { // try from 04f525a8 to 050525b3 has its CatchHandler @ 04f52600 */
    (**(code **)(*unaff_x23 + 0x3c8))();
                    /* try { // try from 04f525b8 to 050525d3 has its CatchHandler @ 04f52604 */
    lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
                    /* try { // try from 04f525d4 to 050525d7 has its CatchHandler @ 04f52608 */
                    /* try { // try from 04f525d8 to 050525ff has its CatchHandler @ 04f52604 */
      FUN_01e0d5cc();
                    /* catch() { ... } // from try @ 04f525a8 with catch @ 04f52600
                       try { // try from 04f52600 to 0505266f has its CatchHandler @ 04f51f1c */
                    /* catch() { ... } // from try @ 04f525b8 with catch @ 04f52604
                       catch() { ... } // from try @ 04f525d8 with catch @ 04f52604 */
                    /* catch() { ... } // from try @ 04f523c0 with catch @ 04f52608
                       catch() { ... } // from try @ 04f52580 with catch @ 04f52608
                       catch() { ... } // from try @ 04f525d4 with catch @ 04f52608 */
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 04f52310 with catch @ 04f52610
                       catch() { ... } // from try @ 04f52340 with catch @ 04f52610
                       catch() { ... } // from try @ 04f523a0 with catch @ 04f52610 */
  FUN_0160eeb4();
}


