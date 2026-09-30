/*
FUNCTION_NAME: Oculus.Platform.Callback$$RunLimitedCallbacks
ENTRY_POINT: 05611cc4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Oculus_Platform_Callback__RunLimitedCallbacks(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  uint unaff_w20;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  int unaff_w29;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000018;
  
  puVar3 = PTR_DAT_06a808e8;
  uVar8 = 0;
  if (*(int *)(*(long *)PTR_DAT_06a808e8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar9 = unaff_w29 - 0x30;
  if (uVar9 < 10) {
    uStack000000000000000c = unaff_w20;
    if (unaff_w29 == 0x30) {
      do {
        uVar8 = uVar8 + 1;
        if (unaff_w23 <= uVar8) {
          uVar11 = 0;
          uVar10 = 1;
          goto LAB_05611ff4;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar6 = (ulong)uVar1;
      } while (uVar1 == 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar9 = uVar1 - 0x30;
      if (uVar9 < 10) goto Oculus_Platform_Callback__FlushJoinIntentNotificationQueue;
      uVar11 = 0;
      uVar9 = uVar8;
LAB_05611f10:
      uVar8 = (uint)uVar6;
      bVar2 = false;
LAB_05611f14:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      if ((uVar8 - 9 < 5) || (uVar8 == 0x20)) {
        if ((uStack000000000000000c >> 1 & 1) == 0) goto LAB_05611fec;
        uVar9 = uVar9 + 1;
        if ((int)uVar9 < (int)unaff_w23) {
          puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          do {
            if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            uVar1 = *puVar7;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20))
            goto Oculus_Platform_Callback_RequestCallback___ctor;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w23 != uVar9);
          if (bVar2) goto LAB_05612038;
          goto LAB_05612020;
        }
Oculus_Platform_Callback_RequestCallback___ctor:
        if (unaff_w23 <= uVar9) goto FUN_05611fe4;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar6 = FUN_0561292c();
      if ((uVar6 & 1) == 0) goto LAB_05611fec;
FUN_05611fe4:
      if (!bVar2) goto LAB_05612020;
    }
    else {
Oculus_Platform_Callback__FlushJoinIntentNotificationQueue:
      uVar11 = (ulong)uVar9;
      uVar9 = uVar8 + 0x13;
      iVar5 = 1;
      do {
        if (unaff_w23 <= uVar8 + iVar5) goto LAB_05612020;
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar8 + iVar5) * 2);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (9 < uVar1 - 0x30) {
          uVar9 = uVar8 + iVar5;
          uVar6 = (ulong)(uint)uVar1;
          goto LAB_05611f10;
        }
        iVar5 = iVar5 + 1;
        uVar11 = ((ulong)uVar1 + uVar11 * 10) - 0x30;
      } while (iVar5 != 0x13);
      if (unaff_w23 <= uVar9) {
LAB_05612020:
        uVar10 = 1;
        goto LAB_05611ff4;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      uVar6 = (ulong)uVar1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      if (9 < uVar1 - 0x30) goto LAB_05611f10;
      uVar9 = uVar8 + 0x14;
      if ((0x1999999999999999 < uVar11) ||
         ((bVar2 = false, uVar11 == 0x1999999999999999 && (0x35 < uVar1)))) {
        bVar2 = true;
      }
      uVar11 = (uVar6 + uVar11 * 10) - 0x30;
      if (unaff_w23 <= uVar9) goto FUN_05611fe4;
      lVar4 = *(long *)puVar3;
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        uVar8 = (uint)uVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar4 = *(long *)puVar3;
        }
        if (9 < uVar1 - 0x30) goto LAB_05611f14;
        uVar9 = uVar9 + 1;
        bVar2 = true;
      } while (unaff_w23 != uVar9);
    }
LAB_05612038:
    uVar11 = 0;
    uVar10 = 0;
    *in_stack_00000018 = 1;
  }
  else {
LAB_05611fec:
    uVar11 = 0;
    uVar10 = 0;
  }
LAB_05611ff4:
  *unaff_x22 = uVar11;
  return uVar10;
}


