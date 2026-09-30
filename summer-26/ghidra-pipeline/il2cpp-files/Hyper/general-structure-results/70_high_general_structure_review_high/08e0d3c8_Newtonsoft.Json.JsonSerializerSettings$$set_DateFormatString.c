/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 08e0d3c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_06411a74();
  lVar3 = FUN_04a88cb8();
  puVar1 = PTR_DAT_0ac6a760;
  if (lVar3 != 0) {
    FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a8b0);
    lVar3 = *(long *)puVar1;
    puVar4 = *(undefined8 **)(lVar3 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_04980b90(lVar3);
      puVar4 = *(undefined8 **)(lVar3 + 0x38);
    }
    puVar1 = PTR_DAT_0ac09758;
    uVar5 = *puVar4;
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08d895f0(uVar5,0);
    lVar3 = FUN_04a7ee78();
    puVar2 = PTR_DAT_0ac6a758;
    if (lVar3 != 0) {
      FUN_05dd59a0(lVar3,*(undefined8 *)PTR_DAT_0ac6a900);
      lVar3 = *(long *)puVar2;
      puVar4 = *(undefined8 **)(lVar3 + 0x38);
      if (puVar4 == (undefined8 *)0x0) {
        FUN_04980b90(lVar3);
        puVar4 = *(undefined8 **)(lVar3 + 0x38);
      }
      uVar5 = *puVar4;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08d895f0(uVar5,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


