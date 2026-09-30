/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 07a62b78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *in_x9;
  undefined8 *puVar3;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000048;
  
  uVar7 = param_3._8_8_;
  uVar6 = param_3._0_8_;
  uVar5 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  do {
    puVar3 = in_x9;
    unaff_x20 = unaff_x20 + 1;
    unaff_x22[1] = uVar5;
    *unaff_x22 = uVar4;
    *(undefined8 *)((long)unaff_x22 + 0x14) = uVar7;
    *(undefined8 *)((long)unaff_x22 + 0xc) = uVar6;
    if (param_1 == 0) {
LAB_07a62b8c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_040b4efc(*unaff_x21);
      FUN_07a62ce0();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_040ec700();
        return lVar2;
      }
      goto LAB_07a62b8c;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x20) {
LAB_07a62bcc:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    FUN_079cf630(&stack0x00000000 + 4,*(undefined8 *)(param_1 + unaff_x20 * 8 + 0x20),1,0);
    uStack0000000000000028 = in_stack_00000000._12_4_;
    in_stack_00000020 = in_stack_00000000._4_8_;
    uStack0000000000000034 = in_stack_00000018;
    uStack000000000000002c = uStack0000000000000010;
    uStack0000000000000030 = uStack0000000000000014;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_07a62bd0(unaff_x20 & 0xffffffff,&stack0x00000048);
    if (unaff_x19 == 0) goto LAB_07a62b8c;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_07a62bcc;
    *(undefined4 *)((long)puVar3 + -4) = uVar1;
    uVar5 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    uVar6 = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    param_1 = in_stack_00000048;
    in_x9 = puVar3 + 4;
    unaff_x22 = puVar3;
    uVar4 = in_stack_00000020;
    uVar7 = uStack0000000000000034;
  } while( true );
}


