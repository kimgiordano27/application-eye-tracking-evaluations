/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 06d84cf8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long in_x9;
  long unaff_x19;
  long *plVar7;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar4 = PTR_DAT_08e8d758;
  puVar3 = PTR_DAT_08e824b0;
  puVar2 = PTR_DAT_08e824a8;
  if ((*(long *)(unaff_x19 + 0x28) != 0) &&
     (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x168), lVar5 != 0)) {
    FUN_05213710(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_08e824d0);
    plVar1 = (long *)(unaff_x19 + 0x78);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      while( true ) {
        do {
          uVar6 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)puVar3);
          if ((uVar6 & 1) == 0) {
            FUN_049dc4cc(&stack0x00000020,*(undefined8 *)puVar2);
            return;
          }
          if (in_stack_00000030 == (long *)0x0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = in_stack_00000030;
            if (*in_stack_00000030 != *(long *)puVar4) {
              plVar7 = (long *)0x0;
            }
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar6 = FUN_085decd4(plVar7,0,0);
        } while ((uVar6 & 1) == 0);
        if (0x2b < *(int *)(unaff_x19 + 0x30)) break;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        *plVar1 = plVar7[0xb];
        thunk_FUN_03d233cc(plVar1);
      }
      if (plVar7 == (long *)0x0) break;
      *plVar1 = plVar7[0xc];
      thunk_FUN_03d233cc(plVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


