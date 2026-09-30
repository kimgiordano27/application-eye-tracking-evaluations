/*
FUNCTION_NAME: _Common.Shop.Scripts.VirtualPurchaseLootBox$$HandleLotteryResponseAsync
ENTRY_POINT: 02a143bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a14524) */

int _Common_Shop_Scripts_VirtualPurchaseLootBox__HandleLotteryResponseAsync(void)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 uVar4;
  int iVar5;
  ulong unaff_x20;
  ulong uVar6;
  long unaff_x21;
  long *unaff_x22;
  ulong uVar7;
  char cStack000000000000000c;
  
  *(undefined1 *)(unaff_x19 + 0xbd) = in_w8;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *unaff_x22;
  }
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000000c,0);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *unaff_x22;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar7 = unaff_x20 >> 7;
  *(byte *)(lVar3 + 0x20) = (byte)unaff_x20 & 0x7f;
  if (uVar7 == 0) {
    iVar5 = 1;
  }
  else {
    uVar6 = 0;
    do {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x22;
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(byte *)(lVar3 + uVar6 + 0x20) = *(byte *)(lVar3 + uVar6 + 0x20) | 0x80;
      lVar3 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = uVar6 + 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      bVar2 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *(byte *)(lVar3 + uVar6 + 0x21) = bVar2 & 0x7f;
      uVar6 = uVar1;
    } while (uVar7 != 0);
    iVar5 = (int)uVar1 + 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_029b3ef8();
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return iVar5;
}


