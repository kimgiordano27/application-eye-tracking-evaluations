/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 071862ac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe(long param_1)

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
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_09212cd0;
      thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x20));
      if (1 < *(uint *)(param_1 + 0x18)) {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)PTR_DAT_09212d18;
        thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x28));
        if (2 < *(uint *)(param_1 + 0x18)) {
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)PTR_DAT_09212c38;
          thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x30));
          if (3 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)PTR_DAT_09212be8;
            thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x38));
            if (4 < *(uint *)(param_1 + 0x18)) {
              *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)PTR_DAT_09212bf0;
              thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x40));
              if (5 < *(uint *)(param_1 + 0x18)) {
                *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)PTR_DAT_09212cc8;
                thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x48));
                if (6 < *(uint *)(param_1 + 0x18)) {
                  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)PTR_DAT_09212c98;
                  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x50));
                  if (7 < *(uint *)(param_1 + 0x18)) {
                    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)PTR_DAT_09212cb8;
                    thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x58));
                    if (8 < *(uint *)(param_1 + 0x18)) {
                      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)PTR_DAT_09212ca8;
                      thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x60));
                      if (9 < *(uint *)(param_1 + 0x18)) {
                        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)PTR_DAT_09212bf8;
                        thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x68));
                        if (10 < *(uint *)(param_1 + 0x18)) {
                          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)PTR_DAT_09212c60;
                          thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x70));
                          if (0xb < *(uint *)(param_1 + 0x18)) {
                            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)PTR_DAT_09212c48;
                            thunk_FUN_03d1023c();
                            plVar10 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                            *plVar10 = param_1;
                            thunk_FUN_03d1023c(plVar10,param_1);
                            lVar11 = FUN_03d2d394(*unaff_x21,5);
                            if (lVar11 == 0) goto LAB_071866dc;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_09212d28;
                              thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x20));
                              if (1 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_09212c08;
                                thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x28));
                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_09212ca0;
                                  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x30));
                                  if (3 < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_09212c58
                                    ;
                                    thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x38));
                                    puVar9 = PTR_DAT_09212be0;
                                    puVar8 = PTR_DAT_09212bd8;
                                    puVar7 = PTR_DAT_09212bd0;
                                    puVar6 = PTR_DAT_09212bc8;
                                    puVar5 = PTR_DAT_09212bc0;
                                    puVar4 = PTR_DAT_091bf788;
                                    puVar3 = PTR_DAT_091bede0;
                                    puVar2 = PTR_DAT_091a7688;
                                    puVar1 = PTR_DAT_091a0fc8;
                                    if (4 < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x40) =
                                           *(undefined8 *)PTR_DAT_09212cb0;
                                      thunk_FUN_03d1023c();
                                      plVar10 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                                      *plVar10 = lVar11;
                                      thunk_FUN_03d1023c(plVar10,lVar11);
                                      uVar12 = FUN_03d2d394(*(undefined8 *)puVar1,0x100);
                                      FUN_0708f30c(uVar12,*(undefined8 *)puVar8,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
                                      *puVar13 = uVar12;
                                      thunk_FUN_03d1023c(puVar13,uVar12);
                                      uVar12 = FUN_03d2d394(*(undefined8 *)puVar2,0x1e);
                                      FUN_0708f30c(uVar12,*(undefined8 *)puVar9,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
                                      *puVar13 = uVar12;
                                      thunk_FUN_03d1023c(puVar13,uVar12);
                                      uVar12 = FUN_03d2d394(*(undefined8 *)puVar4,0xf);
                                      FUN_0708f30c(uVar12,*(undefined8 *)puVar7,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
                                      *puVar13 = uVar12;
                                      thunk_FUN_03d1023c(puVar13,uVar12);
                                      uVar12 = FUN_03d2d394(*(undefined8 *)puVar2,0x2a);
                                      FUN_0708f30c(uVar12,*(undefined8 *)puVar6,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
                                      *puVar13 = uVar12;
                                      thunk_FUN_03d1023c(puVar13,uVar12);
                                      uVar12 = FUN_03d2d394(*(undefined8 *)puVar3,0x15);
                                      FUN_0708f30c(uVar12,*(undefined8 *)puVar5,0);
                                      puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
                                      *puVar13 = uVar12;
                                      thunk_FUN_03d1023c(puVar13,uVar12);
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
    FUN_03d2d550();
  }
LAB_071866dc:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


