/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 06abbe9c
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState6(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  ulong uVar3;
  undefined1 unaff_w23;
  undefined4 *puVar4;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x1d0) = unaff_w23;
  if (*(int *)(DAT_083cb858 + 0xe0) == 0) {
    FUN_033b9870();
                    /* try { // try from 06abbebc to 06bbbfc3 has its CatchHandler @ 06abbb84 */
  }
  lVar1 = *(long *)(*(long *)(DAT_083cb858 + 0xb8) + 8);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= unaff_w21) {
LAB_06abbf5c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar1 = *(long *)(lVar1 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        puVar4 = (undefined4 *)(unaff_x19 + 0x2c);
        do {
          if (uVar2 <= uVar3) goto LAB_06abbf5c;
          if (unaff_x19 == 0) goto LAB_06abbf60;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_06abbf5c;
          FUN_06abbf64(puVar4[-3],puVar4[-2],puVar4[-1],*puVar4);
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 4;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
LAB_06abbf60:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


