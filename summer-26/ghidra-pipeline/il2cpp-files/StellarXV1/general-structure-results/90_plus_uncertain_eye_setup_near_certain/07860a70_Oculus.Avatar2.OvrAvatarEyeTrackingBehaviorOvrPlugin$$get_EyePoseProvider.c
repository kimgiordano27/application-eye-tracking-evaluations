/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$get_EyePoseProvider
ENTRY_POINT: 07860a70
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin__get_EyePoseProvider(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x20;
  long *unaff_x21;
  long in_stack_00000028;
  
LAB_07860a80:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x19,param_1[1]);
    if ((uVar1 & 1) == 0) {
      FUN_07860f40();
      return 0;
    }
    plVar6 = *(long **)(in_stack_00000028 + 0x50);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07860aec;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x21,0);
LAB_07860aec:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    *(undefined8 *)(in_stack_00000028 + 0x38) = uVar3;
    thunk_FUN_040ec700();
    if (*(long *)(in_stack_00000028 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = FUN_075ac0e4(*(long *)(in_stack_00000028 + 0x38),0);
    *(undefined8 *)(in_stack_00000028 + 0x40) = uVar3;
    thunk_FUN_040ec700();
    uVar1 = FUN_078604b4(*(undefined8 *)(in_stack_00000028 + 0x40));
    if ((uVar1 & 1) == 0) {
      uVar3 = FUN_0785f5f4(*(undefined8 *)(in_stack_00000028 + 0x38));
      *(undefined8 *)(in_stack_00000028 + 0x48) = uVar3;
      thunk_FUN_040ec700();
      if (*(long *)(in_stack_00000028 + 0x48) != 0) {
        *(long *)(in_stack_00000028 + 0x10) = *(long *)(in_stack_00000028 + 0x48);
        thunk_FUN_040ec700();
        *(undefined4 *)(in_stack_00000028 + 0x18) = 3;
        return 1;
      }
    }
    unaff_x19 = *(long **)(in_stack_00000028 + 0x50);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x20) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07860a80;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_040b1e00(unaff_x19,*unaff_x20,0);
  } while( true );
}


