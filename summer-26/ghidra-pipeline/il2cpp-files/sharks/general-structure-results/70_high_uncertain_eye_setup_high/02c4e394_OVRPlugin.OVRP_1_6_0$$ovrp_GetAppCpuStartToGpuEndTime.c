/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 02c4e394
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(void)

{
  ushort uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  long *unaff_x22;
  int iVar3;
  ushort *puVar4;
  ushort *unaff_x27;
  ushort *in_stack_00000008;
  
  thunk_FUN_0188fd20();
  *(undefined2 *)(unaff_x22 + 5) = 0;
  *(undefined1 *)((long)unaff_x22 + 0x2a) = 0;
  *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
  in_stack_00000008 = unaff_x21;
  (**(code **)(*unaff_x22 + 0x1d8))();
  iVar3 = 0;
  puVar4 = in_stack_00000008;
  do {
    while( true ) {
      if (unaff_x22 == (long *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(*unaff_x22 + 0x198))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1a0));
        *(bool *)((long)unaff_x22 + 0x2a) = uVar1 != 0;
        if (uVar1 == 0) {
          *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
        }
      }
      if ((unaff_x27 <= puVar4) && (uVar1 == 0)) {
        return iVar3;
      }
      if (uVar1 == 0) {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
      }
      if (0x7f < uVar1) break;
      iVar3 = iVar3 + 1;
    }
    if (unaff_x22 == (long *)0x0) {
      if (unaff_x19 == 0) {
        plVar2 = *(long **)(unaff_x20 + 0x28);
        if (plVar2 == (long *)0x0) {
LAB_02c4e4a4:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        unaff_x22 = (long *)(**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
      }
      else {
        unaff_x22 = (long *)FUN_02c4e548();
      }
      if (unaff_x22 == (long *)0x0) goto LAB_02c4e4a4;
      unaff_x22[4] = unaff_x19;
      unaff_x22[2] = (long)unaff_x21;
      unaff_x22[3] = (long)unaff_x27;
      thunk_FUN_0188fd20(unaff_x22 + 4);
      *(undefined2 *)(unaff_x22 + 5) = 0;
      *(undefined1 *)((long)unaff_x22 + 0x2a) = 0;
      *(undefined4 *)((long)unaff_x22 + 0x2c) = 0;
    }
    in_stack_00000008 = puVar4;
    (**(code **)(*unaff_x22 + 0x1d8))
              (unaff_x22,uVar1,&stack0x00000008,*(undefined8 *)(*unaff_x22 + 0x1e0));
    puVar4 = in_stack_00000008;
  } while( true );
}


