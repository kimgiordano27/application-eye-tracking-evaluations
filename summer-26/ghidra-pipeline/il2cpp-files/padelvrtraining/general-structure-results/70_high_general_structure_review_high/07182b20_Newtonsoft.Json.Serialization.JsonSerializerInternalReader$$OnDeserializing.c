/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 07182b20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing(void)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w9;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar6;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  int unaff_w25;
  ulong uVar8;
  long *unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000008;
  int in_stack_00000010;
  
  do {
    if (in_w9 == 0) {
      thunk_FUN_03db619c();
    }
    if (9 < (int)unaff_x20 - 0x30U) {
      unaff_w24 = unaff_w27 + unaff_w25 + 0x12;
      uVar8 = unaff_x20 & 0xffffffff;
LAB_07182c28:
      bVar3 = false;
      uVar7 = (uint)uVar8;
      break;
    }
    uVar7 = unaff_w27 + unaff_w25 + 0x13;
    bVar3 = unaff_w25 == -1;
    unaff_w25 = unaff_w25 + 1;
    unaff_x28 = (unaff_x20 + unaff_x28 * unaff_x29) - 0x30;
    if (bVar3) {
      if (uVar7 < unaff_w23) {
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar8 = (ulong)uVar2;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if (9 < uVar2 - 0x30) goto LAB_07182c28;
        bVar3 = 0xccccccccccccccc < (long)unaff_x28;
        iVar1 = 2 - in_stack_00000010;
        if (-1 < 1 - in_stack_00000010) {
          iVar1 = 1 - in_stack_00000010;
        }
        unaff_x28 = (uVar8 + unaff_x28 * 10) - 0x30;
        unaff_w24 = unaff_w27 + 0x13;
        bVar3 = bVar3 || (ulong)(uint)(iVar1 >> 1) + 0x7fffffffffffffff < unaff_x28;
        if (unaff_w24 < unaff_w23) goto LAB_07182bdc;
        if (bVar3) goto LAB_07182cf8;
      }
      goto LAB_07182d5c;
    }
    if (unaff_w23 <= uVar7) goto LAB_07182d5c;
    unaff_x20 = (ulong)*(ushort *)(unaff_x21 + (long)(unaff_w27 + unaff_w25 + 0x12) * 2);
    in_w9 = *(int *)(*unaff_x26 + 0xe0);
  } while( true );
LAB_07182c38:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07182d20;
    uVar7 = unaff_w24 + 1;
    if ((int)uVar7 < (int)unaff_w23) {
      puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      do {
        if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        uVar2 = *puVar6;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07182cac;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (unaff_w23 != uVar7);
    }
    else {
LAB_07182cac:
      if (uVar7 < unaff_w23) goto LAB_07182cc0;
    }
  }
  else {
LAB_07182cc0:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar8 = FUN_071848d8();
    if ((uVar8 & 1) == 0) {
LAB_07182d20:
      lVar5 = 0;
      uVar4 = 0;
      goto LAB_07182d28;
    }
  }
  if (!bVar3) {
LAB_07182d5c:
    uVar4 = 1;
    lVar5 = unaff_x28 * (long)in_stack_00000010;
    goto LAB_07182d28;
  }
  goto LAB_07182cf8;
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    bVar3 = true;
    if (unaff_w23 == unaff_w24) break;
LAB_07182bdc:
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar7 = (uint)uVar2;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (9 < uVar2 - 0x30) goto LAB_07182c38;
  }
LAB_07182cf8:
  lVar5 = 0;
  uVar4 = 0;
  *in_stack_00000008 = 1;
LAB_07182d28:
  *unaff_x19 = lVar5;
  return uVar4;
}


