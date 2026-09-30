/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton2
ENTRY_POINT: 06949a14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSkeleton2(long param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack0000000000000000;
  float fStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long *in_stack_00000050;
  
  if (in_w9 == 4) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) goto LAB_06949fcc;
    if (*(int *)(lVar5 + 0x18) != 3) goto LAB_06949b9c;
    if (*(int *)(unaff_x19 + 0x38) == 2) {
      lVar5 = FUN_04de82e0(lVar5,2,*(undefined8 *)PTR_DAT_084b6410);
      if (lVar5 == 0) goto LAB_06949fcc;
      uVar9 = 0x3f800000;
LAB_06949a7c:
      *(undefined4 *)(lVar5 + 0x70) = uVar9;
    }
    else if (*(int *)(unaff_x19 + 0x38) == 0) {
      lVar5 = FUN_04de82e0(lVar5,2,*(undefined8 *)PTR_DAT_084b6410);
      if (lVar5 == 0) goto LAB_06949fcc;
      uVar9 = 0;
      goto LAB_06949a7c;
    }
    puVar4 = PTR_DAT_084b6410;
    if (*(int *)(unaff_x19 + 0x18) - 2U < 2) {
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar5 == 0)) ||
         (lVar5 = FUN_04de82e0(lVar5,1,*(undefined8 *)PTR_DAT_084b6410), lVar5 == 0))
      goto LAB_06949fcc;
      *(undefined4 *)(lVar5 + 0x74) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar5 == 0)) ||
         (lVar5 = FUN_04de82e0(lVar5,1,*(undefined8 *)puVar4), lVar5 == 0)) goto LAB_06949fcc;
      *(undefined4 *)(lVar5 + 0x78) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar5 == 0)) ||
         (lVar5 = FUN_04de82e0(lVar5,1,*(undefined8 *)puVar4), lVar5 == 0)) goto LAB_06949fcc;
      uVar9 = 0x459c4000;
    }
    else {
      if (*(int *)(unaff_x19 + 0x18) != 1) goto LAB_06949b9c;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar5 == 0)) ||
         (lVar5 = FUN_04de82e0(lVar5,1,*(undefined8 *)PTR_DAT_084b6410), lVar5 == 0))
      goto LAB_06949fcc;
      *(undefined4 *)(lVar5 + 0x74) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar5 == 0)) ||
         (lVar5 = FUN_04de82e0(lVar5,1,*(undefined8 *)puVar4), lVar5 == 0)) goto LAB_06949fcc;
      *(undefined4 *)(lVar5 + 0x78) = 0x3f000000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar5 == 0)) ||
         (lVar5 = FUN_04de82e0(lVar5,1,*(undefined8 *)puVar4), lVar5 == 0)) goto LAB_06949fcc;
      uVar9 = 0x437a0000;
    }
    *(undefined4 *)(lVar5 + 0x7c) = uVar9;
  }
LAB_06949b9c:
  fVar16 = *(float *)(unaff_x19 + 0x40);
  fVar14 = *(float *)(unaff_x19 + 0x3c) * DAT_015c5a4c;
  fVar12 = (*(float *)(unaff_x19 + 0x1c) * 50.0) / (float)*(int *)(unaff_x21 + 0x18);
  fVar15 = 1.0;
  if (fVar14 <= 1.0) {
    fVar15 = fVar14;
  }
  fVar17 = fVar16 * SQRT(fVar12) * 25.0;
  fVar18 = DAT_015c5b5c;
  if (DAT_015c5b5c <= fVar14) {
    fVar18 = fVar15;
  }
  FUN_04de90b8(&stack0x00000008);
  puVar4 = PTR_DAT_084b66e0;
  uVar3 = DAT_015c5bbc;
  fVar15 = DAT_015c58f4;
  uVar9 = DAT_015c57e0;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000010 = &stack0x00000040;
  in_stack_00000008 = 0;
  while (uVar6 = FUN_061c1964(&stack0x00000040,*(undefined8 *)puVar4), plVar8 = in_stack_00000050,
        (uVar6 & 1) != 0) {
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    (**(code **)(*in_stack_00000050 + 0x348))
              (fVar18,in_stack_00000050,*(undefined8 *)(*in_stack_00000050 + 0x350));
    (**(code **)(*plVar8 + 0x368))(fVar12 * fVar16,plVar8,*(undefined8 *)(*plVar8 + 0x370));
    (**(code **)(*plVar8 + 0x3d8))(fVar17,plVar8,*(undefined8 *)(*plVar8 + 0x3e0));
    (**(code **)(*plVar8 + 0x3b8))(fVar17,plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
    fVar13 = *(float *)(unaff_x19 + 0x1c) / fVar15;
    fVar14 = 6.0;
    if (fVar13 <= 6.0) {
      fVar14 = fVar13;
    }
    fVar2 = 4.0;
    if (fStack0000000000000004 <= fVar13) {
      fVar2 = fVar14 * 20.0;
    }
    (**(code **)(*plVar8 + 0x218))(fVar2,plVar8,*(undefined8 *)(*plVar8 + 0x220));
    if (*(int *)(unaff_x19 + 0x18) == 6) {
      (**(code **)(*plVar8 + 600))(uVar3,plVar8,*(undefined8 *)(*plVar8 + 0x260));
      (**(code **)(*plVar8 + 0x468))(uStack0000000000000000,plVar8,*(undefined8 *)(*plVar8 + 0x470))
      ;
      (**(code **)(*plVar8 + 0x428))(uVar9,plVar8,*(undefined8 *)(*plVar8 + 0x430));
    }
  }
  FUN_061c1960(&stack0x00000040,*(undefined8 *)PTR_DAT_084b66d8);
  if ((*(long *)(unaff_x20 + 0xe8) != 0) &&
     (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x50), lVar5 != 0)) {
    FUN_04de90b8(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_084b5ed0);
    puVar4 = PTR_DAT_084b5eb8;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar6 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
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
    puVar10 = (undefined8 *)PTR_DAT_084b6788;
    if (((iVar1 != 1) && (puVar10 = (undefined8 *)PTR_DAT_084b6728, iVar1 != 3)) &&
       (puVar10 = (undefined8 *)PTR_DAT_084b6780, iVar1 == 4)) {
      puVar10 = (undefined8 *)PTR_DAT_084b6790;
    }
    uVar7 = FUN_0694a22c(*puVar10);
    plVar8 = (long *)FUN_07c95014(uVar7,0);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != *(long *)PTR_DAT_084b6268) {
      plVar8 = (long *)0x0;
    }
    if ((*(long *)(unaff_x20 + 0xf0) != 0) &&
       (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xf0) + 0x30), lVar5 != 0)) {
      FUN_0693fefc(lVar5,plVar8,0);
      if (((*(long *)(unaff_x20 + 0xf0) != 0) &&
          ((*(long *)(unaff_x20 + 0xe8) != 0 &&
           (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x40), lVar5 != 0)))) &&
         (lVar11 = *(long *)(*(long *)(unaff_x20 + 0xf0) + 0x30), lVar11 != 0)) {
        *(float *)(lVar11 + 0x3c) = *(float *)(lVar5 + 0xe8) / DAT_015c5d54;
        if (*(int *)(unaff_x19 + 0x18) == 6) {
          lVar5 = FUN_07c99058();
          if (lVar5 == 0) goto LAB_06949fcc;
          FUN_045614d0(lVar5,*(undefined8 *)PTR_DAT_084b66f0);
          if (*(int *)(unaff_x19 + 0x18) == 6) {
            lVar5 = FUN_0447aad0();
            if (lVar5 == 0) goto LAB_06949fcc;
            FUN_07d31374(0x43480000,0x43480000,0x43480000,lVar5,0);
          }
        }
        uVar7 = thunk_FUN_07ca227c();
        uVar7 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6720,uVar7,*(undefined8 *)PTR_DAT_084b6768,0
                            );
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        FUN_07c4f4f4(uVar7,0);
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6730,0);
        return;
      }
    }
  }
LAB_06949fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


