/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<UserDelegationToken>
ENTRY_POINT: 03f2be8c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2c0e8) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<UserDelegationToken>
              (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x20;
  int iVar9;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0338f71c();
      goto LAB_03f2beb4;
    }
    plVar2 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar2 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
LAB_03f2beb4:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar9 = 0;
  do {
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_083cc870) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f2bf1c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_03f2bf1c:
    uVar7 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_03f2c084;
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_03f2c05c;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_03f2bf90;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_0338f71c(plVar2,lVar5,0);
LAB_03f2bf90:
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar2,unaff_x29 + -0x18);
    memcpy(unaff_x26,unaff_x24,unaff_x23);
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    puVar1 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x28) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x25;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*(code *)puVar4[2])(uVar3);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      if (iVar9 == 0x7fffffff) {
        FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                     "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20();
      }
      iVar9 = iVar9 + 1;
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03f2c078;
    }
  }
LAB_03f2c05c:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_03f2c078:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_03f2c084:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}


