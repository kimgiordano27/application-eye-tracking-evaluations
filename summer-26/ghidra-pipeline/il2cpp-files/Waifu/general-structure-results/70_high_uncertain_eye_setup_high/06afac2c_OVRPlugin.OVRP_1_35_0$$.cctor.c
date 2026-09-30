/*
FUNCTION_NAME: OVRPlugin.OVRP_1_35_0$$.cctor
ENTRY_POINT: 06afac2c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_35_0___cctor(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  uint uVar11;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee038,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee040,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7fc0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x52b) = unaff_w21;
  if ((unaff_x20 == 0) ||
     (iVar7 = *(int *)(unaff_x20 + 0x20) - *(int *)(unaff_x20 + 0x28), iVar7 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_03398188(DAT_083c7fc0,iVar7);
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_060b72f8(&stack0x00000050);
    puVar2 = &DAT_0873ccb0 + ((ulong)&stack0x00000028 >> 0x12 & 0x7fff);
    uVar11 = 0;
    puVar3 = &DAT_0873ccb0 + ((ulong)&stack0x00000038 >> 0x12 & 0x7fff);
    while (uVar9 = FUN_060b7364(&stack0x00000050,DAT_083e8da8), uVar1 = in_stack_00000060,
          (uVar9 & 1) != 0) {
      in_stack_00000028 = DAT_083cd7e8;
      in_stack_00000030 = 0xffffffffffffffff;
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)in_stack_00000060);
      in_stack_00000028 = FUN_06868764(&stack0x00000028,0);
      iVar7 = DAT_08908cd0;
      if (DAT_08908cd0 != 0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)&stack0x00000028 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = *puVar3 | 1L << ((ulong)&stack0x00000038 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      in_stack_00000040 = (ulong)((uVar1 & 0xff00000000) != 0);
      in_stack_00000038 = 0;
      in_stack_00000030 = 1;
      in_stack_00000048 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      lVar10 = lVar8 + (long)(int)uVar11 * 0x28;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 1;
      *(undefined8 *)(lVar10 + 0x20) = in_stack_00000028;
      *(ulong *)(lVar10 + 0x38) = in_stack_00000040;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      if (iVar7 != 0) {
        uVar1 = lVar8 + (long)(int)uVar11 * 0x28 + 0x20;
        puVar4 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = *puVar4 | 1L << (uVar1 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar11 = uVar11 + 1;
    }
  }
  return lVar8;
}


