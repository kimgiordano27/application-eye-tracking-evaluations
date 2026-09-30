/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 05cef5e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(ulong param_1,long param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *unaff_x22;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  int iVar14;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0728bf58);
    thunk_FUN_032e1da0(PTR_DAT_0727aa88);
    thunk_FUN_032e1da0(PTR_DAT_0727c600);
    thunk_FUN_032e1da0(PTR_DAT_0727acd0);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_0728dcf0);
    thunk_FUN_032e1da0(PTR_DAT_0728dcf8);
    thunk_FUN_032e1da0(PTR_DAT_0728dcd0);
    thunk_FUN_032e1da0(PTR_DAT_0728dd00);
    thunk_FUN_032e1da0(PTR_DAT_0728dcd8);
    thunk_FUN_032e1da0(PTR_DAT_0728dce8);
    thunk_FUN_032e1da0(PTR_DAT_0728dce0);
    *(undefined1 *)(unaff_x26 + 0x19a) = 1;
  }
  puVar1 = PTR_DAT_072794f0;
  uVar5 = FUN_06bc0fd0(*unaff_x22,0);
  *(undefined4 *)(param_2 + 0x80) = uVar5;
  uVar5 = FUN_06bc0fd0(*unaff_x25,0);
  *(undefined4 *)(param_2 + 0x84) = uVar5;
  uVar5 = FUN_06bc0fd0(*unaff_x24,0);
  *(undefined4 *)(param_2 + 0x88) = uVar5;
  uVar5 = FUN_06bc0fd0(*unaff_x23,0);
  *(undefined4 *)(param_2 + 0x8c) = uVar5;
  *(undefined4 *)(param_2 + 0x90) = 1;
  if (DAT_076d0c67 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_0727a4a0);
    DAT_076d0c67 = '\x01';
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_0727a4a0 + 0xb8);
  uVar15 = *(undefined8 *)(lVar9 + 0x68);
  uVar7 = *(undefined8 *)(lVar9 + 0x60);
  uVar17 = *(undefined8 *)(lVar9 + 0x78);
  uVar16 = *(undefined8 *)(lVar9 + 0x70);
  uVar19 = *(undefined8 *)(lVar9 + 0x48);
  uVar18 = *(undefined8 *)(lVar9 + 0x40);
  uVar21 = *(undefined8 *)(lVar9 + 0x58);
  uVar20 = *(undefined8 *)(lVar9 + 0x50);
  *(undefined4 *)(param_2 + 0xd4) = 0x3f800000;
  *(undefined8 *)(param_2 + 0xcc) = uVar17;
  *(undefined8 *)(param_2 + 0xc4) = uVar16;
  *(undefined8 *)(param_2 + 0xbc) = uVar15;
  *(undefined8 *)(param_2 + 0xb4) = uVar7;
  *(undefined8 *)(param_2 + 0xac) = uVar21;
  *(undefined8 *)(param_2 + 0xa4) = uVar20;
  *(undefined8 *)(param_2 + 0x9c) = uVar19;
  *(undefined8 *)(param_2 + 0x94) = uVar18;
  FUN_059660a0(param_2,0);
  *(byte *)(param_2 + 0x58) = param_4 & 1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar2 = PTR_DAT_0727acd0;
  uVar6 = FUN_06bece64(param_3,0,0);
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_06bc2b94(*(undefined8 *)PTR_DAT_0728dd00,0);
    param_3 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_06bc3454(param_3,uVar7,0);
  }
  lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_06bc34e4(lVar9,param_3,0);
  plVar10 = (long *)(param_2 + 0x50);
  *plVar10 = lVar9;
  thunk_FUN_0333a630(plVar10,lVar9);
  lVar9 = FUN_06be9698(3,0);
  if ((lVar9 != 0) &&
     (lVar8 = FUN_039efd20(lVar9,*(undefined8 *)PTR_DAT_0727c600), puVar4 = PTR_DAT_0728dcf8,
     puVar3 = PTR_DAT_0728bf58, puVar2 = PTR_DAT_0727aa88, lVar8 != 0)) {
    uVar7 = FUN_06bc697c(lVar8,0);
    *(undefined8 *)(param_2 + 0x48) = uVar7;
    thunk_FUN_0333a630();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06beda8c(lVar9,0);
    iVar12 = 1;
    if (*(char *)(param_2 + 0x58) != '\0') {
      iVar12 = 2;
    }
    uVar7 = FUN_032d5d3c(*(undefined8 *)puVar4,*(int *)(param_2 + 0x90) * iVar12 * 2);
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    thunk_FUN_0333a630();
    iVar14 = 1;
    iVar12 = iVar14;
    if (*(char *)(param_2 + 0x58) != '\0') {
      iVar12 = 2;
    }
    uVar7 = FUN_032d5d3c(*(undefined8 *)puVar3,*(int *)(param_2 + 0x90) * iVar12 * 2);
    puVar11 = (undefined8 *)(param_2 + 0x20);
    *puVar11 = uVar7;
    thunk_FUN_0333a630(puVar11,uVar7);
    iVar12 = *(int *)(param_2 + 0x90);
    if (*(char *)(param_2 + 0x58) != '\0') {
      iVar14 = 2;
    }
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_06bef234(lVar9,iVar12 * iVar14 * 2,0x10,0);
    plVar13 = (long *)(param_2 + 0x60);
    *plVar13 = lVar9;
    thunk_FUN_0333a630(plVar13,lVar9);
    if (*plVar13 != 0) {
      FUN_06bef5a8(*plVar13,*(undefined8 *)(param_2 + 0x10),0);
      iVar14 = *(int *)(param_2 + 0x90);
      iVar12 = 1;
      if (*(char *)(param_2 + 0x58) != '\0') {
        iVar12 = 2;
      }
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_06bef234(lVar9,iVar14 * iVar12 * 2,0x10,0);
      plVar13 = (long *)(param_2 + 0x68);
      *plVar13 = lVar9;
      thunk_FUN_0333a630(plVar13,lVar9);
      if (*plVar13 != 0) {
        FUN_06bef5a8(*plVar13,*puVar11,0);
        if (*plVar10 != 0) {
          FUN_06bc57b4(*plVar10,*(undefined4 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x60),0);
          puVar1 = PTR_DAT_0728dcf0;
          if (*(long *)(param_2 + 0x50) != 0) {
            FUN_06bc57b4(*(long *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x84),
                         *(undefined8 *)(param_2 + 0x68),0);
            lVar9 = FUN_032d5d3c(*(undefined8 *)puVar1,5);
            plVar10 = (long *)(param_2 + 0x78);
            *plVar10 = lVar9;
            thunk_FUN_0333a630(plVar10,lVar9);
            if (*(long *)(param_2 + 0x48) != 0) {
              lVar9 = *plVar10;
              uVar5 = FUN_06bca4a0(*(long *)(param_2 + 0x48),0,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) == 0) {
LAB_05cefa78:
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                *(undefined4 *)(lVar9 + 0x20) = uVar5;
                lVar9 = *plVar10;
                if (lVar9 != 0) {
                  if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_05cefa78;
                  iVar12 = 1;
                  if (*(char *)(param_2 + 0x58) != '\0') {
                    iVar12 = 2;
                  }
                  *(int *)(lVar9 + 0x24) = iVar12 * *(int *)(param_2 + 0x90);
                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                  FUN_06bef420(lVar8,1,*(int *)(lVar9 + 0x18) << 2,0x100,0);
                  plVar10 = (long *)(param_2 + 0x70);
                  *plVar10 = lVar8;
                  thunk_FUN_0333a630(plVar10,lVar8);
                  if (*plVar10 != 0) {
                    FUN_06bef5a8(*plVar10,*(undefined8 *)(param_2 + 0x78),0);
                    *(undefined1 *)(param_2 + 0x18) = 1;
                    *(undefined1 *)(param_2 + 0x28) = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


