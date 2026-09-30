/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$.cctor
ENTRY_POINT: 01db4250
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db43d4) */

undefined4 OVRPlugin_OVRP_1_16_0___cctor(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *plVar4;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(undefined8 *)(unaff_x26 + unaff_x23 * 8) = *(undefined8 *)(param_1 + 0x10);
    unaff_x23 = unaff_x23 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x23) break;
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (*(long *)(unaff_x27 + unaff_x23 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    param_1 = FUN_01db3820();
  }
  uVar2 = (**(code **)(*unaff_x22 + 0x1b8))();
  if (-1 < (int)unaff_w24) {
    plVar4 = (long *)(unaff_x19 + (ulong)unaff_w24 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if ((*plVar4 == 0) || (lVar3 = FUN_01db3820(), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01cb97fc(lVar3,0);
      plVar4 = plVar4 + -1;
      bVar1 = 0 < (int)unaff_w24;
      unaff_w24 = unaff_w24 - 1;
    } while (bVar1);
  }
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


