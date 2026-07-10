/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<XmlTextWriter.Namespace>
ENTRY_POINT: 03a8dfbc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<XmlTextWriter_Namespace>
               (undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],float param_4,
               float param_5)

{
  int in_w8;
  int iVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  double dVar5;
  float unaff_s10;
  float fVar6;
  double dVar7;
  float unaff_s11;
  float fVar8;
  double dVar9;
  float unaff_s12;
  double dVar10;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  double in_stack_00000058;
  
  param_4 = unaff_s9 + param_4;
  param_5 = unaff_s8 + param_5;
  if (*(char *)(unaff_x21 + 0xe9) != '\0') {
    lVar2 = *(long *)(unaff_x21 + 0xf0);
    if (lVar2 == 0) goto LAB_03a8e280;
    if (*(int *)(lVar2 + 0xa8) == 2) {
      if (in_w8 == 2) {
        iVar1 = *(int *)(unaff_x21 + 0xa4);
      }
      else {
        iVar1 = 1;
      }
      fVar4 = (float)(int)((*(int *)(lVar2 + 0x10c) - (*(byte *)(lVar2 + 0x111) & 1)) * iVar1);
      unaff_s11 = unaff_s11 + unaff_s15 * fVar4;
      unaff_s10 = unaff_s10 + unaff_s14 * fVar4;
      param_4 = param_4 + unaff_s13 * fVar4;
      param_5 = param_5 + unaff_s12 * fVar4;
    }
  }
  fVar4 = (float)FUN_03a9db7c(param_1,param_2,*(undefined4 *)(unaff_x21 + 0xc0),
                              *(undefined4 *)(unaff_x21 + 0xc4),*(undefined4 *)(unaff_x21 + 0xb4),
                              *(undefined8 *)(unaff_x21 + 0xb8),0);
  fVar8 = unaff_s11 + unaff_s15 * fVar4;
  fVar6 = unaff_s10 + unaff_s14 * fVar4;
  param_4 = param_4 + unaff_s13 * fVar4;
  param_5 = param_5 + unaff_s12 * fVar4;
  if ((unaff_x20 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    dVar10 = (double)fVar8;
    dVar3 = modf(dVar10,&stack0x00000058);
    if (0.0 <= fVar8) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_03a8e0c0;
      }
      dVar10 = (double)(long)(dVar10 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_03a8e0c0:
      dVar10 = in_stack_00000058;
      if (((long)in_stack_00000058 & 1U) != 0) {
        dVar10 = in_stack_00000058 + dVar3;
      }
    }
    else {
      dVar10 = (double)(long)(dVar10 + -0.5);
    }
    dVar9 = (double)fVar6;
    dVar3 = modf(dVar9,&stack0x00000058);
    if (0.0 <= fVar6) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_03a8e12c;
      }
      dVar9 = (double)(long)(dVar9 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_03a8e12c:
      dVar9 = in_stack_00000058;
      if (((long)in_stack_00000058 & 1U) != 0) {
        dVar9 = in_stack_00000058 + dVar3;
      }
    }
    else {
      dVar9 = (double)(long)(dVar9 + -0.5);
    }
    dVar7 = (double)param_4;
    dVar3 = modf(dVar7,&stack0x00000058);
    if (0.0 <= param_4) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_03a8e198;
      }
      dVar7 = (double)(long)(dVar7 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_03a8e198:
      dVar7 = in_stack_00000058;
      if (((long)in_stack_00000058 & 1U) != 0) {
        dVar7 = in_stack_00000058 + dVar3;
      }
    }
    else {
      dVar7 = (double)(long)(dVar7 + -0.5);
    }
    dVar5 = (double)param_5;
    dVar3 = modf(dVar5,&stack0x00000058);
    if (0.0 <= param_5) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_03a8e204;
      }
      dVar5 = (double)(long)(dVar5 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_03a8e204:
      dVar5 = in_stack_00000058;
      if (((long)in_stack_00000058 & 1U) != 0) {
        dVar5 = in_stack_00000058 + dVar3;
      }
    }
    else {
      dVar5 = (double)(long)(dVar5 + -0.5);
    }
    fVar8 = (float)dVar10;
    fVar6 = (float)dVar9;
    param_4 = (float)dVar7;
    param_5 = (float)dVar5;
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03a8e27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x19 + 0x18))
              (fVar8,fVar6,param_4,param_5,*(undefined8 *)(unaff_x19 + 0x40),
               *(undefined8 *)(unaff_x19 + 0x28));
    return;
  }
LAB_03a8e280:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


