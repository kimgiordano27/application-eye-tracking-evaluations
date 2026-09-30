/*
FUNCTION_NAME: Unity.Properties.Internal.ReflectedPropertyBagProvider$$IsValidMember
ENTRY_POINT: 0366f3c4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0366f4f8) */

void Unity_Properties_Internal_ReflectedPropertyBagProvider__IsValidMember(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 unaff_w20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  long *in_stack_00000008;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02215a88(*param_1,unaff_w20,&stack0x00000020,*unaff_x26);
  uVar1 = in_stack_00000020;
  in_stack_00000008 = in_stack_00000028;
  plVar2 = (long *)FUN_027b6f80();
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != *unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar2);
    }
    if (*plVar2 != *unaff_x24) {
      in_stack_00000008 = plVar2;
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar2);
    }
  }
  in_stack_00000008 = plVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008,plVar2);
  if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = uVar1;
  FUN_02215b6c(**(long **)(*unaff_x23 + 0xb8),unaff_w20,&stack0x00000020,
               *(undefined8 *)
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
              );
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


