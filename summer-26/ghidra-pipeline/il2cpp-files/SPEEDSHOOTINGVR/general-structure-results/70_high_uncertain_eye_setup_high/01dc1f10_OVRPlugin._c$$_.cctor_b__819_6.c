/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_6
ENTRY_POINT: 01dc1f10
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__819_6(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  undefined1 *unaff_x20;
  ushort *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  undefined1 *puVar5;
  ushort *puVar6;
  ushort *unaff_x29;
  ushort *in_stack_00000008;
  
  uVar2 = FUN_01c49538(param_1,0,0);
  puVar5 = unaff_x20;
  if (uVar2 < 0x80) {
    if (unaff_w26 != 0) {
      if (unaff_w24 == 0) {
        FUN_01dd63d0();
      }
      *unaff_x20 = (char)uVar2;
      unaff_w24 = unaff_w24 + -1;
      puVar5 = unaff_x20 + 1;
    }
    puVar6 = unaff_x21;
    if (unaff_w24 < unaff_w25) {
      FUN_01dd63d0();
      unaff_x29 = unaff_x21 + unaff_w24;
    }
    while (puVar6 < unaff_x29) {
      uVar1 = *puVar6;
      if (0x7f < *puVar6) {
        uVar1 = uVar2;
      }
      *puVar5 = (char)uVar1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (unaff_x19 == 0) goto LAB_01dc20d4;
    *(undefined2 *)(unaff_x19 + 0x20) = 0;
    uVar4 = (long)puVar6 - (long)unaff_x21;
  }
  else {
    puVar6 = unaff_x21;
    if (unaff_w26 != 0) {
      if ((unaff_x19 == 0) || (unaff_x23 = (long *)FUN_01dc1d00(), unaff_x23 == (long *)0x0)) {
LAB_01dc2188:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      unaff_x23[2] = (long)unaff_x21;
      unaff_x23[3] = (long)unaff_x29;
      unaff_x23[4] = unaff_x19;
      thunk_FUN_0106e12c();
      *(undefined1 *)((long)unaff_x23 + 0x2a) = 0;
      *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
      *(undefined2 *)(unaff_x23 + 5) = 1;
      in_stack_00000008 = unaff_x21;
      (**(code **)(*unaff_x23 + 0x1d8))
                (unaff_x23,unaff_w26,&stack0x00000008,*(undefined8 *)(*unaff_x23 + 0x1e0));
      puVar6 = in_stack_00000008;
    }
    while( true ) {
      while( true ) {
        if (unaff_x23 == (long *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*unaff_x23 + 0x198))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1a0));
          *(bool *)((long)unaff_x23 + 0x2a) = uVar2 != 0;
          if (uVar2 == 0) {
            *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
          }
        }
        if ((unaff_x29 <= puVar6) && (uVar2 == 0)) goto LAB_01dc20ac;
        if (uVar2 == 0) {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        if (uVar2 < 0x80) break;
        if (unaff_x23 == (long *)0x0) {
          if (unaff_x19 == 0) {
            plVar3 = *(long **)(unaff_x22 + 0x28);
            if (plVar3 == (long *)0x0) goto LAB_01dc2188;
            unaff_x23 = (long *)(**(code **)(*plVar3 + 0x178))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x180));
          }
          else {
            unaff_x23 = (long *)FUN_01dc1d00();
          }
          if (unaff_x23 == (long *)0x0) goto LAB_01dc2188;
          unaff_x23[4] = unaff_x19;
          unaff_x23[2] = (long)unaff_x21;
          unaff_x23[3] = (long)unaff_x29;
          thunk_FUN_0106e12c(unaff_x23 + 4);
          *(undefined1 *)((long)unaff_x23 + 0x2a) = 0;
          *(undefined2 *)(unaff_x23 + 5) = 1;
          *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
        }
        in_stack_00000008 = puVar6;
        (**(code **)(*unaff_x23 + 0x1d8))
                  (unaff_x23,uVar2,&stack0x00000008,*(undefined8 *)(*unaff_x23 + 0x1e0));
        puVar6 = in_stack_00000008;
      }
      if (unaff_x20 + unaff_w24 <= puVar5) break;
      *puVar5 = (char)uVar2;
      puVar5 = puVar5 + 1;
    }
    if ((unaff_x23 == (long *)0x0) || (*(char *)((long)unaff_x23 + 0x2a) == '\0')) {
      puVar6 = puVar6 + -1;
    }
    else {
      (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
    }
    FUN_01dd63d0();
LAB_01dc20ac:
    if (unaff_x19 == 0) goto LAB_01dc20d4;
    if ((unaff_x23 != (long *)0x0) && (*(char *)((long)unaff_x23 + 0x29) == '\0')) {
      *(undefined2 *)(unaff_x19 + 0x20) = 0;
    }
    uVar4 = (long)puVar6 - (long)unaff_x21;
  }
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  *(int *)(unaff_x19 + 0x34) = (int)(uVar4 >> 1);
LAB_01dc20d4:
  return (int)puVar5 - (int)unaff_x20;
}


