/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 07182d4c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07182cf8) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar5;
  uint unaff_w23;
  uint uVar6;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x28;
  int in_stack_00000010;
  
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((unaff_w25 - 9U < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07182d20;
    uVar6 = unaff_w24 + 1;
    if ((int)uVar6 < (int)unaff_w23) {
      puVar5 = (ushort *)(unaff_x21 + (long)(int)uVar6 * 2);
      do {
        if (unaff_w23 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        uVar1 = *puVar5;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07182cac;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (unaff_w23 != uVar6);
    }
    else {
LAB_07182cac:
      if (uVar6 < unaff_w23) goto LAB_07182cc0;
    }
  }
  else {
LAB_07182cc0:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_071848d8();
    if ((uVar2 & 1) == 0) {
LAB_07182d20:
      lVar4 = 0;
      uVar3 = 0;
      goto LAB_07182d28;
    }
  }
  uVar3 = 1;
  lVar4 = unaff_x28 * in_stack_00000010;
LAB_07182d28:
  *unaff_x19 = lVar4;
  return uVar3;
}


