/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 069498e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsValidBone(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint in_w12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long *in_stack_00000050;
  
  if (in_w12 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = in_w12 + 1;
    *(undefined4 *)(param_1 + (long)(int)in_w12 * 4 + 0x20) = 0x3f3ae148;
  }
  else {
    FUN_04e8743c(DAT_015c5970);
  }
  *(long *)(unaff_x22 + 0x88) = unaff_x23;
  thunk_FUN_03afed3c((long *)(unaff_x22 + 0x88));
  fVar3 = DAT_015c5af0;
  if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_06949fcc;
  *(float *)(*(long *)(unaff_x20 + 0xc0) + 0x34) = *(float *)(unaff_x19 + 0x1c) * DAT_015c5af0;
  lVar10 = *(long *)(unaff_x20 + 0xe8);
  if (*(int *)(unaff_x19 + 0x18) == 6) {
    if ((lVar10 == 0) || (lVar12 = *(long *)(lVar10 + 0x38), lVar12 == 0)) goto LAB_06949fcc;
    iVar1 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar1) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0)
      ;
      lVar10 = *(long *)(unaff_x20 + 0xe8);
      if (lVar10 == 0) goto LAB_06949fcc;
    }
    if (*(long *)(lVar10 + 0x58) == 0) goto LAB_06949fcc;
    lVar12 = *(long *)(lVar10 + 0x48);
    uVar6 = FUN_04de82e0(*(long *)(lVar10 + 0x58),1,*unaff_x26);
    if (lVar12 == 0) goto LAB_06949fcc;
    FUN_06941ffc(lVar12,uVar6,0);
  }
  else {
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) == 0)) goto LAB_06949fcc;
    if (*(int *)(*(long *)(lVar10 + 0x58) + 0x18) != 4) goto LAB_06949b9c;
    lVar10 = *(long *)(lVar10 + 0x38);
    if (lVar10 == 0) goto LAB_06949fcc;
    if (*(int *)(lVar10 + 0x18) != 3) goto LAB_06949b9c;
    if (*(int *)(unaff_x19 + 0x38) == 2) {
      lVar10 = FUN_04de82e0(lVar10,2,*(undefined8 *)PTR_DAT_084b6410);
      if (lVar10 == 0) goto LAB_06949fcc;
      uVar9 = 0x3f800000;
LAB_06949a7c:
      *(undefined4 *)(lVar10 + 0x70) = uVar9;
    }
    else if (*(int *)(unaff_x19 + 0x38) == 0) {
      lVar10 = FUN_04de82e0(lVar10,2,*(undefined8 *)PTR_DAT_084b6410);
      if (lVar10 == 0) goto LAB_06949fcc;
      uVar9 = 0;
      goto LAB_06949a7c;
    }
    puVar5 = PTR_DAT_084b6410;
    if (*(int *)(unaff_x19 + 0x18) - 2U < 2) {
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar10 == 0)) ||
         (lVar10 = FUN_04de82e0(lVar10,1,*(undefined8 *)PTR_DAT_084b6410), lVar10 == 0))
      goto LAB_06949fcc;
      *(undefined4 *)(lVar10 + 0x74) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar10 == 0)) ||
         (lVar10 = FUN_04de82e0(lVar10,1,*(undefined8 *)puVar5), lVar10 == 0)) goto LAB_06949fcc;
      *(undefined4 *)(lVar10 + 0x78) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar10 == 0)) ||
         (lVar10 = FUN_04de82e0(lVar10,1,*(undefined8 *)puVar5), lVar10 == 0)) goto LAB_06949fcc;
      uVar9 = 0x459c4000;
    }
    else {
      if (*(int *)(unaff_x19 + 0x18) != 1) goto LAB_06949b9c;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar10 == 0)) ||
         (lVar10 = FUN_04de82e0(lVar10,1,*(undefined8 *)PTR_DAT_084b6410), lVar10 == 0))
      goto LAB_06949fcc;
      *(undefined4 *)(lVar10 + 0x74) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar10 == 0)) ||
         (lVar10 = FUN_04de82e0(lVar10,1,*(undefined8 *)puVar5), lVar10 == 0)) goto LAB_06949fcc;
      *(undefined4 *)(lVar10 + 0x78) = 0x3f000000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar10 == 0)) ||
         (lVar10 = FUN_04de82e0(lVar10,1,*(undefined8 *)puVar5), lVar10 == 0)) goto LAB_06949fcc;
      uVar9 = 0x437a0000;
    }
    *(undefined4 *)(lVar10 + 0x7c) = uVar9;
  }
LAB_06949b9c:
  fVar17 = *(float *)(unaff_x19 + 0x40);
  fVar15 = *(float *)(unaff_x19 + 0x3c) * DAT_015c5a4c;
  fVar13 = (*(float *)(unaff_x19 + 0x1c) * 50.0) / (float)*(int *)(unaff_x21 + 0x18);
  fVar16 = 1.0;
  if (fVar15 <= 1.0) {
    fVar16 = fVar15;
  }
  fVar18 = fVar17 * SQRT(fVar13) * 25.0;
  fVar19 = DAT_015c5b5c;
  if (DAT_015c5b5c <= fVar15) {
    fVar19 = fVar16;
  }
  FUN_04de90b8(&stack0x00000008);
  puVar5 = PTR_DAT_084b66e0;
  uVar4 = DAT_015c5bbc;
  fVar16 = DAT_015c58f4;
  uVar9 = DAT_015c57e0;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000010 = &stack0x00000040;
  in_stack_00000008 = 0;
  while (uVar7 = FUN_061c1964(&stack0x00000040,*(undefined8 *)puVar5), plVar8 = in_stack_00000050,
        (uVar7 & 1) != 0) {
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    (**(code **)(*in_stack_00000050 + 0x348))
              (fVar19,in_stack_00000050,*(undefined8 *)(*in_stack_00000050 + 0x350));
    (**(code **)(*plVar8 + 0x368))(fVar13 * fVar17,plVar8,*(undefined8 *)(*plVar8 + 0x370));
    (**(code **)(*plVar8 + 0x3d8))(fVar18,plVar8,*(undefined8 *)(*plVar8 + 0x3e0));
    (**(code **)(*plVar8 + 0x3b8))(fVar18,plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
    fVar14 = *(float *)(unaff_x19 + 0x1c) / fVar16;
    fVar15 = 6.0;
    if (fVar14 <= 6.0) {
      fVar15 = fVar14;
    }
    fVar2 = 4.0;
    if (in_stack_00000000._4_4_ <= fVar14) {
      fVar2 = fVar15 * 20.0;
    }
    (**(code **)(*plVar8 + 0x218))(fVar2,plVar8,*(undefined8 *)(*plVar8 + 0x220));
    if (*(int *)(unaff_x19 + 0x18) == 6) {
      (**(code **)(*plVar8 + 600))(uVar4,plVar8,*(undefined8 *)(*plVar8 + 0x260));
      (**(code **)(*plVar8 + 0x468))(fVar3,plVar8,*(undefined8 *)(*plVar8 + 0x470));
      (**(code **)(*plVar8 + 0x428))(uVar9,plVar8,*(undefined8 *)(*plVar8 + 0x430));
    }
  }
  FUN_061c1960(&stack0x00000040,*(undefined8 *)PTR_DAT_084b66d8);
  if ((*(long *)(unaff_x20 + 0xe8) != 0) &&
     (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x50), lVar10 != 0)) {
    FUN_04de90b8(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_084b5ed0);
    puVar5 = PTR_DAT_084b5eb8;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar7 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(float *)(in_stack_00000030 + 6) == 0.0) {
        *(undefined1 *)(in_stack_00000030 + 3) = 0;
      }
      if (*(int *)(unaff_x19 + 0x18) == 6) {
        *(undefined1 *)(in_stack_00000030 + 3) = 0;
        FUN_0694d13c(0,in_stack_00000030,0);
      }
    }
    FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b5ea0);
    iVar1 = *(int *)(unaff_x19 + 0x18);
    puVar11 = (undefined8 *)PTR_DAT_084b6788;
    if (((iVar1 != 1) && (puVar11 = (undefined8 *)PTR_DAT_084b6728, iVar1 != 3)) &&
       (puVar11 = (undefined8 *)PTR_DAT_084b6780, iVar1 == 4)) {
      puVar11 = (undefined8 *)PTR_DAT_084b6790;
    }
    uVar6 = FUN_0694a22c(*puVar11);
    plVar8 = (long *)FUN_07c95014(uVar6,0);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != *(long *)PTR_DAT_084b6268) {
      plVar8 = (long *)0x0;
    }
    if ((*(long *)(unaff_x20 + 0xf0) != 0) &&
       (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xf0) + 0x30), lVar10 != 0)) {
      FUN_0693fefc(lVar10,plVar8,0);
      if (((*(long *)(unaff_x20 + 0xf0) != 0) &&
          ((*(long *)(unaff_x20 + 0xe8) != 0 &&
           (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x40), lVar10 != 0)))) &&
         (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xf0) + 0x30), lVar12 != 0)) {
        *(float *)(lVar12 + 0x3c) = *(float *)(lVar10 + 0xe8) / DAT_015c5d54;
        if (*(int *)(unaff_x19 + 0x18) == 6) {
          lVar10 = FUN_07c99058();
          if (lVar10 == 0) goto LAB_06949fcc;
          FUN_045614d0(lVar10,*(undefined8 *)PTR_DAT_084b66f0);
          if (*(int *)(unaff_x19 + 0x18) == 6) {
            lVar10 = FUN_0447aad0();
            if (lVar10 == 0) goto LAB_06949fcc;
            FUN_07d31374(0x43480000,0x43480000,0x43480000,lVar10,0);
          }
        }
        uVar6 = thunk_FUN_07ca227c();
        uVar6 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6720,uVar6,*(undefined8 *)PTR_DAT_084b6768,0
                            );
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        FUN_07c4f4f4(uVar6,0);
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6730,0);
        return;
      }
    }
  }
LAB_06949fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


