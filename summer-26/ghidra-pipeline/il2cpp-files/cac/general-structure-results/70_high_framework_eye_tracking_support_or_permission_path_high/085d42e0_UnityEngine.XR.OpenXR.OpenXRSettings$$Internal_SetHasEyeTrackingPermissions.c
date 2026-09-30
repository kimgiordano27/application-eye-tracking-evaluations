/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 085d42e0
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


long UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x22;
  long lVar15;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 085d42ec to 086d42f7 has its CatchHandler @ 085d4444 */
    FUN_03f13384(PTR_DAT_0914b0f0);
    FUN_03f13384(PTR_DAT_0914b100);
                    /* try { // try from 085d4304 to 086d4307 has its CatchHandler @ 085d4440 */
    FUN_03f13384(PTR_DAT_0914b0e8);
    FUN_03f13384(PTR_DAT_09198ac8);
                    /* try { // try from 085d4318 to 086d432b has its CatchHandler @ 085d4484 */
    FUN_03f13384(PTR_DAT_09198ad0);
    FUN_03f13384(PTR_DAT_09198ad8);
    FUN_03f13384(PTR_DAT_09198b98);
                    /* try { // try from 085d4338 to 086d434f has its CatchHandler @ 085d4480 */
    FUN_03f13384(PTR_DAT_09198ae0);
    FUN_03f13384(PTR_DAT_09198ba0);
    FUN_03f13384(PTR_DAT_09198ba8);
    FUN_03f13384(PTR_DAT_09198bb0);
    FUN_03f13384(PTR_DAT_09198b78);
    *(undefined1 *)(unaff_x19 + 0x1db) = 1;
  }
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000030 = 0;
  in_stack_00000028 = 0;
  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    lVar8 = FUN_085d4084();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar1 = *(undefined4 *)(lVar8 + 0x18);
    uVar9 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09198bb0);
    FUN_056b00e0(uVar9,uVar1,*(undefined8 *)PTR_DAT_09198ba0);
    puVar10 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *puVar10 = uVar9;
    thunk_FUN_03f86000(puVar10,uVar9);
    FUN_056b1374(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_09198ae0);
    puVar7 = PTR_DAT_09198b98;
    puVar6 = PTR_DAT_09198ad0;
    puVar5 = PTR_DAT_0914b100;
    puVar4 = PTR_DAT_0914b0f0;
    puVar3 = PTR_DAT_0914b0e8;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000010 = &stack0x00000030;
    in_stack_00000008 = 0;
    while (uVar11 = FUN_072070ec(&stack0x00000030,*(undefined8 *)puVar6), lVar12 = in_stack_00000040
          , lVar8 = in_stack_00000008, (uVar11 & 1) != 0) {
      lVar8 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
      FUN_06ff5d90(lVar8,*(undefined8 *)puVar4);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar2) {
        lVar15 = 0;
        do {
          if (uVar2 <= (uint)lVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
          plVar14 = *(long **)(lVar12 + 0x20 + lVar15 * 8);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          uVar9 = (**(code **)(*plVar14 + 0x318))(plVar14,*(undefined8 *)(*plVar14 + 800));
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c(uVar9,uVar9);
          }
          FUN_06ff6728(lVar8,uVar9,plVar14,*(undefined8 *)puVar5);
          uVar2 = *(uint *)(lVar12 + 0x18);
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < (int)uVar2);
      }
      lVar12 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar12 == 0) {
LAB_085d4550:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar15 = *(long *)(lVar12 + 0x10);
      lVar13 = *(long *)puVar7;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_085d4550;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        plVar14 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
        *plVar14 = lVar8;
        thunk_FUN_03f86000(plVar14,lVar8);
      }
      else {
        FUN_056b08d0(lVar12,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_072070e8(in_stack_00000010,*(undefined8 *)PTR_DAT_09198ac8);
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13624(lVar8);
    }
    lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  }
  return lVar8;
}


