/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_CreateCustomCameraAnchor
ENTRY_POINT: 033f3ba8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_CreateCustomCameraAnchor
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  uint unaff_w27;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02679f58(param_2,4,*param_1);
  if (unaff_w27 < *(uint *)(unaff_x26 + 0x18)) {
    FUN_01d996c0();
    if (unaff_w27 < *(uint *)(unaff_x26 + 0x18)) {
      if (*unaff_x24 != 0) {
        auVar3 = FUN_02679ffc(*unaff_x24);
        in_stack_00000008 = unaff_x23;
        thunk_FUN_01e10808(&stack0x00000008);
        _in_stack_00000010 = auVar3;
        thunk_FUN_01e10808(&stack0x00000010,0);
        iVar1 = *(int *)(unaff_x22 + 0x20);
        thunk_FUN_01da0934();
        if ((iVar1 < 2) || (uVar2 = FUN_033f5900(&stack0x00000008), (uVar2 & 1) == 0)) {
          *(undefined1 (*) [16])(unaff_x19 + 1) = _in_stack_00000010;
          *unaff_x19 = in_stack_00000008;
        }
        else {
          if (unaff_x21 == 0) goto LAB_033f3c5c;
          (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
          *unaff_x19 = 0;
          unaff_x19[1] = 0;
          unaff_x19[2] = 0;
        }
        return;
      }
LAB_033f3c5c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


