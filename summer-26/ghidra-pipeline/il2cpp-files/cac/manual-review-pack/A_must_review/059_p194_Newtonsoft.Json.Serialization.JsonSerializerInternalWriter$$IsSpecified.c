/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 074c3d1c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint in_w8;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  if (4 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_091333e8;
    thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x40));
    if (5 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)PTR_DAT_091334c0;
      thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x48));
      if (6 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)PTR_DAT_09133490;
        thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x50));
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
          *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)PTR_DAT_091334b0;
          thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x58));
          if (8 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)PTR_DAT_091334a0;
            thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x60));
            if (9 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)PTR_DAT_091333f0;
              thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x68));
              if (10 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)PTR_DAT_09133458;
                thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x70));
                if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)PTR_DAT_09133440;
                  thunk_FUN_03f86000();
                  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
                  thunk_FUN_03f86000();
                  lVar10 = FUN_03f13470(*unaff_x21,5);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f1362c();
                  }
                  if (*(int *)(lVar10 + 0x18) != 0) {
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09133520;
                    thunk_FUN_03f86000((undefined8 *)(lVar10 + 0x20));
                    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_09133400;
                      thunk_FUN_03f86000((undefined8 *)(lVar10 + 0x28));
                      if (2 < *(uint *)(lVar10 + 0x18)) {
                        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_09133498;
                        thunk_FUN_03f86000((undefined8 *)(lVar10 + 0x30));
                        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_09133450;
                          thunk_FUN_03f86000((undefined8 *)(lVar10 + 0x38));
                          puVar9 = PTR_DAT_091333d8;
                          puVar8 = PTR_DAT_091333d0;
                          puVar7 = PTR_DAT_091333c8;
                          puVar6 = PTR_DAT_091333c0;
                          puVar5 = PTR_DAT_091333b8;
                          puVar4 = PTR_DAT_091262e8;
                          puVar3 = PTR_DAT_091262d8;
                          puVar2 = PTR_DAT_091262c8;
                          puVar1 = PTR_DAT_0910cf80;
                          if (4 < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_091334a8;
                            thunk_FUN_03f86000();
                            plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                            *plVar11 = lVar10;
                            thunk_FUN_03f86000(plVar11,lVar10);
                            uVar12 = FUN_03f13470(*(undefined8 *)puVar1,0x100);
                            FUN_073d2898(uVar12,*(undefined8 *)puVar8,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
                            *puVar13 = uVar12;
                            thunk_FUN_03f86000(puVar13,uVar12);
                            uVar12 = FUN_03f13470(*(undefined8 *)puVar4,0x1e);
                            FUN_073d2898(uVar12,*(undefined8 *)puVar9,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
                            *puVar13 = uVar12;
                            thunk_FUN_03f86000(puVar13,uVar12);
                            uVar12 = FUN_03f13470(*(undefined8 *)puVar3,0xf);
                            FUN_073d2898(uVar12,*(undefined8 *)puVar7,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
                            *puVar13 = uVar12;
                            thunk_FUN_03f86000(puVar13,uVar12);
                            uVar12 = FUN_03f13470(*(undefined8 *)puVar4,0x2a);
                            FUN_073d2898(uVar12,*(undefined8 *)puVar6,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
                            *puVar13 = uVar12;
                            thunk_FUN_03f86000(puVar13,uVar12);
                            uVar12 = FUN_03f13470(*(undefined8 *)puVar2,0x15);
                            FUN_073d2898(uVar12,*(undefined8 *)puVar5,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
                            *puVar13 = uVar12;
                            thunk_FUN_03f86000(puVar13,uVar12);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


