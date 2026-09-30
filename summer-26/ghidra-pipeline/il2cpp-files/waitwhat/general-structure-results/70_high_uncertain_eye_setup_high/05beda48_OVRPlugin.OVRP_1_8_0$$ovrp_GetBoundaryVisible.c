/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryVisible
ENTRY_POINT: 05beda48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float in_stack_00000000;
  undefined8 uStack0000000000000030;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  
  uStack000000000000003c = (undefined4)param_2;
  uStack0000000000000040 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000030 = param_1;
  FUN_05bee628();
  lVar1 = *(long *)(unaff_x21 + 0x10);
  if ((lVar1 != 0) && (lVar2 = *(long *)(unaff_x21 + 0x20), lVar2 != 0)) {
    if ((*(int *)(lVar1 + 0x18) != 0) && (unaff_w20 < *(uint *)(lVar2 + 0x18))) {
                    /* try { // try from 05beda84 to 05cedb67 has its CatchHandler @ 05beda84
                       catch() { ... } // from try @ 05beda84 with catch @ 05beda84
                       catch() { ... } // from try @ 05bedc78 with catch @ 05beda84
                       catch() { ... } // from try @ 05bedd38 with catch @ 05beda84
                       catch() { ... } // from try @ 05bedda0 with catch @ 05beda84 */
      FUN_05b5ed20(lVar1 + 0x20,&stack0x00000030,lVar2 + (long)(int)unaff_w20 * 0x1c + 0x20,0);
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if (lVar1 == 0) goto LAB_05bedb54;
      if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)unaff_w20 * 0x1c;
        *(ulong *)(lVar1 + 0x20) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * in_stack_00000000,
                      (float)*(undefined8 *)(lVar1 + 0x20) * in_stack_00000000);
        *(float *)(lVar1 + 0x28) = *(float *)(lVar1 + 0x28) * in_stack_00000000;
        lVar1 = *(long *)(unaff_x21 + 0x20);
        if (lVar1 == 0) goto LAB_05bedb54;
        if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
          FUN_05b64400(lVar1 + (long)(int)unaff_w20 * 0x1c + 0x20);
          *(uint *)(unaff_x21 + 0x40) = *(uint *)(unaff_x21 + 0x40) & (unaff_w23 ^ 0xffffffff);
          lVar1 = *(long *)(unaff_x21 + 0x20);
          if (lVar1 == 0) goto LAB_05bedb54;
          if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
            lVar1 = lVar1 + (long)(int)unaff_w20 * 0x1c;
            uVar3 = *(undefined8 *)(lVar1 + 0x20);
            uVar5 = *(undefined8 *)(lVar1 + 0x34);
            uVar4 = *(undefined8 *)(lVar1 + 0x2c);
            unaff_x19[1] = *(undefined8 *)(lVar1 + 0x28);
            *unaff_x19 = uVar3;
            *(undefined8 *)((long)unaff_x19 + 0x14) = uVar5;
            *(undefined8 *)((long)unaff_x19 + 0xc) = uVar4;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_05bedb54:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


