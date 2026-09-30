/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation
ENTRY_POINT: 025ebb70
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined4 Unity_XR_Oculus_Input_OculusHMD__set_rightEyeRotation(void)

{
  int iVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *__src;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  int iVar10;
  uint uVar11;
  ulong unaff_x20;
  long *unaff_x21;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x24;
  ulong uVar14;
  long lVar15;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  
  iVar10 = (int)unaff_x20;
  if (!in_ZR && in_NG == in_OV) {
    FUN_02753edc(iVar10 + 1,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_011ea084(*unaff_x24);
    }
    FUN_017dbcc4();
  }
  if (*(char *)(unaff_x19 + 0x321) != '\0') {
    if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_025ec22c;
    plVar12 = (long *)(*(long *)(unaff_x19 + 0x368) + 0x38);
    lVar7 = *plVar12;
    if (lVar7 == 0) goto LAB_025ec22c;
    iVar2 = *(int *)(unaff_x19 + 0x490);
    if (0x100 < *(int *)(lVar7 + 0x18) - iVar2) {
      iVar3 = 0x100;
      if (0x100 < iVar2 + 1) {
        iVar3 = iVar2 + 1;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      FUN_017dbed8(plVar12,iVar3,1,*(undefined8 *)PTR_DAT_02ae46e0);
    }
  }
  if (0 < iVar10) {
    lVar7 = 0;
    uVar14 = 0;
    lVar15 = 0x54;
    do {
      if (uVar14 == 0) {
        lVar6 = *unaff_x29;
      }
      else {
        lVar6 = *unaff_x21;
        if (lVar6 == 0) goto LAB_025ec22c;
        if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
        uVar13 = *(undefined8 *)(lVar6 + uVar14 * 8 + 0x20);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        uVar4 = FUN_027604e8(uVar13,0,0);
        if ((uVar4 & 1) != 0) {
          lVar6 = *unaff_x29;
          plVar12 = (long *)*unaff_x21;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_011ea084();
            lVar6 = *unaff_x29;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar6 = lVar6 + lVar15;
          in_stack_00000150 = *(undefined8 *)(lVar6 + -4);
          in_stack_00000148 = *(undefined8 *)(lVar6 + -0xc);
          in_stack_00000140 = *(undefined8 *)(lVar6 + -0x14);
          in_stack_00000138 = *(undefined8 *)(lVar6 + -0x1c);
          in_stack_00000130 = *(undefined8 *)(lVar6 + -0x24);
          in_stack_00000128 = *(undefined8 *)(lVar6 + -0x2c);
          in_stack_00000120 = *(undefined8 *)(lVar6 + -0x34);
          lVar6 = FUN_02633eb8();
          if (plVar12 == (long *)0x0) goto LAB_025ec22c;
          if ((lVar6 != 0) &&
             (lVar5 = thunk_FUN_01268d44(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0)) {
            uVar13 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
            FUN_012195a4(uVar13,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar14) goto LAB_025ec230;
          plVar12[uVar14 + 4] = lVar6;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0))
          goto LAB_025ec22c;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
          *(undefined8 *)(lVar6 + lVar7 + 0x30) = 0;
        }
        lVar6 = *unaff_x21;
        if (lVar6 == 0) goto LAB_025ec22c;
        if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
        lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_025ec22c;
        uVar13 = *(undefined8 *)(lVar6 + 0x38);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        uVar4 = FUN_027604e8(uVar13,0,0);
        if ((uVar4 & 1) == 0) {
          lVar6 = *unaff_x21;
          if (lVar6 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x38), lVar6 == 0)) goto LAB_025ec22c;
          iVar2 = FUN_027602a4(lVar6,0);
          lVar6 = *unaff_x29;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_011ea084(lVar6);
            lVar6 = *unaff_x29;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar6 = *(long *)(lVar6 + lVar15 + -0x1c);
          if (lVar6 == 0) goto LAB_025ec22c;
          iVar3 = FUN_027602a4(lVar6,0);
          if (iVar2 != iVar3) goto LAB_025ebdfc;
          lVar6 = *unaff_x29;
        }
        else {
LAB_025ebdfc:
          lVar6 = *unaff_x21;
          if (lVar6 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar5 = *unaff_x29;
          lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_011ea084();
            lVar5 = *unaff_x29;
          }
          lVar5 = **(long **)(lVar5 + 0xb8);
          if (lVar5 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_025ec230;
          if (lVar6 == 0) goto LAB_025ec22c;
          FUN_02633a28(lVar6,*(undefined8 *)(lVar5 + lVar15 + -0x1c),0);
          lVar5 = *unaff_x21;
          if (lVar5 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar6 = *unaff_x29;
          lVar8 = **(long **)(lVar6 + 0xb8);
          if (lVar8 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar5 = lVar5 + uVar14 * 8;
          lVar9 = *(long *)(lVar5 + 0x20);
          if (lVar9 == 0) goto LAB_025ec22c;
          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + lVar15 + -0x2c);
          lVar5 = *(long *)(lVar5 + 0x20);
          if (lVar5 == 0) goto LAB_025ec22c;
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar8 + lVar15 + -0x24);
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_011ea084();
          lVar6 = *unaff_x29;
        }
        lVar5 = **(long **)(lVar6 + 0xb8);
        if (lVar5 == 0) goto LAB_025ec22c;
        if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_025ec230;
        if (*(char *)(lVar5 + lVar15 + -0x13) != '\0') {
          lVar8 = *unaff_x21;
          if (lVar8 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_011ea084();
            lVar5 = **(long **)(*unaff_x29 + 0xb8);
            if (lVar5 == 0) goto LAB_025ec22c;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_025ec230;
          if (lVar8 == 0) goto LAB_025ec22c;
          FUN_02633a70(lVar8,*(undefined8 *)(lVar5 + lVar15 + -0x1c),0);
          lVar5 = *unaff_x21;
          if (lVar5 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar6 = *unaff_x29;
          lVar8 = **(long **)(lVar6 + 0xb8);
          if (lVar8 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar5 = *(long *)(lVar5 + uVar14 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_025ec22c;
          *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(lVar8 + lVar15 + -0xc);
        }
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_011ea084();
        lVar6 = *unaff_x29;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto LAB_025ec22c;
      if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar5 == 0)) goto LAB_025ec22c;
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_025ec230;
      lVar8 = *(long *)(lVar5 + lVar7 + 0x30);
      iVar2 = *(int *)(lVar6 + lVar15);
      if (lVar8 == 0) {
        if (uVar14 == 0) {
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          in_stack_000000e8 = 0;
          in_stack_000000e0 = 0;
          in_stack_000000f8 = 0;
          in_stack_000000f0 = 0;
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          FUN_0262b2b8(&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar2 + 1,0);
          memcpy(&stack0x00000080,&stack0x000000d0,0x50);
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_025ec230;
          __src = &stack0x00000080;
        }
        else {
          lVar6 = *unaff_x21;
          if (lVar6 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_025ec230;
          lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_025ec22c;
          uVar13 = FUN_02633d6c(lVar6,0);
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          in_stack_000000e8 = 0;
          in_stack_000000e0 = 0;
          in_stack_000000f8 = 0;
          in_stack_000000f0 = 0;
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          FUN_0262b2b8(&stack0x000000d0,uVar13,iVar2 + 1,0);
          memcpy(&stack0x00000030,&stack0x000000d0,0x50);
          if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_025ec230;
          __src = &stack0x00000030;
        }
        memcpy((void *)(lVar5 + lVar7 + 0x20),__src,0x50);
      }
      else {
        iVar3 = *(int *)(lVar8 + 0x18);
        if (iVar3 < iVar2 * 4) {
LAB_025ebff8:
          if (iVar2 < 0x401) {
            iVar2 = FUN_02753edc(iVar2 + 1,0);
          }
          else {
            iVar2 = iVar2 + 0x100;
          }
          FUN_0262bf30(lVar5 + lVar7 + 0x20,iVar2,0);
        }
        else if ((0 < iVar2) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
          iVar1 = iVar3 + 3;
          if (-1 < iVar3) {
            iVar1 = iVar3;
          }
          if (0x100 < (iVar1 >> 2) - iVar2) goto LAB_025ebff8;
        }
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0)) goto LAB_025ec22c;
      lVar5 = *unaff_x29;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_011ea084();
        lVar5 = *unaff_x29;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 == 0) goto LAB_025ec22c;
      if ((*(uint *)(lVar5 + 0x18) <= uVar14) || (*(uint *)(lVar6 + 0x18) <= uVar14))
      goto LAB_025ec230;
      lVar5 = lVar5 + lVar15;
      uVar14 = uVar14 + 1;
      lVar6 = lVar6 + lVar7;
      lVar7 = lVar7 + 0x50;
      lVar15 = lVar15 + 0x38;
      *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(lVar5 + -0x1c);
    } while ((unaff_x20 & 0xffffffff) != uVar14);
  }
  lVar7 = *unaff_x21;
  if (lVar7 != 0) {
    lVar15 = (long)iVar10 * 0x50 + 0x20;
    lVar6 = (-(unaff_x20 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x20 & 0xffffffff) << 3) + 0x20;
    do {
      uVar11 = (uint)unaff_x20;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar11) {
Unity_XR_Oculus_Input_OculusHMD__set_trackingState:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_025ec230:
                    /* WARNING: Subroutine does not return */
        FUN_012196e0();
      }
      uVar13 = *(undefined8 *)(lVar7 + lVar6);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      uVar14 = FUN_0275d0a4(uVar13,0,0);
      if ((uVar14 & 1) == 0) goto Unity_XR_Oculus_Input_OculusHMD__set_trackingState;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar7 == 0)) break;
      if ((int)uVar11 < (int)*(uint *)(lVar7 + 0x18)) {
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_025ec230;
        FUN_0262cec8(lVar7 + lVar15,0,1,0);
      }
      lVar7 = *unaff_x21;
      unaff_x20 = (ulong)(uVar11 + 1);
      lVar15 = lVar15 + 0x50;
      lVar6 = lVar6 + 8;
    } while (lVar7 != 0);
  }
LAB_025ec22c:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


