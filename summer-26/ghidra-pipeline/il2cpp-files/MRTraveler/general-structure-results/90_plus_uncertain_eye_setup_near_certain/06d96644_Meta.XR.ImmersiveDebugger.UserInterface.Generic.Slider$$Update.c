/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 06d96644
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d967f8) */
/* WARNING: Removing unreachable block (ram,0x06d9667c) */
/* WARNING: Removing unreachable block (ram,0x06d9675c) */
/* WARNING: Removing unreachable block (ram,0x06d96824) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int unaff_w24;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  
  do {
    FUN_07bb38ac(param_1,param_2,0);
    uVar1 = FUN_049dc4d0(&stack0x00000030,*unaff_x21);
    if ((uVar1 & 1) == 0) {
      if (unaff_w24 < 0) {
        FUN_049dc4cc(&stack0x00000030,*(undefined8 *)PTR_DAT_08e752d8);
      }
      if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar2 = FUN_07bb2810(*unaff_x22,*(undefined8 *)(unaff_x20 + 0x68),
                           *(undefined8 *)(unaff_x20 + 0x30),0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      in_stack_00000028 = FUN_071787d8(lVar2,0);
      uVar1 = FUN_0701d1d0(&stack0x00000028,0);
      if ((uVar1 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
        thunk_FUN_03d233cc(unaff_x19 + 10,0);
        if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_04527264(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_0701d29c(&stack0x00000028,0);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar2 = *(long *)(unaff_x20 + 0x70);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        }
        lVar2 = FUN_06d95ed0();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        in_stack_00000028 = FUN_071787d8(lVar2,0);
        uVar1 = FUN_0701d1d0(&stack0x00000028,0);
        if ((uVar1 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
          thunk_FUN_03d233cc(unaff_x19 + 10,0);
          if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_04527264(unaff_x19 + 2,&stack0x00000028);
        }
        else {
          FUN_0701d29c(&stack0x00000028,0);
          if (unaff_w24 < 0) {
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(long *)(unaff_x20 + 0x40) != 0) {
              if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_07169138(*(long *)(unaff_x20 + 0x48),0);
              plVar3 = *(long **)(unaff_x20 + 0x40);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
            }
          }
          *unaff_x19 = 0xfffffffe;
          if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_0701e078(unaff_x19 + 2,0);
        }
      }
      return;
    }
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *(long *)(*unaff_x22 + 0x10);
    param_2 = in_stack_00000040;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


