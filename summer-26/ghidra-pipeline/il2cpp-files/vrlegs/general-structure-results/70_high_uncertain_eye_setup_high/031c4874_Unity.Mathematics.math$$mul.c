/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 031c4874
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
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
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
  
  plVar1 = (long *)thunk_FUN_01a5dd74();
  do {
    uVar3 = *unaff_x25;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0277b678(uVar3,0);
    uVar2 = FUN_02787b20(plVar1,uVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_031c4a60;
    uVar2 = FUN_0219f8b8(*(long *)(unaff_x20 + 0x10),plVar1,&stack0x00000040,*unaff_x27);
    if (((uVar2 & 1) != 0) && (in_stack_00000040 == unaff_x19)) {
      if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_031c4a60:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219eaf8(*(long *)(unaff_x20 + 0x10),plVar1,
                   *(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo);
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_031c4a60;
      Animancer_FadeGroup__get_TargetWeight(*(long *)(unaff_x20 + 0x18),&stack0x00000008,*unaff_x29)
      ;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        do {
          uVar2 = FUN_021b51c8(&stack0x00000020,*unaff_x24);
          if ((uVar2 & 1) == 0) goto LAB_031c49ac;
          FUN_01b7a454(&stack0x00000020,&stack0x00000048,*unaff_x28);
          if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar3 = thunk_FUN_01a5dd74(in_stack_00000048,0);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar2 = FUN_02787b20(plVar1,uVar3,0);
        } while ((uVar2 & 1) == 0);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar2 = (**(code **)(*plVar1 + 0x388))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x390));
      } while ((uVar2 & 1) == 0);
      FUN_031c4464();
LAB_031c49ac:
      FUN_021b51c4(&stack0x00000020,*(undefined8 *)System_Func<FieldInfo,_string>_TypeInfo);
    }
    if (plVar1 == (long *)0x0) goto LAB_031c4a60;
    plVar1 = (long *)(**(code **)(*plVar1 + 0xb18))(plVar1,*(undefined8 *)(*plVar1 + 0xb20));
  } while( true );
}


