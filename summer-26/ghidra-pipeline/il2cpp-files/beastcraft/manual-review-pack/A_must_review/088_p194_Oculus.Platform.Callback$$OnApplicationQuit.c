/*
FUNCTION_NAME: Oculus.Platform.Callback$$OnApplicationQuit
ENTRY_POINT: 05611d4c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Oculus_Platform_Callback__OnApplicationQuit(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  uint unaff_w25;
  uint unaff_w27;
  ulong unaff_x28;
  uint uVar9;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000018;
  
  puVar3 = PTR_DAT_06a808e8;
  if (unaff_w23 <= unaff_w24) goto LAB_05611ff4;
  uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
  if (*(int *)(*(long *)PTR_DAT_06a808e8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar9 = (uint)uVar1;
  uVar8 = uVar9 - 0x30;
  if (uVar8 < 10) {
    uStack000000000000000c = unaff_w27;
    if (uVar9 == 0x30) {
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          unaff_x28 = 0;
          unaff_w25 = 1;
          goto LAB_05611ff4;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar6 = (ulong)uVar1;
      } while (uVar1 == 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar8 = uVar1 - 0x30;
      if (uVar8 < 10) goto Oculus_Platform_Callback__FlushJoinIntentNotificationQueue;
      unaff_x28 = 0;
      uVar8 = unaff_w24;
LAB_05611f10:
      uVar9 = (uint)uVar6;
      bVar2 = false;
LAB_05611f14:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
        if ((uStack000000000000000c >> 1 & 1) == 0) goto LAB_05611fec;
        uVar8 = uVar8 + 1;
        if ((int)uVar8 < (int)unaff_w23) {
          puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          do {
            if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            uVar1 = *puVar7;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20))
            goto Oculus_Platform_Callback_RequestCallback___ctor;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w23 != uVar8);
          if (bVar2) goto LAB_05612038;
          goto LAB_05612020;
        }
Oculus_Platform_Callback_RequestCallback___ctor:
        if (unaff_w23 <= uVar8) goto FUN_05611fe4;
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
      unaff_x28 = (ulong)uVar8;
      uVar8 = unaff_w24 + 0x13;
      iVar5 = 1;
      do {
        if (unaff_w23 <= unaff_w24 + iVar5) goto LAB_05612020;
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar5) * 2);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (9 < uVar1 - 0x30) {
          uVar8 = unaff_w24 + iVar5;
          uVar6 = (ulong)(uint)uVar1;
          goto LAB_05611f10;
        }
        iVar5 = iVar5 + 1;
        unaff_x28 = ((ulong)uVar1 + unaff_x28 * 10) - 0x30;
      } while (iVar5 != 0x13);
      if (uVar8 < unaff_w23) {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar6 = (ulong)uVar1;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (9 < uVar1 - 0x30) goto LAB_05611f10;
        uVar8 = unaff_w24 + 0x14;
        if ((0x1999999999999999 < unaff_x28) ||
           ((bVar2 = false, unaff_x28 == 0x1999999999999999 && (0x35 < uVar1)))) {
          bVar2 = true;
        }
        unaff_x28 = (uVar6 + unaff_x28 * 10) - 0x30;
        if (unaff_w23 <= uVar8) goto FUN_05611fe4;
        lVar4 = *(long *)puVar3;
        do {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          uVar9 = (uint)uVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar4 = *(long *)puVar3;
          }
          if (9 < uVar1 - 0x30) goto LAB_05611f14;
          uVar8 = uVar8 + 1;
          bVar2 = true;
        } while (unaff_w23 != uVar8);
      }
      else {
LAB_05612020:
        if (unaff_x28 == 0) {
          unaff_w25 = 1;
        }
        if ((unaff_w25 & 1) != 0) {
          unaff_w25 = 1;
          goto LAB_05611ff4;
        }
      }
    }
LAB_05612038:
    unaff_x28 = 0;
    unaff_w25 = 0;
    *in_stack_00000018 = 1;
  }
  else {
LAB_05611fec:
    unaff_x28 = 0;
    unaff_w25 = 0;
  }
LAB_05611ff4:
  *unaff_x22 = unaff_x28;
  return unaff_w25;
}


