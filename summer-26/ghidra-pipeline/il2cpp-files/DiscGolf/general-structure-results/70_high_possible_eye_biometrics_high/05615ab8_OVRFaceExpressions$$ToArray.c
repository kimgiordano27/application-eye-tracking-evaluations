/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 05615ab8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05615cf4) */

void OVRFaceExpressions__ToArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  FUN_02d965b8(System_Func<PointerDownLinkTagEvent>_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a01850);
  *(undefined1 *)(unaff_x20 + 0x9e1) = 1;
  puVar4 = System_Func<PointerDownLinkTagEvent>_TypeInfo;
  puVar3 = PTR_DAT_06a18830;
  puVar2 = PTR_DAT_06a01850;
  puVar1 = PTR_DAT_069fba08;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  if ((DAT_06dbb9df & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dbb9df = 1;
  }
  uVar12 = *(undefined8 *)puVar1;
  plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_054a1fc4(plVar6,uVar12,0);
  lVar7 = *(long *)puVar4;
  in_stack_00000028 = &stack0x00000048;
  uVar12 = *(undefined8 *)puVar2;
  in_stack_00000020 = 0;
  in_stack_00000048 = plVar6;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar7 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_044e425c(&stack0x00000008,lVar7,*(undefined8 *)System_Func<PointerOutEvent>_TypeInfo);
  puVar4 = System_Func<PointerMoveEvent>_TypeInfo;
  puVar3 = System_Func<PointerLeaveEvent>_TypeInfo;
  puVar1 = System_Func<PointerEnterEvent>_TypeInfo;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000010 = &stack0x00000030;
  in_stack_00000008 = 0;
  while (uVar8 = FUN_05157f1c(&stack0x00000030,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
    lVar7 = FUN_0515800c(&stack0x00000030,*(undefined8 *)puVar4);
    uVar8 = FUN_05614f14();
    if ((uVar8 & 1) != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar5 = FUN_05372384(lVar7,0x7c,0);
      uVar9 = FUN_05371b10(lVar7,iVar5 + 1,0);
      uVar9 = FUN_05614c70(uVar9,uVar9);
      uVar12 = FUN_0536d554(uVar12,uVar9,*(undefined8 *)puVar2,0);
    }
  }
  FUN_05157f0c(&stack0x00000030,*(undefined8 *)puVar1);
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*in_stack_00000048 + 0x238))
            (in_stack_00000048,uVar12,*(undefined8 *)(*in_stack_00000048 + 0x240));
  plVar6 = (long *)*in_stack_00000028;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05615cc0;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069fbff0,0);
LAB_05615cc0:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


