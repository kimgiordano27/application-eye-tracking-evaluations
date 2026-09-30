/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Example3_PostRequestHandler.PostJsonBody>
ENTRY_POINT: 03f2a968
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x03f2ab48) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<Example3_PostRequestHandler_PostJsonBody>(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  
  lVar3 = **(long **)(unaff_x20 + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618(lVar3);
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03f2a9f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a9f4:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar7 = 0;
  do {
    lVar3 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cc870) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03f2aa60;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_03f2aa60:
    uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return iVar7;
      }
      lVar3 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_03f2aabc;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (iVar7 == 0x7fffffff) {
      FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                   "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20();
    }
    iVar7 = iVar7 + 1;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03f2aad8;
    }
  }
LAB_03f2aabc:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_03f2aad8:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return iVar7;
}


