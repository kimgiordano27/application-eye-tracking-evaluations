/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_CheckAdditionalContent
ENTRY_POINT: 08e0a9bc
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


void Newtonsoft_Json_JsonSerializer__set_CheckAdditionalContent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar12;
  undefined8 unaff_x22;
  undefined8 *puVar13;
  
  puVar13 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar13 = unaff_x22;
  thunk_FUN_049ee3d8(puVar13);
  *(undefined8 *)(unaff_x19 + 0x80) = *puVar13;
  thunk_FUN_049ee3d8();
  puVar13 = (undefined8 *)(unaff_x19 + 0x78);
  *puVar13 = unaff_x21;
  thunk_FUN_049ee3d8(puVar13);
  puVar5 = PTR_DAT_0ac6a548;
  puVar2 = PTR_DAT_0ac09f18;
  plVar12 = (long *)*puVar13;
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6a548) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08e0aa58;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6a548,0);
LAB_08e0aa58:
    puVar6 = PTR_DAT_0ac0a2a0;
    puVar4 = PTR_DAT_0ac09ed0;
    puVar3 = PTR_DAT_0ac09e20;
    puVar1 = PTR_DAT_0ac09cf0;
    uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)puVar2);
    }
    uVar7 = FUN_05cf2544(uVar7,*(undefined8 *)puVar6);
    uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_05f901fc();
    uVar7 = FUN_05d08d6c(uVar7,uVar8,*(undefined8 *)puVar4);
    uVar8 = FUN_08aa1c24();
    FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_0ac0a870;
    plVar12 = *(long **)(unaff_x19 + 0x78);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar13 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_08e0ab74;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_04980e68(plVar12,*(long *)puVar5,1);
LAB_08e0ab74:
      uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      uVar7 = FUN_05cf2544(uVar7,*(undefined8 *)puVar6);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_05f901fc();
      uVar7 = FUN_05d08d6c(uVar7,uVar8,*(undefined8 *)puVar4);
      uVar8 = FUN_08aa1c24();
      FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar3);
      lVar9 = *(long *)(unaff_x19 + 0x40);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
      FUN_05f8bf14();
      puVar5 = PTR_DAT_0ac0a0f8;
      puVar2 = PTR_DAT_0ac09d30;
      if (lVar9 != 0) {
        UnityEngine_InputForUI_Event_MapAsEventModifiers__Map<CommandEvent>(lVar9,uVar7,0);
        FUN_08e0acb0();
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_08cc3ad0();
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar7 = FUN_09b8bbb0(uVar7,0);
        uVar8 = FUN_08aa1c24();
        FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


