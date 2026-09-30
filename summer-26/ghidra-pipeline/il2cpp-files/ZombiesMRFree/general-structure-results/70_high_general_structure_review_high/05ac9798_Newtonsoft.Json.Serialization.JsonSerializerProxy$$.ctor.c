/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 05ac9798
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar6;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xd2) = in_w8;
  if (*(long **)(unaff_x21 + 0x10) != unaff_x20) {
    if (unaff_x20 == unaff_x19) {
      return 1;
    }
    plVar6 = *(long **)(unaff_x21 + 0x40);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06f99290) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_05ac984c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06f99290,0);
LAB_05ac984c:
                    /* WARNING: Could not recover jumptable at 0x05ac9868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar1)(plVar6);
      return uVar2;
    }
    if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05ac9828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*unaff_x20 + 0x138))();
      return uVar2;
    }
  }
  return 0;
}


