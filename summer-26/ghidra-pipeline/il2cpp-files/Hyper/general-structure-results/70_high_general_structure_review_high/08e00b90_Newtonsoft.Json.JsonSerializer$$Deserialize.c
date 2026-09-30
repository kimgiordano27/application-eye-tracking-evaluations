/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 08e00b90
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  
  uVar4 = FUN_07764450();
  puVar2 = PTR_DAT_0ac3fce0;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0ac3fce0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
  }
  if (DAT_0b324078 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac3fce0);
    FUN_04947ee4(PTR_DAT_0ac10af0);
    DAT_0b324078 = '\x01';
  }
  puVar1 = PTR_DAT_0ac10af0;
  lVar5 = *(long *)PTR_DAT_0ac10af0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08df456c();
  }
  puVar8 = (undefined8 *)(unaff_x19 + 0x58);
  plVar9 = (long *)*puVar8;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar5 = *plVar9;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac69ef8) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_08e00ca4;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac69ef8,0);
LAB_08e00ca4:
  iVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  puVar2 = PTR_DAT_0ac69f00;
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      lVar5 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_08e00d14;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar9,*(long *)puVar2,0);
LAB_08e00d14:
      lVar5 = (*(code *)*puVar6)(plVar9,iVar10,puVar6[1]);
      if ((lVar5 != 0) && (uVar4 = FUN_08df2c3c(), (uVar4 & 1) == 0)) {
        FUN_08df5478(lVar5);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
  }
  *puVar8 = 0;
  thunk_FUN_049ee3d8(puVar8,0);
  return;
}


