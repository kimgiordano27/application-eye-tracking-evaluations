/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 0593185c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(long param_1)

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
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18) = unaff_x19;
  thunk_FUN_0333a630();
  lVar10 = FUN_032d5d3c(*unaff_x21,5);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(lVar10 + 0x18) != 0) {
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_0729a1c0;
    thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x20));
    if (1 < *(uint *)(lVar10 + 0x18)) {
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_0729a0a0;
      thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x28));
      if (2 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_0729a138;
        thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x30));
        if (3 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_0729a0f0;
          thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x38));
          puVar9 = PTR_DAT_0729a078;
          puVar8 = PTR_DAT_0729a070;
          puVar7 = PTR_DAT_0729a068;
          puVar6 = PTR_DAT_0729a060;
          puVar5 = PTR_DAT_0729a058;
          puVar4 = PTR_DAT_07291bd0;
          puVar3 = PTR_DAT_07291828;
          puVar2 = PTR_DAT_072911a0;
          puVar1 = PTR_DAT_0727aa68;
          if (4 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_0729a148;
            thunk_FUN_0333a630();
            plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
            *plVar11 = lVar10;
            thunk_FUN_0333a630(plVar11,lVar10);
            uVar12 = FUN_032d5d3c(*(undefined8 *)puVar1,0x100);
            FUN_058505e4(uVar12,*(undefined8 *)puVar8,0);
            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
            *puVar13 = uVar12;
            thunk_FUN_0333a630(puVar13,uVar12);
            uVar12 = FUN_032d5d3c(*(undefined8 *)puVar4,0x1e);
            FUN_058505e4(uVar12,*(undefined8 *)puVar9,0);
            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
            *puVar13 = uVar12;
            thunk_FUN_0333a630(puVar13,uVar12);
            uVar12 = FUN_032d5d3c(*(undefined8 *)puVar2,0xf);
            FUN_058505e4(uVar12,*(undefined8 *)puVar7,0);
            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
            *puVar13 = uVar12;
            thunk_FUN_0333a630(puVar13,uVar12);
            uVar12 = FUN_032d5d3c(*(undefined8 *)puVar4,0x2a);
            FUN_058505e4(uVar12,*(undefined8 *)puVar6,0);
            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
            *puVar13 = uVar12;
            thunk_FUN_0333a630(puVar13,uVar12);
            uVar12 = FUN_032d5d3c(*(undefined8 *)puVar3,0x15);
            FUN_058505e4(uVar12,*(undefined8 *)puVar5,0);
            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
            *puVar13 = uVar12;
            thunk_FUN_0333a630(puVar13,uVar12);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


