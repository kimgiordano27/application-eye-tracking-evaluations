/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_UpdateExternalCamera
ENTRY_POINT: 06970f3c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_UpdateExternalCamera(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  if ((param_1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_084b58d8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_06926324(0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x21);
    }
    uVar4 = FUN_07c9e200(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_084b72b8);
      puVar1 = PTR_DAT_084b72a0;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      while (uVar4 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar1), lVar2 = in_stack_00000030
            , (uVar4 & 1) != 0) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar3 = *(undefined8 *)(in_stack_00000030 + 0x28);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar4 = FUN_07c9c218(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          plVar5 = *(long **)(lVar2 + 0x10);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          plVar6 = *(long **)(lVar2 + 0x28);
          plVar5 = (long *)(**(code **)(*plVar5 + 0x2f8))
                                     (plVar5,*(undefined8 *)(lVar2 + 0x18),
                                      *(undefined8 *)(*plVar5 + 0x300));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0(uVar3,uVar3);
          }
          (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x5f0));
        }
      }
      FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b7298);
    }
  }
  return;
}


