/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 031c4964
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_math__mul(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar2;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  long in_stack_00000048;
  
  do {
    thunk_FUN_01a58e78();
    do {
      uVar1 = FUN_02787b20(unaff_x21,unaff_x23,0);
      if ((uVar1 & 1) == 0) goto LAB_031c4920;
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = (**(code **)(*unaff_x21 + 0x388))
                        (unaff_x21,unaff_x23,*(undefined8 *)(*unaff_x21 + 0x390));
      if ((uVar1 & 1) == 0) goto LAB_031c4920;
      FUN_031c4464();
      do {
        FUN_021b51c4(&stack0x00000020,*(undefined8 *)System_Func<FieldInfo,_string>_TypeInfo);
        do {
          if (unaff_x21 == (long *)0x0) goto LAB_031c4a60;
          unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0xb18))
                                        (unaff_x21,*(undefined8 *)(*unaff_x21 + 0xb20));
          uVar2 = *unaff_x25;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar2 = FUN_0277b678(uVar2,0);
          uVar1 = FUN_02787b20(unaff_x21,uVar2,0);
          if ((uVar1 & 1) == 0) {
            return;
          }
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_031c4a60;
          uVar1 = FUN_0219f8b8(*(long *)(unaff_x20 + 0x10),unaff_x21,&stack0x00000040,*unaff_x27);
        } while (((uVar1 & 1) == 0) || (in_stack_00000040 != unaff_x19));
        if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_031c4a60:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0219eaf8(*(long *)(unaff_x20 + 0x10),unaff_x21,
                     *(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo);
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_031c4a60;
        Animancer_FadeGroup__get_TargetWeight
                  (*(long *)(unaff_x20 + 0x18),&stack0x00000008,*unaff_x29);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
LAB_031c4920:
        uVar1 = FUN_021b51c8(&stack0x00000020,*unaff_x24);
      } while ((uVar1 & 1) == 0);
      FUN_01b7a454(&stack0x00000020,&stack0x00000048,*unaff_x28);
      if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      unaff_x23 = thunk_FUN_01a5dd74(in_stack_00000048,0);
    } while (*(int *)(*unaff_x26 + 0xe0) != 0);
  } while( true );
}


