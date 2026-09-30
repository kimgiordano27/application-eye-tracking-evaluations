/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MultipartUpload>
ENTRY_POINT: 03f2b82c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03f2b918) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<MultipartUpload>(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  
code_r0x03f2b82c:
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    uVar2 = (*(code *)*puVar1)();
    uVar3 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),uVar2,*(undefined8 *)(unaff_x22 + 0x28));
    if ((uVar3 & 1) != 0) {
      if (unaff_w21 == unaff_w24) {
        FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                     "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20();
      }
      unaff_w21 = unaff_w21 + 1;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(unaff_x23 + 0x870)) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f2b7c4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2b7c4:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return unaff_w21;
      }
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_03f2b8a8;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0338f618(lVar4);
    }
    param_1 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar4) goto code_r0x03f2b82c;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar5 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03f2b8c4;
    }
  }
LAB_03f2b8a8:
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2b8c4:
  (*(code *)*puVar1)();
  return unaff_w21;
}


