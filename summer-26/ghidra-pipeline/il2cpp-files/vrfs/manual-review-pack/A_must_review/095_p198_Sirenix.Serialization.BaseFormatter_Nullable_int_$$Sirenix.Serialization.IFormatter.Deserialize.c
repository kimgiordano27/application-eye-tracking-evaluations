/*
FUNCTION_NAME: Sirenix.Serialization.BaseFormatter<Nullable<int>>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 04f524e4
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


long Sirenix_Serialization_BaseFormatter<Nullable<int>>__Sirenix_Serialization_IFormatter_Deserialize
               (void)

{
  undefined *puVar1;
  long lVar2;
  uint in_w8;
  long *unaff_x23;
  long unaff_x25;
  
  if (1 < in_w8) {
    ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock();
    if (2 < *(uint *)(unaff_x25 + 0x18)) {
      ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock();
      if (3 < *(uint *)(unaff_x25 + 0x18)) {
        ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock();
        puVar1 = PTR_DAT_06dbb650;
        if (unaff_x23 != (long *)0x0) {
          (**(code **)(*unaff_x23 + 0x3c8))();
          lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            FUN_01e0d5cc();
            return lVar2;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


