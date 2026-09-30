/*
FUNCTION_NAME: Oculus.Platform.Callback$$FlushJoinIntentNotificationQueue
ENTRY_POINT: 05611df0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Oculus_Platform_Callback__FlushJoinIntentNotificationQueue(ulong param_1)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar8;
  uint unaff_w25;
  undefined4 uVar9;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000018;
  
  param_1 = param_1 & 0xffffffff;
  uVar8 = unaff_w24 + 0x13;
  iVar4 = 1;
  do {
    if (unaff_w23 <= (uint)(unaff_w24 + iVar4)) goto LAB_05612020;
    uVar1 = *(ushort *)(unaff_x21 + (long)(unaff_w24 + iVar4) * 2);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (9 < uVar1 - 0x30) {
      uVar8 = unaff_w24 + iVar4;
      uVar6 = (ulong)(uint)uVar1;
      goto LAB_05611f10;
    }
    iVar4 = iVar4 + 1;
    param_1 = ((ulong)uVar1 + param_1 * 10) - 0x30;
  } while (iVar4 != 0x13);
  if (uVar8 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
    uVar6 = (ulong)uVar1;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (9 < uVar1 - 0x30) {
LAB_05611f10:
      uVar5 = (uint)uVar6;
      bVar2 = false;
LAB_05611f14:
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      if ((uVar5 - 9 < 5) || (uVar5 == 0x20)) {
        if ((in_stack_00000008._4_4_ >> 1 & 1) != 0) {
          uVar8 = uVar8 + 1;
          if ((int)uVar8 < (int)unaff_w23) {
            puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
            do {
              if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              uVar1 = *puVar7;
              if (*(int *)(*unaff_x26 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20))
              goto Oculus_Platform_Callback_RequestCallback___ctor;
              uVar8 = uVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (unaff_w23 != uVar8);
          }
          else {
Oculus_Platform_Callback_RequestCallback___ctor:
            if (uVar8 < unaff_w23) goto LAB_05611fa8;
          }
          goto joined_r0x0561201c;
        }
      }
      else {
LAB_05611fa8:
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar6 = FUN_0561292c();
        if ((uVar6 & 1) != 0) {
joined_r0x0561201c:
          if (!bVar2) goto LAB_05612020;
          goto LAB_05612038;
        }
      }
      param_1 = 0;
      uVar9 = 0;
      goto LAB_05611ff4;
    }
    uVar8 = unaff_w24 + 0x14;
    if ((0x1999999999999999 < param_1) ||
       ((bVar2 = false, param_1 == 0x1999999999999999 && (0x35 < uVar1)))) {
      bVar2 = true;
    }
    param_1 = (uVar6 + param_1 * 10) - 0x30;
    if (unaff_w23 <= uVar8) goto joined_r0x0561201c;
    lVar3 = *unaff_x26;
    do {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      uVar5 = (uint)uVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar3 = *unaff_x26;
      }
      if (9 < uVar1 - 0x30) goto LAB_05611f14;
      uVar8 = uVar8 + 1;
      bVar2 = true;
    } while (unaff_w23 != uVar8);
  }
  else {
LAB_05612020:
    if (param_1 == 0) {
      unaff_w25 = 1;
    }
    if ((unaff_w25 & 1) != 0) {
      uVar9 = 1;
      goto LAB_05611ff4;
    }
  }
LAB_05612038:
  param_1 = 0;
  uVar9 = 0;
  *in_stack_00000018 = 1;
LAB_05611ff4:
  *unaff_x22 = param_1;
  return uVar9;
}


