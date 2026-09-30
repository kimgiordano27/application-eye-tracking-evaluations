/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 07687b40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
               (undefined8 *param_1,long param_2)

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
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined8 *)(param_2 + 0x38) = *param_1;
  thunk_FUN_040ec700();
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x19;
  thunk_FUN_040ec700();
  lVar10 = FUN_04077674(*unaff_x21,0xc);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_092da678;
      thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x20));
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_092da6c0;
        thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x28));
        if (2 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_092da5e0;
          thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x30));
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_092da590;
            thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x38));
            if (4 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_092da598;
              thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x40));
              if (5 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)PTR_DAT_092da670;
                thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x48));
                if (6 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_092da640;
                  thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x50));
                  if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)PTR_DAT_092da660;
                    thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x58));
                    if (8 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)PTR_DAT_092da650;
                      thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x60));
                      if (9 < *(uint *)(lVar10 + 0x18)) {
                        *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)PTR_DAT_092da5a0;
                        thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x68));
                        if (10 < *(uint *)(lVar10 + 0x18)) {
                          *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)PTR_DAT_092da608;
                          thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x70));
                          if (0xb < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)PTR_DAT_092da5f0;
                            thunk_FUN_040ec700();
                            plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                            *plVar11 = lVar10;
                            thunk_FUN_040ec700(plVar11,lVar10);
                            lVar10 = FUN_04077674(*unaff_x21,5);
                            if (lVar10 == 0) goto LAB_07687f9c;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_092da6d0;
                              thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x20));
                              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_092da5b0;
                                thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x28));
                                if (2 < *(uint *)(lVar10 + 0x18)) {
                                  *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_092da648;
                                  thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x30));
                                  if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_092da600
                                    ;
                                    thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x38));
                                    puVar9 = PTR_DAT_092da588;
                                    puVar8 = PTR_DAT_092da580;
                                    puVar7 = PTR_DAT_092da578;
                                    puVar6 = PTR_DAT_092da570;
                                    puVar5 = PTR_DAT_092da568;
                                    puVar4 = PTR_DAT_092d16d8;
                                    puVar3 = PTR_DAT_092d0928;
                                    puVar2 = PTR_DAT_09289910;
                                    puVar1 = PTR_DAT_092869a0;
                                    if (4 < *(uint *)(lVar10 + 0x18)) {
                                      *(undefined8 *)(lVar10 + 0x40) =
                                           *(undefined8 *)PTR_DAT_092da658;
                                      thunk_FUN_040ec700();
                                      plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                                      *plVar11 = lVar10;
                                      thunk_FUN_040ec700(plVar11,lVar10);
                                      uVar12 = FUN_04077674(*(undefined8 *)puVar1,0x100);
                                      FUN_07593f88(uVar12,*(undefined8 *)puVar8,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
                                      *puVar13 = uVar12;
                                      thunk_FUN_040ec700(puVar13,uVar12);
                                      uVar12 = FUN_04077674(*(undefined8 *)puVar4,0x1e);
                                      FUN_07593f88(uVar12,*(undefined8 *)puVar9,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
                                      *puVar13 = uVar12;
                                      thunk_FUN_040ec700(puVar13,uVar12);
                                      uVar12 = FUN_04077674(*(undefined8 *)puVar3,0xf);
                                      FUN_07593f88(uVar12,*(undefined8 *)puVar7,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
                                      *puVar13 = uVar12;
                                      thunk_FUN_040ec700(puVar13,uVar12);
                                      uVar12 = FUN_04077674(*(undefined8 *)puVar4,0x2a);
                                      FUN_07593f88(uVar12,*(undefined8 *)puVar6,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
                                      *puVar13 = uVar12;
                                      thunk_FUN_040ec700(puVar13,uVar12);
                                      uVar12 = FUN_04077674(*(undefined8 *)puVar2,0x15);
                                      FUN_07593f88(uVar12,*(undefined8 *)puVar5,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
                                      *puVar13 = uVar12;
                                      thunk_FUN_040ec700(puVar13,uVar12);
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_07687f9c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


