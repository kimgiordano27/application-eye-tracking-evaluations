/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<CheckoutProcessObject>
ENTRY_POINT: 03f2ac5c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2ae98) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<CheckoutProcessObject>(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  int iVar9;
  long unaff_x22;
  
  if (param_1 == 0) {
    FUN_0338f674();
  }
  if (unaff_x19 == (long *)0x0) {
    puVar2 = &DAT_084585b8;
  }
  else {
    if (unaff_x22 != 0) {
      lVar5 = **(long **)(unaff_x20 + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0338f618(lVar5);
      }
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f2acd4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_03f2acd4:
      plVar3 = (long *)(*(code *)*puVar2)();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      iVar9 = 0;
      do {
        lVar5 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_083cc870) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f2ad40;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,0);
LAB_03f2ad40:
        uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar3 == (long *)0x0) {
            return iVar9;
          }
          lVar5 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 == 0) goto LAB_03f2ae28;
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_03f2ae10;
        }
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0338f618(lVar5);
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f2adb4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0338f71c(plVar3,lVar5,0);
LAB_03f2adb4:
        uVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        uVar7 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),uVar1 & 1,
                           *(undefined8 *)(unaff_x22 + 0x28));
        if ((uVar7 & 1) != 0) {
          if (iVar9 == 0x7fffffff) {
            FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                         "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20();
          }
          iVar9 = iVar9 + 1;
        }
      } while( true );
    }
    puVar2 = (undefined8 *)&DAT_08456ff0;
  }
  uVar4 = FUN_033d1ba8(puVar2);
  FUN_06cfae28(uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03f2ae10:
    if (*(long *)(piVar8 + -2) == DAT_083cc7a8) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03f2ae44;
    }
  }
LAB_03f2ae28:
  puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc7a8,0);
LAB_03f2ae44:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return iVar9;
}


