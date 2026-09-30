/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 0675b8b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty(void)

{
  bool bVar1;
  ushort uVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int unaff_w19;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong unaff_x25;
  long *unaff_x26;
  ulong uVar10;
  long *in_stack_00000010;
  undefined1 *in_stack_00000018;
  
  while ((bool)in_ZR) {
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w23 <= unaff_w24) {
      uVar10 = 0;
      goto LAB_0675bb10;
    }
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    unaff_x25 = (ulong)uVar2;
    in_ZR = uVar2 == 0x30;
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar7 = (int)unaff_x25 - 0x30;
  if (uVar7 < 10) {
    uVar10 = (ulong)uVar7;
    uVar7 = unaff_w24 + 0x12;
    iVar8 = 1;
    do {
      if (unaff_w23 <= unaff_w24 + iVar8) goto LAB_0675bb10;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar8) * 2);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < uVar2 - 0x30) {
        unaff_x25 = (ulong)(uint)uVar2;
        uVar5 = uVar10;
        uVar7 = unaff_w24 + iVar8;
        goto LAB_0675ba24;
      }
      iVar8 = iVar8 + 1;
      uVar10 = ((ulong)uVar2 + uVar10 * 10) - 0x30;
    } while (iVar8 != 0x12);
    if (unaff_w23 <= uVar7) goto LAB_0675bb10;
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
    unaff_x25 = (ulong)uVar2;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = uVar10;
    if (9 < uVar2 - 0x30) goto LAB_0675ba24;
    uVar7 = unaff_w24 + 0x13;
    uVar5 = (unaff_x25 + uVar10 * 10) - 0x30;
    bVar1 = (ulong)(1U - unaff_w19 >> 1) + 0x7fffffffffffffff < uVar5 ||
            0xccccccccccccccc < (long)uVar10;
    if (unaff_w23 <= uVar7) goto LAB_0675baf4;
    lVar3 = *unaff_x26;
    do {
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      uVar9 = (uint)uVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *unaff_x26;
      }
      if (9 < uVar2 - 0x30) goto LAB_0675ba28;
      uVar7 = uVar7 + 1;
      bVar1 = true;
    } while (unaff_w23 != uVar7);
  }
  else {
    uVar5 = 0;
    uVar7 = unaff_w24;
LAB_0675ba24:
    uVar9 = (uint)unaff_x25;
    bVar1 = false;
LAB_0675ba28:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0675bae4;
      uVar7 = uVar7 + 1;
      if ((int)uVar7 < (int)unaff_w23) {
        puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
        do {
          if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar2 = *puVar6;
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0675baa4;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (unaff_w23 != uVar7);
      }
      else {
LAB_0675baa4:
        if (uVar7 < unaff_w23) goto LAB_0675bab8;
      }
    }
    else {
LAB_0675bab8:
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_0675d708();
      if ((uVar10 & 1) == 0) {
LAB_0675bae4:
        lVar3 = 0;
        uVar4 = 0;
        goto LAB_0675bb1c;
      }
    }
LAB_0675baf4:
    uVar10 = uVar5;
    if (!bVar1) {
LAB_0675bb10:
      uVar4 = 1;
      lVar3 = uVar10 * (long)unaff_w19;
      goto LAB_0675bb1c;
    }
  }
  lVar3 = 0;
  uVar4 = 0;
  *in_stack_00000018 = 1;
LAB_0675bb1c:
  *in_stack_00000010 = lVar3;
  return uVar4;
}


