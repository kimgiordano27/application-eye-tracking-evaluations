/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 076837e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(void)

{
  bool bVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w9;
  int unaff_w19;
  int unaff_w20;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  uint unaff_w25;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  uint unaff_w29;
  uint uVar8;
  undefined1 *in_stack_00000008;
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_040d65a8();
    }
    if (9 < unaff_w25 - 0x30) {
      bVar1 = false;
      unaff_w24 = unaff_w27 + unaff_w20 + 1;
      goto LAB_076838f0;
    }
    unaff_w20 = unaff_w20 + 1;
    unaff_w29 = (unaff_w25 + unaff_w29 * unaff_w19) - 0x30;
    if (unaff_w20 == 8) break;
    if (unaff_w23 <= (uint)(unaff_w28 + unaff_w20)) goto LAB_07683a04;
    unaff_w25 = (uint)*(ushort *)(unaff_x21 + (long)(unaff_w28 + unaff_w20) * 2);
    in_w9 = *(int *)(*unaff_x26 + 0xe4);
  }
  if (unaff_w24 < unaff_w23) {
    unaff_w25 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (9 < unaff_w25 - 0x30) {
      bVar1 = false;
      goto LAB_076838f0;
    }
    unaff_w24 = unaff_w27 + 10;
    uVar8 = (unaff_w25 + unaff_w29 * 10) - 0x30;
    bVar1 = (1U - in_stack_00000018._4_4_ >> 1) + 0x7fffffff < uVar8 || 0xccccccc < (int)unaff_w29;
    if (unaff_w23 <= unaff_w24) goto LAB_076839ec;
    lVar3 = *unaff_x26;
    goto LAB_07683884;
  }
LAB_07683a04:
  uVar5 = 1;
  in_stack_00000018._4_4_ = unaff_w29 * in_stack_00000018._4_4_;
LAB_076839bc:
  *in_stack_00000010 = in_stack_00000018._4_4_;
  return uVar5;
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    bVar1 = true;
    if (unaff_w23 == unaff_w24) break;
LAB_07683884:
    unaff_w25 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar3 = *unaff_x26;
    }
    unaff_w29 = uVar8;
    if (9 < unaff_w25 - 0x30) goto LAB_076838f0;
  }
LAB_076839f0:
  in_stack_00000018._4_4_ = 0;
  uVar5 = 0;
  *in_stack_00000008 = 1;
  goto LAB_076839bc;
LAB_076838f0:
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = unaff_w29;
  if ((unaff_w25 - 9 < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_076839b4;
    uVar7 = unaff_w24 + 1;
    if ((int)uVar7 < (int)unaff_w23) {
      puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      do {
        if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar2 = *puVar6;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07683974;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (unaff_w23 != uVar7);
    }
    else {
LAB_07683974:
      if (uVar7 < unaff_w23) goto LAB_07683988;
    }
  }
  else {
LAB_07683988:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_076860bc();
    if ((uVar4 & 1) == 0) {
LAB_076839b4:
      in_stack_00000018._4_4_ = 0;
      uVar5 = 0;
      goto LAB_076839bc;
    }
  }
LAB_076839ec:
  unaff_w29 = uVar8;
  if (bVar1) goto LAB_076839f0;
  goto LAB_07683a04;
}


