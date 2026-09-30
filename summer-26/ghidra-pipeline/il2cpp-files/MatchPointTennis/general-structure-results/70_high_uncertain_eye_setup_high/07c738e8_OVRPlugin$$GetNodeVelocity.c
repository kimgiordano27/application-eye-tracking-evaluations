/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 07c738e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeVelocity(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  float fVar5;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  if (unaff_x19 != 0) {
    lVar1 = FUN_095258d0();
    if (DAT_0a51bf46 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf46 = '\x01';
    }
    if (lVar1 != 0) {
      fVar5 = *(float *)(unaff_x20 + 0x28);
      lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      FUN_0953aa9c(fVar5 * *(float *)(lVar3 + 0xc),fVar5 * *(float *)(lVar3 + 0x10),
                   fVar5 * *(float *)(lVar3 + 0x14),lVar1,0);
      uVar2 = FUN_095258d0();
      uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x14);
      uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
      FUN_07c1de88(&stack0x00000020);
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = (undefined4)uStack0000000000000034;
      uStack0000000000000058 = SUB84(uStack0000000000000034,4);
      uStack0000000000000050 = uStack0000000000000030;
      FUN_07c0b9b4(uVar2,&stack0x00000040,0,0);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if (lVar1 != 0) {
        lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50500);
        FUN_07c73a10(lVar3,lVar1);
        plVar4 = (long *)(unaff_x19 + 0x48);
        *plVar4 = lVar3;
        thunk_FUN_044bb4b4(plVar4,lVar3);
        *(bool *)(unaff_x19 + 0x38) = *plVar4 != 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


