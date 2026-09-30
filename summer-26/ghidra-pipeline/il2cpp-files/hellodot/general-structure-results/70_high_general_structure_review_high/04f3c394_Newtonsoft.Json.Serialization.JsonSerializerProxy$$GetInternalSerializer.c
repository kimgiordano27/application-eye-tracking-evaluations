/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$GetInternalSerializer
ENTRY_POINT: 04f3c394
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__GetInternalSerializer(long param_1)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *unaff_x19;
  ushort *puVar5;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar6;
  uint unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  long *unaff_x29;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (unaff_w25 - 0x30 < 10) {
    unaff_w24 = unaff_w27 + 10;
    if ((0x19999999 < unaff_w26) || ((bVar2 = false, unaff_w26 == 0x19999999 && (0x35 < unaff_w25)))
       ) {
      bVar2 = true;
    }
    unaff_w26 = (unaff_w25 - 0x30) + unaff_w26 * 10;
    if (unaff_w23 <= unaff_w24) goto LAB_04f3c534;
    do {
      unaff_w25 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (9 < unaff_w25 - 0x30) goto LAB_04f3c474;
      unaff_w24 = unaff_w24 + 1;
      bVar2 = true;
    } while (unaff_w23 != unaff_w24);
  }
  else {
    bVar2 = false;
LAB_04f3c474:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((unaff_w25 - 9 < 5) || (unaff_w25 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_04f3c554;
      uVar6 = unaff_w24 + 1;
      if ((int)uVar6 < (int)unaff_w23) {
        puVar5 = (ushort *)(unaff_x21 + (long)(int)uVar6 * 2);
        do {
          if (unaff_w23 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          uVar1 = *puVar5;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3c4f0;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (unaff_w23 != uVar6);
      }
      else {
LAB_04f3c4f0:
        if (uVar6 < unaff_w23) goto LAB_04f3c504;
      }
    }
    else {
LAB_04f3c504:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_04f3d628();
      if ((uVar3 & 1) == 0) {
LAB_04f3c554:
        unaff_w26 = 0;
        uVar4 = 0;
        goto LAB_04f3c55c;
      }
    }
LAB_04f3c534:
    if ((!bVar2) && ((in_stack_00000018 & 0x100000000) != 0 || unaff_w26 == 0)) {
      uVar4 = 1;
      goto LAB_04f3c55c;
    }
  }
  unaff_w26 = 0;
  uVar4 = 0;
  *in_stack_00000010 = 1;
LAB_04f3c55c:
  *unaff_x19 = unaff_w26;
  return uVar4;
}


