/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03f151d8
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 137
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar14;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined1 auVar15 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    if ((param_1 & 1) != 0) {
      if (*(int *)(*(long *)StringLiteral_10300 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar8 = FUN_0252eed4(&stack0x00000020,*(undefined8 *)PTR_DAT_046bef38);
      if ((uVar8 & 1) != 0) {
        auVar15 = FUN_0407af90(in_stack_00000020,in_stack_00000028,0);
        _in_stack_00000010 = auVar15;
        auVar15 = FUN_0407af54(&stack0x00000010,0);
        _in_stack_00000030 = auVar15;
        if (*(int *)(*(long *)StringLiteral_10723 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        lVar9 = FUN_02532ba0(&stack0x00000030,*(undefined8 *)PTR_DAT_046bef30);
        if ((*(long *)(in_stack_00000008 + 0xa0) == 0) || (lVar9 == 0)) {
LAB_03f15478:
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        fVar14 = *(float *)(*(long *)(in_stack_00000008 + 0xa0) + 0x10) * *(float *)(lVar9 + 0x10);
        fVar2 = unaff_s12;
        if (fVar14 <= unaff_s12) {
          fVar2 = fVar14;
        }
        fVar3 = unaff_s11;
        if (0.0 <= fVar14) {
          fVar3 = fVar2;
        }
        FUN_0407b08c(fVar3,&stack0x00000010,0);
        if (*(long *)(in_stack_00000008 + 0xa0) == 0) goto LAB_03f15478;
        fVar14 = *(float *)(*(long *)(in_stack_00000008 + 0xa0) + 0x14);
        fVar2 = unaff_s12;
        if (fVar14 <= unaff_s12) {
          fVar2 = fVar14;
        }
        fVar3 = unaff_s13;
        if (unaff_s13 <= fVar14) {
          fVar3 = fVar2;
        }
        FUN_0407b1a8(fVar3,&stack0x00000010,0);
        if (*(long *)(in_stack_00000008 + 0xa0) == 0) goto LAB_03f15478;
        fVar14 = *(float *)(*(long *)(in_stack_00000008 + 0xa0) + 0x18);
        fVar2 = unaff_s12;
        if (fVar14 <= unaff_s12) {
          fVar2 = fVar14;
        }
        fVar3 = unaff_s11;
        if (0.0 <= fVar14) {
          fVar3 = fVar2;
        }
        FUN_0407b2c4(fVar3,&stack0x00000010,0);
      }
      uVar5 = in_stack_00000028;
      uVar4 = in_stack_00000020;
      auVar15 = FUN_0407b8f0(in_stack_00000040,in_stack_00000048,0);
      uVar10 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046bef78);
      FUN_0386ec04(uVar10,0);
      Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22__System_Collections_IEnumerator_Reset
                ((double)unaff_s9,uVar10,unaff_x24,uVar4,uVar5,auVar15._0_8_,auVar15._8_8_);
      if (unaff_x27 == 0) goto LAB_03f15478;
      FUN_03355124(unaff_x27,uVar10,*(undefined8 *)PTR_DAT_046be9a8);
      FUN_02532888(&stack0x00000050,in_stack_00000020,in_stack_00000028,0,in_stack_00000040,
                   in_stack_00000048,unaff_w23,*(undefined8 *)PTR_DAT_046bef70);
      uVar5 = in_stack_00000028;
      uVar4 = in_stack_00000020;
      FUN_03f07fb0(unaff_x24);
      FUN_02531b00(uVar4,uVar5,*(undefined8 *)PTR_DAT_046beea0);
      uVar5 = in_stack_00000028;
      uVar4 = in_stack_00000020;
      FUN_03f097f8(unaff_x24);
      FUN_02530a2c(uVar4,uVar5,*(undefined8 *)PTR_DAT_046bee20);
      FUN_02531530(0x3f800000,in_stack_00000040,in_stack_00000048,in_stack_00000020,
                   in_stack_00000028,*(undefined8 *)PTR_DAT_046bef68);
      unaff_x20 = (long *)PTR_DAT_046bee18;
      unaff_x28 = (long *)PTR_DAT_046be9b0;
      unaff_x29 = (long *)StringLiteral_8731;
    }
    do {
      unaff_w23 = unaff_w23 + 1;
      lVar9 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x19) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03f1505c;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02091668();
LAB_03f1505c:
      iVar6 = (*(code *)*puVar7)();
      if (iVar6 <= unaff_w23) {
        auVar15 = FUN_0407b8f0(in_stack_00000040,in_stack_00000048,0);
        FUN_03f11f00(in_stack_00000008,unaff_x27,unaff_x21,auVar15._0_8_,auVar15._8_8_);
        FUN_0407b8f0(in_stack_00000040,in_stack_00000048,0);
        return;
      }
      lVar9 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x20) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03f150bc;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02091668();
LAB_03f150bc:
      unaff_x24 = (*(code *)*puVar7)();
      if (unaff_x24 == 0) goto LAB_03f15478;
      plVar11 = *(long **)(unaff_x24 + 0x28);
      if (plVar11 == (long *)0x0) {
LAB_03f150f4:
        plVar11 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*unaff_x28 + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_03f150f4;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
          plVar11 = (long *)0x0;
        }
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar8 = FUN_040cbf6c(plVar11,0,0);
    } while ((uVar8 & 1) != 0);
    plVar12 = *(long **)(unaff_x24 + 0x28);
    if (plVar12 == (long *)0x0) {
LAB_03f1515c:
      plVar12 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_046bef60 + 0x130);
      if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_03f1515c;
      if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_046bef60)
      {
        plVar12 = (long *)0x0;
      }
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar8 = FUN_040ca3b8(plVar12,0,0);
    unaff_s9 = unaff_s10;
    if ((uVar8 & 1) != 0) {
      if (plVar12 == (long *)0x0) goto LAB_03f15478;
      unaff_s9 = *(float *)((long)plVar12 + 0x24);
    }
    if (plVar11 == (long *)0x0) goto LAB_03f15478;
    auVar15 = (**(code **)(*plVar11 + 0x198))
                        (plVar11,in_stack_00000050,in_stack_00000058,unaff_x21,
                         *(undefined8 *)(*plVar11 + 0x1a0));
    _in_stack_00000020 = auVar15;
    param_1 = FUN_025303dc(auVar15._0_8_,auVar15._8_8_,*(undefined8 *)PTR_DAT_046be888);
  } while( true );
}


