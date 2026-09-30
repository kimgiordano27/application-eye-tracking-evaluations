/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$DrawLine
ENTRY_POINT: 06db5934
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06db599c) */

void Meta_XR_EnvironmentDepthManagerRaycastExtensions__DrawLine(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000050;
  
  do {
    *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = unaff_x20;
      thunk_FUN_03d233cc(plVar3,unaff_x20);
    }
    else {
      FUN_05212cf4();
    }
    do {
      while (uVar2 = FUN_049dc4d0(&stack0x00000020,*unaff_x27), unaff_x20 = in_stack_00000030,
            (uVar2 & 1) == 0) {
        FUN_049dc4cc(&stack0x00000020,*unaff_x24);
        uVar2 = FUN_04aa69ec(&stack0x00000040,*unaff_x25);
        if ((uVar2 & 1) == 0) {
          FUN_04aa69e8(&stack0x00000040,*(undefined8 *)PTR_DAT_08e90290);
          return;
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_05213710(&stack0x00000008,in_stack_00000050,*unaff_x26);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar4 = *(undefined8 *)(in_stack_00000030 + 0x38);
      uVar5 = *unaff_x28;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0710fcf0(uVar5,0);
      uVar2 = FUN_07119344(uVar4,uVar5,0);
    } while ((uVar2 & 1) == 0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_w10 = *(int *)(unaff_x19 + 0x1c);
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while( true );
}


