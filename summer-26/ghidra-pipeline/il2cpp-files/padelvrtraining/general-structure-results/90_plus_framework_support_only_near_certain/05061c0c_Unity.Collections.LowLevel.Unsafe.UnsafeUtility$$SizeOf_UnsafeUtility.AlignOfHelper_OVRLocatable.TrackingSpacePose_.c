/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRLocatable.TrackingSpacePose>>
ENTRY_POINT: 05061c0c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


int Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRLocatable_TrackingSpacePose>>
              (undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x22;
  int unaff_w24;
  undefined8 uVar9;
  long unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  int *in_stack_00000000;
  int *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  do {
    FUN_08082b08(param_1,0);
    if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d540(unaff_x25);
    }
    if ((unaff_w26 != 6) && (unaff_w26 != 0)) {
      return unaff_w24;
    }

    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector2f>>
    :
    do {
      unaff_x29 = unaff_x29 + 1;
      unaff_x28 = unaff_x28 + 8;
      if ((int)unaff_x20[1] <= unaff_x29) {
        FUN_05de8814(&stack0x00000048,*(undefined8 *)PTR_DAT_091fa808);
        return unaff_w24;
      }
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar9 = FUN_07186ef4(uVar9,0);
      uVar7 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49745_091fa7b8,0);
      uVar8 = FUN_0719124c(uVar9,uVar7,0);
      if ((uVar8 & 1) == 0) {
        iVar4 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar9 = FUN_07186ef4(uVar9,0);
        iVar4 = FUN_0805c3f8(in_stack_00000018,uVar9,*(undefined8 *)(unaff_x28 + *unaff_x20),0,0);
        if (iVar4 < 0)
        goto 
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector2f>>
        ;
      }
      uVar8 = FUN_05de8a14(&stack0x00000048,iVar4,*(undefined8 *)PTR_DAT_091fa800);
    } while ((uVar8 & 1) != 0);
    FUN_05de897c(&stack0x00000048,iVar4,*(undefined8 *)PTR_DAT_091fa7f8);
    iVar1 = *in_stack_00000000;
    iVar2 = *in_stack_00000008;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    puVar3 = PTR_DAT_091fa7f0;
    iVar5 = FUN_04f506c4(*(undefined8 *)PTR_DAT_091fa7f0);
    iVar6 = FUN_04f506c4(*(undefined8 *)puVar3);
    FUN_08082a64(&stack0x00000040,iVar2 - iVar5,2,iVar1 - iVar6,0);
    thunk_FUN_08048930(unaff_x22,in_stack_00000040,iVar4,
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
    in_stack_00000028 = unaff_x20[1];
    in_stack_00000020 = *unaff_x20;
    in_stack_00000038 =
         thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    iVar4 = FUN_0506ffa0(in_stack_00000018,&stack0x00000040,iVar1,unaff_x22,in_stack_00000010._4_4_,
                         &stack0x00000038,iVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x40))
    ;
    unaff_x25 = 0;
    if (iVar4 <= unaff_w24) {
      iVar4 = unaff_w24;
    }
    unaff_w26 = 6;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_1 = &stack0x00000040;
    unaff_w24 = iVar4;
  } while( true );
}


