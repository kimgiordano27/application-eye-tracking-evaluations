/*
FUNCTION_NAME: OVRPlugin.OVRP_1_36_0$$.cctor
ENTRY_POINT: 06afacf0
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


void OVRPlugin_OVRP_1_36_0___cctor(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long in_x9;
  long in_x10;
  ulong in_x11;
  long lVar8;
  long unaff_x19;
  uint uVar9;
  long unaff_x21;
  undefined8 *unaff_x28;
  ulong *unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  ulong in_stack_00000060;
  
  uVar9 = 0;
  puVar2 = (ulong *)(in_x9 + in_x10 * 8);
  while( true ) {
    uVar7 = FUN_060b7364(&stack0x00000050,DAT_083e8da8);
    uVar1 = in_stack_00000060;
    if ((uVar7 & 1) == 0) {
      return;
    }
    in_stack_00000028 = DAT_083cd7e8;
    in_stack_00000030 = 0xffffffffffffffff;
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)in_stack_00000060);
    in_stack_00000028 = FUN_06868764(&stack0x00000028,0);
    iVar6 = DAT_08908cd0;
    *unaff_x28 = 0;
    unaff_x28[1] = 0;
    unaff_x28[2] = 0;
    if (iVar6 != 0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(unaff_x29,0x10);
        if (bVar5) {
          *unaff_x29 = *unaff_x29 | unaff_x21 << (in_x11 & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | unaff_x21 << (param_1 & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack0000000000000040 = (uint)((uVar1 & 0xff00000000) != 0);
    in_stack_00000038 = 0;
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,(int)unaff_x21);
    in_stack_00000048 = 0;
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar8 = unaff_x19 + (long)(int)uVar9 * 0x28;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x28) = in_stack_00000030;
    *(undefined8 *)(lVar8 + 0x20) = in_stack_00000028;
    *(ulong *)(lVar8 + 0x38) = CONCAT44(uStack0000000000000044,uStack0000000000000040);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    if (iVar6 != 0) {
      uVar1 = unaff_x19 + (long)(int)uVar9 * 0x28 + 0x20;
      puVar3 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = *puVar3 | unaff_x21 << (uVar1 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


