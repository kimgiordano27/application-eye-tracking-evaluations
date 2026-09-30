/*
FUNCTION_NAME: Oculus.Interaction.Input.Compatibility.OVR.ReadOnlyHandJointPoses$$get_Count
ENTRY_POINT: 0524c234
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void Oculus_Interaction_Input_Compatibility_OVR_ReadOnlyHandJointPoses__get_Count(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x9aa) = 1;
  puVar3 = Oculus_Platform_Request<UserProof>_TypeInfo;
  puVar2 = Oculus_Platform_Request<Purchase>_TypeInfo;
  puVar1 = PTR_DAT_067cbae8;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (*(char *)(unaff_x19 + 0x6c) != '\0') {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_03ac039c(&stack0x00000008,*(long *)(unaff_x19 + 0x28),
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
                );
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar5 = FUN_04aff1b0(&stack0x00000020,*(undefined8 *)puVar3), plVar4 = in_stack_00000030,
          (uVar5 & 1) != 0) {
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbae0);
      FUN_0475f808();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_0524c364;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,3);
LAB_0524c364:
      (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 9) * 0x10 + 0x138);
            goto LAB_0524c3e0;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,9);
LAB_0524c3e0:
      (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
            goto LAB_0524c45c;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,0xb);
LAB_0524c45c:
      (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
            goto LAB_0524c4d8;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,0xd);
LAB_0524c4d8:
      (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xf) * 0x10 + 0x138);
            goto LAB_0524c554;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,0xf);
LAB_0524c554:
      (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
    }
    FUN_04aff1ac(&stack0x00000020,*(undefined8 *)Oculus_Platform_Request<UserList>_TypeInfo);
  }
  return;
}


