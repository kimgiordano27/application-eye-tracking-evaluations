/*
FUNCTION_NAME: Sirenix.Serialization.BaseFormatter<Nullable<int>>$$get_SerializedType
ENTRY_POINT: 04f523e0
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


long Sirenix_Serialization_BaseFormatter<Nullable<int>>__get_SerializedType
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  
                    /* try { // try from 04f523ec to 0505257b has its CatchHandler @ 04f51f1c */
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e07ec8);
    thunk_FUN_0159f088(PTR_DAT_06dbb650);
    thunk_FUN_0159f088(PTR_DAT_06e5b7b0);
    thunk_FUN_0159f088(PTR_DAT_06de93f8);
    thunk_FUN_0159f088(PTR_DAT_06e15248);
    thunk_FUN_0159f088(PTR_DAT_06e216f0);
    thunk_FUN_0159f088(PTR_DAT_06e0c7b0);
    *(undefined1 *)(unaff_x25 + 0xe43) = 1;
  }
  FUN_01ab9d14(param_2,*unaff_x26,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  plVar2 = (long *)FUN_04f51dd0(param_2);
  lVar3 = FUN_01ab9528(plVar2,0x11,0);
  FUN_01ab95bc(plVar2,0x11,4,lVar3,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      uVar4 = ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock
                        (plVar2,0x11,param_3,*(undefined8 *)(lVar3 + 0x20),*unaff_x26,
                         *(undefined8 *)PTR_DAT_06de93f8,0xffffffff,0);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        uVar5 = ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock
                          (plVar2,0x11,param_4,*(undefined8 *)(lVar3 + 0x28),*unaff_x26,
                           *(undefined8 *)PTR_DAT_06e216f0,0xffffffff,0);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          uVar6 = ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock
                            (plVar2,0x11,param_5,*(undefined8 *)(lVar3 + 0x30),*unaff_x26,
                             *(undefined8 *)PTR_DAT_06e0c7b0,0xffffffff,0);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            uVar7 = ICSharpCode_SharpZipLib_Zip_Compression_DeflaterHuffman__FlushStoredBlock
                              (plVar2,0x11,param_6,*(undefined8 *)(lVar3 + 0x38),*unaff_x26,
                               *(undefined8 *)PTR_DAT_06e15248,0xffffffff,0);
            puVar1 = PTR_DAT_06dbb650;
            if (plVar2 != (long *)0x0) {
              uVar8 = (**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
              lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                FUN_01e0d5cc(lVar3,param_2,uVar8,uVar4,uVar5,uVar6,uVar7,0);
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


