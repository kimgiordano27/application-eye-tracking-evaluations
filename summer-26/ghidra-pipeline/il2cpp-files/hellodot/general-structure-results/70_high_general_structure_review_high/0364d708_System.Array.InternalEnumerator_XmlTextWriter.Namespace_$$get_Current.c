/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$get_Current
ENTRY_POINT: 0364d708
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array_InternalEnumerator<XmlTextWriter_Namespace>__get_Current(void)

{
  undefined8 uVar1;
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
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long unaff_x21;
  long lVar15;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x29;
  
  uVar1 = FUN_02ce7b78();
  lVar12 = *(long *)(unaff_x23 + 0x18);
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
  if (lVar12 != 0) {
    FUN_039fd53c(lVar12,1,*unaff_x24);
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02ce0978(lVar12);
    }
    puVar2 = (undefined8 *)FUN_02ce7b78(extraout_x1,lVar12);
    if (*(long *)(unaff_x23 + 0x18) != 0) {
      FUN_039fd53c(*(long *)(unaff_x23 + 0x18),2,*unaff_x24);
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02ce0978(lVar12);
      }
      puVar3 = (undefined8 *)FUN_02ce7b78(extraout_x1_00,lVar12);
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        FUN_039fd53c(*(long *)(unaff_x23 + 0x18),3,*unaff_x24);
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02ce0978(lVar12);
        }
        puVar4 = (undefined8 *)FUN_02ce7b78(extraout_x1_01,lVar12);
        if (*(long *)(unaff_x23 + 0x18) != 0) {
          FUN_039fd53c(*(long *)(unaff_x23 + 0x18),4,*unaff_x24);
          lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02ce0978(lVar12);
          }
          uVar1 = FUN_02ce7b78(extraout_x1_02,lVar12);
          lVar12 = *(long *)(unaff_x23 + 0x18);
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
          if (lVar12 != 0) {
            FUN_039fd53c(lVar12,5,*unaff_x24);
            lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02ce0978(lVar12);
            }
            puVar5 = (undefined8 *)FUN_02ce7b78(extraout_x1_03,lVar12);
            if (*(long *)(unaff_x23 + 0x18) != 0) {
              FUN_039fd53c(*(long *)(unaff_x23 + 0x18),6,*unaff_x24);
              lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02ce0978(lVar12);
              }
              puVar6 = (undefined8 *)
                       FUN_02ce7b78(extraout_x1_04,lVar12,*(undefined8 *)(unaff_x29 + -0x70));
              if (*(long *)(unaff_x23 + 0x18) != 0) {
                FUN_039fd53c(*(long *)(unaff_x23 + 0x18),7,*unaff_x24);
                lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_02ce0978(lVar12);
                }
                puVar7 = (undefined8 *)
                         FUN_02ce7b78(extraout_x1_05,lVar12,*(undefined8 *)(unaff_x29 + -0x78));
                if (*(long *)(unaff_x23 + 0x18) != 0) {
                  FUN_039fd53c(*(long *)(unaff_x23 + 0x18),8,*unaff_x24);
                  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_02ce0978(lVar12);
                  }
                  puVar8 = (undefined8 *)
                           FUN_02ce7b78(extraout_x1_06,lVar12,*(undefined8 *)(unaff_x29 + -0x80));
                  if (*(long *)(unaff_x23 + 0x18) != 0) {
                    FUN_039fd53c(*(long *)(unaff_x23 + 0x18),9,*unaff_x24);
                    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_02ce0978(lVar12);
                    }
                    uVar1 = *(undefined8 *)(unaff_x29 + -0x90);
                    puVar9 = (undefined8 *)
                             FUN_02ce7b78(extraout_x1_07,lVar12,*(undefined8 *)(unaff_x29 + -0x98));
                    if (*(long *)(unaff_x29 + -0xa0) != 0) {
                      puVar13 = *(undefined8 **)(unaff_x29 + -0xa8);
                      lVar12 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x18) + 0x28)) {
                        puVar13 = (undefined8 *)*puVar13;
                      }
                      lVar15 = *(long *)(unaff_x29 + -0x88);
                      puVar14 = *(undefined8 **)(unaff_x29 + -0xb0);
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x20) + 0x28)) {
                        puVar2 = (undefined8 *)*puVar2;
                      }
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x28) + 0x28)) {
                        puVar3 = (undefined8 *)*puVar3;
                      }
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x30) + 0x28)) {
                        puVar4 = (undefined8 *)*puVar4;
                      }
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x38) + 0x28)) {
                        puVar14 = (undefined8 *)*puVar14;
                      }
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x40) + 0x28)) {
                        puVar5 = (undefined8 *)*puVar5;
                      }
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
                        puVar6 = (undefined8 *)*puVar6;
                      }
                      puVar11 = *(undefined8 **)(lVar12 + 0x68);
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x50) + 0x28)) {
                        puVar7 = (undefined8 *)*puVar7;
                      }
                      uVar10 = *puVar11;
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x58) + 0x28)) {
                        puVar8 = (undefined8 *)*puVar8;
                      }
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x60) + 0x28)) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                      *(undefined8 *)(unaff_x29 + -0x68) = uVar1;
                      *(undefined8 **)(unaff_x29 + -0x60) = puVar13;
                      *(undefined8 **)(unaff_x29 + -0x58) = puVar2;
                      *(undefined8 **)(unaff_x29 + -0x50) = puVar3;
                      *(undefined8 **)(unaff_x29 + -0x48) = puVar4;
                      *(undefined8 **)(unaff_x29 + -0x40) = puVar14;
                      *(undefined8 **)(unaff_x29 + -0x38) = puVar5;
                      *(undefined8 **)(unaff_x29 + -0x30) = puVar6;
                      *(undefined8 **)(unaff_x29 + -0x28) = puVar7;
                      *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
                      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
                      (*(code *)puVar11[2])
                                (uVar10,puVar11,*(long *)(unaff_x29 + -0xa0),unaff_x29 + -0x68);
                      if (*(long *)(lVar15 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


