/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 0560ff0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(void)

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
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  if (10 < *(uint *)(unaff_x20 + -0x50)) {
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)PTR_DAT_06d520f0;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x70));
    if (0xb < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)PTR_DAT_06d520d8;
      thunk_FUN_02f411dc();
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
      thunk_FUN_02f411dc();
      lVar10 = FUN_02f07f14(*unaff_x21,5);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_06d521b8;
        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
        if (1 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_06d52098;
          thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x28));
          if (2 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_06d52130;
            thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x30));
            if (3 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_06d520e8;
              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x38));
              puVar9 = PTR_DAT_06d52070;
              puVar8 = PTR_DAT_06d52068;
              puVar7 = PTR_DAT_06d52060;
              puVar6 = PTR_DAT_06d52058;
              puVar5 = PTR_DAT_06d52050;
              puVar4 = PTR_DAT_06d3eed0;
              puVar3 = PTR_DAT_06d36f50;
              puVar2 = PTR_DAT_06d15378;
              puVar1 = PTR_DAT_06d03ce0;
              if (4 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_06d52140;
                thunk_FUN_02f411dc();
                plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                *plVar11 = lVar10;
                thunk_FUN_02f411dc(plVar11,lVar10);
                uVar12 = FUN_02f07f14(*(undefined8 *)puVar1,0x100);
                FUN_0552106c(uVar12,*(undefined8 *)puVar8,0);
                puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
                *puVar13 = uVar12;
                thunk_FUN_02f411dc(puVar13,uVar12);
                uVar12 = FUN_02f07f14(*(undefined8 *)puVar2,0x1e);
                FUN_0552106c(uVar12,*(undefined8 *)puVar9,0);
                puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
                *puVar13 = uVar12;
                thunk_FUN_02f411dc(puVar13,uVar12);
                uVar12 = FUN_02f07f14(*(undefined8 *)puVar4,0xf);
                FUN_0552106c(uVar12,*(undefined8 *)puVar7,0);
                puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
                *puVar13 = uVar12;
                thunk_FUN_02f411dc(puVar13,uVar12);
                uVar12 = FUN_02f07f14(*(undefined8 *)puVar2,0x2a);
                FUN_0552106c(uVar12,*(undefined8 *)puVar6,0);
                puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
                *puVar13 = uVar12;
                thunk_FUN_02f411dc(puVar13,uVar12);
                uVar12 = FUN_02f07f14(*(undefined8 *)puVar3,0x15);
                FUN_0552106c(uVar12,*(undefined8 *)puVar5,0);
                puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
                *puVar13 = uVar12;
                thunk_FUN_02f411dc(puVar13,uVar12);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


