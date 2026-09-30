/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 07a488c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  int in_w8;
  long lVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar8;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  int unaff_w25;
  ulong uVar10;
  long *unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000008;
  int in_stack_00000010;
  
  while( true ) {
    bVar5 = unaff_w25 == -1;
    unaff_w25 = unaff_w25 + 1;
    unaff_x28 = (unaff_x20 + unaff_x28 * unaff_x29) - 0x30;
    if (bVar5) break;
    if (unaff_w23 <= in_w8 + 0x13U) goto LAB_07a48ae8;
    uVar3 = *(ushort *)(unaff_x21 + (long)(unaff_w27 + unaff_w25 + 0x12) * 2);
    unaff_x20 = (ulong)uVar3;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (9 < uVar3 - 0x30) {
      unaff_w24 = unaff_w27 + unaff_w25 + 0x12;
      uVar10 = (ulong)(uint)uVar3;
      goto LAB_07a489b4;
    }
    in_w8 = unaff_w27 + unaff_w25;
  }
  if (in_w8 + 0x13U < unaff_w23) {
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar10 = (ulong)uVar3;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (uVar3 - 0x30 < 10) {
      bVar5 = 0xccccccccccccccc < (long)unaff_x28;
      iVar2 = 2 - in_stack_00000010;
      if (-1 < 1 - in_stack_00000010) {
        iVar2 = 1 - in_stack_00000010;
      }
      unaff_x28 = (uVar10 + unaff_x28 * 10) - 0x30;
      unaff_w24 = unaff_w27 + 0x13;
      bVar1 = (ulong)(uint)(iVar2 >> 1) + 0x7fffffffffffffff < unaff_x28;
      bVar4 = bVar5 || bVar1;
      if (unaff_w24 < unaff_w23) {
        do {
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          uVar9 = (uint)uVar3;
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar3 - 0x30) goto LAB_07a489c4;
          unaff_w24 = unaff_w24 + 1;
          bVar4 = true;
        } while (unaff_w23 != unaff_w24);
      }
      else if (!bVar5 && !bVar1) goto LAB_07a48ae8;
    }
    else {
LAB_07a489b4:
      bVar4 = false;
      uVar9 = (uint)uVar10;
LAB_07a489c4:
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07a48aac;
        uVar9 = unaff_w24 + 1;
        if ((int)uVar9 < (int)unaff_w23) {
          puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          do {
            if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar3 = *puVar8;
            if (*(int *)(*unaff_x26 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_07a48a38;
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (unaff_w23 != uVar9);
        }
        else {
LAB_07a48a38:
          if (uVar9 < unaff_w23) goto LAB_07a48a4c;
        }
      }
      else {
LAB_07a48a4c:
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar10 = FUN_07a4a680();
        if ((uVar10 & 1) == 0) {
LAB_07a48aac:
          lVar7 = 0;
          uVar6 = 0;
          goto LAB_07a48ab4;
        }
      }
      if (!bVar4) goto LAB_07a48ae8;
    }
    lVar7 = 0;
    uVar6 = 0;
    *in_stack_00000008 = 1;
  }
  else {
LAB_07a48ae8:
    uVar6 = 1;
    lVar7 = unaff_x28 * (long)in_stack_00000010;
  }
LAB_07a48ab4:
  *unaff_x19 = lVar7;
  return uVar6;
}


