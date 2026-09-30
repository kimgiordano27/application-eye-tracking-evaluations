/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<ModCommentObject>
ENTRY_POINT: 03f2a1ac
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2a360) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<ModCommentObject>
              (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03f2a20c;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a20c:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar6 = 0;
  do {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083cc870) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f2a278;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_03f2a278:
    uVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return iVar6;
      }
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_03f2a2d4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (iVar6 == 0x7fffffff) {
      FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                   "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20();
    }
    iVar6 = iVar6 + 1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03f2a2f0;
    }
  }
LAB_03f2a2d4:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_03f2a2f0:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return iVar6;
}


