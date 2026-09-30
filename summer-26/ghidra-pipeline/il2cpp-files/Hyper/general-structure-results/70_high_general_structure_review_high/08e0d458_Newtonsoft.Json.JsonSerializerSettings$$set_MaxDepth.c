/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MaxDepth
ENTRY_POINT: 08e0d458
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_MaxDepth(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = FUN_04a7ee78();
  puVar1 = PTR_DAT_0ac6a758;
  if (lVar2 != 0) {
    FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a900);
                    /* try { // try from 08e0d478 to 08f0d587 has its CatchHandler @ 08e0d478
                       catch() { ... } // from try @ 08e0d478 with catch @ 08e0d478
                       catch() { ... } // from try @ 08e0d83c with catch @ 08e0d478
                       catch() { ... } // from try @ 08e0d91c with catch @ 08e0d478
                       catch() { ... } // from try @ 08e0d9a4 with catch @ 08e0d478 */
    lVar2 = *(long *)puVar1;
    puVar3 = *(undefined8 **)(lVar2 + 0x38);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_04980b90(lVar2);
      puVar3 = *(undefined8 **)(lVar2 + 0x38);
    }
    uVar4 = *puVar3;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08d895f0(uVar4,0);
    lVar2 = FUN_04a7ee78();
    puVar1 = PTR_DAT_0ac6a808;
    if (lVar2 != 0) {
      FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8f8);
      thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_06411a74();
      lVar2 = FUN_04a88cb8();
      puVar1 = PTR_DAT_0ac6a7f8;
      if (lVar2 != 0) {
        FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8e0);
        thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_06411a74();
        lVar2 = FUN_04a88cb8();
        puVar1 = PTR_DAT_0ac6a7c0;
        if (lVar2 != 0) {
          FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8e8);
          thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_06411a74();
          lVar2 = FUN_04a88cb8();
          puVar1 = PTR_DAT_0ac6a7e8;
          if (lVar2 != 0) {
            FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a898);
            thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_06411a74();
            lVar2 = FUN_04a88cb8();
            puVar1 = PTR_DAT_0ac6a7c8;
            if (lVar2 != 0) {
              FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8b8);
              thunk_FUN_04983f60(*(undefined8 *)puVar1);
              FUN_06411a74();
              lVar2 = FUN_04a88cb8();
              if (lVar2 != 0) {
                FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8d8);
                return;
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


