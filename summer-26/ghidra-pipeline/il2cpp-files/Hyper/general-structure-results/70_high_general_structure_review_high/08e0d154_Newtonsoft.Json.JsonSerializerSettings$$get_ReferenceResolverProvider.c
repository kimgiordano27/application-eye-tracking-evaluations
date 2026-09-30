/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceResolverProvider
ENTRY_POINT: 08e0d154
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ReferenceResolverProvider(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  
  FUN_05dd59a0();
  thunk_FUN_04983f60(*unaff_x21);
  FUN_06411a74();
  lVar3 = FUN_04a88cb8();
  puVar1 = PTR_DAT_0ac6a7b0;
  if (lVar3 != 0) {
    FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8c0);
    thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_06411a74();
    lVar3 = FUN_04a88cb8();
    if (lVar3 != 0) {
      FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a878);
      lVar3 = *unaff_x23;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar3 = *unaff_x23;
      }
      puVar5 = *(undefined8 **)(lVar3 + 0xb8);
      if (puVar5[8] == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          puVar5 = *(undefined8 **)(*unaff_x23 + 0xb8);
        }
        uVar6 = *puVar5;
        uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a800);
        FUN_06411a74(uVar4,uVar6,*(undefined8 *)PTR_DAT_0ac6a920,0);
        puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x40);
        *puVar5 = uVar4;
        thunk_FUN_049ee3d8(puVar5,uVar4);
      }
      lVar3 = FUN_04a88cb8();
      puVar1 = PTR_DAT_0ac6a7e0;
      if (lVar3 != 0) {
        FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8c8);
        thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_06411a74();
        lVar3 = FUN_04a88cb8();
        if (lVar3 != 0) {
          FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a890);
          lVar3 = *unaff_x23;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar3 = *unaff_x23;
          }
          puVar5 = *(undefined8 **)(lVar3 + 0xb8);
          if (puVar5[0xb] == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              puVar5 = *(undefined8 **)(*unaff_x23 + 0xb8);
            }
            uVar6 = *puVar5;
            uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a790);
            FUN_06411a74(uVar4,uVar6,*(undefined8 *)PTR_DAT_0ac6a908,0);
            puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x58);
            *puVar5 = uVar4;
            thunk_FUN_049ee3d8(puVar5,uVar4);
          }
          lVar3 = FUN_04a88cb8();
          puVar1 = PTR_DAT_0ac6a7b8;
          if (lVar3 != 0) {
            FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8a8);
            thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_06411a74();
            lVar3 = FUN_04a88cb8();
            puVar1 = PTR_DAT_0ac6a760;
            if (lVar3 != 0) {
              FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8b0);
              lVar3 = *(long *)puVar1;
              puVar5 = *(undefined8 **)(lVar3 + 0x38);
              if (puVar5 == (undefined8 *)0x0) {
                FUN_04980b90(lVar3);
                puVar5 = *(undefined8 **)(lVar3 + 0x38);
              }
              puVar1 = PTR_DAT_0ac09758;
              uVar4 = *puVar5;
              if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              FUN_08d895f0(uVar4,0);
              lVar3 = FUN_04a7ee78();
              puVar2 = PTR_DAT_0ac6a758;
              if (lVar3 != 0) {
                FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a900);
                lVar3 = *(long *)puVar2;
                puVar5 = *(undefined8 **)(lVar3 + 0x38);
                if (puVar5 == (undefined8 *)0x0) {
                  FUN_04980b90(lVar3);
                  puVar5 = *(undefined8 **)(lVar3 + 0x38);
                }
                uVar4 = *puVar5;
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                FUN_08d895f0(uVar4,0);
                lVar3 = FUN_04a7ee78();
                puVar1 = PTR_DAT_0ac6a808;
                if (lVar3 != 0) {
                  FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8f8);
                  thunk_FUN_04983f60(*(undefined8 *)puVar1);
                  FUN_06411a74();
                  lVar3 = FUN_04a88cb8();
                  puVar1 = PTR_DAT_0ac6a7f8;
                  if (lVar3 != 0) {
                    FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8e0);
                    thunk_FUN_04983f60(*(undefined8 *)puVar1);
                    FUN_06411a74();
                    lVar3 = FUN_04a88cb8();
                    puVar1 = PTR_DAT_0ac6a7c0;
                    if (lVar3 != 0) {
                      FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8e8);
                      thunk_FUN_04983f60(*(undefined8 *)puVar1);
                      FUN_06411a74();
                      lVar3 = FUN_04a88cb8();
                      puVar1 = PTR_DAT_0ac6a7e8;
                      if (lVar3 != 0) {
                        FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a898);
                        thunk_FUN_04983f60(*(undefined8 *)puVar1);
                        FUN_06411a74();
                        lVar3 = FUN_04a88cb8();
                        puVar1 = PTR_DAT_0ac6a7c8;
                        if (lVar3 != 0) {
                          FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8b8);
                          thunk_FUN_04983f60(*(undefined8 *)puVar1);
                          FUN_06411a74();
                          lVar3 = FUN_04a88cb8();
                          if (lVar3 != 0) {
                            FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8d8);
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
  FUN_0494818c();
}


