/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<ErrorObject>
ENTRY_POINT: 03f2ad70
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2ae98) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<ErrorObject>
              (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f2adb4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_03f2adb4:
    uVar1 = (*(code *)*puVar2)();
    uVar4 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),uVar1 & 1,*(undefined8 *)(unaff_x22 + 0x28)
                      );
    if ((uVar4 & 1) != 0) {
      if (unaff_w21 == unaff_w24) {
        FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                     "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20();
      }
      unaff_w21 = unaff_w21 + 1;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(unaff_x23 + 0x870)) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f2ad40;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_03f2ad40:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) break;
    param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_0338f618(param_3);
    }
    param_1 = *unaff_x19;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083cc7a8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f2ae44;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_03f2ae44:
    (*(code *)*puVar2)();
  }
  return unaff_w21;
}


