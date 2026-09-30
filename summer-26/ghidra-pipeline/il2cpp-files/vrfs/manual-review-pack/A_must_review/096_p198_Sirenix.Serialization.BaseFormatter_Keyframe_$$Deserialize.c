/*
FUNCTION_NAME: Sirenix.Serialization.BaseFormatter<Keyframe>$$Deserialize
ENTRY_POINT: 04f54d74
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


long Sirenix_Serialization_BaseFormatter<Keyframe>__Deserialize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x24;
  undefined8 *puVar9;
  long unaff_x28;
  
  puVar4 = PTR_DAT_06e216f0;
  puVar3 = PTR_DAT_06e0c7b0;
  puVar2 = PTR_DAT_06e07ec8;
  puVar1 = PTR_DAT_06de93f8;
  puVar9 = *(undefined8 **)(unaff_x24 + 0x848);
  if ((*(byte *)(unaff_x28 + 0xe5b) & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e07ec8);
    thunk_FUN_0159f088(PTR_DAT_06dc64a0);
    thunk_FUN_0159f088(PTR_DAT_06db5848);
    thunk_FUN_0159f088(PTR_DAT_06de93f8);
    thunk_FUN_0159f088(PTR_DAT_06e216f0);
    thunk_FUN_0159f088(PTR_DAT_06e0c7b0);
    *(undefined1 *)(unaff_x28 + 0xe5b) = 1;
  }
  FUN_01ab66a4(param_1,*puVar9,0);
  FUN_01ab66a4(param_2,*(undefined8 *)puVar1,0);
  FUN_01ab66a4(param_3,*(undefined8 *)puVar4,0);
  FUN_01ab66a4(param_4,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar5 = FUN_04f54cc0(0,param_1);
  FUN_01ab95bc(param_1,6,3,lVar5,0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      uVar6 = ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock
                        (param_1,6,param_2,*(undefined8 *)(lVar5 + 0x20),*puVar9,
                         *(undefined8 *)puVar1,0xffffffff,0);
      if (1 < *(uint *)(lVar5 + 0x18)) {
        uVar7 = ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock
                          (param_1,6,param_3,*(undefined8 *)(lVar5 + 0x28),*puVar9,
                           *(undefined8 *)puVar4,0xffffffff,0);
        puVar1 = PTR_DAT_06dc64a0;
        if (2 < *(uint *)(lVar5 + 0x18)) {
          uVar8 = ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock
                            (param_1,6,param_4,*(undefined8 *)(lVar5 + 0x30),*puVar9,
                             *(undefined8 *)puVar3,0xffffffff,0);
          lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            FUN_01e0ed2c(lVar5,param_1,uVar6,uVar7,uVar8,0);
            return lVar5;
          }
          goto LAB_04f54f6c;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_04f54f6c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


