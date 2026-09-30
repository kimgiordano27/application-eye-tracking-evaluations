/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_8
ENTRY_POINT: 01dc1fe8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__819_8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ushort unaff_w24;
  undefined1 *unaff_x26;
  undefined1 *puVar3;
  undefined1 *unaff_x27;
  ushort *puVar4;
  ushort *unaff_x28;
  ushort *unaff_x29;
  ushort *in_stack_00000008;
  
  while (puVar4 = unaff_x28, (bool)in_CY && !(bool)in_ZR) {
    puVar3 = unaff_x26 + 1;
    *unaff_x26 = (char)unaff_w24;
    while( true ) {
      if (unaff_x23 == (long *)0x0) {
        unaff_w24 = 0;
      }
      else {
        unaff_w24 = (**(code **)(*unaff_x23 + 0x198))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1a0))
        ;
        *(bool *)((long)unaff_x23 + 0x2a) = unaff_w24 != 0;
        if (unaff_w24 == 0) {
          *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
        }
      }
      unaff_x26 = puVar3;
      if ((unaff_x29 <= puVar4) && (unaff_w24 == 0)) goto LAB_01dc20ac;
      unaff_x28 = puVar4;
      if (unaff_w24 == 0) {
        unaff_x28 = puVar4 + 1;
        unaff_w24 = *puVar4;
      }
      if (unaff_w24 < 0x80) break;
      if (unaff_x23 == (long *)0x0) {
        if (unaff_x19 == 0) {
          plVar1 = *(long **)(unaff_x22 + 0x28);
          if (plVar1 == (long *)0x0) goto LAB_01dc2188;
          unaff_x23 = (long *)(**(code **)(*plVar1 + 0x178))
                                        (plVar1,*(undefined8 *)(*plVar1 + 0x180));
        }
        else {
          unaff_x23 = (long *)FUN_01dc1d00();
        }
        if (unaff_x23 == (long *)0x0) {
LAB_01dc2188:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        unaff_x23[4] = unaff_x19;
        unaff_x23[2] = unaff_x21;
        unaff_x23[3] = (long)unaff_x29;
        thunk_FUN_0106e12c(unaff_x23 + 4);
        *(undefined1 *)((long)unaff_x23 + 0x2a) = 0;
        *(undefined2 *)(unaff_x23 + 5) = 1;
        *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
      }
      in_stack_00000008 = unaff_x28;
      (**(code **)(*unaff_x23 + 0x1d8))
                (unaff_x23,unaff_w24,&stack0x00000008,*(undefined8 *)(*unaff_x23 + 0x1e0));
      puVar4 = in_stack_00000008;
    }
    in_ZR = unaff_x27 == puVar3;
    in_CY = puVar3 <= unaff_x27;
  }
  if ((unaff_x23 == (long *)0x0) || (*(char *)((long)unaff_x23 + 0x2a) == '\0')) {
    puVar4 = unaff_x28 + -1;
  }
  else {
    (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
  }
  FUN_01dd63d0();
LAB_01dc20ac:
  if (unaff_x19 != 0) {
    if ((unaff_x23 != (long *)0x0) && (*(char *)((long)unaff_x23 + 0x29) == '\0')) {
      *(undefined2 *)(unaff_x19 + 0x20) = 0;
    }
    uVar2 = (long)puVar4 - unaff_x21;
    if ((long)uVar2 < 0) {
      uVar2 = uVar2 + 1;
    }
    *(int *)(unaff_x19 + 0x34) = (int)(uVar2 >> 1);
  }
  return (int)unaff_x26 - unaff_w20;
}


