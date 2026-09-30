/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<ModMediaObject>
ENTRY_POINT: 03f2a23c
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


/* WARNING: Removing unreachable block (ram,0x03f2a360) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<ModMediaObject>
              (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *piVar4;
  long *unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  
  do {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03f2a278;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a278:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return unaff_w21;
        }
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_03f2a2d4;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03f2a2bc;
      }
      if (unaff_w21 == unaff_w23) {
        FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                     "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20();
      }
      unaff_w21 = unaff_w21 + 1;
      param_1 = *unaff_x19;
      param_3 = *(long *)(unaff_x22 + 0x870);
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_03f2a2bc:
    if (*(long *)(piVar4 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_03f2a2f0;
    }
  }
LAB_03f2a2d4:
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a2f0:
  (*(code *)*puVar1)();
  return unaff_w21;
}


