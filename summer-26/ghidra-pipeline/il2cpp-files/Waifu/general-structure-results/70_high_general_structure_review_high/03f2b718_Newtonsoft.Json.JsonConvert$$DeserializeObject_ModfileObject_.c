/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<ModfileObject>
ENTRY_POINT: 03f2b718
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2b918) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<ModfileObject>
              (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  int iVar8;
  long unaff_x22;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03f2b758;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2b758:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar8 = 0;
  do {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cc870) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f2b7c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_03f2b7c4:
    uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return iVar8;
      }
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03f2b8a8;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0338f618(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f2b838;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,lVar4,0);
LAB_03f2b838:
    uVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    uVar6 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),uVar3,*(undefined8 *)(unaff_x22 + 0x28));
    if ((uVar6 & 1) != 0) {
      if (iVar8 == 0x7fffffff) {
        FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                     "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20();
      }
      iVar8 = iVar8 + 1;
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03f2b8c4;
    }
  }
LAB_03f2b8a8:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_03f2b8c4:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return iVar8;
}


