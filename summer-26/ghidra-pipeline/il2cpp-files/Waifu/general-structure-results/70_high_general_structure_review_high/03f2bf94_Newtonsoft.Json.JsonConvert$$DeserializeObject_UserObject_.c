/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<UserObject>
ENTRY_POINT: 03f2bf94
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2c0e8) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<UserObject>(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
    memcpy(unaff_x26,unaff_x24,unaff_x23);
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    puVar6 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x28) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x25;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (*(code *)puVar2[2])(uVar1);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      if (unaff_w22 == 0x7fffffff) {
        FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                     "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20();
      }
      unaff_w22 = unaff_w22 + 1;
    }
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(unaff_x28 + 0x870)) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f2bf1c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0338f71c();
LAB_03f2bf1c:
    uVar5 = (*(code *)*puVar6)();
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          param_1 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_03f2bf90;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    param_1 = FUN_0338f71c();
LAB_03f2bf90:
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f2c078;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0338f71c();
LAB_03f2c078:
    (*(code *)*puVar6)();
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w22;
}


