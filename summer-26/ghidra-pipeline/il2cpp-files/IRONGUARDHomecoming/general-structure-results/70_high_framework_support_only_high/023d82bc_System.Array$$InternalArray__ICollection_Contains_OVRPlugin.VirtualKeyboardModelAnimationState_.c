/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 023d82bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_VirtualKeyboardModelAnimationState>
          (undefined8 param_1)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  int iVar4;
  long lVar5;
  long *unaff_x23;
  undefined8 uVar6;
  long in_stack_00000018;
  
  lVar2 = FUN_01f08890(param_1,unaff_w22);
  *unaff_x19 = lVar2;
  thunk_FUN_01f51358();
  lVar2 = unaff_x21[0xb];
  uVar6 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03579868(uVar6,0);
  if (lVar2 == 0) {
LAB_023d8640:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_02b6b264(lVar2,uVar6,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  if (lVar2 == 0) {
    if (0 < in_stack_00000018) goto LAB_023d8640;
  }
  else {
    lVar3 = thunk_FUN_01f116d0(lVar2,lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar2,lVar5);
    }
    if (0 < in_stack_00000018) {
      lVar2 = 0;
      iVar4 = 1;
      do {
        lVar5 = *unaff_x19;
        uVar1 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        if (lVar5 == 0) goto LAB_023d8640;
        if (*(uint *)(lVar5 + 0x18) <= iVar4 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined2 *)(lVar5 + lVar2 * 2 + 0x20) = uVar1;
        lVar2 = (long)iVar4;
        lVar5 = (long)iVar4;
        iVar4 = iVar4 + 1;
      } while (lVar5 < in_stack_00000018);
    }
  }
  (**(code **)(*unaff_x21 + 0x478))();
  return 1;
}


