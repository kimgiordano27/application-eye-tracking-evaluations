/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Log
ENTRY_POINT: 06db5864
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

void Meta_XR_EnvironmentDepthManagerRaycastExtensions__Log(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *puVar9;
  long unaff_x27;
  undefined8 *puVar10;
  long unaff_x28;
  undefined8 *puVar11;
  long unaff_x29;
  long *plVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  puVar2 = PTR_DAT_08e90158;
  puVar9 = *(undefined8 **)(unaff_x26 + 0x188);
  puVar10 = *(undefined8 **)(unaff_x27 + 0x160);
  puVar11 = *(undefined8 **)(unaff_x28 + 0x2a8);
  plVar12 = *(long **)(unaff_x29 + 0x5f0);
  FUN_05e10320(&stack0x00000008,param_2,*param_1);
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000018;
  do {
    uVar4 = FUN_04aa69ec(&stack0x00000040,*unaff_x25);
    if ((uVar4 & 1) == 0) {
      FUN_04aa69e8(&stack0x00000040,*(undefined8 *)PTR_DAT_08e90290);
      return;
    }
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05213710(&stack0x00000008,in_stack_00000050,*puVar9);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_049dc4d0(&stack0x00000020,*puVar10), lVar3 = in_stack_00000030,
          (uVar4 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = *(undefined8 *)(in_stack_00000030 + 0x38);
      uVar8 = *puVar11;
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar8 = FUN_0710fcf0(uVar8,0);
      uVar4 = FUN_07119344(uVar7,uVar8,0);
      if ((uVar4 & 1) != 0) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar6 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar3;
          thunk_FUN_03d233cc(plVar5,lVar3);
        }
        else {
          FUN_05212cf4();
        }
      }
    }
    FUN_049dc4cc(&stack0x00000020,*(undefined8 *)puVar2);
  } while( true );
}


