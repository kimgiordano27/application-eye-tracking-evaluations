/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 07a49ac8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(void)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *unaff_x19;
  uint unaff_w20;
  uint uVar4;
  uint uVar5;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar6;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *unaff_x27;
  long *unaff_x29;
  uint uStack000000000000000c;
  
  do {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar9 = (ulong)uVar1;
    uVar7 = uVar1 - 0x30;
    if (uVar7 != 0) {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (9 < uVar7) {
        uVar10 = 0;
        uVar7 = unaff_w24;
        goto LAB_07a49c6c;
      }
      uVar4 = unaff_w24 + 1;
      uVar10 = (ulong)uVar7;
      uVar7 = unaff_w24 + 0x13;
      iVar8 = -0x12;
      uStack000000000000000c = unaff_w20;
      goto LAB_07a49b14;
    }
    unaff_w24 = unaff_w24 + 1;
  } while (unaff_w24 < unaff_w23);
  uVar10 = 0;
LAB_07a49d7c:
  uVar3 = 1;
  goto LAB_07a49d40;
  while( true ) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar8 + 0x13) * 2);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = (uint)uVar1;
    uVar5 = uStack000000000000000c;
    if (9 < uVar4 - 0x30) {
      bVar2 = false;
      uVar7 = unaff_w24 + iVar8 + 0x13;
      goto FUN_07a49c70;
    }
    uVar4 = unaff_w24 + iVar8 + 0x14;
    bVar2 = iVar8 == -1;
    iVar8 = iVar8 + 1;
    uVar10 = ((ulong)uVar1 + uVar10 * 10) - 0x30;
    if (bVar2) break;
LAB_07a49b14:
    if (unaff_w23 <= uVar4) goto LAB_07a49d6c;
  }
  if (uVar4 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
    uVar9 = (ulong)uVar1;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    unaff_w20 = uStack000000000000000c;
    if (uVar1 - 0x30 < 10) {
      uVar7 = unaff_w24 + 0x14;
      if ((0x1999999999999999 < uVar10) ||
         ((bVar2 = false, uVar10 == 0x1999999999999999 && (0x35 < uVar1)))) {
        bVar2 = true;
      }
      uVar10 = (uVar9 + uVar10 * 10) - 0x30;
      if (unaff_w23 <= uVar7) goto LAB_07a49d68;
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
        uVar4 = (uint)uVar1;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (9 < uVar1 - 0x30) goto FUN_07a49c70;
        uVar7 = uVar7 + 1;
        bVar2 = true;
      } while (unaff_w23 != uVar7);
    }
    else {
LAB_07a49c6c:
      uVar4 = (uint)uVar9;
      bVar2 = false;
      uVar5 = unaff_w20;
FUN_07a49c70:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar4 - 9 < 5) || (uVar4 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07a49d38;
        uVar7 = uVar7 + 1;
        if ((int)uVar7 < (int)unaff_w23) {
          puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
          do {
            if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar1 = *puVar6;
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07a49cec;
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 1;
          } while (unaff_w23 != uVar7);
        }
        else {
LAB_07a49cec:
          if (uVar7 < unaff_w23) goto LAB_07a49d00;
        }
      }
      else {
LAB_07a49d00:
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar9 = FUN_07a4a680();
        if ((uVar9 & 1) == 0) {
LAB_07a49d38:
          uVar10 = 0;
          uVar3 = 0;
          goto LAB_07a49d40;
        }
      }
LAB_07a49d68:
      uStack000000000000000c = uVar5;
      if (!bVar2) goto LAB_07a49d6c;
    }
  }
  else {
LAB_07a49d6c:
    if ((uStack000000000000000c & 1) != 0 || uVar10 == 0) goto LAB_07a49d7c;
  }
  uVar10 = 0;
  uVar3 = 0;
  *unaff_x27 = 1;
LAB_07a49d40:
  *unaff_x19 = uVar10;
  return uVar3;
}


