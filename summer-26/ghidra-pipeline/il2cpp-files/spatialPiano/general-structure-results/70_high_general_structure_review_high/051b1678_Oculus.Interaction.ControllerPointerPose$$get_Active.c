/*
FUNCTION_NAME: Oculus.Interaction.ControllerPointerPose$$get_Active
ENTRY_POINT: 051b1678
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
Oculus_Interaction_ControllerPointerPose__get_Active
          (undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  char cStack0000000000000010;
  undefined8 in_stack_00000018;
  char cStack0000000000000020;
  undefined8 in_stack_00000028;
  char cStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  puVar3 = UnityEngine_UIElements_ChangeEvent<Gradient>_TypeInfo;
  if ((DAT_06bba44d & 1) == 0) {
    FUN_02f08768(UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_ChangeEvent<Gradient>_TypeInfo);
    FUN_02f08768(System_Func<ValidateCommandEvent>_TypeInfo);
    FUN_02f08768(System_Func<Vector3>_TypeInfo);
    FUN_02f08768(System_Func<VectorImageRenderInfo>_TypeInfo);
    FUN_02f08768(System_Func<VisualElement>_TypeInfo);
    FUN_02f08768(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca630);
    FUN_02f08768(PTR_DAT_067ca638);
    FUN_02f08768(System_Func<VolumeManager>_TypeInfo);
    FUN_02f08768(System_Func<WheelEvent>_TypeInfo);
    DAT_06bba44d = 1;
  }
  *param_2 = 0;
  *param_3 = 0;
  _cStack0000000000000030 = 0;
  in_stack_00000038 = 0;
  _cStack0000000000000020 = 0;
  in_stack_00000028 = 0;
  _cStack0000000000000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar11 = FUN_051b1ac4(param_1,&stack0x00000030,param_3);
  if (((uVar11 & 1) == 0) || (cStack0000000000000030 == '\0')) {
    lVar12 = *(long *)System_Func<VolumeManager>_TypeInfo;
    if (*param_3 != 0) {
      lVar12 = *param_3;
    }
LAB_051b1840:
    *param_3 = lVar12;
    return 0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar11 = FUN_051b1ac4(param_1,&stack0x00000020,param_3);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  if (cStack0000000000000020 != '\0') {
    lVar12 = thunk_FUN_02f45270(*(undefined8 *)System_Func<VisualElementFocusChangeTarget>_TypeInfo)
    ;
    FUN_03a707e0(lVar12,*(undefined8 *)System_Func<Vector3>_TypeInfo);
    puVar2 = PTR_DAT_067ca638;
    uVar13 = FUN_03e1c0f0(&stack0x00000030,*(undefined8 *)PTR_DAT_067ca638);
    puVar4 = System_Func<ValidateCommandEvent>_TypeInfo;
    if (lVar12 != 0) {
      lVar16 = *(long *)(lVar12 + 0x10);
      lVar17 = *(long *)System_Func<ValidateCommandEvent>_TypeInfo;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar16 != 0) {
        uVar15 = *(uint *)(lVar12 + 0x18);
        if (uVar15 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar15 + 1;
          *(undefined8 *)(lVar16 + (long)(int)uVar15 * 8 + 0x20) = uVar13;
        }
        else {
          FUN_03a71010(lVar12,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        uVar13 = *(undefined8 *)puVar2;
        puVar14 = (undefined8 *)&stack0x00000020;
        while( true ) {
          uVar13 = FUN_03e1c0f0(puVar14,uVar13);
          lVar16 = *(long *)(lVar12 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar16 == 0) break;
          uVar15 = *(uint *)(lVar12 + 0x18);
          if (uVar15 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar15 + 1;
            *(undefined8 *)(lVar16 + (long)(int)uVar15 * 8 + 0x20) = uVar13;
          }
          else {
            FUN_03a71010(lVar12,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar11 = FUN_051b1ac4(param_1,&stack0x00000010,param_3);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          if (cStack0000000000000010 == '\0') {
            uVar15 = *(uint *)(lVar12 + 0x18);
            if (7 < (int)uVar15) {
              lVar12 = *(long *)System_Func<WheelEvent>_TypeInfo;
              goto LAB_051b1840;
            }
            if (uVar15 == 7) goto LAB_051b19b0;
            lVar16 = *(long *)puVar4;
            goto LAB_051b1954;
          }
          uVar13 = *(undefined8 *)puVar2;
          puVar14 = (undefined8 *)&stack0x00000010;
        }
      }
    }
Oculus_Interaction_ControllerPointerPose__InjectController:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar13 = FUN_03e1c0f0(&stack0x00000030,*(undefined8 *)PTR_DAT_067ca638);
  if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo);
  }
  in_stack_00000048 = FUN_0519f0f4(uVar13);
LAB_051b1a88:
  *param_2 = in_stack_00000048;
  return 1;
  while( true ) {
    if (uVar15 < *(uint *)(lVar17 + 0x18)) {
      lVar1 = (long)(int)uVar15;
      uVar15 = uVar15 + 1;
      *(uint *)(lVar12 + 0x18) = uVar15;
      *(undefined8 *)(lVar17 + lVar1 * 8 + 0x20) = 0;
    }
    else {
      FUN_03a71010(lVar12,0,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      lVar16 = *(long *)puVar4;
      uVar15 = *(uint *)(lVar12 + 0x18);
    }
    if (6 < (int)uVar15) break;
LAB_051b1954:
    lVar17 = *(long *)(lVar12 + 0x10);
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar17 == 0) goto Oculus_Interaction_ControllerPointerPose__InjectController;
  }
LAB_051b19b0:
  puVar3 = System_Func<VisualElement>_TypeInfo;
  uVar5 = FUN_03a70d1c(lVar12,0,*(undefined8 *)System_Func<VisualElement>_TypeInfo);
  uVar7 = 1;
  iVar6 = FUN_03a70d1c(lVar12,1,*(undefined8 *)puVar3);
  lVar16 = FUN_03a70d1c(lVar12,2,*(undefined8 *)puVar3);
  if (lVar16 != 0) {
    uVar7 = FUN_03a70d1c(lVar12,2,*(undefined8 *)puVar3);
  }
  uVar8 = FUN_03a70d1c(lVar12,3,*(undefined8 *)puVar3);
  uVar9 = FUN_03a70d1c(lVar12,4,*(undefined8 *)puVar3);
  uVar10 = FUN_03a70d1c(lVar12,5,*(undefined8 *)puVar3);
  uVar13 = FUN_03a70d1c(lVar12,6,*(undefined8 *)puVar3);
  in_stack_00000048 = 0;
  FUN_050b51b8(&stack0x00000048,uVar5,iVar6 + 1,uVar7,uVar8,uVar9,uVar10,uVar13);
  goto LAB_051b1a88;
}


