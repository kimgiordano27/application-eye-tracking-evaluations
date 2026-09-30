/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0364d814
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array_InternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x21;
  long lVar12;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  
  FUN_039fd53c();
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02ce0978(lVar9);
  }
  uVar1 = FUN_02ce7b78(extraout_x1,lVar9);
  lVar9 = *(long *)(unaff_x23 + 0x18);
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  if (lVar9 != 0) {
    FUN_039fd53c(lVar9,5,*unaff_x24);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02ce0978(lVar9);
    }
    puVar2 = (undefined8 *)FUN_02ce7b78(extraout_x1_00,lVar9);
    if (*(long *)(unaff_x23 + 0x18) != 0) {
      FUN_039fd53c(*(long *)(unaff_x23 + 0x18),6,*unaff_x24);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02ce0978(lVar9);
      }
      puVar3 = (undefined8 *)FUN_02ce7b78(extraout_x1_01,lVar9,*(undefined8 *)(unaff_x29 + -0x70));
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        FUN_039fd53c(*(long *)(unaff_x23 + 0x18),7,*unaff_x24);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02ce0978(lVar9);
        }
        puVar4 = (undefined8 *)FUN_02ce7b78(extraout_x1_02,lVar9,*(undefined8 *)(unaff_x29 + -0x78))
        ;
        if (*(long *)(unaff_x23 + 0x18) != 0) {
          FUN_039fd53c(*(long *)(unaff_x23 + 0x18),8,*unaff_x24);
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02ce0978(lVar9);
          }
          puVar5 = (undefined8 *)
                   FUN_02ce7b78(extraout_x1_03,lVar9,*(undefined8 *)(unaff_x29 + -0x80));
          if (*(long *)(unaff_x23 + 0x18) != 0) {
            FUN_039fd53c(*(long *)(unaff_x23 + 0x18),9,*unaff_x24);
            lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02ce0978(lVar9);
            }
            uVar1 = *(undefined8 *)(unaff_x29 + -0x90);
            puVar6 = (undefined8 *)
                     FUN_02ce7b78(extraout_x1_04,lVar9,*(undefined8 *)(unaff_x29 + -0x98));
            if (*(long *)(unaff_x29 + -0xa0) != 0) {
              puVar10 = *(undefined8 **)(unaff_x29 + -0xa8);
              lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
              if (-1 < *(int *)(*(long *)(lVar9 + 0x18) + 0x28)) {
                puVar10 = (undefined8 *)*puVar10;
              }
              lVar12 = *(long *)(unaff_x29 + -0x88);
              puVar11 = *(undefined8 **)(unaff_x29 + -0xb0);
              if (-1 < *(int *)(*(long *)(lVar9 + 0x20) + 0x28)) {
                unaff_x26 = (undefined8 *)*unaff_x26;
              }
              if (-1 < *(int *)(*(long *)(lVar9 + 0x28) + 0x28)) {
                unaff_x25 = (undefined8 *)*unaff_x25;
              }
              if (-1 < *(int *)(*(long *)(lVar9 + 0x30) + 0x28)) {
                unaff_x27 = (undefined8 *)*unaff_x27;
              }
              if (-1 < *(int *)(*(long *)(lVar9 + 0x38) + 0x28)) {
                puVar11 = (undefined8 *)*puVar11;
              }
              if (-1 < *(int *)(*(long *)(lVar9 + 0x40) + 0x28)) {
                puVar2 = (undefined8 *)*puVar2;
              }
              if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
                puVar3 = (undefined8 *)*puVar3;
              }
              puVar8 = *(undefined8 **)(lVar9 + 0x68);
              if (-1 < *(int *)(*(long *)(lVar9 + 0x50) + 0x28)) {
                puVar4 = (undefined8 *)*puVar4;
              }
              uVar7 = *puVar8;
              if (-1 < *(int *)(*(long *)(lVar9 + 0x58) + 0x28)) {
                puVar5 = (undefined8 *)*puVar5;
              }
              if (-1 < *(int *)(*(long *)(lVar9 + 0x60) + 0x28)) {
                puVar6 = (undefined8 *)*puVar6;
              }
              *(undefined8 *)(unaff_x29 + -0x68) = uVar1;
              *(undefined8 **)(unaff_x29 + -0x60) = puVar10;
              *(undefined8 **)(unaff_x29 + -0x58) = unaff_x26;
              *(undefined8 **)(unaff_x29 + -0x50) = unaff_x25;
              *(undefined8 **)(unaff_x29 + -0x48) = unaff_x27;
              *(undefined8 **)(unaff_x29 + -0x40) = puVar11;
              *(undefined8 **)(unaff_x29 + -0x38) = puVar2;
              *(undefined8 **)(unaff_x29 + -0x30) = puVar3;
              *(undefined8 **)(unaff_x29 + -0x28) = puVar4;
              *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
              *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
              (*(code *)puVar8[2])(uVar7,puVar8,*(long *)(unaff_x29 + -0xa0),unaff_x29 + -0x68);
              if (*(long *)(lVar12 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


