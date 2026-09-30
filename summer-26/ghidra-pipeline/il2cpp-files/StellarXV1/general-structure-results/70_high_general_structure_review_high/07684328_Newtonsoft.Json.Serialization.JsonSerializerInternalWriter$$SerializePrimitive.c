/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 07684328
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(long param_1)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_x9;
  long in_x10;
  int unaff_w19;
  ushort *puVar5;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar6;
  long *unaff_x26;
  long unaff_x28;
  bool bVar7;
  long *in_stack_00000010;
  undefined1 *in_stack_00000018;
  
  bVar7 = (ulong)(in_x9 + in_x10) < param_1 - 0x30U || 0xccccccccccccccc < unaff_x28;
  if (unaff_w23 <= unaff_w24) goto LAB_076844a8;
  lVar2 = *unaff_x26;
  do {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *unaff_x26;
    }
    if (9 < uVar1 - 0x30) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0768446c;
      if ((unaff_w22 >> 1 & 1) == 0)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType;
      uVar6 = unaff_w24 + 1;
      if ((int)unaff_w23 <= (int)uVar6) goto LAB_07684458;
      puVar5 = (ushort *)(unaff_x21 + (long)(int)uVar6 * 2);
      goto LAB_07684410;
    }
    unaff_w24 = unaff_w24 + 1;
    bVar7 = true;
  } while (unaff_w23 != unaff_w24);
  goto LAB_076844ac;
LAB_07684458:
  if (uVar6 < unaff_w23) {
LAB_0768446c:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_076860bc();
    if ((uVar3 & 1) == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType:
      lVar2 = 0;
      uVar4 = 0;
      goto LAB_076844d0;
    }
  }
  goto LAB_076844a8;
  while( true ) {
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
    if (unaff_w23 == uVar6) break;
LAB_07684410:
    if (unaff_w23 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar1 = *puVar5;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07684458;
  }
LAB_076844a8:
  if (bVar7) {
LAB_076844ac:
    lVar2 = 0;
    uVar4 = 0;
    *in_stack_00000018 = 1;
  }
  else {
    uVar4 = 1;
    lVar2 = (param_1 - 0x30U) * (long)unaff_w19;
  }
LAB_076844d0:
  *in_stack_00000010 = lVar2;
  return uVar4;
}


