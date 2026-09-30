/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$.ctor
ENTRY_POINT: 07a48aa8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0___ctor(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar6;
  uint unaff_w23;
  uint unaff_w24;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *unaff_x27;
  int unaff_w28;
  ulong uVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_09f40bf0;
  if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar11 = unaff_w28 - 0x30;
  if (9 < uVar11) goto LAB_07a48aac;
  if (unaff_w28 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        uVar10 = 0;
        goto LAB_07a48ae8;
      }
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar8 = (uint)uVar2;
      uVar11 = uVar2 - 0x30;
    } while (uVar11 == 0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (uVar11 < 10) goto LAB_07a48870;
    uVar10 = 0;
    bVar4 = false;
LAB_07a489c4:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((uVar8 - 9 < 5) || (uVar8 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07a48aac;
      uVar11 = unaff_w24 + 1;
      if ((int)uVar11 < (int)unaff_w23) {
        puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
        do {
          if (unaff_w23 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          uVar2 = *puVar6;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07a48a38;
          uVar11 = uVar11 + 1;
          puVar6 = puVar6 + 1;
        } while (unaff_w23 != uVar11);
      }
      else {
LAB_07a48a38:
        if (uVar11 < unaff_w23) goto LAB_07a48a4c;
      }
    }
    else {
LAB_07a48a4c:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar9 = FUN_07a4a680();
      if ((uVar9 & 1) == 0) {
LAB_07a48aac:
        uVar10 = 0;
        uVar5 = 0;
        goto LAB_07a48ab4;
      }
    }
    if (!bVar4) {
LAB_07a48ae8:
      uVar5 = 1;
      goto LAB_07a48ab4;
    }
  }
  else {
LAB_07a48870:
    uVar8 = unaff_w24 + 1;
    uVar10 = (ulong)uVar11;
    iVar7 = -0x11;
    do {
      if (unaff_w23 <= uVar8) goto LAB_07a48ae8;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar7 + 0x12) * 2);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (9 < uVar2 - 0x30) {
        uVar9 = (ulong)(uint)uVar2;
        uVar11 = unaff_w24 + iVar7 + 0x12;
        goto LAB_07a489b4;
      }
      uVar8 = unaff_w24 + iVar7 + 0x13;
      bVar4 = iVar7 != -1;
      iVar7 = iVar7 + 1;
      uVar10 = ((ulong)uVar2 + uVar10 * 10) - 0x30;
    } while (bVar4);
    if (unaff_w23 <= uVar8) goto LAB_07a48ae8;
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 0x12) * 2);
    uVar9 = (ulong)uVar2;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar11 = unaff_w24 + 0x12;
    if (9 < uVar2 - 0x30) {
LAB_07a489b4:
      unaff_w24 = uVar11;
      bVar4 = false;
      uVar8 = (uint)uVar9;
      goto LAB_07a489c4;
    }
    bVar1 = 0xccccccccccccccc < (long)uVar10;
    uVar10 = (uVar9 + uVar10 * 10) - 0x30;
    unaff_w24 = unaff_w24 + 0x13;
    bVar4 = bVar1 || 0x7fffffffffffffff < uVar10;
    if (unaff_w24 < unaff_w23) {
      do {
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar8 = (uint)uVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (9 < uVar2 - 0x30) goto LAB_07a489c4;
        unaff_w24 = unaff_w24 + 1;
        bVar4 = true;
      } while (unaff_w23 != unaff_w24);
    }
    else if (!bVar1 && 0x7fffffffffffffff >= uVar10) goto LAB_07a48ae8;
  }
  uVar10 = 0;
  uVar5 = 0;
  *unaff_x27 = 1;
LAB_07a48ab4:
  *unaff_x19 = uVar10;
  return uVar5;
}


