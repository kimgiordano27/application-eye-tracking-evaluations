/*
FUNCTION_NAME: OVRPlugin.OVRP_1_37_0$$.cctor
ENTRY_POINT: 06afadb4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_37_0___cctor(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  int in_w8;
  undefined8 in_x9;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  ulong *unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  ulong in_stack_00000060;
  
  uStack0000000000000018 = param_2._8_8_;
  uStack0000000000000010 = param_2._0_8_;
  uStack0000000000000008 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  while( true ) {
    uStack0000000000000000 = uVar6;
    uStack0000000000000020 = in_x9;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar7 = unaff_x19 + (int)unaff_w20 * unaff_x26;
    *(undefined8 *)(lVar7 + 0x40) = in_x9;
    *(undefined8 *)(lVar7 + 0x28) = uStack0000000000000008;
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    *(undefined8 *)(lVar7 + 0x38) = uStack0000000000000018;
    *(undefined8 *)(lVar7 + 0x30) = uStack0000000000000010;
    if (in_w8 != 0) {
      uVar1 = unaff_x19 + (int)unaff_w20 * unaff_x26 + 0x20;
      puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | unaff_x21 << (uVar1 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_w20 = unaff_w20 + 1;
    uVar5 = FUN_060b7364(&stack0x00000050,*(undefined8 *)(unaff_x22 + 0xda8));
    uVar1 = in_stack_00000060;
    if ((uVar5 & 1) == 0) break;
    in_stack_00000028 = DAT_083cd7e8;
    in_stack_00000030 = 0xffffffffffffffff;
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)in_stack_00000060);
    uVar6 = FUN_06868764(&stack0x00000028,0);
    in_w8 = DAT_08908cd0;
    *unaff_x28 = 0;
    unaff_x28[1] = 0;
    unaff_x28[2] = 0;
    if (in_w8 != 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x29,0x10);
        if (bVar4) {
          *unaff_x29 = *unaff_x29 | unaff_x27;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
        if (bVar4) {
          *unaff_x23 = *unaff_x23 | unaff_x24;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack0000000000000040 = (uint)((uVar1 & 0xff00000000) != 0);
    in_stack_00000038 = 0;
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,(int)unaff_x21);
    in_stack_00000048 = 0;
    in_stack_00000028 = uVar6;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uStack0000000000000018 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
    uStack0000000000000010 = 0;
    in_x9 = 0;
    uStack0000000000000008 = in_stack_00000030;
  }
  return;
}


