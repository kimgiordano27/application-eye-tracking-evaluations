/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 0500dac8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable(void)

{
  bool bVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  int unaff_w19;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *unaff_x26;
  int unaff_w28;
  ulong uVar11;
  long *unaff_x29;
  undefined1 *in_stack_00000018;
  
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = unaff_w28 - 0x30;
  if (9 < uVar5) {
    lVar3 = 0;
    uVar4 = 0;
    goto LAB_0500dc2c;
  }
  if (unaff_w28 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        uVar11 = 0;
        goto LAB_0500dd60;
      }
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar10 = (ulong)uVar2;
    } while (uVar2 == 0x30);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = uVar2 - 0x30;
    if (uVar5 < 10) goto LAB_0500db24;
    uVar6 = 0;
    uVar8 = unaff_w24;
LAB_0500dc74:
    uVar5 = (uint)uVar10;
    bVar1 = false;
LAB_0500dc78:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if ((uVar5 - 9 < 5) || (uVar5 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) != 0) {
        uVar8 = uVar8 + 1;
        if ((int)uVar8 < (int)unaff_w23) {
          puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          do {
            if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            uVar2 = *puVar7;
            if (*(int *)(*unaff_x26 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0500dcf4;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w23 != uVar8);
        }
        else {
LAB_0500dcf4:
          if (uVar8 < unaff_w23) goto LAB_0500dd08;
        }
        goto LAB_0500dd44;
      }
    }
    else {
LAB_0500dd08:
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar11 = FUN_0500f958();
      if ((uVar11 & 1) != 0) {
LAB_0500dd44:
        uVar11 = uVar6;
        if (!bVar1) goto LAB_0500dd60;
        goto LAB_0500dd48;
      }
    }
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
LAB_0500db24:
    uVar8 = unaff_w24 + 0x12;
    iVar9 = 1;
    uVar6 = (ulong)uVar5;
    do {
      uVar11 = uVar6;
      if (unaff_w23 <= unaff_w24 + iVar9) goto LAB_0500dd60;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar9) * 2);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      if (9 < uVar2 - 0x30) {
        uVar10 = (ulong)(uint)uVar2;
        uVar8 = unaff_w24 + iVar9;
        goto LAB_0500dc74;
      }
      iVar9 = iVar9 + 1;
      uVar11 = ((ulong)uVar2 + uVar6 * 10) - 0x30;
      uVar6 = uVar11;
    } while (iVar9 != 0x12);
    if (unaff_w23 <= uVar8) {
LAB_0500dd60:
      uVar4 = 1;
      lVar3 = uVar11 * (long)unaff_w19;
      goto LAB_0500dc2c;
    }
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
    uVar10 = (ulong)uVar2;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (9 < uVar2 - 0x30) goto LAB_0500dc74;
    uVar8 = unaff_w24 + 0x13;
    uVar6 = (uVar10 + uVar11 * 10) - 0x30;
    bVar1 = (ulong)(1U - unaff_w19 >> 1) + 0x7fffffffffffffff < uVar6 ||
            0xccccccccccccccc < (long)uVar11;
    if (unaff_w23 <= uVar8) goto LAB_0500dd44;
    lVar3 = *unaff_x26;
    do {
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      uVar5 = (uint)uVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar3 = *unaff_x26;
      }
      if (9 < uVar2 - 0x30) goto LAB_0500dc78;
      uVar8 = uVar8 + 1;
      bVar1 = true;
    } while (unaff_w23 != uVar8);
LAB_0500dd48:
    lVar3 = 0;
    uVar4 = 0;
    *in_stack_00000018 = 1;
  }
LAB_0500dc2c:
  *unaff_x29 = lVar3;
  return uVar4;
}


