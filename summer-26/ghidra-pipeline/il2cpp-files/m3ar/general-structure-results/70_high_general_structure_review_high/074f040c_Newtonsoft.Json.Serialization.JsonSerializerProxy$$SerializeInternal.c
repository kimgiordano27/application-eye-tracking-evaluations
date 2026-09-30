/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 074f040c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal(void)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint in_w8;
  int unaff_w19;
  int unaff_w20;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  uint unaff_w25;
  int unaff_w27;
  int unaff_w28;
  long *unaff_x29;
  undefined1 *in_stack_00000008;
  uint *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)in_w8 * 2);
    uVar7 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (9 < uVar1 - 0x30) {
      bVar2 = false;
      unaff_w24 = unaff_w27 + unaff_w20 + 1;
      goto LAB_074f0538;
    }
    unaff_w20 = unaff_w20 + 1;
    unaff_w25 = ((uint)uVar1 + unaff_w25 * unaff_w19) - 0x30;
    if (unaff_w20 == 8) {
      if (unaff_w24 < unaff_w23) {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar7 = (uint)uVar1;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (9 < uVar1 - 0x30) {
          bVar2 = false;
          goto LAB_074f0538;
        }
        unaff_w24 = unaff_w27 + 10;
        if ((0x19999999 < unaff_w25) || ((bVar2 = false, unaff_w25 == 0x19999999 && (0x35 < uVar1)))
           ) {
          bVar2 = true;
        }
        unaff_w25 = ((uint)uVar1 + unaff_w25 * 10) - 0x30;
        if (unaff_w23 <= unaff_w24) goto LAB_074f062c;
        lVar3 = *unaff_x29;
        goto LAB_074f04bc;
      }
      break;
    }
    in_w8 = unaff_w28 + unaff_w20;
  } while (in_w8 < unaff_w23);
LAB_074f0630:
  if (unaff_w25 == 0) {
    in_stack_00000018._4_4_ = 1;
  }
  if ((in_stack_00000018._4_4_ & 1) != 0) {
    uVar5 = 1;
    goto LAB_074f0604;
  }
  goto LAB_074f0648;
LAB_074f0538:
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_074f05fc;
    uVar7 = unaff_w24 + 1;
    if ((int)uVar7 < (int)unaff_w23) {
      puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      do {
        if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        uVar1 = *puVar6;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074f05bc;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (unaff_w23 != uVar7);
    }
    else {
LAB_074f05bc:
      if (uVar7 < unaff_w23) goto LAB_074f05d0;
    }
  }
  else {
LAB_074f05d0:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar4 = FUN_074f172c();
    if ((uVar4 & 1) == 0) {
LAB_074f05fc:
      unaff_w25 = 0;
      uVar5 = 0;
      goto LAB_074f0604;
    }
  }
LAB_074f062c:
  if (!bVar2) goto LAB_074f0630;
  goto LAB_074f0648;
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    bVar2 = true;
    if (unaff_w23 == unaff_w24) break;
LAB_074f04bc:
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar7 = (uint)uVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *unaff_x29;
    }
    if (9 < uVar1 - 0x30) goto LAB_074f0538;
  }
LAB_074f0648:
  unaff_w25 = 0;
  uVar5 = 0;
  *in_stack_00000008 = 1;
LAB_074f0604:
  *in_stack_00000010 = unaff_w25;
  return uVar5;
}


