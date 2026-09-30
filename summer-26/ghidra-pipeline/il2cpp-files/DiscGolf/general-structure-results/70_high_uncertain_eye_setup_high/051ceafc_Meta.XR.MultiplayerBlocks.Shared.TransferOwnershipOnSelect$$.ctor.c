/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$.ctor
ENTRY_POINT: 051ceafc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect___ctor
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               )

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000048 = param_4._8_8_;
  uStack0000000000000040 = param_4._0_8_;
  uStack0000000000000058 = param_2._8_8_;
  uStack0000000000000050 = param_2._0_8_;
  do {
    uStack0000000000000068 = *(undefined8 *)(param_1 + 0x48);
    uStack0000000000000060 = *(undefined8 *)(param_1 + 0x40);
    uStack0000000000000078 = *(undefined8 *)(param_1 + 0x58);
    uStack0000000000000070 = *(undefined8 *)(param_1 + 0x50);
    uStack0000000000000028 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack0000000000000020 = *(undefined8 *)(unaff_x22 + 0x20);
    uStack0000000000000038 = *(undefined8 *)(unaff_x22 + 0x38);
    uStack0000000000000030 = *(undefined8 *)(unaff_x22 + 0x30);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_051ceb90;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c();
LAB_051ceb90:
    iVar1 = (*(code *)*puVar3)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w25 = unaff_w24 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_1 = unaff_x23 + (long)(int)unaff_w24 * 0x40;
    uStack0000000000000048 = *(undefined8 *)(param_1 + 0x28);
    uStack0000000000000040 = *(undefined8 *)(param_1 + 0x20);
    uStack0000000000000058 = *(undefined8 *)(param_1 + 0x38);
    uStack0000000000000050 = *(undefined8 *)(param_1 + 0x30);
  } while( true );
}


