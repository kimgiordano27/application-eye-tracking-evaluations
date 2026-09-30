/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_StringEscapeHandling
ENTRY_POINT: 08e0a76c
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_StringEscapeHandling(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  
  if ((*(byte *)(unaff_x20 + 0xc49) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09b90);
    *(undefined1 *)(unaff_x20 + 0xc49) = 1;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(unaff_x19 + 0x10),
               *(undefined8 *)(lVar4 + 0x28));
  }
  puVar1 = PTR_DAT_0ac09b90;
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08e0a804;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e0a804:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x28),0);
  puVar2 = (undefined8 *)(unaff_x19 + 0x30);
  plVar7 = (long *)*puVar2;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08e0a874;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)puVar1,0);
LAB_08e0a874:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  *puVar2 = 0;
  thunk_FUN_049ee3d8(puVar2,0);
  return;
}


