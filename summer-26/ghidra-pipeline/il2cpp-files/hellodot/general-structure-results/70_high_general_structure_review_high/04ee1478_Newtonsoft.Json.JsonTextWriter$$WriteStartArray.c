/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 04ee1478
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int in_w8;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x24;
  
  puVar3 = PTR_DAT_065f8710;
  if (in_w8 != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_065f8640;
    *(long *)(unaff_x19 + 0x20) = param_1;
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)puVar3;
    lVar4 = FUN_02ce7ad4(*unaff_x21,1);
    if (lVar4 == 0) {
LAB_04ee1a20:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_065f85d0;
      *(long *)(unaff_x19 + 0x38) = lVar4;
      lVar4 = FUN_02ce7ad4(*unaff_x21,1);
      puVar3 = PTR_DAT_065f86f8;
      if (lVar4 == 0) goto LAB_04ee1a20;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_065f86f8;
        *(long *)(unaff_x19 + 0x40) = lVar4;
        lVar4 = FUN_02ce7ad4(*unaff_x21,1);
        if (lVar4 == 0) goto LAB_04ee1a20;
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
          *(long *)(unaff_x19 + 0x48) = lVar4;
          lVar4 = FUN_02ce7ad4(*unaff_x21,7);
          if (lVar4 == 0) goto LAB_04ee1a20;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if ((((uVar1 != 0) &&
               (*(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_065f85e0, uVar1 != 1)) &&
              (*(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_065f8708, 2 < uVar1)) &&
             (((*(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_065f8530, uVar1 != 3 &&
               (*(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_065f86a0, 4 < uVar1)) &&
              ((*(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_065f8550, uVar1 != 5 &&
               (*(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_065f85b0, 6 < uVar1)))))) {
            *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_065f8658;
            *(long *)(unaff_x19 + 0x50) = lVar4;
            lVar4 = FUN_02ce7ad4(*unaff_x21,7);
            if (lVar4 == 0) goto LAB_04ee1a20;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (((uVar1 != 0) &&
                (*(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_065f86d0, uVar1 != 1)) &&
               ((*(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_065f86b8, 2 < uVar1 &&
                ((((*(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_065f86d8, uVar1 != 3 &&
                   (*(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_065f8618, 4 < uVar1)) &&
                  (*(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_065f8648, uVar1 != 5)) &&
                 (*(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_065f8568, 6 < uVar1)))))) {
              *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_065f8598;
              *(long *)(unaff_x19 + 0x58) = lVar4;
              lVar4 = FUN_02ce7ad4(*unaff_x21,7);
              if (lVar4 == 0) goto LAB_04ee1a20;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (((((uVar1 != 0) &&
                    (*(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_065f86b0, uVar1 != 1))
                   && ((*(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_065f85c0, 2 < uVar1
                       && ((*(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_065f8508,
                           uVar1 != 3 &&
                           (*(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_065f85f0,
                           4 < uVar1)))))) &&
                  (*(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_065f8608, uVar1 != 5)) &&
                 (*(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_065f86e8, 6 < uVar1)) {
                *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_065f8548;
                *(long *)(unaff_x19 + 0x60) = lVar4;
                lVar4 = FUN_02ce7ad4(*unaff_x21,0xd);
                if (lVar4 == 0) goto LAB_04ee1a20;
                uVar1 = *(uint *)(lVar4 + 0x18);
                if ((((uVar1 != 0) &&
                     (*(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_065f8520, uVar1 != 1))
                    && (*(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_065f8628, 2 < uVar1))
                   && ((*(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_065f8558, uVar1 != 3
                       && (*(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_065f8670,
                          puVar3 = PTR_DAT_065f8638, 4 < uVar1)))) {
                  *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_065f8638;
                  if (((((uVar1 != 5) &&
                        ((*(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_065f8680, 6 < uVar1
                         && (*(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_065f85a8,
                            uVar1 != 7)))) &&
                       (*(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)PTR_DAT_065f85a0, 8 < uVar1))
                      && (((*(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)PTR_DAT_065f8700,
                           uVar1 != 9 &&
                           (*(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)PTR_DAT_065f8620,
                           10 < uVar1)) &&
                          (*(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)PTR_DAT_065f8560,
                          uVar1 != 0xb)))) &&
                     (*(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)PTR_DAT_065f85f8,
                     puVar2 = PTR_DAT_065c8688, 0xc < uVar1)) {
                    *(undefined8 *)(lVar4 + 0x80) =
                         **(undefined8 **)(*(long *)PTR_DAT_065c8688 + 0xb8);
                    *(long *)(unaff_x19 + 0x68) = lVar4;
                    lVar4 = FUN_02ce7ad4(*unaff_x21,0xd);
                    if (lVar4 == 0) goto LAB_04ee1a20;
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (((((uVar1 != 0) &&
                          (*(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_065f8528,
                          uVar1 != 1)) &&
                         ((*(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_065f8538,
                          2 < uVar1 &&
                          ((*(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_065f8578,
                           uVar1 != 3 &&
                           (*(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_065f8690,
                           4 < uVar1)))))) &&
                        ((*(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)puVar3, uVar1 != 5 &&
                         ((((*(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_065f8580,
                            6 < uVar1 &&
                            (*(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_065f85d8,
                            uVar1 != 7)) &&
                           (*(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)PTR_DAT_065f8610,
                           8 < uVar1)) &&
                          ((*(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)PTR_DAT_065f8588,
                           uVar1 != 9 &&
                           (*(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)PTR_DAT_065f8698,
                           10 < uVar1)))))))) &&
                       ((*(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)PTR_DAT_065f8590,
                        uVar1 != 0xb &&
                        (*(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)PTR_DAT_065f8688,
                        0xc < uVar1)))) {
                      *(undefined8 *)(lVar4 + 0x80) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                      *(undefined1 *)(unaff_x19 + 0x98) = 0;
                      *(long *)(unaff_x19 + 0x70) = lVar4;
                      *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0x68);
                      *(long *)(unaff_x19 + 0x80) = lVar4;
                      *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x68);
                      **(long **)(*unaff_x24 + 0xb8) = unaff_x19;
                      return;
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
  FUN_02ce7c84();
}


