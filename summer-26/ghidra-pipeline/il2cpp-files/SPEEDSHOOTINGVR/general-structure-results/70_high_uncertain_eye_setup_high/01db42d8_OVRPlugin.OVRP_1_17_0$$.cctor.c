/*
FUNCTION_NAME: OVRPlugin.OVRP_1_17_0$$.cctor
ENTRY_POINT: 01db42d8
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

undefined4 OVRPlugin_OVRP_1_17_0___cctor(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  uint uVar5;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    unaff_x26 = unaff_x26 + 1;
    *unaff_x28 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)uVar5 <= (int)(uint)unaff_x26) {
      if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar2 = FUN_0102ae7c();
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
    if (uVar5 <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (*(long *)(unaff_x27 + unaff_x26 * 8) == 0) break;
    param_1 = FUN_01db3820();
    unaff_x28 = unaff_x28 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


