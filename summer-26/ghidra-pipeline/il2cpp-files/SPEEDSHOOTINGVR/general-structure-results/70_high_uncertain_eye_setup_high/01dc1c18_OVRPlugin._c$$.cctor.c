/*
FUNCTION_NAME: OVRPlugin.<>c$$.cctor
ENTRY_POINT: 01dc1c18
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


int OVRPlugin_<>c___cctor(long *param_1)

{
  ushort uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  ushort *puVar3;
  ushort *unaff_x26;
  ushort *unaff_x27;
  ushort *in_stack_00000008;
  
  do {
    unaff_x25[-2] = unaff_x21;
    unaff_x25[-1] = (long)unaff_x27;
    thunk_FUN_0106e12c(param_1);
    *(undefined2 *)(unaff_x25 + 1) = 0;
    *(undefined1 *)((long)unaff_x25 + 10) = 0;
    *(undefined4 *)((long)unaff_x25 + 0xc) = 0;
    do {
                    /* try { // try from 01dc1c40 to 01ec1c47 has its CatchHandler @ 01dc1c58 */
      in_stack_00000008 = unaff_x26;
                    /* try { // try from 01dc1c48 to 01ec1c6f has its CatchHandler @ 01dc1bc8 */
      (**(code **)(*unaff_x22 + 0x1d8))
                (unaff_x22,unaff_w24,&stack0x00000008,*(undefined8 *)(*unaff_x22 + 0x1e0));
      puVar3 = in_stack_00000008;
      while( true ) {
        if (unaff_x22 == (long *)0x0) {
          unaff_w24 = 0;
        }
        else {
          uVar1 = (**(code **)(*unaff_x22 + 0x198))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1a0));
          *(bool *)((long)unaff_x22 + 0x2a) = uVar1 != 0;
          if (uVar1 == 0) {
            *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
          }
          unaff_w24 = (uint)uVar1;
        }
        if ((unaff_x27 <= puVar3) && (unaff_w24 == 0)) {
          return unaff_w23;
        }
        unaff_x26 = puVar3;
        if (unaff_w24 == 0) {
          unaff_x26 = puVar3 + 1;
          unaff_w24 = (uint)*puVar3;
        }
        if (0x7f < unaff_w24) break;
        unaff_w23 = unaff_w23 + 1;
        puVar3 = unaff_x26;
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01dc1c40 with catch @ 01dc1c58
                        */
      }
    } while (unaff_x22 != (long *)0x0);
    if (unaff_x19 == 0) {
      plVar2 = *(long **)(unaff_x20 + 0x28);
      if (plVar2 == (long *)0x0) {
LAB_01dc1c5c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      unaff_x22 = (long *)(**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    }
    else {
      unaff_x22 = (long *)FUN_01dc1d00();
    }
    if (unaff_x22 == (long *)0x0) goto LAB_01dc1c5c;
    param_1 = unaff_x22 + 4;
    *param_1 = unaff_x19;
    unaff_x25 = param_1;
  } while( true );
}


