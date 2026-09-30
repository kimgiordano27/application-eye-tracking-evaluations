/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 01bb593c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  FUN_01bb4930();
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    FUN_0443ad6c(*(long *)(unaff_x20 + 0x78),0);
    FUN_01bb4930();
    FUN_01bb4930();
    *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + 0x10;
    lVar2 = *(long *)(unaff_x20 + 0x68);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
      lVar4 = *(long *)(lVar2 + 0x10);
      lVar6 = *(long *)PTR_DAT_06e48600;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = uVar3;
          thunk_FUN_01656ef8(puVar5);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))();
        }
        *unaff_x19 = 0;
        thunk_FUN_01656ef8();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


