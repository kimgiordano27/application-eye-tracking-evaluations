/*
FUNCTION_NAME: OVRPlugin.Ktx$$TranscodeKtxTexture
ENTRY_POINT: 06af1c10
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


void OVRPlugin_Ktx__TranscodeKtxTexture(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined1 unaff_w21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e5988,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e5990,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cc4b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c2dd8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cd0e8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x4ba) = unaff_w21;
  plVar5 = *(long **)(unaff_x19 + 0x50);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_083cc4b0) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06af1cd4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083cc4b0,0);
LAB_06af1cd4:
    plVar5 = (long *)(*(code *)*puVar1)(plVar5,puVar1[1]);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_083cd0e8) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_06af1d38;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083cd0e8,0);
LAB_06af1d38:
      plVar5 = (long *)(*(code *)*puVar1)(plVar5,puVar1[1]);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_083c2dd8) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
              goto LAB_06af1da0;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083c2dd8,1);
LAB_06af1da0:
        (*(code *)*puVar1)(&stack0x00000008,plVar5,puVar1[1]);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar3 = FUN_05fc2a98(&stack0x00000020,DAT_083e5988), (uVar3 & 1) != 0) {
          FUN_069d111c();
          FUN_069d11ec();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


