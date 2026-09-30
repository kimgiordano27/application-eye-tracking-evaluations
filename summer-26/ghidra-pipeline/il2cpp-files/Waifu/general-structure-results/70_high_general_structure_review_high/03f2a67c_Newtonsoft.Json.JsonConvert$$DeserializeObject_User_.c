/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<User>
ENTRY_POINT: 03f2a67c
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2a754) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<User>(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  
  do {
    if (unaff_w21 == unaff_w23) {
      FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                   "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20();
    }
    unaff_w21 = unaff_w21 + 1;
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(unaff_x22 + 0x870)) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03f2a66c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a66c:
    uVar3 = (*(code *)*puVar1)();
  } while ((uVar3 & 1) != 0);
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_083cc7a8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03f2a6e4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a6e4:
    (*(code *)*puVar1)();
  }
  return unaff_w21;
}


