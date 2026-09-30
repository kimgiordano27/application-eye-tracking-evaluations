/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_CheckAdditionalContent
ENTRY_POINT: 08e0a980
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar14;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar15;
  
  FUN_04947ee4(PTR_DAT_0ac6a540);
  *(undefined1 *)(unaff_x20 + 0xc4a) = 1;
  lVar8 = thunk_FUN_04983f60(*unaff_x23);
  FUN_08dbf2f0(lVar8,0);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = unaff_x19;
    thunk_FUN_049ee3d8();
    puVar15 = (undefined8 *)(lVar8 + 0x18);
    *puVar15 = unaff_x22;
    thunk_FUN_049ee3d8(puVar15);
    *(undefined8 *)(unaff_x19 + 0x80) = *puVar15;
    thunk_FUN_049ee3d8();
    puVar15 = (undefined8 *)(unaff_x19 + 0x78);
    *puVar15 = unaff_x21;
    thunk_FUN_049ee3d8(puVar15);
    puVar5 = PTR_DAT_0ac6a548;
    puVar2 = PTR_DAT_0ac09f18;
    plVar14 = (long *)*puVar15;
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac6a548) {
            puVar15 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_08e0aa58;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac6a548,0);
LAB_08e0aa58:
      puVar7 = PTR_DAT_0ac6a558;
      puVar6 = PTR_DAT_0ac0a2a0;
      puVar4 = PTR_DAT_0ac09ed0;
      puVar3 = PTR_DAT_0ac09e20;
      puVar1 = PTR_DAT_0ac09cf0;
      uVar9 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)puVar2);
      }
      uVar9 = FUN_05cf2544(uVar9,*(undefined8 *)puVar6);
      uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_05f901fc(uVar10,lVar8,*(undefined8 *)puVar7,0);
      uVar9 = FUN_05d08d6c(uVar9,uVar10,*(undefined8 *)puVar4);
      uVar10 = FUN_08aa1c24();
      FUN_05b466fc(uVar9,uVar10,*(undefined8 *)puVar3);
      puVar7 = PTR_DAT_0ac6a560;
      puVar2 = PTR_DAT_0ac0a870;
      plVar14 = *(long **)(unaff_x19 + 0x78);
      if (plVar14 != (long *)0x0) {
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar15 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_08e0ab74;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_04980e68(plVar14,*(long *)puVar5,1);
LAB_08e0ab74:
        uVar9 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        uVar9 = FUN_05cf2544(uVar9,*(undefined8 *)puVar6);
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_05f901fc(uVar10,lVar8,*(undefined8 *)puVar7,0);
        uVar9 = FUN_05d08d6c(uVar9,uVar10,*(undefined8 *)puVar4);
        uVar10 = FUN_08aa1c24();
        FUN_05b466fc(uVar9,uVar10,*(undefined8 *)puVar3);
        lVar11 = *(long *)(unaff_x19 + 0x40);
        uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_05f8bf14();
        puVar1 = PTR_DAT_0ac6a568;
        puVar5 = PTR_DAT_0ac0a0f8;
        puVar2 = PTR_DAT_0ac09d30;
        if (lVar11 != 0) {
          UnityEngine_InputForUI_Event_MapAsEventModifiers__Map<CommandEvent>(lVar11,uVar9,0);
          FUN_08e0acb0();
          uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
          FUN_08cc3ad0(uVar9,lVar8,*(undefined8 *)puVar1,0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar9 = FUN_09b8bbb0(uVar9,0);
          uVar10 = FUN_08aa1c24();
          FUN_05b466fc(uVar9,uVar10,*(undefined8 *)puVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


