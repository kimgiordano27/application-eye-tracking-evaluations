/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_9
ENTRY_POINT: 01dc2054
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__819_9(long param_1)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  ushort *puVar4;
  ushort *unaff_x29;
  ushort *in_stack_00000008;
  
code_r0x01dc2054:
  (**(code **)(param_1 + 0x1d8))
            (unaff_x23,unaff_w24,&stack0x00000008,*(undefined8 *)(param_1 + 0x1e0));
  puVar4 = in_stack_00000008;
  do {
    if (unaff_x23 == (long *)0x0) {
      unaff_w24 = 0;
    }
    else {
      uVar1 = (**(code **)(*unaff_x23 + 0x198))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1a0));
      *(bool *)((long)unaff_x23 + 0x2a) = uVar1 != 0;
      if (uVar1 == 0) {
        *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
      }
      unaff_w24 = (uint)uVar1;
    }
    if ((unaff_x29 <= puVar4) && (unaff_w24 == 0)) {
LAB_01dc20ac:
      if (unaff_x19 != 0) {
        if ((unaff_x23 != (long *)0x0) && (*(char *)((long)unaff_x23 + 0x29) == '\0')) {
          *(undefined2 *)(unaff_x19 + 0x20) = 0;
        }
        uVar3 = (long)puVar4 - unaff_x21;
        if ((long)uVar3 < 0) {
          uVar3 = uVar3 + 1;
        }
        *(int *)(unaff_x19 + 0x34) = (int)(uVar3 >> 1);
      }
      return (int)unaff_x26 - unaff_w20;
    }
    if (unaff_w24 == 0) {
      unaff_w24 = (uint)*puVar4;
      puVar4 = puVar4 + 1;
    }
    if (0x7f < unaff_w24) break;
    if (unaff_x27 <= unaff_x26) {
      if ((unaff_x23 == (long *)0x0) || (*(char *)((long)unaff_x23 + 0x2a) == '\0')) {
        puVar4 = puVar4 + -1;
      }
      else {
        (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
      }
      FUN_01dd63d0();
      goto LAB_01dc20ac;
    }
    *unaff_x26 = (char)unaff_w24;
    unaff_x26 = unaff_x26 + 1;
  } while( true );
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x19 == 0) {
      plVar2 = *(long **)(unaff_x22 + 0x28);
      if (plVar2 == (long *)0x0) {
LAB_01dc2188:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      unaff_x23 = (long *)(**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    }
    else {
      unaff_x23 = (long *)FUN_01dc1d00();
    }
    if (unaff_x23 == (long *)0x0) goto LAB_01dc2188;
    unaff_x23[4] = unaff_x19;
    unaff_x23[2] = unaff_x21;
    unaff_x23[3] = (long)unaff_x29;
    thunk_FUN_0106e12c(unaff_x23 + 4);
    *(undefined1 *)((long)unaff_x23 + 0x2a) = 0;
    *(undefined2 *)(unaff_x23 + 5) = 1;
    *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
  }
  param_1 = *unaff_x23;
  in_stack_00000008 = puVar4;
  goto code_r0x01dc2054;
}


