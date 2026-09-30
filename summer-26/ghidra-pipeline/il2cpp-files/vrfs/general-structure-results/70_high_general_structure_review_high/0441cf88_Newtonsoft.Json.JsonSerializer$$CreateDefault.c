/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 0441cf88
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__CreateDefault(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x19 + 0xd8a) = 1;
  puVar1 = PTR_DAT_06da5688;
  plVar7 = (long *)(unaff_x20 + 0x18);
  if (*plVar7 == 0) {
    plVar2 = (long *)thunk_FUN_015d0480(*(undefined8 *)(unaff_x20 + 0x10),
                                        *(undefined8 *)PTR_DAT_06da5688);
    if (plVar2 == (long *)0x0) {
      lVar4 = FUN_04436348(PTR_DAT_06e406b0);
      return lVar4;
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0441d040;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar2,*(long *)puVar1,2);
LAB_0441d040:
    lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    *plVar7 = lVar4;
    thunk_FUN_01656ef8(plVar7,lVar4);
  }
  return *plVar7;
}


