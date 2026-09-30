/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$.ctor
ENTRY_POINT: 0634cb00
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_EnvironmentDepth_EnvironmentDepthManager___ctor(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  undefined1 auVar7 [16];
  
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if (lVar5 != 0) {
    FUN_0405dc24(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),unaff_x24 >> 0x20);
    lVar5 = *(long *)(unaff_x21 + 0x28);
    if (lVar5 != 0) {
      FUN_0405dbbc(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),param_1 >> 0x20);
      lVar5 = *(long *)(unaff_x21 + 0x30);
      memcpy(&stack0x00000000,&stack0x00000050,0x50);
      uVar2 = DAT_083eba60;
      if (lVar5 != 0) {
        memcpy(&stack0x000000a0,&stack0x00000000,0x50);
        uVar3 = FUN_0438c3f8(lVar5,&stack0x000000a0,uVar2);
        if (*(long *)(unaff_x21 + 0x38) != 0) {
          auVar7 = FUN_0429e128(*(long *)(unaff_x21 + 0x38),*(undefined4 *)(unaff_x22 + 0x18),
                                DAT_083eafe0);
          uVar4 = auVar7._8_8_;
          if (*(long *)(unaff_x21 + 0x38) != 0) {
            if (0 < auVar7._8_4_) {
              lVar5 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
              uVar6 = auVar7._0_8_ >> 0x20;
              do {
                *(undefined4 *)(lVar5 + (long)(int)uVar6 * 4) = unaff_w20;
                uVar1 = (int)uVar4 - 1;
                uVar4 = (ulong)uVar1;
                uVar6 = (ulong)((int)uVar6 + 1);
              } while (uVar1 != 0);
            }
            if (*(long *)(unaff_x21 + 0x40) != 0) {
              FUN_0429fcc0(*(long *)(unaff_x21 + 0x40),*(undefined4 *)(unaff_x19 + 0x18),
                           DAT_083eb060);
              return uVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


