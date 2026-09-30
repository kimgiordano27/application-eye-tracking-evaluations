/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 06dd2644
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor(undefined1 param_1 [16])

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
code_r0x06dd2644:
  uStack0000000000000050 = in_stack_00000030;
  uStack0000000000000040 = uVar5;
  uStack0000000000000048 = uVar6;
  FUN_06dd1c58();
LAB_06dd2660:
  do {
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x18;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_06dd2690;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_06dd2694;
    if (unaff_x20 == 0) goto LAB_06dd2690;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    uStack0000000000000048 = puVar1[1];
    uStack0000000000000040 = *puVar1;
    uStack0000000000000050 = puVar1[2];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar3 & 1) == 0);
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_06dd2694:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x22 != 0) {
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar6 = puVar1[1];
      uVar5 = *puVar1;
      in_stack_00000030 = puVar1[2];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar2 * (long)unaff_w25;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          *(undefined8 *)(lVar4 + 0x30) = in_stack_00000030;
          thunk_FUN_049ee3d8(lVar4 + 0x28,0);
          goto LAB_06dd2660;
        }
        goto code_r0x06dd2644;
      }
    }
  }
LAB_06dd2690:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


