/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 09fce48c
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


long * UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint in_w10;
  uint in_w11;
  long unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x26;
  undefined8 *puVar11;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  puVar11 = *(undefined8 **)(unaff_x26 + 0x5f8);
  if (in_w10 < in_w11) {
    param_1 = param_1 + (long)(int)in_w10 * 0x18;
    *(uint *)(unaff_x24 + 0x18) = in_w10 + 1;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000088;
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000080;
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000078;
    thunk_FUN_049ee3d8(param_1 + 0x20,0);
  }
  else {
    FUN_06c57bdc();
  }
  in_stack_00000078 = *puVar11;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  thunk_FUN_049ee3d8(&stack0x00000078);
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,1);
  lVar8 = *(long *)(unaff_x24 + 0x10);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  puVar3 = PTR_DAT_0ac0e900;
  if (lVar8 != 0) {
    uVar2 = *(uint *)(unaff_x24 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar2 * 0x18;
      *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000088;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000080;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000078;
      thunk_FUN_049ee3d8(lVar8 + 0x20,0);
    }
    else {
      FUN_06c57bdc();
    }
    *(long *)(unaff_x23 + 0x30) = unaff_x24;
    thunk_FUN_049ee3d8();
    in_stack_000000c0 = FUN_09d2cb18();
    thunk_FUN_049ee3d8(&stack0x000000c0,in_stack_000000c0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    plVar5 = (long *)FUN_09cb0e64();
    puVar3 = PTR_DAT_0acd65c0;
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0acd6518 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      return (long *)0x0;
    }
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0acd6518) {
      return (long *)0x0;
    }
    if (unaff_x21 == 0) goto LAB_09fce7ec;
    plVar9 = (long *)(unaff_x21 + 200);
    lVar8 = *plVar9;
    uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acd65c0);
    System_Collections_Generic_EqualityComparer<ParameterRef>__System_Collections_IEqualityComparer_Equals
              (uVar6,plVar5,*(undefined8 *)PTR_DAT_0acd65d0,0);
    lVar8 = FUN_08dc2b6c(lVar8,uVar6,0);
    if (lVar8 == 0) {
      lVar7 = 0;
      *plVar9 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar3;
      lVar7 = thunk_FUN_04983e64(lVar8,uVar6);
      if (lVar7 == 0) goto LAB_09fce764;
      uVar6 = *(undefined8 *)puVar3;
      *plVar9 = lVar7;
      lVar7 = thunk_FUN_04983e64(lVar8,uVar6);
      if (lVar7 == 0) goto LAB_09fce764;
    }
    thunk_FUN_049ee3d8(plVar9,lVar7);
    puVar4 = PTR_DAT_0acd65b8;
    uVar10 = *(undefined8 *)(unaff_x21 + 0xa0);
    uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acd65b8);
    FUN_060567ac(uVar6,plVar5,*(undefined8 *)PTR_DAT_0acd65d8,0);
    lVar8 = FUN_08dc2b6c(uVar10,uVar6,0);
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar4;
      lVar7 = thunk_FUN_04983e64(lVar8,uVar6);
      if (lVar7 == 0) {
LAB_09fce764:
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar8,uVar6);
      }
    }
    *(long *)(unaff_x21 + 0xa0) = lVar7;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0xa0));
    uVar6 = *(undefined8 *)puVar3;
    *(undefined4 *)((long)plVar5 + 0x2f4) = unaff_w22;
    lVar8 = thunk_FUN_04983f60(uVar6);
    System_Collections_Generic_EqualityComparer<ParameterRef>__System_Collections_IEqualityComparer_Equals
              (lVar8,plVar5,*(undefined8 *)PTR_DAT_0acd65c8,0);
    plVar5[0x47] = lVar8;
    thunk_FUN_049ee3d8(plVar5 + 0x47,lVar8);
    FUN_09fce7f0(plVar5,*(undefined4 *)(unaff_x21 + 0xa8));
    lVar8 = plVar5[0x47];
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
      return plVar5;
    }
  }
LAB_09fce7ec:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


