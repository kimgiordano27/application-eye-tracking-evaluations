/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger.<>c$$<GetClosestSeatPoseDebugger>b__79_1
ENTRY_POINT: 06dd2004
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c__<GetClosestSeatPoseDebugger>b__79_1
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x28;
  uint unaff_w29;
  long *in_stack_00000010;
  undefined8 in_stack_00000030;
  char cStack0000000000000038;
  int iStack000000000000003c;
  
  while (param_1 == (undefined8 *)0x0) {
    do {
      do {
        puVar1 = PTR_DAT_08e90778;
        if (unaff_x28 == 0) goto LAB_06dd2148;
        if (*(uint *)(unaff_x28 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        *(undefined8 *)(unaff_x28 + (long)(int)unaff_w29 * 8 + 0x20) = 0;
        thunk_FUN_03d233cc();
        unaff_w22 = unaff_w22 + 1;
        if ((in_stack_00000010 == (long *)0x0) ||
           (plVar3 = (long *)(**(code **)(*in_stack_00000010 + 0x1a8))
                                       (in_stack_00000010,*(undefined8 *)puVar1,
                                        *(undefined8 *)(*in_stack_00000010 + 0x1b0)),
           plVar3 == (long *)0x0)) {
          return unaff_x20;
        }
        if (plVar3 == (long *)0x0) goto LAB_06dd2148;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                   (plVar3,in_stack_00000030,*(undefined8 *)(*plVar3 + 0x1b0));
        if (plVar3 == (long *)0x0) {
          return unaff_x20;
        }
        if (plVar3 == (long *)0x0) goto LAB_06dd2148;
        uVar2 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
        _cStack0000000000000038 = 0;
        FUN_056b6af4(&stack0x00000038,uVar2,*(undefined8 *)PTR_DAT_08e707a0);
        if (cStack0000000000000038 == '\0') {
          return unaff_x20;
        }
        if (iStack000000000000003c <= (int)unaff_w22) {
          return unaff_x20;
        }
        plVar3 = (long *)(**(code **)(*in_stack_00000010 + 0x1a8))
                                   (in_stack_00000010,*(undefined8 *)puVar1,
                                    *(undefined8 *)(*in_stack_00000010 + 0x1b0));
        unaff_x28 = unaff_x20;
        unaff_w29 = unaff_w22;
      } while (plVar3 == (long *)0x0);
      if (plVar3 == (long *)0x0) goto LAB_06dd2148;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                 (plVar3,in_stack_00000030,*(undefined8 *)(*plVar3 + 0x1b0));
    } while (plVar3 == (long *)0x0);
    if (plVar3 == (long *)0x0) goto LAB_06dd2148;
    param_1 = (undefined8 *)
              (**(code **)(*plVar3 + 0x188))(plVar3,unaff_w22,*(undefined8 *)(*plVar3 + 400));
  }
  if (param_1 != (undefined8 *)0x0) {
    lVar4 = FUN_088d6fe8(*param_1);
    return lVar4;
  }
LAB_06dd2148:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


