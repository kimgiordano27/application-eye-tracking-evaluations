/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 05c94eb0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05c95244) */

void OVREyeGaze__CalculateEyeRotation(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x21;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000028 = param_1[1];
  uStack0000000000000020 = *param_1;
  uStack0000000000000038 = param_1[3];
  uStack0000000000000030 = param_1[2];
  puVar8 = *(undefined8 **)(unaff_x21 + 2000);
  FUN_04823e7c(&stack0x00000020,*puVar8);
  lVar1 = FUN_068f5d7c();
  lVar4 = *(long *)(unaff_x19 + 0x30);
  if ((lVar4 != 0) && (lVar1 != 0)) {
    fVar9 = *(float *)(unaff_x19 + 0x58);
    fVar11 = fStack0000000000000010 * fVar9 + (float)((ulong)*(undefined8 *)(lVar4 + 0x1a0) >> 0x20)
    ;
    FUN_06904354(CONCAT44(fVar11,in_stack_00000008._4_4_ * fVar9 +
                                 (float)*(undefined8 *)(lVar4 + 0x1a0)),fVar11,
                 fStack0000000000000014 * fVar9 + *(float *)(lVar4 + 0x1a8),lVar1,0);
    lVar1 = FUN_068f5d7c();
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if (lVar4 != 0) {
      uStack0000000000000028 = *(undefined8 *)(lVar4 + 0x1b4);
      uStack0000000000000020 = *(undefined8 *)(lVar4 + 0x1ac);
      uStack0000000000000038 = *(undefined8 *)(lVar4 + 0x1c4);
      uStack0000000000000030 = *(undefined8 *)(lVar4 + 0x1bc);
      FUN_04823e7c(&stack0x00000020,*puVar8);
      if (DAT_0738e662 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e662 = '\x01';
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      UnityEngine_UIElements_BackgroundRepeat__GetHashCode
                (in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                 *(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                 *(undefined4 *)(lVar4 + 0x20),0);
      if (lVar1 != 0) {
        FUN_06904520(lVar1,0);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar2 = FUN_068f8810(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          lVar1 = FUN_068f5d7c();
          if (lVar1 == 0) goto LAB_05c952a4;
          fVar9 = (float)FUN_069042b4(lVar1,0);
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05c952a4;
          fVar11 = fStack0000000000000010;
          fVar12 = fStack0000000000000014;
          fVar10 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x60),0);
          if (DAT_0738e72b == '\0') {
            FUN_02fe925c(PTR_DAT_06f6d508);
            DAT_0738e72b = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar1 = FUN_068f5d7c();
          if (lVar1 == 0) goto LAB_05c952a4;
          fVar9 = SQRT((fStack0000000000000014 - fVar12) * (fStack0000000000000014 - fVar12) +
                       (fVar9 - fVar10) * (fVar9 - fVar10) +
                       (fStack0000000000000010 - fVar11) * (fStack0000000000000010 - fVar11));
          FUN_06904aa4(fVar9 * *(float *)(unaff_x19 + 0x68),fVar9 * *(float *)(unaff_x19 + 0x6c),
                       fVar9 * *(float *)(unaff_x19 + 0x70),lVar1,0);
        }
        if ((*(long *)(unaff_x19 + 0x30) != 0) && (lVar1 = *(long *)(unaff_x19 + 0x88), lVar1 != 0))
        {
          if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x84) == 2) {
            FUN_068f8b44(lVar1,1,0);
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
            FUN_068d1aec(DAT_01369e30,lVar1,*(undefined4 *)(unaff_x19 + 0x74),0);
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
            FUN_068d1aec(0x3f800000,lVar1,*(undefined4 *)(unaff_x19 + 0x78),0);
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
            uVar3 = *(undefined4 *)(unaff_x19 + 0x7c);
            fVar11 = 1.0;
          }
          else {
            FUN_068f8b44(lVar1,0,0);
            plVar7 = *(long **)(unaff_x19 + 0x28);
            if (plVar7 == (long *)0x0) goto LAB_05c952a4;
            lVar1 = *plVar7;
            uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b60) {
                  puVar8 = (undefined8 *)(lVar1 + (long)(*piVar5 + 0x10) * 0x10 + 0x138);
                  goto LAB_05c951b4;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar8 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06fb4b60,0x10);
LAB_05c951b4:
            uVar6 = (*(code *)*puVar8)(plVar7,1,puVar8[1]);
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), fVar9 = DAT_01369e30,
               lVar1 == 0)) goto LAB_05c952a4;
            fVar12 = (float)uVar6;
            fVar11 = 1.0 - fVar12;
            if (1.0 - fVar12 <= DAT_01369e30) {
              fVar11 = DAT_01369e30;
            }
            FUN_068d1aec(fVar11,lVar1,*(undefined4 *)(unaff_x19 + 0x74),0);
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
            FUN_068d1aec(uVar6,lVar1,*(undefined4 *)(unaff_x19 + 0x78),0);
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
            uVar3 = *(undefined4 *)(unaff_x19 + 0x7c);
            fVar11 = fVar12 * DAT_0136a880 + fVar9;
            if (fVar12 < 0.0) {
              fVar11 = fVar9;
            }
          }
          FUN_068d1aec(fVar11,lVar1,uVar3,0);
          if ((*(long *)(unaff_x19 + 0x40) != 0) &&
             (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
            thunk_FUN_068d0fac(*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                               *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),
                               lVar1,*(undefined4 *)(unaff_x19 + 0x80),0);
            return;
          }
        }
      }
    }
  }
LAB_05c952a4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


