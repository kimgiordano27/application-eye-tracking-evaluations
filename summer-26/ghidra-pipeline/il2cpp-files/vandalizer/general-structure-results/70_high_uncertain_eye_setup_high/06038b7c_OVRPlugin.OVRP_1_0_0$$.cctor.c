/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$.cctor
ENTRY_POINT: 06038b7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_0_0___cctor(ulong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 *unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
  do {
    uVar1 = FUN_06038c20(param_1,param_2);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    in_stack_00000028 = uStack0000000000000048;
    uStack000000000000002c = uStack000000000000004c;
    uStack0000000000000030 = uStack0000000000000050;
    if (unaff_x19 == 0) {
LAB_06038c1c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_06038c18:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *unaff_x22 = uVar1;
    unaff_x22[8] = 0;
    unaff_x20 = unaff_x20 + 1;
    *(undefined8 *)(unaff_x22 + 6) = uStack0000000000000054;
    *(ulong *)(unaff_x22 + 4) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(unaff_x22 + 3) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(unaff_x22 + 1) = in_stack_00000040;
    unaff_x22 = unaff_x22 + 9;
    if (in_stack_00000068 == 0) goto LAB_06038c1c;
    if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_0322f148(*unaff_x21);
      FUN_06038d1c();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_0329bf60();
        return lVar2;
      }
      goto LAB_06038c1c;
    }
    if (*(uint *)(in_stack_00000068 + 0x18) <= unaff_x20) goto LAB_06038c18;
    FUN_05f9a6f0(&stack0x00000020,*(undefined8 *)(in_stack_00000068 + unaff_x20 * 8 + 0x20),1,0);
    uStack0000000000000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    param_2 = &stack0x00000068;
    param_1 = unaff_x20 & 0xffffffff;
  } while( true );
}


