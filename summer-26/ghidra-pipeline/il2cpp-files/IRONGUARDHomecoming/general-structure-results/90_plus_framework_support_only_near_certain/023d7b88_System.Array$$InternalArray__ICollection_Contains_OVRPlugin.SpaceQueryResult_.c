/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 023d7b88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_gaze_interaction_hits_1
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long lVar4;
  long *unaff_x23;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong in_stack_00000018;
  
  FUN_038d84c4();
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = FUN_01f08890(lVar1,in_stack_00000018 & 0xffffffff);
  *unaff_x19 = lVar1;
  thunk_FUN_01f51358();
  lVar1 = unaff_x21[0xb];
  uVar5 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03579868(uVar5,0);
  if (lVar1 == 0) {
LAB_023d7f28:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar1 = FUN_02b6b264(lVar1,uVar5,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  if (lVar1 == 0) {
    if (0 < (long)in_stack_00000018) goto LAB_023d7f28;
  }
  else {
    lVar2 = thunk_FUN_01f116d0(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar1,lVar4);
    }
    if (0 < (long)in_stack_00000018) {
      lVar1 = 0;
      iVar3 = 1;
      do {
        lVar4 = *unaff_x19;
        auVar6 = (**(code **)(lVar2 + 0x18))
                           (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        if (lVar4 == 0) goto LAB_023d7f28;
        if (*(uint *)(lVar4 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined1 (*) [16])(lVar4 + lVar1 * 0x10 + 0x20) = auVar6;
        lVar1 = (long)iVar3;
        lVar4 = (long)iVar3;
        iVar3 = iVar3 + 1;
      } while (lVar4 < (long)in_stack_00000018);
    }
  }
  (**(code **)(*unaff_x21 + 0x478))();
  return 1;
}


