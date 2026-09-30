/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 03f53eb4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<object>(void *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(unaff_x26 + 0x10) + 0x28)) {
    unaff_x23 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(param_1,unaff_x23,unaff_x24);
  if (unaff_x20 == (long *)0x0) {
    puVar3 = *(undefined8 **)(unaff_x26 + 0x20);
    uVar1 = *puVar3;
    if (-1 < *(int *)(*(long *)(unaff_x26 + 0x10) + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x22;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x18) = 0;
    pcVar5 = (code *)puVar3[2];
  }
  else {
    lVar2 = *(long *)(unaff_x26 + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678(lVar2);
      unaff_x26 = *(long *)(unaff_x21 + 0x38);
    }
    if (-1 < *(int *)(*(long *)(unaff_x26 + 0x10) + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          lVar2 = lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138;
          goto LAB_03f53f80;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar2 = FUN_0377596c();
LAB_03f53f80:
    *(undefined8 **)(unaff_x29 + -0x28) = unaff_x19;
    uVar1 = *(undefined8 *)(*(long *)(lVar2 + 8) + 8);
    pcVar5 = *(code **)(*(long *)(lVar2 + 8) + 0x10);
  }
  (*pcVar5)(uVar1);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(unaff_x29 + -0xc) != '\0');
}


