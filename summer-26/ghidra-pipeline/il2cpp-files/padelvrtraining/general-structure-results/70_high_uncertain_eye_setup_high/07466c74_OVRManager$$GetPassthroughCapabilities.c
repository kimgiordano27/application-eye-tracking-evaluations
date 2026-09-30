/*
FUNCTION_NAME: OVRManager$$GetPassthroughCapabilities
ENTRY_POINT: 07466c74
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRManager__GetPassthroughCapabilities
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  byte unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  undefined4 uVar5;
  undefined8 unaff_d10;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  
  uVar5 = param_1;
  do {
    uStack0000000000000034 = uVar5;
    uStack0000000000000030 = (undefined4)param_2;
    uStack000000000000002c = (undefined4)param_3;
    thunk_FUN_03db619c();
    do {
      uVar3 = FUN_08abc61c(unaff_d13);
      if ((uVar3 & 1) != 0) {
LAB_07466ce0:
        return unaff_w22 & 1;
      }
      do {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        unaff_w23 = unaff_w23 + 1;
        unaff_w22 = (int)unaff_w23 < (int)uVar1;
        if ((int)uVar1 <= (int)unaff_w23) goto LAB_07466ce0;
        if (uVar1 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar4 = *(long *)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_07466d0c;
        uVar3 = FUN_08abed98(lVar4,0);
      } while ((uVar3 & 1) == 0);
      if ((unaff_x19 == 0) || (lVar2 = FUN_08a4d98c(), lVar2 == 0)) {
LAB_07466d0c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      unaff_d13 = FUN_08a5d3f4(lVar2,0);
      param_2 = unaff_d14;
      param_3 = unaff_d10;
      lVar2 = FUN_08a4d98c();
      if (lVar2 == 0) goto LAB_07466d0c;
      FUN_08a5bb30(lVar2,0);
      lVar2 = FUN_08a4d98c(lVar4,0);
      if (lVar2 == 0) goto LAB_07466d0c;
      FUN_08a5d3f4(lVar2,0);
      lVar4 = FUN_08a4d98c(lVar4,0);
      if (lVar4 == 0) goto LAB_07466d0c;
      uVar5 = FUN_08a5bb30(lVar4,0);
    } while (*(int *)(*unaff_x24 + 0xe0) != 0);
  } while( true );
}


