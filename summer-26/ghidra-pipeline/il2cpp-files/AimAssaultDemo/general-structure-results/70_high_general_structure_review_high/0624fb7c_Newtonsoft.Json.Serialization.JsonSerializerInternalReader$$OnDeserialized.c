/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 0624fb7c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  int unaff_w21;
  int iVar3;
  long lVar4;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long in_stack_00000098;
  
  uVar1 = FUN_060c73cc();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x19 + 0x78);
    if (*(char *)(unaff_x27 + 0xbd1) == '\0') {
      FUN_0373b518(PTR_DAT_07d98650);
      *(undefined1 *)(unaff_x27 + 0xbd1) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      FUN_060be1d4(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (*(char *)(unaff_x26 + 0x59d) == '\0') {
      FUN_0373b518(PTR_DAT_07da5468);
      FUN_0373b518(PTR_DAT_07da5230);
      *(undefined1 *)(unaff_x26 + 0x59d) = 1;
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_060c73cc(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xfff0000000000000;
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0x68);
      if (*(char *)(unaff_x27 + 0xbd1) == '\0') {
        FUN_0373b518(PTR_DAT_07d98650);
        *(undefined1 *)(unaff_x27 + 0xbd1) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        FUN_060be1d4(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (*(char *)(unaff_x26 + 0x59d) == '\0') {
        FUN_0373b518(PTR_DAT_07da5468);
        FUN_0373b518(PTR_DAT_07da5230);
        *(undefined1 *)(unaff_x26 + 0x59d) = 1;
      }
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_060c73cc(), (uVar1 & 1) == 0))))
      {
        FUN_031ae340(*unaff_x25);
        uVar2 = FUN_0624cbc4(0,0);
        goto LAB_0624fd44;
      }
      uVar2 = 0x7ff8000000000000;
    }
  }
  else {
    uVar2 = 0x7ff0000000000000;
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_0624fd44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


