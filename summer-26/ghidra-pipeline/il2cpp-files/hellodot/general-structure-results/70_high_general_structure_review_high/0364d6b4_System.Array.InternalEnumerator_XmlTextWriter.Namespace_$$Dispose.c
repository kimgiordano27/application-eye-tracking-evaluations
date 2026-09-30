/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$Dispose
ENTRY_POINT: 0364d6b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array_InternalEnumerator<XmlTextWriter_Namespace>__Dispose(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 in_x9;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long unaff_x21;
  long lVar16;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x98) = in_x9;
  *(undefined8 *)(unaff_x29 + -0x90) = unaff_x24;
  puVar1 = PTR_DAT_065ded20;
  if (param_2 != 0) {
    uVar12 = *(undefined8 *)PTR_DAT_065ded20;
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(param_1 + 0x20);
    FUN_039fd53c(param_2,0,uVar12);
    lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02ce0978(lVar13);
    }
    uVar12 = FUN_02ce7b78(extraout_x1,lVar13);
    lVar13 = *(long *)(unaff_x23 + 0x18);
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar12;
    if (lVar13 != 0) {
      FUN_039fd53c(lVar13,1,*(undefined8 *)puVar1);
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02ce0978(lVar13);
      }
      puVar2 = (undefined8 *)FUN_02ce7b78(extraout_x1_00,lVar13);
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        FUN_039fd53c(*(long *)(unaff_x23 + 0x18),2,*(undefined8 *)puVar1);
        lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_02ce0978(lVar13);
        }
        puVar3 = (undefined8 *)FUN_02ce7b78(extraout_x1_01,lVar13);
        if (*(long *)(unaff_x23 + 0x18) != 0) {
          FUN_039fd53c(*(long *)(unaff_x23 + 0x18),3,*(undefined8 *)puVar1);
          lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_02ce0978(lVar13);
          }
          puVar4 = (undefined8 *)FUN_02ce7b78(extraout_x1_02,lVar13);
          if (*(long *)(unaff_x23 + 0x18) != 0) {
            FUN_039fd53c(*(long *)(unaff_x23 + 0x18),4,*(undefined8 *)puVar1);
            lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02ce0978(lVar13);
            }
            uVar12 = FUN_02ce7b78(extraout_x1_03,lVar13);
            lVar13 = *(long *)(unaff_x23 + 0x18);
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar12;
            if (lVar13 != 0) {
              FUN_039fd53c(lVar13,5,*(undefined8 *)puVar1);
              lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_02ce0978(lVar13);
              }
              puVar5 = (undefined8 *)FUN_02ce7b78(extraout_x1_04,lVar13);
              if (*(long *)(unaff_x23 + 0x18) != 0) {
                FUN_039fd53c(*(long *)(unaff_x23 + 0x18),6,*(undefined8 *)puVar1);
                lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = FUN_02ce0978(lVar13);
                }
                puVar6 = (undefined8 *)
                         FUN_02ce7b78(extraout_x1_05,lVar13,*(undefined8 *)(unaff_x29 + -0x70));
                if (*(long *)(unaff_x23 + 0x18) != 0) {
                  FUN_039fd53c(*(long *)(unaff_x23 + 0x18),7,*(undefined8 *)puVar1);
                  lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
                  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    lVar13 = FUN_02ce0978(lVar13);
                  }
                  puVar7 = (undefined8 *)
                           FUN_02ce7b78(extraout_x1_06,lVar13,*(undefined8 *)(unaff_x29 + -0x78));
                  if (*(long *)(unaff_x23 + 0x18) != 0) {
                    FUN_039fd53c(*(long *)(unaff_x23 + 0x18),8,*(undefined8 *)puVar1);
                    lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
                    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                      lVar13 = FUN_02ce0978(lVar13);
                    }
                    puVar8 = (undefined8 *)
                             FUN_02ce7b78(extraout_x1_07,lVar13,*(undefined8 *)(unaff_x29 + -0x80));
                    if (*(long *)(unaff_x23 + 0x18) != 0) {
                      FUN_039fd53c(*(long *)(unaff_x23 + 0x18),9,*(undefined8 *)puVar1);
                      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60);
                      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                        lVar13 = FUN_02ce0978(lVar13);
                      }
                      uVar12 = *(undefined8 *)(unaff_x29 + -0x90);
                      puVar9 = (undefined8 *)
                               FUN_02ce7b78(extraout_x1_08,lVar13,*(undefined8 *)(unaff_x29 + -0x98)
                                           );
                      if (*(long *)(unaff_x29 + -0xa0) != 0) {
                        puVar14 = *(undefined8 **)(unaff_x29 + -0xa8);
                        lVar13 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x18) + 0x28)) {
                          puVar14 = (undefined8 *)*puVar14;
                        }
                        lVar16 = *(long *)(unaff_x29 + -0x88);
                        puVar15 = *(undefined8 **)(unaff_x29 + -0xb0);
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x20) + 0x28)) {
                          puVar2 = (undefined8 *)*puVar2;
                        }
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x28) + 0x28)) {
                          puVar3 = (undefined8 *)*puVar3;
                        }
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x30) + 0x28)) {
                          puVar4 = (undefined8 *)*puVar4;
                        }
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x38) + 0x28)) {
                          puVar15 = (undefined8 *)*puVar15;
                        }
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x40) + 0x28)) {
                          puVar5 = (undefined8 *)*puVar5;
                        }
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
                          puVar6 = (undefined8 *)*puVar6;
                        }
                        puVar11 = *(undefined8 **)(lVar13 + 0x68);
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x50) + 0x28)) {
                          puVar7 = (undefined8 *)*puVar7;
                        }
                        uVar10 = *puVar11;
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x58) + 0x28)) {
                          puVar8 = (undefined8 *)*puVar8;
                        }
                        if (-1 < *(int *)(*(long *)(lVar13 + 0x60) + 0x28)) {
                          puVar9 = (undefined8 *)*puVar9;
                        }
                        *(undefined8 *)(unaff_x29 + -0x68) = uVar12;
                        *(undefined8 **)(unaff_x29 + -0x60) = puVar14;
                        *(undefined8 **)(unaff_x29 + -0x58) = puVar2;
                        *(undefined8 **)(unaff_x29 + -0x50) = puVar3;
                        *(undefined8 **)(unaff_x29 + -0x48) = puVar4;
                        *(undefined8 **)(unaff_x29 + -0x40) = puVar15;
                        *(undefined8 **)(unaff_x29 + -0x38) = puVar5;
                        *(undefined8 **)(unaff_x29 + -0x30) = puVar6;
                        *(undefined8 **)(unaff_x29 + -0x28) = puVar7;
                        *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
                        *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
                        (*(code *)puVar11[2])
                                  (uVar10,puVar11,*(long *)(unaff_x29 + -0xa0),unaff_x29 + -0x68);
                        if (*(long *)(lVar16 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                          return;
                        }
                    /* WARNING: Subroutine does not return */
                        __stack_chk_fail();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


