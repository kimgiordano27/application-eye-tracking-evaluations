/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 069496f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  
  FUN_04e8743c(DAT_015c5c78);
  uVar13 = *(uint *)(unaff_x23 + 0x18);
  iVar14 = *(int *)(unaff_x23 + 0x1c);
  lVar9 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = iVar14 + 1;
  if (lVar9 == 0) goto LAB_06949fcc;
  if (uVar13 < *(uint *)(lVar9 + 0x18)) {
    uVar12 = uVar13 + 1;
    iVar14 = iVar14 + 2;
    *(uint *)(unaff_x23 + 0x18) = uVar12;
    *(undefined4 *)(lVar9 + (long)(int)uVar13 * 4 + 0x20) = 0x3fcf5c29;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
  }
  else {
    FUN_04e8743c(DAT_015c584c);
    uVar12 = *(uint *)(unaff_x23 + 0x18);
    lVar9 = *(long *)(unaff_x23 + 0x10);
    iVar14 = *(int *)(unaff_x23 + 0x1c) + 1;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
    if (lVar9 == 0) goto LAB_06949fcc;
  }
  if (uVar12 < *(uint *)(lVar9 + 0x18)) {
    uVar13 = uVar12 + 1;
    iVar14 = iVar14 + 1;
    *(uint *)(unaff_x23 + 0x18) = uVar13;
    *(undefined4 *)(lVar9 + (long)(int)uVar12 * 4 + 0x20) = 0x3fb0a3d7;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
  }
  else {
    FUN_04e8743c(DAT_015c56ac);
    uVar13 = *(uint *)(unaff_x23 + 0x18);
    lVar9 = *(long *)(unaff_x23 + 0x10);
    iVar14 = *(int *)(unaff_x23 + 0x1c) + 1;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
    if (lVar9 == 0) goto LAB_06949fcc;
  }
  if (uVar13 < *(uint *)(lVar9 + 0x18)) {
    uVar12 = uVar13 + 1;
    iVar14 = iVar14 + 1;
    *(uint *)(unaff_x23 + 0x18) = uVar12;
    *(undefined4 *)(lVar9 + (long)(int)uVar13 * 4 + 0x20) = 0x3f95c28f;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
  }
  else {
    FUN_04e8743c(DAT_015c5804);
    uVar12 = *(uint *)(unaff_x23 + 0x18);
    lVar9 = *(long *)(unaff_x23 + 0x10);
    iVar14 = *(int *)(unaff_x23 + 0x1c) + 1;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
    if (lVar9 == 0) goto LAB_06949fcc;
  }
  if (uVar12 < *(uint *)(lVar9 + 0x18)) {
    uVar13 = uVar12 + 1;
    iVar14 = iVar14 + 1;
    *(uint *)(unaff_x23 + 0x18) = uVar13;
    *(undefined4 *)(lVar9 + (long)(int)uVar12 * 4 + 0x20) = 0x3f800000;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
  }
  else {
    FUN_04e8743c(0x3f800000);
    uVar13 = *(uint *)(unaff_x23 + 0x18);
    lVar9 = *(long *)(unaff_x23 + 0x10);
    iVar14 = *(int *)(unaff_x23 + 0x1c) + 1;
    *(int *)(unaff_x23 + 0x1c) = iVar14;
    if (lVar9 == 0) goto LAB_06949fcc;
  }
  if (uVar13 < *(uint *)(lVar9 + 0x18)) {
    uVar12 = uVar13 + 1;
    *(uint *)(unaff_x23 + 0x18) = uVar12;
    *(undefined4 *)(lVar9 + (long)(int)uVar13 * 4 + 0x20) = 0x3f5c28f6;
    *(int *)(unaff_x23 + 0x1c) = iVar14 + 1;
  }
  else {
    FUN_04e8743c(DAT_015c5d00);
    uVar12 = *(uint *)(unaff_x23 + 0x18);
    lVar9 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_06949fcc;
  }
  if (uVar12 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar12 + 1;
    *(undefined4 *)(lVar9 + (long)(int)uVar12 * 4 + 0x20) = 0x3f3ae148;
  }
  else {
    FUN_04e8743c(DAT_015c5970);
  }
  *(long *)(unaff_x22 + 0x88) = unaff_x23;
  thunk_FUN_03afed3c((long *)(unaff_x22 + 0x88));
  fVar2 = DAT_015c5af0;
  if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_06949fcc;
  *(float *)(*(long *)(unaff_x20 + 0xc0) + 0x34) = *(float *)(unaff_x19 + 0x1c) * DAT_015c5af0;
  lVar9 = *(long *)(unaff_x20 + 0xe8);
  if (*(int *)(unaff_x19 + 0x18) == 6) {
    if ((lVar9 == 0) || (lVar11 = *(long *)(lVar9 + 0x38), lVar11 == 0)) goto LAB_06949fcc;
    iVar14 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar14) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                (*(undefined8 *)(lVar11 + 0x10),0,iVar14,0);
      lVar9 = *(long *)(unaff_x20 + 0xe8);
      if (lVar9 == 0) goto LAB_06949fcc;
    }
    if (*(long *)(lVar9 + 0x58) == 0) goto LAB_06949fcc;
    lVar11 = *(long *)(lVar9 + 0x48);
    uVar5 = FUN_04de82e0(*(long *)(lVar9 + 0x58),1,*unaff_x26);
    if (lVar11 == 0) goto LAB_06949fcc;
    FUN_06941ffc(lVar11,uVar5,0);
  }
  else {
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x58) == 0)) goto LAB_06949fcc;
    if (*(int *)(*(long *)(lVar9 + 0x58) + 0x18) != 4) goto LAB_06949b9c;
    lVar9 = *(long *)(lVar9 + 0x38);
    if (lVar9 == 0) goto LAB_06949fcc;
    if (*(int *)(lVar9 + 0x18) != 3) goto LAB_06949b9c;
    if (*(int *)(unaff_x19 + 0x38) == 2) {
      lVar9 = FUN_04de82e0(lVar9,2,*(undefined8 *)PTR_DAT_084b6410);
      if (lVar9 == 0) goto LAB_06949fcc;
      uVar8 = 0x3f800000;
LAB_06949a7c:
      *(undefined4 *)(lVar9 + 0x70) = uVar8;
    }
    else if (*(int *)(unaff_x19 + 0x38) == 0) {
      lVar9 = FUN_04de82e0(lVar9,2,*(undefined8 *)PTR_DAT_084b6410);
      if (lVar9 == 0) goto LAB_06949fcc;
      uVar8 = 0;
      goto LAB_06949a7c;
    }
    puVar4 = PTR_DAT_084b6410;
    if (*(int *)(unaff_x19 + 0x18) - 2U < 2) {
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar9 == 0)) ||
         (lVar9 = FUN_04de82e0(lVar9,1,*(undefined8 *)PTR_DAT_084b6410), lVar9 == 0))
      goto LAB_06949fcc;
      *(undefined4 *)(lVar9 + 0x74) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar9 == 0)) ||
         (lVar9 = FUN_04de82e0(lVar9,1,*(undefined8 *)puVar4), lVar9 == 0)) goto LAB_06949fcc;
      *(undefined4 *)(lVar9 + 0x78) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar9 == 0)) ||
         (lVar9 = FUN_04de82e0(lVar9,1,*(undefined8 *)puVar4), lVar9 == 0)) goto LAB_06949fcc;
      uVar8 = 0x459c4000;
    }
    else {
      if (*(int *)(unaff_x19 + 0x18) != 1) goto LAB_06949b9c;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar9 == 0)) ||
         (lVar9 = FUN_04de82e0(lVar9,1,*(undefined8 *)PTR_DAT_084b6410), lVar9 == 0))
      goto LAB_06949fcc;
      *(undefined4 *)(lVar9 + 0x74) = 0x3f800000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar9 == 0)) ||
         (lVar9 = FUN_04de82e0(lVar9,1,*(undefined8 *)puVar4), lVar9 == 0)) goto LAB_06949fcc;
      *(undefined4 *)(lVar9 + 0x78) = 0x3f000000;
      if (((*(long *)(unaff_x20 + 0xe8) == 0) ||
          (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x38), lVar9 == 0)) ||
         (lVar9 = FUN_04de82e0(lVar9,1,*(undefined8 *)puVar4), lVar9 == 0)) goto LAB_06949fcc;
      uVar8 = 0x437a0000;
    }
    *(undefined4 *)(lVar9 + 0x7c) = uVar8;
  }
LAB_06949b9c:
  fVar19 = *(float *)(unaff_x19 + 0x40);
  fVar17 = *(float *)(unaff_x19 + 0x3c) * DAT_015c5a4c;
  fVar15 = (*(float *)(unaff_x19 + 0x1c) * 50.0) / (float)*(int *)(unaff_x21 + 0x18);
  fVar18 = 1.0;
  if (fVar17 <= 1.0) {
    fVar18 = fVar17;
  }
  fVar20 = fVar19 * SQRT(fVar15) * 25.0;
  fVar21 = DAT_015c5b5c;
  if (DAT_015c5b5c <= fVar17) {
    fVar21 = fVar18;
  }
  FUN_04de90b8(&stack0x00000008);
  puVar4 = PTR_DAT_084b66e0;
  uVar3 = DAT_015c5bbc;
  fVar18 = DAT_015c58f4;
  uVar8 = DAT_015c57e0;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000010 = &stack0x00000040;
  in_stack_00000008 = 0;
  while (uVar6 = FUN_061c1964(&stack0x00000040,*(undefined8 *)puVar4), plVar7 = in_stack_00000050,
        (uVar6 & 1) != 0) {
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    (**(code **)(*in_stack_00000050 + 0x348))
              (fVar21,in_stack_00000050,*(undefined8 *)(*in_stack_00000050 + 0x350));
    (**(code **)(*plVar7 + 0x368))(fVar15 * fVar19,plVar7,*(undefined8 *)(*plVar7 + 0x370));
    (**(code **)(*plVar7 + 0x3d8))(fVar20,plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
    (**(code **)(*plVar7 + 0x3b8))(fVar20,plVar7,*(undefined8 *)(*plVar7 + 0x3c0));
    fVar16 = *(float *)(unaff_x19 + 0x1c) / fVar18;
    fVar17 = 6.0;
    if (fVar16 <= 6.0) {
      fVar17 = fVar16;
    }
    fVar1 = 4.0;
    if (in_stack_00000000._4_4_ <= fVar16) {
      fVar1 = fVar17 * 20.0;
    }
    (**(code **)(*plVar7 + 0x218))(fVar1,plVar7,*(undefined8 *)(*plVar7 + 0x220));
    if (*(int *)(unaff_x19 + 0x18) == 6) {
      (**(code **)(*plVar7 + 600))(uVar3,plVar7,*(undefined8 *)(*plVar7 + 0x260));
      (**(code **)(*plVar7 + 0x468))(fVar2,plVar7,*(undefined8 *)(*plVar7 + 0x470));
      (**(code **)(*plVar7 + 0x428))(uVar8,plVar7,*(undefined8 *)(*plVar7 + 0x430));
    }
  }
  FUN_061c1960(&stack0x00000040,*(undefined8 *)PTR_DAT_084b66d8);
  if ((*(long *)(unaff_x20 + 0xe8) != 0) &&
     (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x50), lVar9 != 0)) {
    FUN_04de90b8(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_084b5ed0);
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
    iVar14 = *(int *)(unaff_x19 + 0x18);
    puVar10 = (undefined8 *)PTR_DAT_084b6788;
    if (((iVar14 != 1) && (puVar10 = (undefined8 *)PTR_DAT_084b6728, iVar14 != 3)) &&
       (puVar10 = (undefined8 *)PTR_DAT_084b6780, iVar14 == 4)) {
      puVar10 = (undefined8 *)PTR_DAT_084b6790;
    }
    uVar5 = FUN_0694a22c(*puVar10);
    plVar7 = (long *)FUN_07c95014(uVar5,0);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if (*plVar7 != *(long *)PTR_DAT_084b6268) {
      plVar7 = (long *)0x0;
    }
    if ((*(long *)(unaff_x20 + 0xf0) != 0) &&
       (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xf0) + 0x30), lVar9 != 0)) {
      FUN_0693fefc(lVar9,plVar7,0);
      if (((*(long *)(unaff_x20 + 0xf0) != 0) &&
          ((*(long *)(unaff_x20 + 0xe8) != 0 &&
           (lVar9 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x40), lVar9 != 0)))) &&
         (lVar11 = *(long *)(*(long *)(unaff_x20 + 0xf0) + 0x30), lVar11 != 0)) {
        *(float *)(lVar11 + 0x3c) = *(float *)(lVar9 + 0xe8) / DAT_015c5d54;
        if (*(int *)(unaff_x19 + 0x18) == 6) {
          lVar9 = FUN_07c99058();
          if (lVar9 == 0) goto LAB_06949fcc;
          FUN_045614d0(lVar9,*(undefined8 *)PTR_DAT_084b66f0);
          if (*(int *)(unaff_x19 + 0x18) == 6) {
            lVar9 = FUN_0447aad0();
            if (lVar9 == 0) goto LAB_06949fcc;
            FUN_07d31374(0x43480000,0x43480000,0x43480000,lVar9,0);
          }
        }
        uVar5 = thunk_FUN_07ca227c();
        uVar5 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6720,uVar5,*(undefined8 *)PTR_DAT_084b6768,0
                            );
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        FUN_07c4f4f4(uVar5,0);
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6730,0);
        return;
      }
    }
  }
LAB_06949fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


