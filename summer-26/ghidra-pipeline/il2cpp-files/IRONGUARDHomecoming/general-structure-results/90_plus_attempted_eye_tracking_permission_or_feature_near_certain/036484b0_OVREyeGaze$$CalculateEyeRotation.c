/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 036484b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  long unaff_x19;
  float *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  int iVar7;
  long unaff_x23;
  int unaff_w24;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 in_stack_00000018;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x9b8));
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_28__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_30__);
  *(undefined1 *)(unaff_x23 + 0xbc3) = 1;
  puVar3 = Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_30__;
  puVar2 = Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_28__;
  lVar6 = *(long *)(unaff_x22 + 0x28);
  if (lVar6 != 0) {
    iVar7 = 0;
    fVar14 = -1.0;
    if (unaff_w24 != 0) {
      fVar14 = 1.0;
    }
    while (lVar6 = FUN_030f28e4(lVar6,unaff_w21,*(undefined8 *)puVar2), lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        return;
      }
      if ((*(long *)(unaff_x22 + 0x28) == 0) ||
         (lVar6 = FUN_030f28e4(*(long *)(unaff_x22 + 0x28),unaff_w21,*(undefined8 *)puVar2),
         lVar6 == 0)) break;
      FUN_030aca58(&stack0x00000008,lVar6,iVar7,*(undefined8 *)puVar3);
      uVar5 = in_stack_00000018;
      fVar4 = fStack0000000000000014;
      fVar9 = unaff_x20[4];
      fVar10 = unaff_x20[5];
      fVar8 = (float)FUN_040677e4(unaff_x20[3],fVar9,fVar10,unaff_x20[6],
                                  fVar14 * fStack0000000000000008,fVar14 * fStack000000000000000c,
                                  fVar14 * fStack0000000000000010,0);
      if (unaff_x19 == 0) break;
      fVar11 = *unaff_x20;
      fVar12 = unaff_x20[1];
      fVar13 = unaff_x20[2];
      lVar6 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar6 == 0) break;
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      fVar11 = fVar11 + fVar8 * unaff_s8;
      fVar12 = fVar9 * unaff_s8 + fVar12;
      fVar13 = fVar10 * unaff_s8 + fVar13;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x14;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(float *)(lVar6 + 0x20) = fVar11;
        *(float *)(lVar6 + 0x24) = fVar12;
        *(float *)(lVar6 + 0x28) = fVar13;
        *(float *)(lVar6 + 0x2c) = fVar4 * unaff_s8;
        *(undefined4 *)(lVar6 + 0x30) = uVar5;
      }
      else {
        fStack0000000000000008 = fVar11;
        fStack000000000000000c = fVar12;
        fStack0000000000000010 = fVar13;
        fStack0000000000000014 = fVar4 * unaff_s8;
        in_stack_00000018 = uVar5;
        FUN_030acdf4();
      }
      lVar6 = *(long *)(unaff_x22 + 0x28);
      iVar7 = iVar7 + 1;
      if (lVar6 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


