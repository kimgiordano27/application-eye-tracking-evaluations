/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 0500df40
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference
               (long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint in_w9;
  int in_w10;
  int in_w11;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar4;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  uint uVar5;
  
  do {
    iVar2 = *(int *)(param_1 + unaff_x27 * 4 + 0x20);
    if (iVar2 == 0xff) break;
    in_w11 = in_w11 + 1;
    unaff_x26 = (long)iVar2 + unaff_x26 * 0x10;
    if (in_w11 == 0x10) {
      if (unaff_w21 <= unaff_w24) goto LAB_0500e018;
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
      unaff_x27 = (ulong)uVar1;
      if ((uVar1 < in_w9) && (*(int *)(param_1 + unaff_x27 * 4 + 0x20) != 0xff)) {
        unaff_w24 = in_w10 + 0x11;
        if (unaff_w21 <= unaff_w24) goto LAB_0500e058;
        goto LAB_0500e078;
      }
      uVar5 = 0;
      goto LAB_0500df94;
    }
    if (unaff_w21 <= (uint)(in_w10 + in_w11)) goto LAB_0500e018;
    uVar1 = *(ushort *)(unaff_x22 + (long)(in_w10 + in_w11) * 2);
    unaff_x27 = (ulong)uVar1;
  } while (uVar1 < in_w9);
  uVar5 = 0;
  unaff_w24 = in_w10 + in_w11;
LAB_0500df94:
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (((int)unaff_x27 - 9U < 5) || ((int)unaff_x27 == 0x20)) {
    if ((unaff_w23 >> 1 & 1) == 0) {
      unaff_x26 = 0;
      uVar3 = 0;
      goto LAB_0500de94;
    }
    uVar3 = unaff_w24 + 1;
    if ((int)uVar3 < (int)unaff_w21) {
      puVar4 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
      do {
        if (unaff_w21 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        uVar1 = *puVar4;
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0500e004;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (unaff_w21 != uVar3);
    }
    else {
LAB_0500e004:
      if (uVar3 < unaff_w21) goto LAB_0500e028;
    }
    if (uVar5 == 0) {
LAB_0500e018:
      uVar3 = 1;
      goto LAB_0500de94;
    }
  }
  else {
LAB_0500e028:
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar3 = FUN_0500f958();
    if ((uVar3 & 1) == 0) {
      unaff_x26 = 0;
    }
    if ((uVar3 & 1 & uVar5) == 0) goto LAB_0500de94;
  }
  goto LAB_0500e058;
  while (unaff_w24 = unaff_w24 + 1, unaff_w21 != unaff_w24) {
LAB_0500e078:
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    unaff_x27 = (ulong)uVar1;
    if ((in_w9 <= uVar1) || (*(int *)(param_1 + unaff_x27 * 4 + 0x20) == 0xff)) {
      uVar5 = 1;
      goto LAB_0500df94;
    }
  }
LAB_0500e058:
  unaff_x26 = 0;
  uVar3 = 0;
  *unaff_x20 = 1;
LAB_0500de94:
  *unaff_x19 = unaff_x26;
  return uVar3 & 1;
}


