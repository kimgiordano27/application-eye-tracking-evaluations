/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 0560ffac
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0(void)

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
  bool in_ZR;
  bool in_CY;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long *unaff_x22;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)PTR_DAT_06d52098;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x28));
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)PTR_DAT_06d52130;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x30));
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)PTR_DAT_06d520e8;
        thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x38));
        puVar9 = PTR_DAT_06d52070;
        puVar8 = PTR_DAT_06d52068;
        puVar7 = PTR_DAT_06d52060;
        puVar6 = PTR_DAT_06d52058;
        puVar5 = PTR_DAT_06d52050;
        puVar4 = PTR_DAT_06d3eed0;
        puVar3 = PTR_DAT_06d36f50;
        puVar2 = PTR_DAT_06d15378;
        puVar1 = PTR_DAT_06d03ce0;
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_06d52140;
          thunk_FUN_02f411dc();
          *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = unaff_x19;
          thunk_FUN_02f411dc();
          uVar10 = FUN_02f07f14(*(undefined8 *)puVar1,0x100);
          FUN_0552106c(uVar10,*(undefined8 *)puVar8,0);
          puVar11 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
          *puVar11 = uVar10;
          thunk_FUN_02f411dc(puVar11,uVar10);
          uVar10 = FUN_02f07f14(*(undefined8 *)puVar2,0x1e);
          FUN_0552106c(uVar10,*(undefined8 *)puVar9,0);
          puVar11 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
          *puVar11 = uVar10;
          thunk_FUN_02f411dc(puVar11,uVar10);
          uVar10 = FUN_02f07f14(*(undefined8 *)puVar4,0xf);
          FUN_0552106c(uVar10,*(undefined8 *)puVar7,0);
          puVar11 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
          *puVar11 = uVar10;
          thunk_FUN_02f411dc(puVar11,uVar10);
          uVar10 = FUN_02f07f14(*(undefined8 *)puVar2,0x2a);
          FUN_0552106c(uVar10,*(undefined8 *)puVar6,0);
          puVar11 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
          *puVar11 = uVar10;
          thunk_FUN_02f411dc(puVar11,uVar10);
          uVar10 = FUN_02f07f14(*(undefined8 *)puVar3,0x15);
          FUN_0552106c(uVar10,*(undefined8 *)puVar5,0);
          puVar11 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
          *puVar11 = uVar10;
          thunk_FUN_02f411dc(puVar11,uVar10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


