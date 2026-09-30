/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 090d1d48
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *in_x9;
  undefined8 in_x10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  while( true ) {
    in_x9[2] = in_x10;
    in_x9[1] = uVar4;
    *in_x9 = uVar3;
    lVar2 = *unaff_x21;
    FUN_0a188688(&stack0x00000008,param_2);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
LAB_090d1de4:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    puVar1 = (undefined8 *)(lVar2 + unaff_x24);
    unaff_x24 = unaff_x24 + 0x1c;
    unaff_x22 = unaff_x22 + 1;
    *(undefined4 *)(puVar1 + 3) = uStack0000000000000020;
    puVar1[2] = in_stack_00000018;
    puVar1[1] = in_stack_00000010;
    *puVar1 = in_stack_00000008;
    lVar2 = *unaff_x20;
    if (lVar2 == 0) break;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x22) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0a188688((undefined1 *)((long)&stack0x00000020 + 4),0);
      *(undefined4 *)(unaff_x19 + 0x3c) = 0x3f800000;
      *(ulong *)(unaff_x19 + 0x28) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined8 *)(unaff_x19 + 0x20) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x34) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      return;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_0a188688((undefined1 *)((long)&stack0x00000020 + 4),0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) goto LAB_090d1de4;
    in_x10 = CONCAT44(uStack0000000000000038,uStack0000000000000034);
    in_x9 = (undefined8 *)(lVar2 + unaff_x24);
    uVar4 = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    param_2 = 0;
    *(undefined4 *)(in_x9 + 3) = uStack000000000000003c;
    uVar3 = uStack0000000000000024;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


