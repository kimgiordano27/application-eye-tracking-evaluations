/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 0500ec08
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  bool in_CY;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  undefined4 uVar9;
  uint unaff_w27;
  ulong uVar10;
  uint uVar11;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000018;
  
  puVar3 = PTR_DAT_06656a10;
  if (!in_CY) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = (uint)uVar1;
    uVar8 = uVar11 - 0x30;
    if (uVar8 < 10) {
      uStack000000000000000c = unaff_w27;
      if (uVar11 == 0x30) {
        do {
          unaff_w24 = unaff_w24 + 1;
          if (unaff_w23 <= unaff_w24) {
            uVar10 = 0;
            uVar9 = 1;
            goto LAB_0500f020;
          }
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          uVar6 = (ulong)uVar1;
        } while (uVar1 == 0x30);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar8 = uVar1 - 0x30;
        if (uVar8 < 10) goto LAB_0500ee1c;
        uVar10 = 0;
        uVar8 = unaff_w24;
LAB_0500ef3c:
        uVar11 = (uint)uVar6;
        bVar2 = false;
LAB_0500ef40:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
          if ((uStack000000000000000c >> 1 & 1) == 0) goto LAB_0500f018;
          uVar8 = uVar8 + 1;
          if ((int)uVar8 < (int)unaff_w23) {
            puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
            do {
              if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
              uVar1 = *puVar7;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0500efc0;
              uVar8 = uVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (unaff_w23 != uVar8);
            if (bVar2) goto LAB_0500f064;
            goto LAB_0500f04c;
          }
LAB_0500efc0:
          if (unaff_w23 <= uVar8) goto LAB_0500f010;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar6 = FUN_0500f958();
        if ((uVar6 & 1) == 0) goto LAB_0500f018;
LAB_0500f010:
        if (!bVar2) goto LAB_0500f04c;
      }
      else {
LAB_0500ee1c:
        uVar10 = (ulong)uVar8;
        uVar8 = unaff_w24 + 0x13;
        iVar5 = 1;
        do {
          if (unaff_w23 <= unaff_w24 + iVar5) goto LAB_0500f04c;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar5) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (9 < uVar1 - 0x30) {
            uVar8 = unaff_w24 + iVar5;
            uVar6 = (ulong)(uint)uVar1;
            goto LAB_0500ef3c;
          }
          iVar5 = iVar5 + 1;
          uVar10 = ((ulong)uVar1 + uVar10 * 10) - 0x30;
        } while (iVar5 != 0x13);
        if (unaff_w23 <= uVar8) {
LAB_0500f04c:
          uVar9 = 1;
          goto LAB_0500f020;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar6 = (ulong)uVar1;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (9 < uVar1 - 0x30) goto LAB_0500ef3c;
        uVar8 = unaff_w24 + 0x14;
        if ((0x1999999999999999 < uVar10) ||
           ((bVar2 = false, uVar10 == 0x1999999999999999 && (0x35 < uVar1)))) {
          bVar2 = true;
        }
        uVar10 = (uVar6 + uVar10 * 10) - 0x30;
        if (unaff_w23 <= uVar8) goto LAB_0500f010;
        lVar4 = *(long *)puVar3;
        do {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          uVar11 = (uint)uVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar4 = *(long *)puVar3;
          }
          if (9 < uVar1 - 0x30) goto LAB_0500ef40;
          uVar8 = uVar8 + 1;
          bVar2 = true;
        } while (unaff_w23 != uVar8);
      }
LAB_0500f064:
      uVar10 = 0;
      uVar9 = 0;
      *in_stack_00000018 = 1;
      goto LAB_0500f020;
    }
  }
LAB_0500f018:
  uVar10 = 0;
  uVar9 = 0;
LAB_0500f020:
  *unaff_x22 = uVar10;
  return uVar9;
}


