/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetSystemRecommendedMSAALevel
ENTRY_POINT: 02c4e3f8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_6_0__ovrp_GetSystemRecommendedMSAALevel(ushort param_1)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  ushort *unaff_x26;
  ushort *unaff_x27;
  ushort *in_stack_00000008;
  
  do {
    *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
LAB_02c4e408:
    do {
      if ((unaff_x27 <= unaff_x26) && (param_1 == 0)) {
        return unaff_w23;
      }
      if (param_1 == 0) {
        param_1 = *unaff_x26;
        unaff_x26 = unaff_x26 + 1;
      }
      if (param_1 < 0x80) {
        unaff_w23 = unaff_w23 + 1;
      }
      else {
        if (unaff_x22 == (long *)0x0) {
          if (unaff_x19 == 0) {
            plVar1 = *(long **)(unaff_x20 + 0x28);
            if (plVar1 == (long *)0x0) goto LAB_02c4e4a4;
            unaff_x22 = (long *)(**(code **)(*plVar1 + 0x178))
                                          (plVar1,*(undefined8 *)(*plVar1 + 0x180));
          }
          else {
            unaff_x22 = (long *)FUN_02c4e548();
          }
          if (unaff_x22 == (long *)0x0) {
LAB_02c4e4a4:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          unaff_x22[4] = unaff_x19;
          unaff_x22[2] = unaff_x21;
          unaff_x22[3] = (long)unaff_x27;
          thunk_FUN_0188fd20(unaff_x22 + 4);
          *(undefined2 *)(unaff_x22 + 5) = 0;
          *(undefined1 *)((long)unaff_x22 + 0x2a) = 0;
          *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
        }
        in_stack_00000008 = unaff_x26;
        (**(code **)(*unaff_x22 + 0x1d8))
                  (unaff_x22,param_1,&stack0x00000008,*(undefined8 *)(*unaff_x22 + 0x1e0));
        unaff_x26 = in_stack_00000008;
      }
      if (unaff_x22 == (long *)0x0) {
        param_1 = 0;
        goto LAB_02c4e408;
      }
      param_1 = (**(code **)(*unaff_x22 + 0x198))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1a0));
      *(bool *)((long)unaff_x22 + 0x2a) = param_1 != 0;
    } while (param_1 != 0);
  } while( true );
}


