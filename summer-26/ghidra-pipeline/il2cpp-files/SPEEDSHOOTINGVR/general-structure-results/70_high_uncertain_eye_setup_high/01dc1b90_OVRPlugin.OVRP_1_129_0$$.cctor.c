/*
FUNCTION_NAME: OVRPlugin.OVRP_1_129_0$$.cctor
ENTRY_POINT: 01dc1b90
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


int OVRPlugin_OVRP_1_129_0___cctor(void)

{
  ushort uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  ushort *unaff_x26;
  ushort *unaff_x27;
  ushort *in_stack_00000008;
  
code_r0x01dc1b90:
  uVar1 = (**(code **)(*unaff_x22 + 0x198))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1a0));
  *(bool *)((long)unaff_x22 + 0x2a) = uVar1 != 0;
  if (uVar1 == 0) {
    *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
  }
  do {
                    /* try { // try from 01dc1bc8 to 01ec1c3f has its CatchHandler @ 01dc1bc8
                       catch() { ... } // from try @ 01dc1bc8 with catch @ 01dc1bc8
                       catch() { ... } // from try @ 01dc1c48 with catch @ 01dc1bc8
                       catch() { ... } // from try @ 01dc1c88 with catch @ 01dc1bc8
                       catch() { ... } // from try @ 01dc1d00 with catch @ 01dc1bc8
                       catch() { ... } // from try @ 01dc1d2c with catch @ 01dc1bc8 */
    if ((unaff_x27 <= unaff_x26) && (uVar1 == 0)) {
      return unaff_w23;
    }
    if (uVar1 == 0) {
      uVar1 = *unaff_x26;
      unaff_x26 = unaff_x26 + 1;
    }
    if (uVar1 < 0x80) {
      unaff_w23 = unaff_w23 + 1;
    }
    else {
      if (unaff_x22 == (long *)0x0) {
        if (unaff_x19 == 0) {
          plVar2 = *(long **)(unaff_x20 + 0x28);
          if (plVar2 == (long *)0x0) goto LAB_01dc1c5c;
          unaff_x22 = (long *)(**(code **)(*plVar2 + 0x178))
                                        (plVar2,*(undefined8 *)(*plVar2 + 0x180));
        }
        else {
          unaff_x22 = (long *)FUN_01dc1d00();
        }
        if (unaff_x22 == (long *)0x0) {
LAB_01dc1c5c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        unaff_x22[4] = unaff_x19;
        unaff_x22[2] = unaff_x21;
        unaff_x22[3] = (long)unaff_x27;
        thunk_FUN_0106e12c(unaff_x22 + 4);
        *(undefined2 *)(unaff_x22 + 5) = 0;
        *(undefined1 *)((long)unaff_x22 + 0x2a) = 0;
        *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
      }
      in_stack_00000008 = unaff_x26;
      (**(code **)(*unaff_x22 + 0x1d8))
                (unaff_x22,uVar1,&stack0x00000008,*(undefined8 *)(*unaff_x22 + 0x1e0));
      unaff_x26 = in_stack_00000008;
    }
    if (unaff_x22 != (long *)0x0) goto code_r0x01dc1b90;
    uVar1 = 0;
  } while( true );
}


