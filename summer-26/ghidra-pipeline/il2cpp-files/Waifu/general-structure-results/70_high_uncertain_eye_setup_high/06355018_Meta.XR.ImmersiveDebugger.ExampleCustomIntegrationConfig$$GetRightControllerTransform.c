/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.ExampleCustomIntegrationConfig$$GetRightControllerTransform
ENTRY_POINT: 06355018
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_ExampleCustomIntegrationConfig__GetRightControllerTransform
               (long param_1,undefined1 param_2 [16])

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  ulong uVar5;
  long unaff_x27;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uStack000000000000006c;
  ulong uStack000000000000007c;
  
  uVar6 = param_2._8_8_;
  uStack000000000000006c = param_2._0_8_;
  *(undefined8 *)(unaff_x27 + 0x54) = uVar6;
  *(ulong *)(unaff_x27 + 0x4c) = uStack000000000000006c;
  *(undefined8 *)(unaff_x27 + 0x44) = uVar6;
  *(ulong *)(unaff_x27 + 0x3c) = uStack000000000000006c;
  *(undefined8 *)(unaff_x27 + 0x34) = uVar6;
  *(ulong *)(unaff_x27 + 0x2c) = uStack000000000000006c;
  uStack000000000000007c = uStack000000000000006c;
                    /* try { // try from 06355038 to 0645503f has its CatchHandler @ 06355278 */
                    /* try { // try from 06355040 to 0645511b has its CatchHandler @ 06354434 */
  FUN_06358b08(param_1 + 0xc);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    auVar7 = FUN_042b7c88(*(long *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x21 + 0x18),DAT_083eb520
                         );
    uVar4 = auVar7._0_8_;
    *(long *)(unaff_x27 + 0x24) = auVar7._8_8_;
    uStack000000000000007c = uVar4;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      auVar7 = FUN_0429d35c(*(long *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x21 + 0x18),
                            DAT_083eafa0);
      uVar5 = auVar7._8_8_;
      *(undefined1 (*) [16])(unaff_x27 + 0x2c) = auVar7;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        auVar8 = FUN_0429eef4(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x20 + 0x18),
                              DAT_083eb030);
        *(undefined1 (*) [16])(unaff_x27 + 0x3c) = auVar8;
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          auVar9 = FUN_042a5368(*(long *)(unaff_x19 + 0x38),unaff_w22,DAT_083eb138);
          *(undefined1 (*) [16])(unaff_x27 + 0x4c) = auVar9;
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if (lVar3 != 0) {
            FUN_0405df64(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),uVar4 >> 0x20);
            lVar3 = *(long *)(unaff_x19 + 0x30);
            if (lVar3 != 0) {
              FUN_0405d584(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),
                           auVar8._0_8_ >> 0x20);
              lVar3 = *(long *)(unaff_x19 + 0x40);
              memcpy(&stack0x00000000,&stack0x00000060,0x5c);
              uVar6 = DAT_083ebe60;
              if (lVar3 != 0) {
                memcpy(&stack0x000000c0,&stack0x00000000,0x5c);
                uVar2 = FUN_04394998(lVar3,&stack0x000000c0,uVar6);
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  if (0 < auVar7._8_4_) {
                    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x10);
                    uVar4 = auVar7._0_8_ >> 0x20;
                    do {
                      *(undefined2 *)(lVar3 + (long)(int)uVar4 * 2) = uVar2;
                      uVar1 = (int)uVar5 - 1;
                      uVar5 = (ulong)uVar1;
                      uVar4 = (ulong)((int)uVar4 + 1);
                    } while (uVar1 != 0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


