/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 05ac7370
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference
          (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = *(undefined8 **)(unaff_x20 + 0xf38);
  uVar1 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x2a0));
  uVar2 = FUN_02fe9340(*puVar6,uVar1);
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar3 = *plVar7;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06f80978) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05ac7448;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06f80978,0);
LAB_05ac7448:
  (*(code *)*puVar6)(plVar7,uVar2,0,puVar6[1]);
  return uVar2;
}


