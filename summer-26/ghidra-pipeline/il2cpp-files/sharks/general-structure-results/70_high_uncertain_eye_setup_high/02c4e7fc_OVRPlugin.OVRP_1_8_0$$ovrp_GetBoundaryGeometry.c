/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 02c4e7fc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(ushort param_1)

{
  long *plVar1;
  uint in_w8;
  ulong uVar2;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  ushort *unaff_x28;
  ushort *unaff_x29;
  ushort *in_stack_00000008;
  
code_r0x02c4e7fc:
  if (in_w8 == 0) {
    *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
  }
  do {
    if ((unaff_x29 <= unaff_x28) && (param_1 == 0)) {
LAB_02c4e8f4:
      if (unaff_x19 != 0) {
        if ((unaff_x23 != (long *)0x0) && (*(char *)((long)unaff_x23 + 0x29) == '\0')) {
          *(undefined2 *)(unaff_x19 + 0x20) = 0;
        }
        uVar2 = (long)unaff_x28 - unaff_x21;
        if ((long)uVar2 < 0) {
          uVar2 = uVar2 + 1;
        }
        *(int *)(unaff_x19 + 0x34) = (int)(uVar2 >> 1);
      }
      return (int)unaff_x26 - unaff_w20;
    }
    if (param_1 == 0) {
      param_1 = *unaff_x28;
      unaff_x28 = unaff_x28 + 1;
    }
    if (param_1 < 0x80) {
      if (unaff_x27 <= unaff_x26) {
        if ((unaff_x23 == (long *)0x0) || (*(char *)((long)unaff_x23 + 0x2a) == '\0')) {
          unaff_x28 = unaff_x28 + -1;
        }
        else {
          (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        FUN_02a6c0d8();
        goto LAB_02c4e8f4;
      }
      *unaff_x26 = (char)param_1;
      unaff_x26 = unaff_x26 + 1;
    }
    else {
      if (unaff_x23 == (long *)0x0) {
        if (unaff_x19 == 0) {
          plVar1 = *(long **)(unaff_x22 + 0x28);
          if (plVar1 == (long *)0x0) goto LAB_02c4e9d0;
          unaff_x23 = (long *)(**(code **)(*plVar1 + 0x178))
                                        (plVar1,*(undefined8 *)(*plVar1 + 0x180));
        }
        else {
          unaff_x23 = (long *)FUN_02c4e548();
        }
        if (unaff_x23 == (long *)0x0) {
LAB_02c4e9d0:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        unaff_x23[4] = unaff_x19;
        unaff_x23[2] = unaff_x21;
        unaff_x23[3] = (long)unaff_x29;
        thunk_FUN_0188fd20(unaff_x23 + 4);
        *(undefined1 *)((long)unaff_x23 + 0x2a) = 0;
        *(undefined2 *)(unaff_x23 + 5) = 1;
        *(undefined4 *)((long)unaff_x23 + 0x2c) = 0;
      }
      in_stack_00000008 = unaff_x28;
      (**(code **)(*unaff_x23 + 0x1d8))
                (unaff_x23,param_1,&stack0x00000008,*(undefined8 *)(*unaff_x23 + 0x1e0));
      unaff_x28 = in_stack_00000008;
    }
    if (unaff_x23 != (long *)0x0) break;
    param_1 = 0;
  } while( true );
  param_1 = (**(code **)(*unaff_x23 + 0x198))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1a0));
  in_w8 = (uint)param_1;
  *(bool *)((long)unaff_x23 + 0x2a) = param_1 != 0;
  goto code_r0x02c4e7fc;
}


