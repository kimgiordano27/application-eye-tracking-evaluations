/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 04928f9c
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar5;
  undefined8 *in_stack_00000010;
  
  __cxa_end_catch();
  plVar5 = (long *)*in_stack_00000010;
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0910bb38) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04928f14;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(plVar5,*(long *)PTR_DAT_0910bb38,0);
LAB_04928f14:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (unaff_x19 == 0) {
    return unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13624();
}


