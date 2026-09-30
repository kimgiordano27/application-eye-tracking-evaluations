/*
FUNCTION_NAME: Sirenix.Serialization.BaseFormatter<Nullable<int>>$$Sirenix.Serialization.IFormatter.Serialize
ENTRY_POINT: 04f52444
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Sirenix_Serialization_BaseFormatter<Nullable<int>>__Sirenix_Serialization_IFormatter_Serialize
               (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x23;
  long unaff_x25;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x7b0));
  *(undefined1 *)(unaff_x25 + 0xe43) = 1;
  FUN_01ab9d14();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  plVar2 = (long *)FUN_04f51dd0();
  lVar3 = FUN_01ab9528(plVar2,0x11,0);
  FUN_01ab95bc(plVar2,0x11,4,lVar3,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock(plVar2,0x11);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock(plVar2,0x11);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock(plVar2,0x11);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock(plVar2,0x11);
            puVar1 = PTR_DAT_06dbb650;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
              lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                FUN_01e0d5cc();
                return lVar3;
              }
            }
            goto LAB_04f52610;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_04f52610:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


